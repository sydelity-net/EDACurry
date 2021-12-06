
// Generated from g4files/ELDOParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ELDOParserVisitor.h"


namespace edacurry {

/**
 * This class provides an empty implementation of ELDOParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ELDOParserBaseVisitor : public ELDOParserVisitor {
public:

  virtual antlrcpp::Any visitNetlist(ELDOParser::NetlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNetlist_title(ELDOParser::Netlist_titleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNetlist_entity(ELDOParser::Netlist_entityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude(ELDOParser::IncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_include(ELDOParser::Standard_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVerilog_include(ELDOParser::Verilog_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDspf_include(ELDOParser::Dspf_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary(ELDOParser::LibraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_key(ELDOParser::Library_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_path(ELDOParser::Library_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_name(ELDOParser::Library_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_def(ELDOParser::Library_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_def_header(ELDOParser::Library_def_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_def_content(ELDOParser::Library_def_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_def_footer(ELDOParser::Library_def_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt(ELDOParser::SubcktContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_header(ELDOParser::Subckt_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_content(ELDOParser::Subckt_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_footer(ELDOParser::Subckt_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalysis(ELDOParser::AnalysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAc(ELDOParser::AcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAc_data_driven(ELDOParser::Ac_data_drivenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAc_list_driven(ELDOParser::Ac_list_drivenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAc_adaptive(ELDOParser::Ac_adaptiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAge(ELDOParser::AgeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChecksoa(ELDOParser::ChecksoaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc(ELDOParser::DcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc_component_analysis(ELDOParser::Dc_component_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc_source_analysis(ELDOParser::Dc_source_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDchiz(ELDOParser::DchizContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcmismatch(ELDOParser::DcmismatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDex(ELDOParser::DexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDsp(ELDOParser::DspContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDspmod(ELDOParser::DspmodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFour(ELDOParser::FourContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLstb(ELDOParser::LstbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMc(ELDOParser::McContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoise(ELDOParser::NoiseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoisetran(ELDOParser::NoisetranContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(ELDOParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_selective(ELDOParser::Op_selectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_time_based(ELDOParser::Op_time_basedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_dc_based(ELDOParser::Op_dc_basedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptfour(ELDOParser::OptfourContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptimize(ELDOParser::OptimizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptnoise(ELDOParser::OptnoiseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPz(ELDOParser::PzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRamp(ELDOParser::RampContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSens(ELDOParser::SensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSensac(ELDOParser::SensacContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSensparam(ELDOParser::SensparamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSnf(ELDOParser::SnfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSolve(ELDOParser::SolveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSolve_parameter(ELDOParser::Solve_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSolve_object(ELDOParser::Solve_objectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSolve_component(ELDOParser::Solve_componentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTf(ELDOParser::TfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTran(ELDOParser::TranContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTran_point_driven(ELDOParser::Tran_point_drivenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTran_parameterized(ELDOParser::Tran_parameterizedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTran_data_driven(ELDOParser::Tran_data_drivenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWcase(ELDOParser::WcaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtract(ELDOParser::ExtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal(ELDOParser::GlobalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel(ELDOParser::ModelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_lib(ELDOParser::Model_libContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_name(ELDOParser::Model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_master(ELDOParser::Model_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_lib_type(ELDOParser::Model_lib_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControl(ELDOParser::ControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter(ELDOParser::AlterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_header(ELDOParser::Alter_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_content(ELDOParser::Alter_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_footer(ELDOParser::Alter_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSave(ELDOParser::SaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSave_file(ELDOParser::Save_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSave_when(ELDOParser::Save_whenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption(ELDOParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNodeset(ELDOParser::NodesetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_tcl(ELDOParser::Call_tclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_tcl_when(ELDOParser::Call_tcl_whenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_tcl(ELDOParser::Use_tclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefmac(ELDOParser::DefmacContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChrent(ELDOParser::ChrentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChrent_behaviour(ELDOParser::Chrent_behaviourContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChrent_point(ELDOParser::Chrent_pointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChrent_pair(ELDOParser::Chrent_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIc(ELDOParser::IcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIc_content(ELDOParser::Ic_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIc_subckt(ELDOParser::Ic_subcktContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(ELDOParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlot(ELDOParser::PlotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFfile(ELDOParser::FfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFfile_tabulation(ELDOParser::Ffile_tabulationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFfile_singleline(ELDOParser::Ffile_singlelineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFfile_unit(ELDOParser::Ffile_unitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFfile_storage_format(ELDOParser::Ffile_storage_formatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProbe(ELDOParser::ProbeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefwave(ELDOParser::DefwaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemp(ELDOParser::TempContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas(ELDOParser::MeasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_info(ELDOParser::Meas_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_vect(ELDOParser::Meas_vectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_catvect(ELDOParser::Meas_catvectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_label_name(ELDOParser::Meas_label_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_configuration(ELDOParser::Meas_configurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_find(ELDOParser::Meas_findContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_at(ELDOParser::Meas_atContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_when(ELDOParser::Meas_whenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_derivative(ELDOParser::Meas_derivativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_param(ELDOParser::Meas_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_trig(ELDOParser::Meas_trigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeas_targ(ELDOParser::Meas_targContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnect(ELDOParser::ConnectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal_declarations(ELDOParser::Global_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent(ELDOParser::ComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_type(ELDOParser::Component_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_attribute(ELDOParser::Component_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_value(ELDOParser::Component_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_parameter_list(ELDOParser::Component_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_analysis(ELDOParser::Component_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_pin_list(ELDOParser::Component_pin_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_port_list(ELDOParser::Component_port_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_net_list(ELDOParser::Component_net_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_coupling_list(ELDOParser::Component_coupling_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_table(ELDOParser::Component_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_value_list(ELDOParser::Component_value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterp_type(ELDOParser::Interp_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResistor(ELDOParser::ResistorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapacitor(ELDOParser::CapacitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInductor(ELDOParser::InductorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCoupled_inductor(ELDOParser::Coupled_inductorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiffusion_resistor(ELDOParser::Diffusion_resistorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransmission_line(ELDOParser::Transmission_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLtl_w_model(ELDOParser::Ltl_w_modelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLtl_u_model(ELDOParser::Ltl_u_modelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJunction_diode(ELDOParser::Junction_diodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBjt(ELDOParser::BjtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJfet(ELDOParser::JfetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMosfet(ELDOParser::MosfetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_instance(ELDOParser::Subckt_instanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIvsource(ELDOParser::IvsourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIcsource(ELDOParser::IcsourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVcvs(ELDOParser::VcvsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCccs(ELDOParser::CccsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVccs(ELDOParser::VccsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCcvs(ELDOParser::CcvsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoise_function(ELDOParser::Noise_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSw(ELDOParser::SwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperational_amplifier(ELDOParser::Operational_amplifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTwo_input_gate(ELDOParser::Two_input_gateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd(ELDOParser::EndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(ELDOParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_unary(ELDOParser::Expression_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_function_call(ELDOParser::Expression_function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_list(ELDOParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_operator(ELDOParser::Expression_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_atom(ELDOParser::Expression_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_list(ELDOParser::Node_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_list_item(ELDOParser::Node_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_mapping(ELDOParser::Node_mappingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode(ELDOParser::NodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list(ELDOParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list_item(ELDOParser::Parameter_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(ELDOParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_lhs(ELDOParser::Parameter_lhsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_rhs(ELDOParser::Parameter_rhsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilepath(ELDOParser::FilepathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilepath_element(ELDOParser::Filepath_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_of_line(ELDOParser::End_of_lineContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace edacurry
