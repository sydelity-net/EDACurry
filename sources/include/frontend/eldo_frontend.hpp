/// @file   eldo_frontend.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "antlr4-runtime.h"
#include "ELDOParserBaseVisitor.h"
#include "structure/object.hpp"
#include "factory.hpp"

namespace edacurry::frontend
{
/// @brief This class is for parsing eldo netlists.
///
class ELDOFrontend : public ELDOParserBaseVisitor {
public:
    antlr4::CommonTokenStream &tokens;

    ELDOFrontend(antlr4::CommonTokenStream &_tokens)
        : tokens(_tokens)
    {
    }

    ~ELDOFrontend() = default;

    antlrcpp::Any visitNetlist(ELDOParser::NetlistContext *ctx) override;

    antlrcpp::Any visitNetlist_title(ELDOParser::Netlist_titleContext *ctx) override;

    antlrcpp::Any visitInclude(ELDOParser::IncludeContext *ctx) override;

    antlrcpp::Any visitStandard_include(ELDOParser::Standard_includeContext *ctx) override;

    antlrcpp::Any visitVerilog_include(ELDOParser::Verilog_includeContext *ctx) override;

    antlrcpp::Any visitDspf_include(ELDOParser::Dspf_includeContext *ctx) override;

    antlrcpp::Any visitLibrary(ELDOParser::LibraryContext *ctx) override;

    antlrcpp::Any visitLibrary_key(ELDOParser::Library_keyContext *ctx) override;

    antlrcpp::Any visitLibrary_path(ELDOParser::Library_pathContext *ctx) override;

    antlrcpp::Any visitLibrary_name(ELDOParser::Library_nameContext *ctx) override;

    antlrcpp::Any visitLibrary_def(ELDOParser::Library_defContext *ctx) override;

    antlrcpp::Any visitLibrary_def_header(ELDOParser::Library_def_headerContext *ctx) override;

    antlrcpp::Any visitLibrary_def_content(ELDOParser::Library_def_contentContext *ctx) override;

    antlrcpp::Any visitLibrary_def_footer(ELDOParser::Library_def_footerContext *ctx) override;

    antlrcpp::Any visitSubckt(ELDOParser::SubcktContext *ctx) override;

    antlrcpp::Any visitSubckt_header(ELDOParser::Subckt_headerContext *ctx) override;

    antlrcpp::Any visitSubckt_content(ELDOParser::Subckt_contentContext *ctx) override;

    antlrcpp::Any visitSubckt_footer(ELDOParser::Subckt_footerContext *ctx) override;

    antlrcpp::Any visitAnalysis(ELDOParser::AnalysisContext *ctx) override;

    antlrcpp::Any visitAc(ELDOParser::AcContext *ctx) override;

    antlrcpp::Any visitAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext *ctx) override;

    antlrcpp::Any visitAc_data_driven(ELDOParser::Ac_data_drivenContext *ctx) override;

    antlrcpp::Any visitAc_list_driven(ELDOParser::Ac_list_drivenContext *ctx) override;

    antlrcpp::Any visitAc_adaptive(ELDOParser::Ac_adaptiveContext *ctx) override;

    antlrcpp::Any visitAge(ELDOParser::AgeContext *ctx) override;

    antlrcpp::Any visitChecksoa(ELDOParser::ChecksoaContext *ctx) override;

    antlrcpp::Any visitDc(ELDOParser::DcContext *ctx) override;

    antlrcpp::Any visitDc_component_analysis(ELDOParser::Dc_component_analysisContext *ctx) override;

    antlrcpp::Any visitDc_source_analysis(ELDOParser::Dc_source_analysisContext *ctx) override;

