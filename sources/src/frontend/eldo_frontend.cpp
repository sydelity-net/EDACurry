/// @file   eldo_frontend.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "frontend/eldo_frontend.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"
#include "classes.hpp"

using antlrcpp::Any;

namespace edacurry::frontend
{
// ============================================================================
std::string to_string(ELDOParser::Filepath_elementContext *ctx);

std::string to_string(ELDOParser::FilepathContext *ctx);

template <typename T>
structure::Number<T> *to_number(antlr4::tree::TerminalNode *ctx)
{
    assert(ctx && "Received nullptr context.");

    std::stringstream ss;
    ss << ctx->toString();
    T value;
    ss >> value;
    // Aply the scaling factor if there is a SI unit letter.
    std::string unit;
    ss >> unit;
    if (!unit.empty()) {
        value *= letter_to_scaling_factor(unit[0]);
        if ((unit.size() > 1) && (utility::to_lower(unit) != "meg")) {
            return new structure::Number<T>(value, unit.substr(1));
        }
    }
    return new structure::Number<T>(value);
}

std::string to_string(ELDOParser::Expression_atomContext *ctx);

std::string to_string(const std::vector<antlr4::tree::TerminalNode *> &ctx);

DelimiterType to_delimiter(ELDOParser::Expression_listContext *ctx);

DelimiterType to_delimiter(ELDOParser::Expression_function_callContext *ctx);

Operator to_operator(ELDOParser::Expression_unaryContext *ctx);

Operator to_operator(ELDOParser::Expression_operatorContext *ctx);

std::string to_string(ELDOParser::NodeContext *ctx);

// ============================================================================

Any ELDOFrontend::visitNetlist(ELDOParser::NetlistContext *ctx)
{
    return this->advance_visit(ctx, _factory.circuit("", "", {}, {}, {}));
}

Any ELDOFrontend::visitNetlist_title(ELDOParser::Netlist_titleContext *ctx)
{
    auto circuit = utility::to_check<structure::Circuit>(this->back());
    circuit->setTitle(to_string(ctx->ID()));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitInclude(ELDOParser::IncludeContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitStandard_include(ELDOParser::Standard_includeContext *ctx)
{
    return this->advance_visit(ctx, _factory.include(IncludeType::inc_standard,
                                                     to_string(ctx->filepath()),
                                                     {}));
}

Any ELDOFrontend::visitVerilog_include(ELDOParser::Verilog_includeContext *ctx)
{
    return this->advance_visit(ctx, _factory.include(IncludeType::inc_hdl,
                                                     to_string(ctx->filepath()),
                                                     {}));
}

Any ELDOFrontend::visitDspf_include(ELDOParser::Dspf_includeContext *ctx)
{
    return this->advance_visit(ctx, _factory.include(IncludeType::inc_ahdl,
                                                     to_string(ctx->filepath()),
                                                     {}));
}

Any ELDOFrontend::visitLibrary(ELDOParser::LibraryContext *ctx)
{
    return this->advance_visit(ctx, _factory.library("", ""));
}

Any ELDOFrontend::visitLibrary_key(ELDOParser::Library_keyContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLibrary_path(ELDOParser::Library_pathContext *ctx)
{
    auto library = utility::to_check<structure::Library>(this->back());
    library->setPath(to_string(ctx->filepath()));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLibrary_name(ELDOParser::Library_nameContext *ctx)
{
    auto library = utility::to<structure::Library>(this->back());
    if (library) {
        if (ctx->ID())
            library->setName(ctx->ID()->toString());
    }
    auto library_def = utility::to<structure::LibraryDef>(this->back());
    if (library_def) {
        if (ctx->ID())
            library_def->setName(ctx->ID()->toString());
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLibrary_def(ELDOParser::Library_defContext *ctx)
{
    return this->advance_visit(ctx, _factory.libraryDef("", {}));
}

Any ELDOFrontend::visitLibrary_def_header(ELDOParser::Library_def_headerContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLibrary_def_content(ELDOParser::Library_def_contentContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLibrary_def_footer(ELDOParser::Library_def_footerContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSubckt(ELDOParser::SubcktContext *ctx)
{
    return this->advance_visit(ctx, _factory.subckt("", {}, {}, {}));
}

Any ELDOFrontend::visitSubckt_header(ELDOParser::Subckt_headerContext *ctx)
{
    auto subckt = utility::to_check<structure::Subckt>(this->back());
    if (ctx->ID())
        subckt->setName(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSubckt_content(ELDOParser::Subckt_contentContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSubckt_footer(ELDOParser::Subckt_footerContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAnalysis(ELDOParser::AnalysisContext *ctx)
{
    return this->advance_visit(ctx, _factory.analysis("", {}));
}

Any ELDOFrontend::visitAc(ELDOParser::AcContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("ac_parameter_driven");
    // type
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("type"),
            _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    // nb
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("nb"),
            to_number<int>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // fstart
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("fstart"),
            to_number<int>(ctx->NUMBER(1)), param_assign, nullptr, true));
    // fstop
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("fstop"),
            to_number<int>(ctx->NUMBER(2)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAc_data_driven(ELDOParser::Ac_data_drivenContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("ac_data_driven");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAc_list_driven(ELDOParser::Ac_list_drivenContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("ac_list_driven");
    // LIST
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("LIST"),
            _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAc_adaptive(ELDOParser::Ac_adaptiveContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("ac_adaptive");
    // ADAPTIVE
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("ADAPTIVE"),
            _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    // tolerance_value
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("tolerance_value"),
            to_number<int>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // fstart
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("fstart"),
            to_number<int>(ctx->NUMBER(1)), param_assign, nullptr, true));
    // fstop
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("fstop"),
            to_number<int>(ctx->NUMBER(2)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAge(ELDOParser::AgeContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("age");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitChecksoa(ELDOParser::ChecksoaContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("checksoa");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDc(ELDOParser::DcContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDc_component_analysis(ELDOParser::Dc_component_analysisContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dc_component_analysis");
    // CNAM
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("CNAM"),
            _factory.string(ctx->ID(0)->toString()), param_assign, nullptr, true));
    // [L|W]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("L|W"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
    }
    // [TYPE nb]
    // Type name of the first level of variation for DC component analysis and voltage/current source analysis.
    // Can be one of the following:
    //  DEC : Keyword to select logarithmic variation.
    //  OCT : Keyword to select octave variation.
    //  LIN : Keyword to select linear variation.
    //  POI : Keyword to select a list of frequency points. POI is the same as LIST except that
    //        POI expects the number of points nb to be specified as it’s first argument.
    if (ctx->ID().size() > 2) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("TYPE"),
                _factory.string(ctx->ID(2)->toString()), param_assign, nullptr, true));
    }
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("START"),
            to_number<int>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("STOP"),
            to_number<int>(ctx->NUMBER(1)), param_assign, nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("INCR"),
            to_number<int>(ctx->NUMBER(2)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDc_source_analysis(ELDOParser::Dc_source_analysisContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Check if we have the secondary source.
    bool secondary = (ctx->NUMBER().size() == 6);
    // Set the name.
    analysis->setName("dc_source_analysis");
    // SNAM
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("SNAM"),
            _factory.string(ctx->ID(0)->toString()), param_assign, nullptr, true));
    // [TYPE nb]
    // Type name of the first level of variation for DC component analysis and voltage/current source analysis.
    // Can be one of the following:
    //  DEC : Keyword to select logarithmic variation.
    //  OCT : Keyword to select octave variation.
    //  LIN : Keyword to select linear variation.
    //  POI : Keyword to select a list of frequency points. POI is the same as LIST except that
    //        POI expects the number of points nb to be specified as it’s first argument.
    //  INCR : Increment of the parameter or device name to sweep. (INCR can only be used when
    //         the SWEEP keyword is preceding it. When INCR is specified, nb is the incrementing
    //         value.)
    if (((secondary) && (ctx->ID().size() == 3)) || ((!secondary) && (ctx->ID().size() == 2))) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("TYPE"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
    }
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("START"),
            to_number<int>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("STOP"),
            to_number<int>(ctx->NUMBER(1)), param_assign, nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("INCR"),
            to_number<int>(ctx->NUMBER(2)), param_assign, nullptr, true));
    if (ctx->NUMBER().size() == 6) {
        // SNAM2
        size_t snam2_index = (ctx->ID().size() == 3) ? 2U : 1U;
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("SNAM2"),
                _factory.string(ctx->ID(snam2_index)->toString()), param_assign, nullptr, true));
        // START2
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("START2"),
                to_number<int>(ctx->NUMBER(3)), param_assign, nullptr, true));
        // STOP2
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("STOP2"),
                to_number<int>(ctx->NUMBER(4)), param_assign, nullptr, true));
        // INCR2
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("INCR2"),
                to_number<int>(ctx->NUMBER(5)), param_assign, nullptr, true));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dc_temperature_analysis");
    // TEMP
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("TEMP"),
            _factory.string(ctx->TEMP()->toString()), param_assign, nullptr, true));
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("START"),
            to_number<int>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("STOP"),
            to_number<int>(ctx->NUMBER(1)), param_assign, nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("INCR"),
            to_number<int>(ctx->NUMBER(2)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dc_parameter_analysis");
    // PARAM
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("PARAM"),
            _factory.string(ctx->PARAM()->toString()), param_assign, nullptr, true));
    // PARAM_NAME
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("PARAM_NAME"),
            _factory.string(ctx->ID(0)->toString()), param_assign, nullptr, true));
    // [TYPE nb]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("TYPE"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
    }
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("START"),
            to_number<int>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("STOP"),
            to_number<int>(ctx->NUMBER(1)), param_assign, nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("INCR"),
            to_number<int>(ctx->NUMBER(2)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dc_data_driven_analysis");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDchiz(ELDOParser::DchizContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dchiz");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDcmismatch(ELDOParser::DcmismatchContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dcmismatch");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDex(ELDOParser::DexContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dex");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDsp(ELDOParser::DspContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dsp");
    // waveform_name
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("waveform_name"),
            _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDspmod(ELDOParser::DspmodContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("dspmod");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFour(ELDOParser::FourContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("four");
    // waveform_name
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("waveform_name"),
            _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLstb(ELDOParser::LstbContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("lstb");
    // SOURCE_NAME
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("SOURCE_NAME"),
            _factory.string(to_string(ctx->filepath())), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMc(ELDOParser::McContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("mc");
    // RUNNO
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("RUNNO"),
            to_number<int>(ctx->NUMBER()), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitNoise(ELDOParser::NoiseContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("noise");
    auto result = visitChildren(ctx);
    // NUMS
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("NUMS"),
            to_number<int>(ctx->NUMBER()), param_assign, nullptr, true));
    return result;
}

Any ELDOFrontend::visitNoisetran(ELDOParser::NoisetranContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("noisetran");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOp(ELDOParser::OpContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOp_selective(ELDOParser::Op_selectiveContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("op_selective");
    size_t id_index = 0, id_total = ctx->ID().size();
    for (auto expression : ctx->expression()) {
        // [KEYWORD]
        if (id_index++ < id_total) {
            analysis->parameters.push_back(
                _factory.parameter(
                    _factory.identifier("KEYWORD"),
                    _factory.string(ctx->ID(id_index)->toString()), param_assign, nullptr, false));
        }
        auto TIME = _factory.parameter(_factory.identifier("TIME"),
                                       nullptr, param_assign, nullptr, false);
        this->advance_visit(expression, TIME);
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOp_time_based(ELDOParser::Op_time_basedContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("op_time_based");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOp_dc_based(ELDOParser::Op_dc_basedContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("op_dc_based");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOptfour(ELDOParser::OptfourContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("optfour");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOptimize(ELDOParser::OptimizeContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("optimize");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOptnoise(ELDOParser::OptnoiseContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("optnoise");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitPz(ELDOParser::PzContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("pz");
    // OV
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("OV"),
            _factory.string(to_string(ctx->filepath())), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitRamp(ELDOParser::RampContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("ramp");
    // Get the type.
    std::string type = ctx->ID(0)->toString();
    // ID (DC | TRAN)
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("TYPE"),
            _factory.string(type), param_assign, nullptr, true));
    // VAL | T1
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier((type == "DC" ? "VAL" : "T1")),
            to_number<double>(ctx->NUMBER(0)), param_assign, nullptr, true));
    if (ctx->NUMBER().size() == 2) {
        // T2
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("T2"),
                to_number<double>(ctx->NUMBER(1)), param_assign, nullptr, true));
    }
    // [SIMPLIFY]
    if (ctx->ID().size() == 2) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("SIMPLIFY"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSens(ELDOParser::SensContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("sens");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSensac(ELDOParser::SensacContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("sensac");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSensparam(ELDOParser::SensparamContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("sensparam");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSnf(ELDOParser::SnfContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("snf");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSolve(ELDOParser::SolveContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSolve_parameter(ELDOParser::Solve_parameterContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("solve_parameter");
    // PARAM
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("PARAM"), _factory.string(ctx->PARAM()->toString()), param_assign, nullptr, true));
    // param_name
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("param_name"), _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    // MIN
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("MIN"), to_number<double>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // MAX
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("MAX"), to_number<double>(ctx->NUMBER(1)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSolve_object(ELDOParser::Solve_objectContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("solve_object");
    // obj_name
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("obj_name"),
            _factory.string(ctx->ID(0)->toString()), param_assign, nullptr, true));
    // [W|L]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("[W|L]"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
    }
    // MIN
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("MIN"),
            to_number<double>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // MAX
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("MAX"),
            to_number<double>(ctx->NUMBER(1)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSolve_component(ELDOParser::Solve_componentContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("solve_component");
    // CNAME
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("CNAME"),
            _factory.string(ctx->ID(0)->toString()), param_assign, nullptr, true));
    // [W|L]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("[W|L]"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
    }
    // MIN
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("MIN"),
            to_number<double>(ctx->NUMBER(0)), param_assign, nullptr, true));
    // MAX
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("MAX"),
            to_number<double>(ctx->NUMBER(1)), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTf(ELDOParser::TfContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("tf");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTran(ELDOParser::TranContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTran_point_driven(ELDOParser::Tran_point_drivenContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("tran_point_driven");
    // Get the quantity of numbers.
    const auto n_numbers = ctx->NUMBER().size();
    // Check the quantity of ctx->NUMBER().
    if (n_numbers < 2) {
        _error("There should be at least TPRINT and TSTOP.");
    }
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("TPRINT"),
            to_number<double>(ctx->NUMBER(0)), param_assign, nullptr, true));
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("TSTOP"),
            to_number<double>(ctx->NUMBER(1)), param_assign, nullptr, true));
    for (size_t i = 2; i < n_numbers; ++i) {
        analysis->parameters.push_back(
            _factory.parameter(
                _factory.identifier("TSTART"),
                to_number<double>(ctx->NUMBER(i)), param_assign, nullptr, true));
        if ((i + 1) < n_numbers) {
            ++i;
            analysis->parameters.push_back(
                _factory.parameter(
                    _factory.identifier("HMAX"),
                    to_number<double>(ctx->NUMBER(i)), param_assign, nullptr, true));
        }
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTran_parameterized(ELDOParser::Tran_parameterizedContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("tran_parameterized");
    // Get the quantity of expressions.
    const auto n_expressions = ctx->expression().size();
    // Check the quantity of expressions.
    if (n_expressions < 2) {
        _error("There should be at least one pair of INCRn and Tn.");
    }
    for (size_t i = 0; (i + 1) < n_expressions; i += 2) {
        this->advance_visit(
            ctx->expression(i),
            _factory.parameter(_factory.identifier("INCRn"),
                               nullptr, param_assign, nullptr, true));
        this->advance_visit(
            ctx->expression(i + 1),
            _factory.parameter(_factory.identifier("Tn"),
                               nullptr, param_assign, nullptr, true));
    }
    if (ctx->parameter_list())
        return this->visitChildren(ctx->parameter_list());
    return 0;
}

Any ELDOFrontend::visitTran_data_driven(ELDOParser::Tran_data_drivenContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("tran_data_driven");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitWcase(ELDOParser::WcaseContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("wcase");
    // Set the type.
    analysis->parameters.push_back(
        _factory.parameter(
            _factory.identifier("TYPE"),
            _factory.string(ctx->ID()->toString()), param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitExtract(ELDOParser::ExtractContext *ctx)
{
    auto analysis = utility::to_check<structure::Analysis>(this->back());
    // Set the name.
    analysis->setName("extract");
    return visitChildren(ctx);
}

Any ELDOFrontend::visitGlobal(ELDOParser::GlobalContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitModel(ELDOParser::ModelContext *ctx)
{
    return this->advance_visit(ctx, _factory.model("", "", "", "", {}));
}

Any ELDOFrontend::visitModel_lib(ELDOParser::Model_libContext *ctx)
{
    auto model = utility::to_check<structure::Model>(this->back());
    if (ctx->ID())
        model->setLibrary(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitModel_name(ELDOParser::Model_nameContext *ctx)
{
    auto model = utility::to_check<structure::Model>(this->back());
    if (ctx->ID())
        model->setName(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitModel_master(ELDOParser::Model_masterContext *ctx)
{
    auto model = utility::to_check<structure::Model>(this->back());
    if (ctx->ID())
        model->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitModel_lib_type(ELDOParser::Model_lib_typeContext *ctx)
{
    auto model = utility::to_check<structure::Model>(this->back());
    if (ctx->ID())
        model->setLibraryType(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitControl(ELDOParser::ControlContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAlter(ELDOParser::AlterContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAlter_definition(ELDOParser::Alter_definitionContext *ctx)
{
    return this->advance_visit(ctx, _factory.controlScope("", ctrl_altergroup, {}, {}, {}));
}

Any ELDOFrontend::visitAlter_header(ELDOParser::Alter_headerContext *ctx)
{
    auto control_scope = utility::to_check<structure::ControlScope>(this->back());
    control_scope->setName(to_string(ctx->ID()));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAlter_content(ELDOParser::Alter_contentContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitAlter_footer(ELDOParser::Alter_footerContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSave(ELDOParser::SaveContext *ctx)
{
    return this->advance_visit(ctx, _factory.control("", ctrl_save, {}));
}

Any ELDOFrontend::visitSave_file(ELDOParser::Save_fileContext *ctx)
{
    this->add_to_parent(
        _factory.parameter(
            _factory.identifier((ctx->ID() ? ctx->ID()->toString() : "")),
            _factory.string(to_string(ctx->filepath()))));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSave_when(ELDOParser::Save_whenContext *ctx)
{
    if (ctx->ID()) {
        this->add_to_parent(
            _factory.parameter(
                _factory.identifier("when"),
                _factory.identifier(ctx->ID()->toString()),
                param_assign, nullptr, true));
    } else if (ctx->END()) {
        this->add_to_parent(
            _factory.parameter(
                _factory.identifier("when"),
                _factory.identifier(ctx->END()->toString()),
                param_assign, nullptr, true));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOption(ELDOParser::OptionContext *ctx)
{
    return this->advance_visit(ctx, _factory.control("", ctrl_option, {}));
}

Any ELDOFrontend::visitNodeset(ELDOParser::NodesetContext *ctx)
{
    return this->advance_visit(ctx, _factory.control("", ctrl_nodeset, {}));
}

Any ELDOFrontend::visitCall_tcl(ELDOParser::Call_tclContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitCall_tcl_when(ELDOParser::Call_tcl_whenContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitUse_tcl(ELDOParser::Use_tclContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDefmac(ELDOParser::DefmacContext *ctx)
{
    return this->advance_visit(ctx, _factory.control("", ctrl_defmac, {}));
}

Any ELDOFrontend::visitChrent(ELDOParser::ChrentContext *ctx)
{
    auto chrent = _factory.control("", ctrl_chrent, {});
    chrent->parameters.push_back(_factory.parameter(nullptr, _factory.identifier(to_string(ctx->node()))));
    return this->advance_visit(ctx->chrent_behaviour(), chrent);
}

Any ELDOFrontend::visitChrent_behaviour(ELDOParser::Chrent_behaviourContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitChrent_point(ELDOParser::Chrent_pointContext *ctx)
{
    auto ctrl   = utility::to_check<structure::Control>(this->back());
    auto result = visitChildren(ctx);
    if (ctx->NUMBER()) {
        ctrl->parameters.push_back(_factory.parameter(nullptr, to_number<double>(ctx->NUMBER())));
    }
    return result;
}

Any ELDOFrontend::visitChrent_pair(ELDOParser::Chrent_pairContext *ctx)
{
    auto ctrl = utility::to_check<structure::Control>(this->back());
    this->add_to_parent(
        _factory.parameter(
            nullptr, _factory.valuePair(to_number<double>(ctx->NUMBER(0)),
                                        to_number<double>(ctx->NUMBER(1)))));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitIc(ELDOParser::IcContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitIc_content(ELDOParser::Ic_contentContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitIc_subckt(ELDOParser::Ic_subcktContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitPrint(ELDOParser::PrintContext *ctx)
{
    return this->advance_visit(
        ctx,
        _factory.control(
            ctx->ID() ? ctx->ID()->toString() : "", ctrl_print, {}));
}

Any ELDOFrontend::visitPlot(ELDOParser::PlotContext *ctx)
{
    return this->advance_visit(
        ctx,
        _factory.control(
            ctx->ID() ? ctx->ID()->toString() : "", ctrl_plot, {}));
}

Any ELDOFrontend::visitFfile(ELDOParser::FfileContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFfile_tabulation(ELDOParser::Ffile_tabulationContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFfile_singleline(ELDOParser::Ffile_singlelineContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFfile_unit(ELDOParser::Ffile_unitContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFfile_storage_format(ELDOParser::Ffile_storage_formatContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitProbe(ELDOParser::ProbeContext *ctx)
{
    return this->advance_visit(
        ctx,
        _factory.control(
            "",
            ctrl_probe,
            { _factory.parameter(nullptr, _factory.identifier(ctx->ID()->toString())) }));
}

Any ELDOFrontend::visitDefwave(ELDOParser::DefwaveContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTemp(ELDOParser::TempContext *ctx)
{
    auto ctrl = _factory.control("", ctrl_temp, {});
    for (size_t i = 0; i < ctx->NUMBER().size(); ++i) {
        ctrl->parameters.push_back(_factory.parameter(nullptr, to_number<double>(ctx->NUMBER(i))));
    }
    return this->advance_visit(ctx, ctrl);
}

Any ELDOFrontend::visitMeas(ELDOParser::MeasContext *ctx)
{
    auto ctrl = _factory.control("", ctrl_meas, {});
    return this->advance_visit(ctx, ctrl);
}

Any ELDOFrontend::visitMeas_info(ELDOParser::Meas_infoContext *ctx)
{
    this->add_to_parent(
        _factory.parameter(
            _factory.identifier("ANALYSIS_INFO"),
            _factory.identifier(ctx->ID()->toString()),
            param_assign,
            nullptr,
            true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_vect(ELDOParser::Meas_vectContext *ctx)
{
    this->add_to_parent(
        _factory.parameter(
            nullptr,
            _factory.identifier(ctx->VECT()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_catvect(ELDOParser::Meas_catvectContext *ctx)
{
    this->add_to_parent(
        _factory.parameter(
            nullptr,
            _factory.identifier(ctx->CATVECT()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_label_name(ELDOParser::Meas_label_nameContext *ctx)
{
    this->add_to_parent(
        _factory.parameter(
            _factory.identifier("label_name"),
            _factory.identifier(ctx->ID()->toString()),
            param_assign,
            nullptr,
            true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_configuration(ELDOParser::Meas_configurationContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_find(ELDOParser::Meas_findContext *ctx)
{
    return this->advance_visit(
        ctx->expression(),
        _factory.parameter(
            _factory.identifier(ctx->FIND()->toString()),
            nullptr,
            param_no_equal));
}

Any ELDOFrontend::visitMeas_at(ELDOParser::Meas_atContext *ctx)
{
    return this->advance_visit(
        ctx->expression(),
        _factory.parameter(
            _factory.identifier(ctx->AT()->toString()),
            nullptr,
            param_no_equal));
}

Any ELDOFrontend::visitMeas_when(ELDOParser::Meas_whenContext *ctx)
{
    return this->advance_visit(
        ctx->expression(),
        _factory.parameter(
            _factory.identifier(ctx->WHEN()->toString()),
            nullptr,
            param_no_equal));
}

Any ELDOFrontend::visitMeas_derivative(ELDOParser::Meas_derivativeContext *ctx)
{
    return this->advance_visit(
        ctx->expression(),
        _factory.parameter(
            _factory.identifier(ctx->DERIVATIVE()->toString()),
            nullptr,
            param_no_equal));
}

Any ELDOFrontend::visitMeas_param(ELDOParser::Meas_paramContext *ctx)
{
    return this->advance_visit(
        ctx->expression(),
        _factory.parameter(
            _factory.identifier(ctx->PARAM()->toString()),
            nullptr,
            param_no_equal));
}

Any ELDOFrontend::visitMeas_trig(ELDOParser::Meas_trigContext *ctx)
{
    this->add_to_parent(_factory.parameter(nullptr, _factory.identifier(ctx->TRIG()->toString()), param_assign));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_targ(ELDOParser::Meas_targContext *ctx)
{
    this->add_to_parent(_factory.parameter(nullptr, _factory.identifier(ctx->TARG()->toString()), param_assign));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitConnect(ELDOParser::ConnectContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitGlobal_declarations(ELDOParser::Global_declarationsContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent(ELDOParser::ComponentContext *ctx)
{
#if 0
    for (antlr4::Token *token : tokens.getHiddenTokensToLeft(ctx->getStart()->getTokenIndex())) {
        std::cout << "-" << token->getText();
    }
    for (antlr4::Token *token : tokens.getHiddenTokensToLeft(ctx->getStop()->getTokenIndex())) {
        std::cout << "+" << token->getText();
    }
#endif
    return this->advance_visit(ctx, _factory.component("", {}, {}, {}));
}

Any ELDOFrontend::visitComponent_type(ELDOParser::Component_typeContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_attribute(ELDOParser::Component_attributeContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_value(ELDOParser::Component_valueContext *ctx)
{
    if (ctx->STRING()) {
        this->add_to_parent(
            _factory.parameter(
                nullptr, _factory.string(ctx->STRING()->toString())));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_parameter_list(ELDOParser::Component_parameter_listContext *ctx)
{
    if (ctx->PARAM_LIST_START())
        this->add_to_parent(
            _factory.parameter(
                nullptr, _factory.identifier(ctx->PARAM_LIST_START()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_analysis(ELDOParser::Component_analysisContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *ctx)
{
    if (ctx->NOISE())
        this->add_to_parent(
            _factory.parameter(
                nullptr, _factory.identifier(ctx->NOISE()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_pin_list(ELDOParser::Component_pin_listContext *ctx)
{
    if (ctx->PIN_LIST_START())
        this->add_to_parent(_factory.parameter(nullptr, _factory.identifier(ctx->PIN_LIST_START()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_port_list(ELDOParser::Component_port_listContext *ctx)
{
    if (ctx->PORT_LIST_START())
        this->add_to_parent(_factory.parameter(nullptr, _factory.identifier(ctx->PORT_LIST_START()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_net_list(ELDOParser::Component_net_listContext *ctx)
{
    if (ctx->NET_LIST_START())
        this->add_to_parent(_factory.parameter(nullptr, _factory.identifier(ctx->NET_LIST_START()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_coupling_list(ELDOParser::Component_coupling_listContext *ctx)
{
    if (ctx->COUPLING_LIST_START())
        this->add_to_parent(_factory.parameter(nullptr, _factory.identifier(ctx->COUPLING_LIST_START()->toString())));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_table(ELDOParser::Component_tableContext *ctx)
{
    auto table_list = _factory.valueList(dlm_none, {});
    this->push(table_list);
    Any result = this->visitChildren(ctx->expression());
    this->pop();
    auto parameter = _factory.parameter(nullptr, table_list, param_tabular);
    this->add_to_parent(parameter);
    return result;
}

Any ELDOFrontend::visitComponent_value_list(ELDOParser::Component_value_listContext *ctx)
{
    std::string name;
    Any result;
    if (ctx->PULSE())
        name = ctx->PULSE()->toString();
    else if (ctx->SIN())
        name = ctx->SIN()->toString();
    else if (ctx->SFFM())
        name = ctx->SFFM()->toString();
    else if (ctx->PULSE())
        name = ctx->PULSE()->toString();
    else if (ctx->PWL())
        name = ctx->PWL()->toString();
    else if (ctx->EXP())
        name = ctx->EXP()->toString();
    else
        std::cerr << "Cannot identify the type of value list.\n";
    auto table_list = _factory.valueList(dlm_round, {});
    this->push(table_list);
    for (size_t i = 0; i < ctx->expression().size(); ++i) {
        result = visitChildren(ctx->expression(i));
    }
    this->pop();
    auto parameter = _factory.parameter(_factory.identifier(name), table_list, param_list);
    this->add_to_parent(parameter);
    return result;
}

Any ELDOFrontend::visitInterp_type(ELDOParser::Interp_typeContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitResistor(ELDOParser::ResistorContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->RESISTOR()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitCapacitor(ELDOParser::CapacitorContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->CAPACITOR()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitInductor(ELDOParser::InductorContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->INDUCTOR()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitCoupled_inductor(ELDOParser::Coupled_inductorContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->COUPLED_INDUCTOR()->toString());
    component->parameters.push_back(
        _factory.parameter(
            _factory.identifier("Lyy"),
            _factory.string(ctx->ID(0)->toString()),
            param_assign, nullptr, true));
    component->parameters.push_back(
        _factory.parameter(
            _factory.identifier("Lzz"),
            _factory.string(ctx->ID(1)->toString()),
            param_assign, nullptr, true));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDiffusion_resistor(ELDOParser::Diffusion_resistorContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->DIFFUSION_RESISTOR()->toString());
    component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTransmission_line(ELDOParser::Transmission_lineContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->TRANSMISSION_LINE()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->LOSSY_TRANSMISSION_LINE()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLtl_w_model(ELDOParser::Ltl_w_modelContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->LTL_W_MODEL()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitLtl_u_model(ELDOParser::Ltl_u_modelContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->LTL_U_MODEL()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitJunction_diode(ELDOParser::Junction_diodeContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->JUNCTION_DIODE()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitBjt(ELDOParser::BjtContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->BJT()->toString());
    component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitJfet(ELDOParser::JfetContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->JFET()->toString());
    component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMosfet(ELDOParser::MosfetContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->MOSFET()->toString());
    component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSubckt_instance(ELDOParser::Subckt_instanceContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->SUBCK_INSTANCE()->toString());
    component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitIvsource(ELDOParser::IvsourceContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->IVSOURCE()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitIcsource(ELDOParser::IcsourceContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->ICSOURCE()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitVcvs(ELDOParser::VcvsContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->VCVS()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitCccs(ELDOParser::CccsContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->CCCS()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitVccs(ELDOParser::VccsContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->VCCS()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitCcvs(ELDOParser::CcvsContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->CCVS()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitNoise_function(ELDOParser::Noise_functionContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->NOISE()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSw(ELDOParser::SwContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->SW()->toString());
    if (ctx->ID())
        component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitOperational_amplifier(ELDOParser::Operational_amplifierContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    component->setName(ctx->OPA()->toString());
    if (ctx->ID())
        component->setMaster(ctx->ID()->toString());
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTwo_input_gate(ELDOParser::Two_input_gateContext *ctx)
{
    auto component = utility::to_check<structure::Component>(this->back());
    if (ctx->DIG_NAND())
        component->setName(ctx->DIG_NAND()->toString());
    if (ctx->DIG_AND())
        component->setName(ctx->DIG_AND()->toString());
    if (ctx->DIG_OR())
        component->setName(ctx->DIG_OR()->toString());
    if (ctx->DIG_NOR())
        component->setName(ctx->DIG_NOR()->toString());
    if (ctx->DIG_XOR())
        component->setName(ctx->DIG_XOR()->toString());
    const auto n_ids = ctx->ID().size();
    if (n_ids == 1) {
        component->setMaster(ctx->ID(0)->toString());
    } else if (n_ids >= 2) {
        component->parameters.push_back(
            _factory.parameter(
                _factory.identifier("REF1"),
                _factory.string(ctx->ID(0)->toString()), param_assign, nullptr, true));
        component->parameters.push_back(
            _factory.parameter(
                _factory.identifier("REF2"),
                _factory.string(ctx->ID(1)->toString()), param_assign, nullptr, true));
        if (n_ids == 3)
            component->setMaster(ctx->ID(2)->toString());
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitEnd(ELDOParser::EndContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitExpression(ELDOParser::ExpressionContext *ctx)
{
    if (ctx->expression().size() == 2 && ctx->expression_operator()) {
        return this->advance_visit(
            ctx,
            _factory.expression(
                to_operator(ctx->expression_operator()),
                nullptr,
                nullptr));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitExpression_unary(ELDOParser::Expression_unaryContext *ctx)
{
    return this->advance_visit(ctx, _factory.expressionUnary(ctx->PLUS() ? op_plus : op_minus, nullptr));
}

Any ELDOFrontend::visitExpression_function_call(ELDOParser::Expression_function_callContext *ctx)
{
    std::string name;
    if (ctx->ID()) {
        name = ctx->ID()->toString();
    } else if (ctx->MOD()) {
        name = ctx->MOD()->toString();
    } else {
        name = ctx->MODEL()->toString();
    }
    return this->advance_visit(ctx, _factory.functionCall(name, {}));
    //auto function_call = _factory.functionCall(name, {});
    //this->push(function_call);
    //for (size_t i = 0; i < ctx->expression().size(); ++i) {
    //    this->visitExpression(ctx->expression(i));
    //}
    //this->pop();
    //this->add_to_parent(function_call);
    //return Any();
}

Any ELDOFrontend::visitExpression_list(ELDOParser::Expression_listContext *ctx)
{
    return this->advance_visit(ctx, _factory.valueList(to_delimiter(ctx), {}));
}

Any ELDOFrontend::visitExpression_operator(ELDOParser::Expression_operatorContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitExpression_atom(ELDOParser::Expression_atomContext *ctx)
{
    if (ctx->NUMBER()) {
        return this->advance_visit(ctx, to_number<double>(ctx->NUMBER()));
    }
    return this->advance_visit(ctx, _factory.identifier(to_string(ctx)));
}

Any ELDOFrontend::visitNode_mapping(ELDOParser::Node_mappingContext *ctx)
{
    this->add_to_parent(
        _factory.parameter(
            _factory.identifier(to_string(ctx->node(0))),
            _factory.identifier(to_string(ctx->node(1))),
            param_assign,
            nullptr,
            false));
    return Any();
}

Any ELDOFrontend::visitNode(ELDOParser::NodeContext *ctx)
{
    return this->advance_visit(ctx, _factory.node(to_string(ctx)));
}

Any ELDOFrontend::visitParameter(ELDOParser::ParameterContext *ctx)
{
    auto parameter = _factory.parameter(nullptr, nullptr);
    auto result    = this->advance_visit(ctx, parameter);
#if 0
    if (result.isNotNull()) {
        if (!parameter->getRight()) {
            parameter->setRight(_factory.identifier(parameter->getName()));
            parameter->setName("");
        }
    }
#endif
    return result;
}

Any ELDOFrontend::visitParameter_lhs(ELDOParser::Parameter_lhsContext *ctx)
{
    auto parameter = utility::to<structure::Parameter>(this->back());
    assert(parameter->getLeft() == nullptr);
    if (ctx->ID()) {
        parameter->setLeft(_factory.identifier(ctx->ID()->toString()));
    } else if (ctx->MOD()) {
        parameter->setLeft(_factory.identifier(ctx->MOD()->toString()));
    } else if (ctx->MODEL()) {
        parameter->setLeft(_factory.identifier(ctx->MODEL()->toString()));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitParameter_rhs(ELDOParser::Parameter_rhsContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFilepath(ELDOParser::FilepathContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitFilepath_element(ELDOParser::Filepath_elementContext *ctx)
{
    return visitChildren(ctx);
}

// ============================================================================
structure::Object *ELDOFrontend::back() const
{
    if (_stack.empty())
        return nullptr;
    return _stack.back();
}

void ELDOFrontend::push(structure::Object *node)
{
    if (node == nullptr)
        _error("Executing push and receiving a NULL node!");
    _stack.emplace_back(node);
}

structure::Object *ELDOFrontend::pop()
{
    auto node = this->back();
    if (node == nullptr)
        _error("Executing pop and receiving a NULL node!");
    _stack.pop_back();
    return node;
}

void ELDOFrontend::add_to_parent(structure::Object *node)
{
    auto parent = this->back();
    // If there is no parent, it means that this node is the root of the tree.
    if (parent == nullptr) {
        _root = node;
        return;
    }

    auto analysis = utility::to<structure::Analysis>(parent);
    if (analysis) {
        auto analysis_parameter = utility::to<structure::Parameter>(node);
        if (analysis_parameter) {
            analysis->parameters.push_back(analysis_parameter);
        } else {
            auto analysis_value = utility::to<structure::Value>(node);
            if (analysis_value) {
                analysis->parameters.push_back(
                    _factory.parameter(nullptr, analysis_value));
            } else {
                _error("Wrong item added to the object..\n"
                       "(node:%s, parent:%s)",
                       node->toString().c_str(), parent->toString().c_str());
            }
        }
        return;
    }

    auto circuit = utility::to<structure::Circuit>(parent);
    if (circuit) {
        auto circuit_node = utility::to<structure::Node>(node);
        if (circuit_node) {
            circuit->nodes.push_back(circuit_node);
        } else {
            auto circuit_parameter = utility::to<structure::Parameter>(node);
            if (circuit_parameter) {
                circuit->parameters.push_back(circuit_parameter);
            } else {
                circuit->content.push_back(node);
            }
        }
        return;
    }

    auto component = utility::to<structure::Component>(parent);
    if (component) {
        auto component_node = utility::to<structure::Node>(node);
        if (component_node) {
            component->nodes.push_back(component_node);
        } else {
            auto component_parameter = utility::to<structure::Parameter>(node);
            if (component_parameter) {
                component->parameters.push_back(component_parameter);
            } else {
                auto component_value = utility::to<structure::Value>(node);
                if (component_value) {
                    component->parameters.push_back(
                        _factory.parameter(nullptr, component_value));
                } else {
                    _error("Wrong item added to the object..\n"
                           "(node:%s, parent:%s)",
                           node->toString().c_str(),
                           parent->toString().c_str());
                }
            }
        }
        return;
    }

    auto control_scope = utility::to<structure::ControlScope>(parent);
    if (control_scope) {
        auto control_scope_node = utility::to<structure::Node>(node);
        if (control_scope_node) {
            control_scope->nodes.push_back(control_scope_node);
        } else {
            auto control_parameter = utility::to<structure::Parameter>(node);
            if (control_parameter) {
                control_scope->parameters.push_back(control_parameter);
            } else {
                control_scope->content.push_back(node);
            }
        }
        return;
    }

    auto control = utility::to<structure::Control>(parent);
    if (control) {
        auto control_parameter = utility::to<structure::Parameter>(node);
        if (control_parameter)
            control->parameters.push_back(control_parameter);
        else {
            _error("The parent is not meant to hold the given node..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        }
        return;
    }

    auto value_list = utility::to<structure::ValueList>(parent);
    if (value_list) {
        value_list->values.push_back(utility::to<structure::Value>(node));
        return;
    }

    auto value_pair = utility::to<structure::ValuePair>(parent);
    if (value_pair) {
        if (!value_pair->getFirst())
            value_pair->setFirst(utility::to<structure::Value>(node));
        else if (!value_pair->getSecond())
            value_pair->setSecond(utility::to<structure::Value>(node));
        else
            _error("The parent has no space for the node..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        return;
    }

    auto expression_unary = utility::to<structure::ExpressionUnary>(parent);
    if (expression_unary) {
        if (!expression_unary->getValue())
            expression_unary->setValue(utility::to<structure::Value>(node));
        else
            _error("The parent has no space for the node..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        return;
    }

    auto expression = utility::to<structure::Expression>(parent);
    if (expression) {
        if (!expression->getValue1())
            expression->setValue1(utility::to<structure::Value>(node));
        else if (!expression->getValue2())
            expression->setValue2(utility::to<structure::Value>(node));
        else
            _error("The parent has no space for the node..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        return;
    }

    auto function_call = utility::to<structure::FunctionCall>(parent);
    if (function_call) {
        auto function_call_parameter = utility::to<structure::Parameter>(node);
        if (function_call_parameter) {
            function_call->parameters.push_back(function_call_parameter);
        } else {
            auto function_call_value = utility::to<structure::Value>(node);
            if (function_call_value) {
                function_call->parameters.push_back(
                    _factory.parameter(nullptr, function_call_value));
            } else {
                _error("Wrong item added to the object..\n"
                       "(node:%s, parent:%s)",
                       node->toString().c_str(), parent->toString().c_str());
            }
        }
        return;
    }

    auto include = utility::to<structure::Include>(parent);
    if (include) {
        auto include_parameter = utility::to<structure::Parameter>(node);
        if (include_parameter)
            include->parameters.push_back(include_parameter);
        else
            _error("The parent is not meant to hold the given node..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        return;
    }

    auto library_def = utility::to<structure::LibraryDef>(parent);
    if (library_def) {
        library_def->content.push_back(node);
        return;
    }

    auto model = utility::to<structure::Model>(parent);
    if (model) {
        auto model_parameter = utility::to<structure::Parameter>(node);
        if (model_parameter) {
            model->parameters.push_back(model_parameter);
        } else {
            _error("Wrong item added to the object..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        }
        return;
    }

    auto parameter = utility::to<structure::Parameter>(parent);
    if (parameter) {
        if (!parameter->getLeft())
            parameter->setLeft(utility::to<structure::Value>(node));
        else if (!parameter->getRight())
            parameter->setRight(utility::to<structure::Value>(node));
        else
            _error("The parent has no space for the node..\n"
                   "(node:%s, parent:%s)",
                   node->toString().c_str(), parent->toString().c_str());
        return;
    }

    auto subckt = utility::to<structure::Subckt>(parent);
    if (subckt) {
        auto subckt_node = utility::to<structure::Node>(node);
        if (subckt_node) {
            subckt->nodes.push_back(subckt_node);
        } else {
            auto subckt_parameter = utility::to<structure::Parameter>(node);
            if (subckt_parameter) {
                subckt->parameters.push_back(subckt_parameter);
            } else {
                subckt->content.push_back(node);
            }
        }
        return;
    }
}

Any ELDOFrontend::advance_visit(antlr4::ParserRuleContext *ctx,
                                structure::Object *node)
{
    this->add_to_parent(node);
    this->push(node);
    auto result = visitChildren(ctx);
    this->pop();
    return result;
}

// ============================================================================
std::string to_string(ELDOParser::Filepath_elementContext *ctx)
{
    if (ctx == nullptr)
        return "";
    if (ctx->ID())
        return ctx->ID()->toString() + to_string(ctx->filepath_element());
    if (ctx->STRING())
        return ctx->STRING()->toString() + to_string(ctx->filepath_element());
    if (!ctx->APEX().empty())
        return to_string(ctx->filepath_element());
    if (ctx->SLASH())
        return ctx->SLASH()->toString() + to_string(ctx->filepath_element());
    if (ctx->DOT())
        return ctx->DOT()->toString() + to_string(ctx->filepath_element());
    if (ctx->MINUS())
        return ctx->MINUS()->toString() + to_string(ctx->filepath_element());
    if (ctx->DOLLAR())
        return ctx->DOLLAR()->toString() + to_string(ctx->filepath_element());
    return to_string(ctx->filepath_element());
}

std::string to_string(ELDOParser::FilepathContext *ctx)
{
    if (ctx == nullptr)
        return "";
    return to_string(ctx->filepath_element());
}

std::string to_string(ELDOParser::Expression_atomContext *ctx)
{
    if (ctx->ID())
        return ctx->ID()->toString();
    if (ctx->PERCENTAGE())
        return ctx->PERCENTAGE()->toString();
    if (ctx->STRING())
        return ctx->STRING()->toString();
    _error("Cannot type expression variable!");
    return "";
}

std::string to_string(const std::vector<antlr4::tree::TerminalNode *> &ctx)
{
    std::string s;
    for (size_t i = 0; i < ctx.size(); ++i) {
        s += ctx[i]->toString();
        if (i < (ctx.size() - 1))
            s += ' ';
    }
    return s;
}

DelimiterType to_delimiter(ELDOParser::Expression_listContext *ctx)
{
    if (ctx->OPEN_ROUND())
        return dlm_round;
    if (ctx->OPEN_SQUARE())
        return dlm_square;
    if (ctx->OPEN_CURLY())
        return dlm_curly;
    _error("Cannot type delimiter!");
    return dlm_none;
}

DelimiterType to_delimiter(ELDOParser::Expression_function_callContext *ctx)
{
    if (ctx->OPEN_ROUND())
        return dlm_round;
    if (ctx->OPEN_SQUARE())
        return dlm_square;
    if (ctx->OPEN_CURLY())
        return dlm_curly;
    _error("Cannot type delimiter!");
    return dlm_none;
}

Operator to_operator(ELDOParser::Expression_unaryContext *ctx)
{
    if (ctx->PLUS())
        return op_plus;
    if (ctx->MINUS())
        return op_minus;
    _error("Cannot type operator of unary operation!");
    return op_none;
}

Operator to_operator(ELDOParser::Expression_operatorContext *ctx)
{
    // : EQUAL
    // | PLUS | MINUS | STAR | SLASH
    // | LOGIC_AND | LOGIC_BITWISE_AND
    // | LOGIC_OR  | LOGIC_BITWISE_OR
    // | LOGIC_EQUAL | LOGIC_NOT_EQUAL
    // | LOGIC_XOR
    // | LESS_THAN    | LESS_THEN_EQUAL
    // | GREATER_THAN | GREATER_THEN_EQUAL
    // | EXCLAMATION_MARK
    // | BITWISE_SHIFT_LEFT | BITWISE_SHIFT_RIGHT
    // | POWER_OPERATOR | CARET
    // | PERCENT
    if (ctx->EQUAL())
        return op_assign;
    if (ctx->PLUS())
        return op_plus;
    if (ctx->MINUS())
        return op_minus;
    if (ctx->STAR())
        return op_mult;
    if (ctx->SLASH())
        return op_div;
    if (ctx->LOGIC_AND())
        return op_and;
    if (ctx->LOGIC_BITWISE_AND())
        return op_band;
    if (ctx->LOGIC_OR())
        return op_or;
    if (ctx->LOGIC_BITWISE_OR())
        return op_bor;
    if (ctx->LOGIC_EQUAL())
        return op_eq;
    if (ctx->LOGIC_NOT_EQUAL())
        return op_neq;
    if (ctx->LOGIC_XOR())
        return op_xor;
    if (ctx->LESS_THAN())
        return op_lt;
    if (ctx->LESS_THAN_EQUAL())
        return op_le;
    if (ctx->GREATER_THAN())
        return op_lt;
    if (ctx->GREATER_THAN_EQUAL())
        return op_ge;
    if (ctx->EXCLAMATION_MARK())
        return op_not;
    if (ctx->BITWISE_SHIFT_LEFT())
        return op_bsl;
    if (ctx->BITWISE_SHIFT_RIGHT())
        return op_bsr;
    if (ctx->POWER_OPERATOR() || ctx->CARET())
        return op_pow;
    if (ctx->PERCENT())
        return op_mod;
    _error("Cannot type operator of binary operation!");
    return op_none;
}

std::string to_string(ELDOParser::NodeContext *ctx)
{
    std::string name;
    for (ELDOParser::NodeContext *it = ctx; it; it = ctx->node()) {
        if (it->NUMBER())
            name += it->NUMBER()->toString() + ".";
        else if (it->ID())
            name += it->ID()->toString() + ".";
        else
            _error("Cannot type node context element.");
    }
    return name.substr(0, name.size() - 1);
}

} // namespace edacurry::frontend
