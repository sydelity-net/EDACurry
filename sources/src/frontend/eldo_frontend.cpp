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

double to_number(antlr4::tree::TerminalNode *ctx);

std::string to_string(ELDOParser::Expression_atomContext *ctx);

std::string to_string(const std::vector<antlr4::tree::TerminalNode *> &ctx);

DelimiterType to_delimiter(ELDOParser::Expression_listContext *ctx);

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
    circuit->setTitle(ctx->toString());
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
            "type", _factory.string(ctx->ID()->toString()), nullptr, true));
    // nb
    analysis->parameters.push_back(
        _factory.parameter(
            "nb", _factory.number<int>(to_number(ctx->NUMBER(0))), nullptr, true));
    // fstart
    analysis->parameters.push_back(
        _factory.parameter(
            "fstart", _factory.number<int>(to_number(ctx->NUMBER(1))), nullptr, true));
    // fstop
    analysis->parameters.push_back(
        _factory.parameter(
            "fstop", _factory.number<int>(to_number(ctx->NUMBER(2))), nullptr, true));
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
            "LIST", _factory.string(ctx->ID()->toString()), nullptr, true));
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
            "ADAPTIVE", _factory.string(ctx->ID()->toString()), nullptr, true));
    // tolerance_value
    analysis->parameters.push_back(
        _factory.parameter(
            "tolerance_value", _factory.number<int>(to_number(ctx->NUMBER(0))), nullptr, true));
    // fstart
    analysis->parameters.push_back(
        _factory.parameter(
            "fstart", _factory.number<int>(to_number(ctx->NUMBER(1))), nullptr, true));
    // fstop
    analysis->parameters.push_back(
        _factory.parameter(
            "fstop", _factory.number<int>(to_number(ctx->NUMBER(2))), nullptr, true));
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
            "CNAM", _factory.string(ctx->ID(0)->toString()), nullptr, true));
    // [L|W]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                "L|W", _factory.string(ctx->ID(1)->toString()), nullptr, true));
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
                "TYPE", _factory.string(ctx->ID(2)->toString()), nullptr, true));
    }
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            "START", _factory.number<int>(to_number(ctx->NUMBER(0))), nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            "STOP", _factory.number<int>(to_number(ctx->NUMBER(1))), nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            "INCR", _factory.number<int>(to_number(ctx->NUMBER(2))), nullptr, true));
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
            "SNAM", _factory.string(ctx->ID(0)->toString()), nullptr, true));
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
                "TYPE", _factory.string(ctx->ID(1)->toString()), nullptr, true));
    }
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            "START", _factory.number<int>(to_number(ctx->NUMBER(0))), nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            "STOP", _factory.number<int>(to_number(ctx->NUMBER(1))), nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            "INCR", _factory.number<int>(to_number(ctx->NUMBER(2))), nullptr, true));
    if (ctx->NUMBER().size() == 6) {
        // SNAM2
        size_t snam2_index = (ctx->ID().size() == 3) ? 2U : 1U;
        analysis->parameters.push_back(
            _factory.parameter(
                "SNAM2", _factory.string(ctx->ID(snam2_index)->toString()), nullptr, true));
        // START2
        analysis->parameters.push_back(
            _factory.parameter(
                "START2", _factory.number<int>(to_number(ctx->NUMBER(3))), nullptr, true));
        // STOP2
        analysis->parameters.push_back(
            _factory.parameter(
                "STOP2", _factory.number<int>(to_number(ctx->NUMBER(4))), nullptr, true));
        // INCR2
        analysis->parameters.push_back(
            _factory.parameter(
                "INCR2", _factory.number<int>(to_number(ctx->NUMBER(5))), nullptr, true));
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
            "TEMP", _factory.string(ctx->TEMP()->toString()), nullptr, true));
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            "START", _factory.number<int>(to_number(ctx->NUMBER(0))), nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            "STOP", _factory.number<int>(to_number(ctx->NUMBER(1))), nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            "INCR", _factory.number<int>(to_number(ctx->NUMBER(2))), nullptr, true));
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
            "PARAM", _factory.string(ctx->PARAM()->toString()), nullptr, true));
    // PARAM_NAME
    analysis->parameters.push_back(
        _factory.parameter(
            "PARAM_NAME", _factory.string(ctx->ID(0)->toString()), nullptr, true));
    // [TYPE nb]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                "TYPE", _factory.string(ctx->ID(1)->toString()), nullptr, true));
    }
    // START
    analysis->parameters.push_back(
        _factory.parameter(
            "START", _factory.number<int>(to_number(ctx->NUMBER(0))), nullptr, true));
    // STOP
    analysis->parameters.push_back(
        _factory.parameter(
            "STOP", _factory.number<int>(to_number(ctx->NUMBER(1))), nullptr, true));
    // INCR
    analysis->parameters.push_back(
        _factory.parameter(
            "INCR", _factory.number<int>(to_number(ctx->NUMBER(2))), nullptr, true));
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
            "waveform_name", _factory.string(ctx->ID()->toString()), nullptr, true));
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
            "waveform_name", _factory.string(ctx->ID()->toString()), nullptr, true));
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
            "SOURCE_NAME", _factory.string(to_string(ctx->filepath())), nullptr, true));
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
            "RUNNO", _factory.number<int>(to_number(ctx->NUMBER())), nullptr, true));
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
            "NUMS", _factory.number<int>(to_number(ctx->NUMBER())), nullptr, true));
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
                    "KEYWORD", _factory.string(ctx->ID(id_index)->toString()), nullptr, false));
        }
        auto TIME = _factory.parameter("TIME", nullptr, nullptr, false);
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
            "OV", _factory.string(to_string(ctx->filepath())), nullptr, true));
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
            "TYPE", _factory.string(type), nullptr, true));
    // VAL | T1
    analysis->parameters.push_back(
        _factory.parameter(
            (type == "DC" ? "VAL" : "T1"),
            _factory.number<double>(to_number(ctx->NUMBER(0))), nullptr, true));
    if (ctx->NUMBER().size() == 2) {
        // T2
        analysis->parameters.push_back(
            _factory.parameter(
                "T2", _factory.number<double>(to_number(ctx->NUMBER(1))), nullptr, true));
    }
    // [SIMPLIFY]
    if (ctx->ID().size() == 2) {
        analysis->parameters.push_back(
            _factory.parameter(
                "SIMPLIFY", _factory.string(ctx->ID(1)->toString()), nullptr, true));
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
            "PARAM", _factory.string(ctx->PARAM()->toString()), nullptr, true));
    // param_name
    analysis->parameters.push_back(
        _factory.parameter(
            "param_name", _factory.string(ctx->ID()->toString()), nullptr, true));
    // MIN
    analysis->parameters.push_back(
        _factory.parameter(
            "MIN", _factory.number<double>(to_number(ctx->NUMBER(0))), nullptr, true));
    // MAX
    analysis->parameters.push_back(
        _factory.parameter(
            "MAX", _factory.number<double>(to_number(ctx->NUMBER(1))), nullptr, true));
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
            "obj_name", _factory.string(ctx->ID(0)->toString()), nullptr, true));
    // [W|L]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                "[W|L]", _factory.string(ctx->ID(1)->toString()), nullptr, true));
    }
    // MIN
    analysis->parameters.push_back(
        _factory.parameter(
            "MIN", _factory.number<double>(to_number(ctx->NUMBER(0))), nullptr, true));
    // MAX
    analysis->parameters.push_back(
        _factory.parameter(
            "MAX", _factory.number<double>(to_number(ctx->NUMBER(1))), nullptr, true));
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
            "CNAME", _factory.string(ctx->ID(0)->toString()), nullptr, true));
    // [W|L]
    if (ctx->ID().size() > 1) {
        analysis->parameters.push_back(
            _factory.parameter(
                "[W|L]", _factory.string(ctx->ID(1)->toString()), nullptr, true));
    }
    // MIN
    analysis->parameters.push_back(
        _factory.parameter(
            "MIN", _factory.number<double>(to_number(ctx->NUMBER(0))), nullptr, true));
    // MAX
    analysis->parameters.push_back(
        _factory.parameter(
            "MAX", _factory.number<double>(to_number(ctx->NUMBER(1))), nullptr, true));
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
    analysis->parameters.push_back(_factory.parameter(
        "TPRINT", _factory.number<double>(to_number(ctx->NUMBER(0)))));
    analysis->parameters.push_back(_factory.parameter(
        "TSTOP", _factory.number<double>(to_number(ctx->NUMBER(1)))));
    for (size_t i = 2; i < n_numbers; ++i) {
        analysis->parameters.push_back(_factory.parameter(
            "TSTART", _factory.number<double>(to_number(ctx->NUMBER(i)))));
        if ((i + 1) < n_numbers) {
            ++i;
            analysis->parameters.push_back(_factory.parameter(
                "HMAX", _factory.number<double>(to_number(ctx->NUMBER(i)))));
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
        auto INCRn = _factory.parameter("INCRn", nullptr);
        this->advance_visit(ctx->expression(i), INCRn);
        auto Tn = _factory.parameter("Tn", nullptr);
        this->advance_visit(ctx->expression(i + 1), Tn);
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
            "TYPE", _factory.string(ctx->ID()->toString()), nullptr, true));
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
    if (ctx->alter_content().empty()) {
        return this->advance_visit(ctx, _factory.control("", ctrl_alter, {}));
    }
    return this->advance_visit(ctx, _factory.controlScope("ALTERGROUP", ctrl_altergroup, {}, {}, {}));
}