    antlrcpp::Any visitDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext *ctx) override;

    antlrcpp::Any visitDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext *ctx) override;

    antlrcpp::Any visitDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext *ctx) override;

    antlrcpp::Any visitDchiz(ELDOParser::DchizContext *ctx) override;

    antlrcpp::Any visitDcmismatch(ELDOParser::DcmismatchContext *ctx) override;

    antlrcpp::Any visitDex(ELDOParser::DexContext *ctx) override;

    antlrcpp::Any visitDsp(ELDOParser::DspContext *ctx) override;

    antlrcpp::Any visitDspmod(ELDOParser::DspmodContext *ctx) override;

    antlrcpp::Any visitFour(ELDOParser::FourContext *ctx) override;

    antlrcpp::Any visitLstb(ELDOParser::LstbContext *ctx) override;

    antlrcpp::Any visitMc(ELDOParser::McContext *ctx) override;

    antlrcpp::Any visitNoise(ELDOParser::NoiseContext *ctx) override;

    antlrcpp::Any visitNoisetran(ELDOParser::NoisetranContext *ctx) override;

    antlrcpp::Any visitOp(ELDOParser::OpContext *ctx) override;

    antlrcpp::Any visitOp_selective(ELDOParser::Op_selectiveContext *ctx) override;

    antlrcpp::Any visitOp_time_based(ELDOParser::Op_time_basedContext *ctx) override;

    antlrcpp::Any visitOp_dc_based(ELDOParser::Op_dc_basedContext *ctx) override;

    antlrcpp::Any visitOptfour(ELDOParser::OptfourContext *ctx) override;

    antlrcpp::Any visitOptimize(ELDOParser::OptimizeContext *ctx) override;

    antlrcpp::Any visitOptnoise(ELDOParser::OptnoiseContext *ctx) override;

    antlrcpp::Any visitPz(ELDOParser::PzContext *ctx) override;

    antlrcpp::Any visitRamp(ELDOParser::RampContext *ctx) override;

    antlrcpp::Any visitSens(ELDOParser::SensContext *ctx) override;

    antlrcpp::Any visitSensac(ELDOParser::SensacContext *ctx) override;

    antlrcpp::Any visitSensparam(ELDOParser::SensparamContext *ctx) override;

    antlrcpp::Any visitSnf(ELDOParser::SnfContext *ctx) override;

    antlrcpp::Any visitSolve(ELDOParser::SolveContext *ctx) override;

    antlrcpp::Any visitSolve_parameter(ELDOParser::Solve_parameterContext *ctx) override;

    antlrcpp::Any visitSolve_object(ELDOParser::Solve_objectContext *ctx) override;

    antlrcpp::Any visitSolve_component(ELDOParser::Solve_componentContext *ctx) override;

    antlrcpp::Any visitTf(ELDOParser::TfContext *ctx) override;

    antlrcpp::Any visitTran(ELDOParser::TranContext *ctx) override;

    antlrcpp::Any visitTran_point_driven(ELDOParser::Tran_point_drivenContext *ctx) override;

    antlrcpp::Any visitTran_parameterized(ELDOParser::Tran_parameterizedContext *ctx) override;

    antlrcpp::Any visitTran_data_driven(ELDOParser::Tran_data_drivenContext *ctx) override;

    antlrcpp::Any visitWcase(ELDOParser::WcaseContext *ctx) override;

    antlrcpp::Any visitExtract(ELDOParser::ExtractContext *ctx) override;

    antlrcpp::Any visitGlobal(ELDOParser::GlobalContext *ctx) override;

    antlrcpp::Any visitModel(ELDOParser::ModelContext *ctx) override;

    antlrcpp::Any visitModel_lib(ELDOParser::Model_libContext *ctx) override;

    antlrcpp::Any visitModel_name(ELDOParser::Model_nameContext *ctx) override;

    antlrcpp::Any visitModel_master(ELDOParser::Model_masterContext *ctx) override;

    antlrcpp::Any visitModel_lib_type(ELDOParser::Model_lib_typeContext *ctx) override;

    antlrcpp::Any visitControl(ELDOParser::ControlContext *ctx) override;

    antlrcpp::Any visitAlter(ELDOParser::AlterContext *ctx) override;

    antlrcpp::Any visitAlter_header(ELDOParser::Alter_headerContext *ctx) override;

    antlrcpp::Any visitAlter_content(ELDOParser::Alter_contentContext *ctx) override;

    antlrcpp::Any visitAlter_footer(ELDOParser::Alter_footerContext *ctx) override;

    antlrcpp::Any visitSave(ELDOParser::SaveContext *ctx) override;

    antlrcpp::Any visitSave_file(ELDOParser::Save_fileContext *ctx) override;

    antlrcpp::Any visitSave_when(ELDOParser::Save_whenContext *ctx) override;

    antlrcpp::Any visitOption(ELDOParser::OptionContext *ctx) override;

    antlrcpp::Any visitNodeset(ELDOParser::NodesetContext *ctx) override;

    antlrcpp::Any visitCall_tcl(ELDOParser::Call_tclContext *ctx) override;

    antlrcpp::Any visitCall_tcl_when(ELDOParser::Call_tcl_whenContext *ctx) override;

    antlrcpp::Any visitUse_tcl(ELDOParser::Use_tclContext *ctx) override;

    antlrcpp::Any visitDefmac(ELDOParser::DefmacContext *ctx) override;

    antlrcpp::Any visitChrent(ELDOParser::ChrentContext *ctx) override;

    antlrcpp::Any visitChrent_behaviour(ELDOParser::Chrent_behaviourContext *ctx) override;

    antlrcpp::Any visitChrent_point(ELDOParser::Chrent_pointContext *ctx) override;

    antlrcpp::Any visitChrent_pair(ELDOParser::Chrent_pairContext *ctx) override;

    antlrcpp::Any visitIc(ELDOParser::IcContext *ctx) override;

    antlrcpp::Any visitIc_content(ELDOParser::Ic_contentContext *ctx) override;

    antlrcpp::Any visitIc_subckt(ELDOParser::Ic_subcktContext *ctx) override;

    antlrcpp::Any visitPrint(ELDOParser::PrintContext *ctx) override;

    antlrcpp::Any visitPlot(ELDOParser::PlotContext *ctx) override;

    antlrcpp::Any visitFfile(ELDOParser::FfileContext *ctx) override;

    antlrcpp::Any visitFfile_tabulation(ELDOParser::Ffile_tabulationContext *ctx) override;

    antlrcpp::Any visitFfile_singleline(ELDOParser::Ffile_singlelineContext *ctx) override;

    antlrcpp::Any visitFfile_unit(ELDOParser::Ffile_unitContext *ctx) override;

    antlrcpp::Any visitFfile_storage_format(ELDOParser::Ffile_storage_formatContext *ctx) override;

    antlrcpp::Any visitProbe(ELDOParser::ProbeContext *ctx) override;

    antlrcpp::Any visitDefwave(ELDOParser::DefwaveContext *ctx) override;

    antlrcpp::Any visitTemp(ELDOParser::TempContext *ctx) override;

    antlrcpp::Any visitMeas(ELDOParser::MeasContext *ctx) override;

    antlrcpp::Any visitMeas_info(ELDOParser::Meas_infoContext *ctx) override;

    antlrcpp::Any visitMeas_vect(ELDOParser::Meas_vectContext *ctx) override;

    antlrcpp::Any visitMeas_catvect(ELDOParser::Meas_catvectContext *ctx) override;

    antlrcpp::Any visitMeas_targ(ELDOParser::Meas_targContext *ctx) override;

    antlrcpp::Any visitConnect(ELDOParser::ConnectContext *ctx) override;

    antlrcpp::Any visitGlobal_declarations(ELDOParser::Global_declarationsContext *ctx) override;

    antlrcpp::Any visitComponent(ELDOParser::ComponentContext *ctx) override;

    antlrcpp::Any visitComponent_type(ELDOParser::Component_typeContext *ctx) override;

    antlrcpp::Any visitComponent_attribute(ELDOParser::Component_attributeContext *ctx) override;

    antlrcpp::Any visitComponent_value(ELDOParser::Component_valueContext *ctx) override;

    antlrcpp::Any visitComponent_parameter_list(ELDOParser::Component_parameter_listContext *ctx) override;

    antlrcpp::Any visitComponent_analysis(ELDOParser::Component_analysisContext *ctx) override;

    antlrcpp::Any visitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *ctx) override;

    antlrcpp::Any visitComponent_pin_list(ELDOParser::Component_pin_listContext *ctx) override;

    antlrcpp::Any visitComponent_port_list(ELDOParser::Component_port_listContext *ctx) override;

    antlrcpp::Any visitComponent_net_list(ELDOParser::Component_net_listContext *ctx) override;

    antlrcpp::Any visitComponent_coupling_list(ELDOParser::Component_coupling_listContext *ctx) override;

    antlrcpp::Any visitComponent_table(ELDOParser::Component_tableContext *ctx) override;
    
    antlrcpp::Any visitComponent_arithmetic_expression(ELDOParser::Component_arithmetic_expressionContext *ctx) override;

    antlrcpp::Any visitComponent_value_list(ELDOParser::Component_value_listContext *ctx) override;

    antlrcpp::Any visitInterp_type(ELDOParser::Interp_typeContext *ctx) override;

    antlrcpp::Any visitResistor(ELDOParser::ResistorContext *ctx) override;

    antlrcpp::Any visitCapacitor(ELDOParser::CapacitorContext *ctx) override;

    antlrcpp::Any visitInductor(ELDOParser::InductorContext *ctx) override;

    antlrcpp::Any visitCoupled_inductor(ELDOParser::Coupled_inductorContext *ctx) override;

    antlrcpp::Any visitDiffusion_resistor(ELDOParser::Diffusion_resistorContext *ctx) override;

    antlrcpp::Any visitTransmission_line(ELDOParser::Transmission_lineContext *ctx) override;

    antlrcpp::Any visitLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext *ctx) override;

    antlrcpp::Any visitLtl_w_model(ELDOParser::Ltl_w_modelContext *ctx) override;

    antlrcpp::Any visitLtl_u_model(ELDOParser::Ltl_u_modelContext *ctx) override;

    antlrcpp::Any visitJunction_diode(ELDOParser::Junction_diodeContext *ctx) override;

    antlrcpp::Any visitBjt(ELDOParser::BjtContext *ctx) override;

    antlrcpp::Any visitJfet(ELDOParser::JfetContext *ctx) override;

    antlrcpp::Any visitMosfet(ELDOParser::MosfetContext *ctx) override;

    antlrcpp::Any visitSubckt_instance(ELDOParser::Subckt_instanceContext *ctx) override;

    antlrcpp::Any visitIvsource(ELDOParser::IvsourceContext *ctx) override;

    antlrcpp::Any visitIcsource(ELDOParser::IcsourceContext *ctx) override;

    antlrcpp::Any visitVcvs(ELDOParser::VcvsContext *ctx) override;

    antlrcpp::Any visitCccs(ELDOParser::CccsContext *ctx) override;

    antlrcpp::Any visitVccs(ELDOParser::VccsContext *ctx) override;

    antlrcpp::Any visitCcvs(ELDOParser::CcvsContext *ctx) override;

    antlrcpp::Any visitNoise_function(ELDOParser::Noise_functionContext *ctx) override;

    antlrcpp::Any visitSw(ELDOParser::SwContext *ctx) override;

    antlrcpp::Any visitOperational_amplifier(ELDOParser::Operational_amplifierContext *ctx) override;

    antlrcpp::Any visitTwo_input_gate(ELDOParser::Two_input_gateContext *ctx) override;

    antlrcpp::Any visitEnd(ELDOParser::EndContext *ctx) override;

    antlrcpp::Any visitExpression(ELDOParser::ExpressionContext *ctx) override;

    antlrcpp::Any visitExpression_unary(ELDOParser::Expression_unaryContext *ctx) override;

    antlrcpp::Any visitExpression_function_call(ELDOParser::Expression_function_callContext *ctx) override;

    antlrcpp::Any visitExpression_list(ELDOParser::Expression_listContext *ctx) override;

    antlrcpp::Any visitExpression_operator(ELDOParser::Expression_operatorContext *ctx) override;

    antlrcpp::Any visitExpression_atom(ELDOParser::Expression_atomContext *ctx) override;

    antlrcpp::Any visitNode_mapping(ELDOParser::Node_mappingContext *ctx) override;
    antlrcpp::Any visitNode(ELDOParser::NodeContext *ctx) override;

    antlrcpp::Any visitParameter(ELDOParser::ParameterContext *ctx) override;
    antlrcpp::Any visitParameter_id(ELDOParser::Parameter_idContext *ctx) override;

    antlrcpp::Any visitFilepath(ELDOParser::FilepathContext *ctx) override;

    antlrcpp::Any visitFilepath_element(ELDOParser::Filepath_elementContext *ctx) override;

    structure::Object *getRoot() const
    {
        return _root;
    }

private:
    /// The
    std::vector<structure::Object *> _stack;
    ///
    structure::Object *_root;
    /// Factory item.
    Factory _factory;

    /// @brief
    /// @return structure::Object*
    structure::Object *back() const;

    /// @brief
    /// @param node
    void push(structure::Object *node);

    /// @brief
    /// @return structure::Object*
    structure::Object *pop();

    /// @brief
    /// @param node
    void add_to_parent(structure::Object *node);

    antlrcpp::Any advance_visit(antlr4::ParserRuleContext *ctx, structure::Object *node);
};

} // namespace edacurry::frontend
