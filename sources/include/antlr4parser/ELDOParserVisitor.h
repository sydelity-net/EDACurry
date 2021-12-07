
// Generated from g4files/ELDOParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ELDOParser.h"


namespace edacurry {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by ELDOParser.
 */
class  ELDOParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ELDOParser.
   */
    virtual antlrcpp::Any visitNetlist(ELDOParser::NetlistContext *context) = 0;

    virtual antlrcpp::Any visitNetlist_title(ELDOParser::Netlist_titleContext *context) = 0;

    virtual antlrcpp::Any visitNetlist_entity(ELDOParser::Netlist_entityContext *context) = 0;

    virtual antlrcpp::Any visitInclude(ELDOParser::IncludeContext *context) = 0;

    virtual antlrcpp::Any visitStandard_include(ELDOParser::Standard_includeContext *context) = 0;

    virtual antlrcpp::Any visitVerilog_include(ELDOParser::Verilog_includeContext *context) = 0;

    virtual antlrcpp::Any visitDspf_include(ELDOParser::Dspf_includeContext *context) = 0;

    virtual antlrcpp::Any visitLibrary(ELDOParser::LibraryContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_key(ELDOParser::Library_keyContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_path(ELDOParser::Library_pathContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_name(ELDOParser::Library_nameContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_def(ELDOParser::Library_defContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_def_header(ELDOParser::Library_def_headerContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_def_content(ELDOParser::Library_def_contentContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_def_footer(ELDOParser::Library_def_footerContext *context) = 0;

    virtual antlrcpp::Any visitSubckt(ELDOParser::SubcktContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_header(ELDOParser::Subckt_headerContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_content(ELDOParser::Subckt_contentContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_footer(ELDOParser::Subckt_footerContext *context) = 0;

    virtual antlrcpp::Any visitAnalysis(ELDOParser::AnalysisContext *context) = 0;

    virtual antlrcpp::Any visitAc(ELDOParser::AcContext *context) = 0;

    virtual antlrcpp::Any visitAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext *context) = 0;

    virtual antlrcpp::Any visitAc_data_driven(ELDOParser::Ac_data_drivenContext *context) = 0;

    virtual antlrcpp::Any visitAc_list_driven(ELDOParser::Ac_list_drivenContext *context) = 0;

    virtual antlrcpp::Any visitAc_adaptive(ELDOParser::Ac_adaptiveContext *context) = 0;

    virtual antlrcpp::Any visitAge(ELDOParser::AgeContext *context) = 0;

    virtual antlrcpp::Any visitChecksoa(ELDOParser::ChecksoaContext *context) = 0;

    virtual antlrcpp::Any visitDc(ELDOParser::DcContext *context) = 0;

    virtual antlrcpp::Any visitDc_component_analysis(ELDOParser::Dc_component_analysisContext *context) = 0;

    virtual antlrcpp::Any visitDc_source_analysis(ELDOParser::Dc_source_analysisContext *context) = 0;

    virtual antlrcpp::Any visitDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext *context) = 0;

    virtual antlrcpp::Any visitDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext *context) = 0;

    virtual antlrcpp::Any visitDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext *context) = 0;

    virtual antlrcpp::Any visitDchiz(ELDOParser::DchizContext *context) = 0;

    virtual antlrcpp::Any visitDcmismatch(ELDOParser::DcmismatchContext *context) = 0;

    virtual antlrcpp::Any visitDex(ELDOParser::DexContext *context) = 0;

    virtual antlrcpp::Any visitDsp(ELDOParser::DspContext *context) = 0;

    virtual antlrcpp::Any visitDspmod(ELDOParser::DspmodContext *context) = 0;

    virtual antlrcpp::Any visitFour(ELDOParser::FourContext *context) = 0;

    virtual antlrcpp::Any visitLstb(ELDOParser::LstbContext *context) = 0;

    virtual antlrcpp::Any visitMc(ELDOParser::McContext *context) = 0;

    virtual antlrcpp::Any visitNoise(ELDOParser::NoiseContext *context) = 0;

    virtual antlrcpp::Any visitNoisetran(ELDOParser::NoisetranContext *context) = 0;

    virtual antlrcpp::Any visitOp(ELDOParser::OpContext *context) = 0;

    virtual antlrcpp::Any visitOp_selective(ELDOParser::Op_selectiveContext *context) = 0;

    virtual antlrcpp::Any visitOp_time_based(ELDOParser::Op_time_basedContext *context) = 0;

    virtual antlrcpp::Any visitOp_dc_based(ELDOParser::Op_dc_basedContext *context) = 0;

    virtual antlrcpp::Any visitOptfour(ELDOParser::OptfourContext *context) = 0;

    virtual antlrcpp::Any visitOptimize(ELDOParser::OptimizeContext *context) = 0;

    virtual antlrcpp::Any visitOptnoise(ELDOParser::OptnoiseContext *context) = 0;

    virtual antlrcpp::Any visitPz(ELDOParser::PzContext *context) = 0;

    virtual antlrcpp::Any visitRamp(ELDOParser::RampContext *context) = 0;

    virtual antlrcpp::Any visitSens(ELDOParser::SensContext *context) = 0;

    virtual antlrcpp::Any visitSensac(ELDOParser::SensacContext *context) = 0;

    virtual antlrcpp::Any visitSensparam(ELDOParser::SensparamContext *context) = 0;

    virtual antlrcpp::Any visitSnf(ELDOParser::SnfContext *context) = 0;

    virtual antlrcpp::Any visitSolve(ELDOParser::SolveContext *context) = 0;

    virtual antlrcpp::Any visitSolve_parameter(ELDOParser::Solve_parameterContext *context) = 0;

    virtual antlrcpp::Any visitSolve_object(ELDOParser::Solve_objectContext *context) = 0;

    virtual antlrcpp::Any visitSolve_component(ELDOParser::Solve_componentContext *context) = 0;

    virtual antlrcpp::Any visitTf(ELDOParser::TfContext *context) = 0;

    virtual antlrcpp::Any visitTran(ELDOParser::TranContext *context) = 0;

    virtual antlrcpp::Any visitTran_point_driven(ELDOParser::Tran_point_drivenContext *context) = 0;

    virtual antlrcpp::Any visitTran_parameterized(ELDOParser::Tran_parameterizedContext *context) = 0;

    virtual antlrcpp::Any visitTran_data_driven(ELDOParser::Tran_data_drivenContext *context) = 0;

    virtual antlrcpp::Any visitWcase(ELDOParser::WcaseContext *context) = 0;

    virtual antlrcpp::Any visitExtract(ELDOParser::ExtractContext *context) = 0;

    virtual antlrcpp::Any visitGlobal(ELDOParser::GlobalContext *context) = 0;

    virtual antlrcpp::Any visitModel(ELDOParser::ModelContext *context) = 0;

    virtual antlrcpp::Any visitModel_lib(ELDOParser::Model_libContext *context) = 0;

    virtual antlrcpp::Any visitModel_name(ELDOParser::Model_nameContext *context) = 0;

    virtual antlrcpp::Any visitModel_master(ELDOParser::Model_masterContext *context) = 0;

    virtual antlrcpp::Any visitModel_lib_type(ELDOParser::Model_lib_typeContext *context) = 0;

    virtual antlrcpp::Any visitControl(ELDOParser::ControlContext *context) = 0;

    virtual antlrcpp::Any visitAlter(ELDOParser::AlterContext *context) = 0;

    virtual antlrcpp::Any visitAlter_definition(ELDOParser::Alter_definitionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_header(ELDOParser::Alter_headerContext *context) = 0;

    virtual antlrcpp::Any visitAlter_content(ELDOParser::Alter_contentContext *context) = 0;

    virtual antlrcpp::Any visitAlter_footer(ELDOParser::Alter_footerContext *context) = 0;

    virtual antlrcpp::Any visitSave(ELDOParser::SaveContext *context) = 0;

    virtual antlrcpp::Any visitSave_file(ELDOParser::Save_fileContext *context) = 0;

    virtual antlrcpp::Any visitSave_when(ELDOParser::Save_whenContext *context) = 0;

    virtual antlrcpp::Any visitOption(ELDOParser::OptionContext *context) = 0;

    virtual antlrcpp::Any visitNodeset(ELDOParser::NodesetContext *context) = 0;

    virtual antlrcpp::Any visitCall_tcl(ELDOParser::Call_tclContext *context) = 0;

    virtual antlrcpp::Any visitCall_tcl_when(ELDOParser::Call_tcl_whenContext *context) = 0;

    virtual antlrcpp::Any visitUse_tcl(ELDOParser::Use_tclContext *context) = 0;

    virtual antlrcpp::Any visitDefmac(ELDOParser::DefmacContext *context) = 0;

    virtual antlrcpp::Any visitChrent(ELDOParser::ChrentContext *context) = 0;

    virtual antlrcpp::Any visitChrent_behaviour(ELDOParser::Chrent_behaviourContext *context) = 0;

    virtual antlrcpp::Any visitChrent_point(ELDOParser::Chrent_pointContext *context) = 0;

    virtual antlrcpp::Any visitChrent_pair(ELDOParser::Chrent_pairContext *context) = 0;

    virtual antlrcpp::Any visitIc(ELDOParser::IcContext *context) = 0;

    virtual antlrcpp::Any visitIc_content(ELDOParser::Ic_contentContext *context) = 0;

    virtual antlrcpp::Any visitIc_subckt(ELDOParser::Ic_subcktContext *context) = 0;

    virtual antlrcpp::Any visitPrint(ELDOParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitPlot(ELDOParser::PlotContext *context) = 0;

    virtual antlrcpp::Any visitFfile(ELDOParser::FfileContext *context) = 0;

    virtual antlrcpp::Any visitFfile_tabulation(ELDOParser::Ffile_tabulationContext *context) = 0;

    virtual antlrcpp::Any visitFfile_singleline(ELDOParser::Ffile_singlelineContext *context) = 0;

    virtual antlrcpp::Any visitFfile_unit(ELDOParser::Ffile_unitContext *context) = 0;

    virtual antlrcpp::Any visitFfile_storage_format(ELDOParser::Ffile_storage_formatContext *context) = 0;

    virtual antlrcpp::Any visitProbe(ELDOParser::ProbeContext *context) = 0;

    virtual antlrcpp::Any visitDefwave(ELDOParser::DefwaveContext *context) = 0;

    virtual antlrcpp::Any visitTemp(ELDOParser::TempContext *context) = 0;

    virtual antlrcpp::Any visitMeas(ELDOParser::MeasContext *context) = 0;

    virtual antlrcpp::Any visitMeas_info(ELDOParser::Meas_infoContext *context) = 0;

    virtual antlrcpp::Any visitMeas_vect(ELDOParser::Meas_vectContext *context) = 0;

    virtual antlrcpp::Any visitMeas_catvect(ELDOParser::Meas_catvectContext *context) = 0;

    virtual antlrcpp::Any visitMeas_label_name(ELDOParser::Meas_label_nameContext *context) = 0;

    virtual antlrcpp::Any visitMeas_configuration(ELDOParser::Meas_configurationContext *context) = 0;

    virtual antlrcpp::Any visitMeas_find(ELDOParser::Meas_findContext *context) = 0;

    virtual antlrcpp::Any visitMeas_at(ELDOParser::Meas_atContext *context) = 0;

    virtual antlrcpp::Any visitMeas_when(ELDOParser::Meas_whenContext *context) = 0;

    virtual antlrcpp::Any visitMeas_derivative(ELDOParser::Meas_derivativeContext *context) = 0;

    virtual antlrcpp::Any visitMeas_param(ELDOParser::Meas_paramContext *context) = 0;

    virtual antlrcpp::Any visitMeas_trig(ELDOParser::Meas_trigContext *context) = 0;

    virtual antlrcpp::Any visitMeas_targ(ELDOParser::Meas_targContext *context) = 0;

    virtual antlrcpp::Any visitConnect(ELDOParser::ConnectContext *context) = 0;

    virtual antlrcpp::Any visitGlobal_declarations(ELDOParser::Global_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitComponent(ELDOParser::ComponentContext *context) = 0;

    virtual antlrcpp::Any visitComponent_type(ELDOParser::Component_typeContext *context) = 0;

    virtual antlrcpp::Any visitComponent_attribute(ELDOParser::Component_attributeContext *context) = 0;

    virtual antlrcpp::Any visitComponent_value(ELDOParser::Component_valueContext *context) = 0;

    virtual antlrcpp::Any visitComponent_parameter_list(ELDOParser::Component_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent_analysis(ELDOParser::Component_analysisContext *context) = 0;

    virtual antlrcpp::Any visitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *context) = 0;

    virtual antlrcpp::Any visitComponent_pin_list(ELDOParser::Component_pin_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent_port_list(ELDOParser::Component_port_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent_net_list(ELDOParser::Component_net_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent_coupling_list(ELDOParser::Component_coupling_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent_table(ELDOParser::Component_tableContext *context) = 0;

    virtual antlrcpp::Any visitComponent_value_list(ELDOParser::Component_value_listContext *context) = 0;

    virtual antlrcpp::Any visitInterp_type(ELDOParser::Interp_typeContext *context) = 0;

    virtual antlrcpp::Any visitResistor(ELDOParser::ResistorContext *context) = 0;

    virtual antlrcpp::Any visitCapacitor(ELDOParser::CapacitorContext *context) = 0;

    virtual antlrcpp::Any visitInductor(ELDOParser::InductorContext *context) = 0;

    virtual antlrcpp::Any visitCoupled_inductor(ELDOParser::Coupled_inductorContext *context) = 0;

    virtual antlrcpp::Any visitDiffusion_resistor(ELDOParser::Diffusion_resistorContext *context) = 0;

    virtual antlrcpp::Any visitTransmission_line(ELDOParser::Transmission_lineContext *context) = 0;

    virtual antlrcpp::Any visitLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext *context) = 0;

    virtual antlrcpp::Any visitLtl_w_model(ELDOParser::Ltl_w_modelContext *context) = 0;

    virtual antlrcpp::Any visitLtl_u_model(ELDOParser::Ltl_u_modelContext *context) = 0;

    virtual antlrcpp::Any visitJunction_diode(ELDOParser::Junction_diodeContext *context) = 0;

    virtual antlrcpp::Any visitBjt(ELDOParser::BjtContext *context) = 0;

    virtual antlrcpp::Any visitJfet(ELDOParser::JfetContext *context) = 0;

    virtual antlrcpp::Any visitMosfet(ELDOParser::MosfetContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_instance(ELDOParser::Subckt_instanceContext *context) = 0;

    virtual antlrcpp::Any visitIvsource(ELDOParser::IvsourceContext *context) = 0;

    virtual antlrcpp::Any visitIcsource(ELDOParser::IcsourceContext *context) = 0;

    virtual antlrcpp::Any visitVcvs(ELDOParser::VcvsContext *context) = 0;

    virtual antlrcpp::Any visitCccs(ELDOParser::CccsContext *context) = 0;

    virtual antlrcpp::Any visitVccs(ELDOParser::VccsContext *context) = 0;

    virtual antlrcpp::Any visitCcvs(ELDOParser::CcvsContext *context) = 0;

    virtual antlrcpp::Any visitNoise_function(ELDOParser::Noise_functionContext *context) = 0;

    virtual antlrcpp::Any visitSw(ELDOParser::SwContext *context) = 0;

    virtual antlrcpp::Any visitOperational_amplifier(ELDOParser::Operational_amplifierContext *context) = 0;

    virtual antlrcpp::Any visitTwo_input_gate(ELDOParser::Two_input_gateContext *context) = 0;

    virtual antlrcpp::Any visitEnd(ELDOParser::EndContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ELDOParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression_unary(ELDOParser::Expression_unaryContext *context) = 0;

    virtual antlrcpp::Any visitExpression_function_call(ELDOParser::Expression_function_callContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(ELDOParser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitExpression_operator(ELDOParser::Expression_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression_atom(ELDOParser::Expression_atomContext *context) = 0;

    virtual antlrcpp::Any visitNode_list(ELDOParser::Node_listContext *context) = 0;

    virtual antlrcpp::Any visitNode_list_item(ELDOParser::Node_list_itemContext *context) = 0;

    virtual antlrcpp::Any visitNode_mapping(ELDOParser::Node_mappingContext *context) = 0;

    virtual antlrcpp::Any visitNode(ELDOParser::NodeContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(ELDOParser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list_item(ELDOParser::Parameter_list_itemContext *context) = 0;

    virtual antlrcpp::Any visitParameter(ELDOParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitParameter_lhs(ELDOParser::Parameter_lhsContext *context) = 0;

    virtual antlrcpp::Any visitParameter_rhs(ELDOParser::Parameter_rhsContext *context) = 0;

    virtual antlrcpp::Any visitFilepath(ELDOParser::FilepathContext *context) = 0;

    virtual antlrcpp::Any visitFilepath_element(ELDOParser::Filepath_elementContext *context) = 0;

    virtual antlrcpp::Any visitEnd_of_line(ELDOParser::End_of_lineContext *context) = 0;


};

}  // namespace edacurry