Any ELDOFrontend::visitAlter_header(ELDOParser::Alter_headerContext *ctx)
{
    auto control_scope =
        utility::to_check<structure::ControlScope>(this->back());
    control_scope->parameters.push_back(
        _factory.parameter("label", _factory.string(to_string(ctx->ID()))));
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
    auto save = utility::to_check<structure::Control>(this->back());
    save->parameters.push_back(
        _factory.parameter(
            (ctx->ID() ? ctx->ID()->toString() : "file"),
            _factory.string(to_string(ctx->filepath()))));
    return visitChildren(ctx);
}

Any ELDOFrontend::visitSave_when(ELDOParser::Save_whenContext *ctx)
{
    auto save = utility::to_check<structure::Control>(this->back());
    if (ctx->ID()) {
        save->parameters.push_back(_factory.parameter(
            "when", _factory.identifier(ctx->ID()->toString())));
    } else if (ctx->END()) {
        save->parameters.push_back(_factory.parameter(
            "when", _factory.identifier(ctx->END()->toString())));
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
    chrent->parameters.push_back(_factory.parameter("", _factory.identifier(to_string(ctx->node()))));
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
        ctrl->parameters.push_back(_factory.parameter("", _factory.number(to_number(ctx->NUMBER()))));
    }
    return result;
}

Any ELDOFrontend::visitChrent_pair(ELDOParser::Chrent_pairContext *ctx)
{
    auto ctrl = utility::to_check<structure::Control>(this->back());
    ctrl->parameters.push_back(_factory.parameter(
        "", _factory.valuePair(_factory.number(to_number(ctx->NUMBER(0))),
                               _factory.number(to_number(ctx->NUMBER(1))))));
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
    return visitChildren(ctx);
}

Any ELDOFrontend::visitPlot(ELDOParser::PlotContext *ctx)
{
    return this->advance_visit(ctx, _factory.control("", ctrl_plot, {}));
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
    return visitChildren(ctx);
}

Any ELDOFrontend::visitDefwave(ELDOParser::DefwaveContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitTemp(ELDOParser::TempContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas(ELDOParser::MeasContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_info(ELDOParser::Meas_infoContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_vect(ELDOParser::Meas_vectContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_catvect(ELDOParser::Meas_catvectContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitMeas_targ(ELDOParser::Meas_targContext *ctx)
{
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
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_parameter_list(ELDOParser::Component_parameter_listContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_analysis(ELDOParser::Component_analysisContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_pin_list(ELDOParser::Component_pin_listContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_port_list(ELDOParser::Component_port_listContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_net_list(ELDOParser::Component_net_listContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_coupling_list(ELDOParser::Component_coupling_listContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_table(ELDOParser::Component_tableContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitComponent_value_list(ELDOParser::Component_value_listContext *ctx)
{
    return visitChildren(ctx);
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
        _factory.parameter("Lyy", _factory.string(ctx->ID(0)->toString())));
    component->parameters.push_back(
        _factory.parameter("Lzz", _factory.string(ctx->ID(1)->toString())));
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
            _factory.parameter("REF1", _factory.string(ctx->ID(0)->toString())));
        component->parameters.push_back(
            _factory.parameter("REF2", _factory.string(ctx->ID(1)->toString())));
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
                op_none,
                nullptr,
                nullptr));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitExpression_unary(ELDOParser::Expression_unaryContext *ctx)
{
    return this->advance_visit(ctx, _factory.expressionUnary(op_none, nullptr));
}

Any ELDOFrontend::visitExpression_function_call(ELDOParser::Expression_function_callContext *ctx)
{
    assert(ctx->ID() && "There is a function without ID!");
    return this->advance_visit(ctx, _factory.functionCall(ctx->ID()->toString(),
                                                          {}));
}

Any ELDOFrontend::visitExpression_list(ELDOParser::Expression_listContext *ctx)
{
    return this->advance_visit(ctx, _factory.valueList(to_delimiter(ctx), {}));
}

Any ELDOFrontend::visitExpression_operator(ELDOParser::Expression_operatorContext *ctx)
{
    auto parent = this->back();
    assert(parent && "There is no parent!");
    auto binary = utility::to<structure::Expression>(parent);
    if (binary) {
        binary->setOperator(to_operator(ctx));
    } else {
        auto unary = utility::to<structure::ExpressionUnary>(parent);
        if (unary) {
            unary->setOperator(to_operator(ctx));
        } else {
            auto line = ctx->getStart()->getLine();
            _error(
                "Parent node is not a binary/unary operator!\nLine : %d\nParent : %s\n",
                line, parent->toString().c_str());
        }
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitExpression_atom(ELDOParser::Expression_atomContext *ctx)
{
    if (ctx->NUMBER()) {
        return this->advance_visit(ctx,
                                   _factory.number(to_number(ctx->NUMBER())));
    } else {
        return this->advance_visit(ctx, _factory.identifier(to_string(ctx)));
    }
    return visitChildren(ctx);
}

Any ELDOFrontend::visitNode_mapping(ELDOParser::Node_mappingContext *ctx)
{
    return visitChildren(ctx);
}

Any ELDOFrontend::visitNode(ELDOParser::NodeContext *ctx)
{
    return this->advance_visit(ctx, _factory.node(to_string(ctx)));
}

Any ELDOFrontend::visitParameter(ELDOParser::ParameterContext *ctx)
{
    auto parameter = _factory.parameter("", nullptr);
    auto result    = this->advance_visit(ctx, parameter);
    if (result.isNotNull()) {
        if (!parameter->getValue()) {
            parameter->setValue(_factory.identifier(parameter->getName()));
            parameter->setName("");
        }
    }
    return result;
}

Any ELDOFrontend::visitParameter_id(ELDOParser::Parameter_idContext *ctx)
{
    auto parameter = utility::to<structure::Parameter>(this->back());
    std::string name;
    if (parameter) {
        if (ctx->ID())
            name = ctx->ID()->toString();
        if (ctx->MOD())
            name = ctx->MOD()->toString();
        if (ctx->MODEL())
            name = ctx->MODEL()->toString();
    } else {
        _error("Parent is not a Parameter.");
    }
    if (ctx->parameter_id_access()) {
        const auto &ids = ctx->parameter_id_access()->ID();
        name += "(";
        if (!ids.empty()) {
            for (size_t i = 0; i < ids.size(); ++i) {
                name += ids[i]->toString();
                if ((i + 1) < ids.size()) {
                    name += " ,";
                }
            }
        }
        name += ")";
    }
    parameter->setName(name);
    return 0;
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
                    _factory.parameter(analysis_value));
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
                        _factory.parameter(component_value));
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
            control_scope->content.push_back(node);
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
                    _factory.parameter(function_call_value));
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
        if (!parameter->getValue())
            parameter->setValue(utility::to<structure::Value>(node));
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

double to_number(antlr4::tree::TerminalNode *ctx)
{
    if (ctx) {
        std::stringstream ss;
        ss << ctx->toString();
        double value;
        ss >> value;
        // Aply the scaling factor if there is a SI unit letter.
        char si_letter;
        ss >> si_letter;
        value *= letter_to_scaling_factor(si_letter);
        return value;
    }
    _error("Cannot type expression number!");
    return 0;
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
