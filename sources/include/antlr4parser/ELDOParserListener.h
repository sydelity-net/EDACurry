
// Generated from g4files/ELDOParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ELDOParser.h"


namespace edacurry {

/**
 * This interface defines an abstract listener for a parse tree produced by ELDOParser.
 */
class  ELDOParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterNetlist(ELDOParser::NetlistContext *ctx) = 0;
  virtual void exitNetlist(ELDOParser::NetlistContext *ctx) = 0;

  virtual void enterNetlist_title(ELDOParser::Netlist_titleContext *ctx) = 0;
  virtual void exitNetlist_title(ELDOParser::Netlist_titleContext *ctx) = 0;

  virtual void enterNetlist_entity(ELDOParser::Netlist_entityContext *ctx) = 0;
  virtual void exitNetlist_entity(ELDOParser::Netlist_entityContext *ctx) = 0;

  virtual void enterInclude(ELDOParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(ELDOParser::IncludeContext *ctx) = 0;

  virtual void enterStandard_include(ELDOParser::Standard_includeContext *ctx) = 0;
  virtual void exitStandard_include(ELDOParser::Standard_includeContext *ctx) = 0;

  virtual void enterVerilog_include(ELDOParser::Verilog_includeContext *ctx) = 0;
  virtual void exitVerilog_include(ELDOParser::Verilog_includeContext *ctx) = 0;

  virtual void enterDspf_include(ELDOParser::Dspf_includeContext *ctx) = 0;
  virtual void exitDspf_include(ELDOParser::Dspf_includeContext *ctx) = 0;

  virtual void enterLibrary(ELDOParser::LibraryContext *ctx) = 0;
  virtual void exitLibrary(ELDOParser::LibraryContext *ctx) = 0;

  virtual void enterLibrary_key(ELDOParser::Library_keyContext *ctx) = 0;
  virtual void exitLibrary_key(ELDOParser::Library_keyContext *ctx) = 0;

  virtual void enterLibrary_path(ELDOParser::Library_pathContext *ctx) = 0;
  virtual void exitLibrary_path(ELDOParser::Library_pathContext *ctx) = 0;

  virtual void enterLibrary_name(ELDOParser::Library_nameContext *ctx) = 0;
  virtual void exitLibrary_name(ELDOParser::Library_nameContext *ctx) = 0;

  virtual void enterLibrary_def(ELDOParser::Library_defContext *ctx) = 0;
  virtual void exitLibrary_def(ELDOParser::Library_defContext *ctx) = 0;

  virtual void enterLibrary_def_header(ELDOParser::Library_def_headerContext *ctx) = 0;
  virtual void exitLibrary_def_header(ELDOParser::Library_def_headerContext *ctx) = 0;

  virtual void enterLibrary_def_content(ELDOParser::Library_def_contentContext *ctx) = 0;
  virtual void exitLibrary_def_content(ELDOParser::Library_def_contentContext *ctx) = 0;

  virtual void enterLibrary_def_footer(ELDOParser::Library_def_footerContext *ctx) = 0;
  virtual void exitLibrary_def_footer(ELDOParser::Library_def_footerContext *ctx) = 0;

  virtual void enterSubckt(ELDOParser::SubcktContext *ctx) = 0;
  virtual void exitSubckt(ELDOParser::SubcktContext *ctx) = 0;

  virtual void enterSubckt_header(ELDOParser::Subckt_headerContext *ctx) = 0;
  virtual void exitSubckt_header(ELDOParser::Subckt_headerContext *ctx) = 0;

  virtual void enterSubckt_content(ELDOParser::Subckt_contentContext *ctx) = 0;
  virtual void exitSubckt_content(ELDOParser::Subckt_contentContext *ctx) = 0;

  virtual void enterSubckt_footer(ELDOParser::Subckt_footerContext *ctx) = 0;
  virtual void exitSubckt_footer(ELDOParser::Subckt_footerContext *ctx) = 0;

  virtual void enterAnalysis(ELDOParser::AnalysisContext *ctx) = 0;
  virtual void exitAnalysis(ELDOParser::AnalysisContext *ctx) = 0;

  virtual void enterAc(ELDOParser::AcContext *ctx) = 0;
  virtual void exitAc(ELDOParser::AcContext *ctx) = 0;

  virtual void enterAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext *ctx) = 0;
  virtual void exitAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext *ctx) = 0;

  virtual void enterAc_data_driven(ELDOParser::Ac_data_drivenContext *ctx) = 0;
  virtual void exitAc_data_driven(ELDOParser::Ac_data_drivenContext *ctx) = 0;

  virtual void enterAc_list_driven(ELDOParser::Ac_list_drivenContext *ctx) = 0;
  virtual void exitAc_list_driven(ELDOParser::Ac_list_drivenContext *ctx) = 0;

  virtual void enterAc_adaptive(ELDOParser::Ac_adaptiveContext *ctx) = 0;
  virtual void exitAc_adaptive(ELDOParser::Ac_adaptiveContext *ctx) = 0;

  virtual void enterAge(ELDOParser::AgeContext *ctx) = 0;
  virtual void exitAge(ELDOParser::AgeContext *ctx) = 0;

  virtual void enterChecksoa(ELDOParser::ChecksoaContext *ctx) = 0;
  virtual void exitChecksoa(ELDOParser::ChecksoaContext *ctx) = 0;

  virtual void enterDc(ELDOParser::DcContext *ctx) = 0;
  virtual void exitDc(ELDOParser::DcContext *ctx) = 0;

  virtual void enterDc_component_analysis(ELDOParser::Dc_component_analysisContext *ctx) = 0;
  virtual void exitDc_component_analysis(ELDOParser::Dc_component_analysisContext *ctx) = 0;

  virtual void enterDc_source_analysis(ELDOParser::Dc_source_analysisContext *ctx) = 0;
  virtual void exitDc_source_analysis(ELDOParser::Dc_source_analysisContext *ctx) = 0;

  virtual void enterDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext *ctx) = 0;
  virtual void exitDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext *ctx) = 0;

  virtual void enterDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext *ctx) = 0;
  virtual void exitDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext *ctx) = 0;

  virtual void enterDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext *ctx) = 0;
  virtual void exitDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext *ctx) = 0;

  virtual void enterDchiz(ELDOParser::DchizContext *ctx) = 0;
  virtual void exitDchiz(ELDOParser::DchizContext *ctx) = 0;

  virtual void enterDcmismatch(ELDOParser::DcmismatchContext *ctx) = 0;
  virtual void exitDcmismatch(ELDOParser::DcmismatchContext *ctx) = 0;

  virtual void enterDex(ELDOParser::DexContext *ctx) = 0;
  virtual void exitDex(ELDOParser::DexContext *ctx) = 0;

  virtual void enterDsp(ELDOParser::DspContext *ctx) = 0;
  virtual void exitDsp(ELDOParser::DspContext *ctx) = 0;

  virtual void enterDspmod(ELDOParser::DspmodContext *ctx) = 0;
  virtual void exitDspmod(ELDOParser::DspmodContext *ctx) = 0;

  virtual void enterFour(ELDOParser::FourContext *ctx) = 0;
  virtual void exitFour(ELDOParser::FourContext *ctx) = 0;

  virtual void enterLstb(ELDOParser::LstbContext *ctx) = 0;
  virtual void exitLstb(ELDOParser::LstbContext *ctx) = 0;

  virtual void enterMc(ELDOParser::McContext *ctx) = 0;
  virtual void exitMc(ELDOParser::McContext *ctx) = 0;

  virtual void enterNoise(ELDOParser::NoiseContext *ctx) = 0;
  virtual void exitNoise(ELDOParser::NoiseContext *ctx) = 0;

  virtual void enterNoisetran(ELDOParser::NoisetranContext *ctx) = 0;
  virtual void exitNoisetran(ELDOParser::NoisetranContext *ctx) = 0;

  virtual void enterOp(ELDOParser::OpContext *ctx) = 0;
  virtual void exitOp(ELDOParser::OpContext *ctx) = 0;

  virtual void enterOp_selective(ELDOParser::Op_selectiveContext *ctx) = 0;
  virtual void exitOp_selective(ELDOParser::Op_selectiveContext *ctx) = 0;

  virtual void enterOp_time_based(ELDOParser::Op_time_basedContext *ctx) = 0;
  virtual void exitOp_time_based(ELDOParser::Op_time_basedContext *ctx) = 0;

  virtual void enterOp_dc_based(ELDOParser::Op_dc_basedContext *ctx) = 0;
  virtual void exitOp_dc_based(ELDOParser::Op_dc_basedContext *ctx) = 0;

  virtual void enterOptfour(ELDOParser::OptfourContext *ctx) = 0;
  virtual void exitOptfour(ELDOParser::OptfourContext *ctx) = 0;

  virtual void enterOptimize(ELDOParser::OptimizeContext *ctx) = 0;
  virtual void exitOptimize(ELDOParser::OptimizeContext *ctx) = 0;

  virtual void enterOptnoise(ELDOParser::OptnoiseContext *ctx) = 0;
  virtual void exitOptnoise(ELDOParser::OptnoiseContext *ctx) = 0;

  virtual void enterPz(ELDOParser::PzContext *ctx) = 0;
  virtual void exitPz(ELDOParser::PzContext *ctx) = 0;

  virtual void enterRamp(ELDOParser::RampContext *ctx) = 0;
  virtual void exitRamp(ELDOParser::RampContext *ctx) = 0;

  virtual void enterSens(ELDOParser::SensContext *ctx) = 0;
  virtual void exitSens(ELDOParser::SensContext *ctx) = 0;

  virtual void enterSensac(ELDOParser::SensacContext *ctx) = 0;
  virtual void exitSensac(ELDOParser::SensacContext *ctx) = 0;

  virtual void enterSensparam(ELDOParser::SensparamContext *ctx) = 0;
  virtual void exitSensparam(ELDOParser::SensparamContext *ctx) = 0;

  virtual void enterSnf(ELDOParser::SnfContext *ctx) = 0;
  virtual void exitSnf(ELDOParser::SnfContext *ctx) = 0;

  virtual void enterSolve(ELDOParser::SolveContext *ctx) = 0;
  virtual void exitSolve(ELDOParser::SolveContext *ctx) = 0;

  virtual void enterSolve_parameter(ELDOParser::Solve_parameterContext *ctx) = 0;
  virtual void exitSolve_parameter(ELDOParser::Solve_parameterContext *ctx) = 0;

  virtual void enterSolve_object(ELDOParser::Solve_objectContext *ctx) = 0;
  virtual void exitSolve_object(ELDOParser::Solve_objectContext *ctx) = 0;

  virtual void enterSolve_component(ELDOParser::Solve_componentContext *ctx) = 0;
  virtual void exitSolve_component(ELDOParser::Solve_componentContext *ctx) = 0;

  virtual void enterTf(ELDOParser::TfContext *ctx) = 0;
  virtual void exitTf(ELDOParser::TfContext *ctx) = 0;

  virtual void enterTran(ELDOParser::TranContext *ctx) = 0;
  virtual void exitTran(ELDOParser::TranContext *ctx) = 0;

  virtual void enterTran_point_driven(ELDOParser::Tran_point_drivenContext *ctx) = 0;
  virtual void exitTran_point_driven(ELDOParser::Tran_point_drivenContext *ctx) = 0;

  virtual void enterTran_parameterized(ELDOParser::Tran_parameterizedContext *ctx) = 0;
  virtual void exitTran_parameterized(ELDOParser::Tran_parameterizedContext *ctx) = 0;

  virtual void enterTran_data_driven(ELDOParser::Tran_data_drivenContext *ctx) = 0;
  virtual void exitTran_data_driven(ELDOParser::Tran_data_drivenContext *ctx) = 0;

  virtual void enterWcase(ELDOParser::WcaseContext *ctx) = 0;
  virtual void exitWcase(ELDOParser::WcaseContext *ctx) = 0;

  virtual void enterExtract(ELDOParser::ExtractContext *ctx) = 0;
  virtual void exitExtract(ELDOParser::ExtractContext *ctx) = 0;

  virtual void enterGlobal(ELDOParser::GlobalContext *ctx) = 0;
  virtual void exitGlobal(ELDOParser::GlobalContext *ctx) = 0;

  virtual void enterModel(ELDOParser::ModelContext *ctx) = 0;
  virtual void exitModel(ELDOParser::ModelContext *ctx) = 0;

  virtual void enterModel_lib(ELDOParser::Model_libContext *ctx) = 0;
  virtual void exitModel_lib(ELDOParser::Model_libContext *ctx) = 0;

  virtual void enterModel_name(ELDOParser::Model_nameContext *ctx) = 0;
  virtual void exitModel_name(ELDOParser::Model_nameContext *ctx) = 0;

  virtual void enterModel_master(ELDOParser::Model_masterContext *ctx) = 0;
  virtual void exitModel_master(ELDOParser::Model_masterContext *ctx) = 0;

  virtual void enterModel_lib_type(ELDOParser::Model_lib_typeContext *ctx) = 0;
  virtual void exitModel_lib_type(ELDOParser::Model_lib_typeContext *ctx) = 0;

  virtual void enterControl(ELDOParser::ControlContext *ctx) = 0;
  virtual void exitControl(ELDOParser::ControlContext *ctx) = 0;

  virtual void enterAlter(ELDOParser::AlterContext *ctx) = 0;
  virtual void exitAlter(ELDOParser::AlterContext *ctx) = 0;

  virtual void enterAlter_header(ELDOParser::Alter_headerContext *ctx) = 0;
  virtual void exitAlter_header(ELDOParser::Alter_headerContext *ctx) = 0;

  virtual void enterAlter_content(ELDOParser::Alter_contentContext *ctx) = 0;
  virtual void exitAlter_content(ELDOParser::Alter_contentContext *ctx) = 0;

  virtual void enterAlter_footer(ELDOParser::Alter_footerContext *ctx) = 0;
  virtual void exitAlter_footer(ELDOParser::Alter_footerContext *ctx) = 0;

  virtual void enterSave(ELDOParser::SaveContext *ctx) = 0;
  virtual void exitSave(ELDOParser::SaveContext *ctx) = 0;

  virtual void enterSave_file(ELDOParser::Save_fileContext *ctx) = 0;
  virtual void exitSave_file(ELDOParser::Save_fileContext *ctx) = 0;

  virtual void enterSave_when(ELDOParser::Save_whenContext *ctx) = 0;
  virtual void exitSave_when(ELDOParser::Save_whenContext *ctx) = 0;

  virtual void enterOption(ELDOParser::OptionContext *ctx) = 0;
  virtual void exitOption(ELDOParser::OptionContext *ctx) = 0;

  virtual void enterNodeset(ELDOParser::NodesetContext *ctx) = 0;
  virtual void exitNodeset(ELDOParser::NodesetContext *ctx) = 0;

  virtual void enterCall_tcl(ELDOParser::Call_tclContext *ctx) = 0;
  virtual void exitCall_tcl(ELDOParser::Call_tclContext *ctx) = 0;

  virtual void enterCall_tcl_when(ELDOParser::Call_tcl_whenContext *ctx) = 0;
  virtual void exitCall_tcl_when(ELDOParser::Call_tcl_whenContext *ctx) = 0;

  virtual void enterUse_tcl(ELDOParser::Use_tclContext *ctx) = 0;
  virtual void exitUse_tcl(ELDOParser::Use_tclContext *ctx) = 0;

  virtual void enterDefmac(ELDOParser::DefmacContext *ctx) = 0;
  virtual void exitDefmac(ELDOParser::DefmacContext *ctx) = 0;

  virtual void enterChrent(ELDOParser::ChrentContext *ctx) = 0;
  virtual void exitChrent(ELDOParser::ChrentContext *ctx) = 0;

  virtual void enterChrent_behaviour(ELDOParser::Chrent_behaviourContext *ctx) = 0;
  virtual void exitChrent_behaviour(ELDOParser::Chrent_behaviourContext *ctx) = 0;

  virtual void enterChrent_point(ELDOParser::Chrent_pointContext *ctx) = 0;
  virtual void exitChrent_point(ELDOParser::Chrent_pointContext *ctx) = 0;

  virtual void enterChrent_pair(ELDOParser::Chrent_pairContext *ctx) = 0;
  virtual void exitChrent_pair(ELDOParser::Chrent_pairContext *ctx) = 0;

  virtual void enterIc(ELDOParser::IcContext *ctx) = 0;
  virtual void exitIc(ELDOParser::IcContext *ctx) = 0;

  virtual void enterIc_content(ELDOParser::Ic_contentContext *ctx) = 0;
  virtual void exitIc_content(ELDOParser::Ic_contentContext *ctx) = 0;

  virtual void enterIc_subckt(ELDOParser::Ic_subcktContext *ctx) = 0;
  virtual void exitIc_subckt(ELDOParser::Ic_subcktContext *ctx) = 0;

  virtual void enterPrint(ELDOParser::PrintContext *ctx) = 0;
  virtual void exitPrint(ELDOParser::PrintContext *ctx) = 0;

  virtual void enterPlot(ELDOParser::PlotContext *ctx) = 0;
  virtual void exitPlot(ELDOParser::PlotContext *ctx) = 0;

  virtual void enterFfile(ELDOParser::FfileContext *ctx) = 0;
  virtual void exitFfile(ELDOParser::FfileContext *ctx) = 0;

  virtual void enterFfile_tabulation(ELDOParser::Ffile_tabulationContext *ctx) = 0;
  virtual void exitFfile_tabulation(ELDOParser::Ffile_tabulationContext *ctx) = 0;

  virtual void enterFfile_singleline(ELDOParser::Ffile_singlelineContext *ctx) = 0;
  virtual void exitFfile_singleline(ELDOParser::Ffile_singlelineContext *ctx) = 0;

  virtual void enterFfile_unit(ELDOParser::Ffile_unitContext *ctx) = 0;
  virtual void exitFfile_unit(ELDOParser::Ffile_unitContext *ctx) = 0;

  virtual void enterFfile_storage_format(ELDOParser::Ffile_storage_formatContext *ctx) = 0;
  virtual void exitFfile_storage_format(ELDOParser::Ffile_storage_formatContext *ctx) = 0;

  virtual void enterProbe(ELDOParser::ProbeContext *ctx) = 0;
  virtual void exitProbe(ELDOParser::ProbeContext *ctx) = 0;

  virtual void enterDefwave(ELDOParser::DefwaveContext *ctx) = 0;
  virtual void exitDefwave(ELDOParser::DefwaveContext *ctx) = 0;

  virtual void enterTemp(ELDOParser::TempContext *ctx) = 0;
  virtual void exitTemp(ELDOParser::TempContext *ctx) = 0;

  virtual void enterMeas(ELDOParser::MeasContext *ctx) = 0;
  virtual void exitMeas(ELDOParser::MeasContext *ctx) = 0;

  virtual void enterMeas_info(ELDOParser::Meas_infoContext *ctx) = 0;
  virtual void exitMeas_info(ELDOParser::Meas_infoContext *ctx) = 0;

  virtual void enterMeas_vect(ELDOParser::Meas_vectContext *ctx) = 0;
  virtual void exitMeas_vect(ELDOParser::Meas_vectContext *ctx) = 0;

  virtual void enterMeas_catvect(ELDOParser::Meas_catvectContext *ctx) = 0;
  virtual void exitMeas_catvect(ELDOParser::Meas_catvectContext *ctx) = 0;

  virtual void enterMeas_targ(ELDOParser::Meas_targContext *ctx) = 0;
  virtual void exitMeas_targ(ELDOParser::Meas_targContext *ctx) = 0;

  virtual void enterConnect(ELDOParser::ConnectContext *ctx) = 0;
  virtual void exitConnect(ELDOParser::ConnectContext *ctx) = 0;

  virtual void enterGlobal_declarations(ELDOParser::Global_declarationsContext *ctx) = 0;
  virtual void exitGlobal_declarations(ELDOParser::Global_declarationsContext *ctx) = 0;

  virtual void enterComponent(ELDOParser::ComponentContext *ctx) = 0;
  virtual void exitComponent(ELDOParser::ComponentContext *ctx) = 0;

  virtual void enterComponent_type(ELDOParser::Component_typeContext *ctx) = 0;
  virtual void exitComponent_type(ELDOParser::Component_typeContext *ctx) = 0;

  virtual void enterComponent_attribute(ELDOParser::Component_attributeContext *ctx) = 0;
  virtual void exitComponent_attribute(ELDOParser::Component_attributeContext *ctx) = 0;

  virtual void enterComponent_value(ELDOParser::Component_valueContext *ctx) = 0;
  virtual void exitComponent_value(ELDOParser::Component_valueContext *ctx) = 0;

  virtual void enterComponent_parameter_list(ELDOParser::Component_parameter_listContext *ctx) = 0;
  virtual void exitComponent_parameter_list(ELDOParser::Component_parameter_listContext *ctx) = 0;

  virtual void enterComponent_analysis(ELDOParser::Component_analysisContext *ctx) = 0;
  virtual void exitComponent_analysis(ELDOParser::Component_analysisContext *ctx) = 0;

  virtual void enterComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *ctx) = 0;
  virtual void exitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext *ctx) = 0;

  virtual void enterComponent_pin_list(ELDOParser::Component_pin_listContext *ctx) = 0;
  virtual void exitComponent_pin_list(ELDOParser::Component_pin_listContext *ctx) = 0;

  virtual void enterComponent_port_list(ELDOParser::Component_port_listContext *ctx) = 0;
  virtual void exitComponent_port_list(ELDOParser::Component_port_listContext *ctx) = 0;

  virtual void enterComponent_net_list(ELDOParser::Component_net_listContext *ctx) = 0;
  virtual void exitComponent_net_list(ELDOParser::Component_net_listContext *ctx) = 0;

  virtual void enterComponent_coupling_list(ELDOParser::Component_coupling_listContext *ctx) = 0;
  virtual void exitComponent_coupling_list(ELDOParser::Component_coupling_listContext *ctx) = 0;

  virtual void enterComponent_table(ELDOParser::Component_tableContext *ctx) = 0;
  virtual void exitComponent_table(ELDOParser::Component_tableContext *ctx) = 0;

  virtual void enterComponent_value_list(ELDOParser::Component_value_listContext *ctx) = 0;
  virtual void exitComponent_value_list(ELDOParser::Component_value_listContext *ctx) = 0;

  virtual void enterInterp_type(ELDOParser::Interp_typeContext *ctx) = 0;
  virtual void exitInterp_type(ELDOParser::Interp_typeContext *ctx) = 0;

  virtual void enterResistor(ELDOParser::ResistorContext *ctx) = 0;
  virtual void exitResistor(ELDOParser::ResistorContext *ctx) = 0;

  virtual void enterCapacitor(ELDOParser::CapacitorContext *ctx) = 0;
  virtual void exitCapacitor(ELDOParser::CapacitorContext *ctx) = 0;

  virtual void enterInductor(ELDOParser::InductorContext *ctx) = 0;
  virtual void exitInductor(ELDOParser::InductorContext *ctx) = 0;

  virtual void enterCoupled_inductor(ELDOParser::Coupled_inductorContext *ctx) = 0;
  virtual void exitCoupled_inductor(ELDOParser::Coupled_inductorContext *ctx) = 0;

  virtual void enterDiffusion_resistor(ELDOParser::Diffusion_resistorContext *ctx) = 0;
  virtual void exitDiffusion_resistor(ELDOParser::Diffusion_resistorContext *ctx) = 0;

  virtual void enterTransmission_line(ELDOParser::Transmission_lineContext *ctx) = 0;
  virtual void exitTransmission_line(ELDOParser::Transmission_lineContext *ctx) = 0;

  virtual void enterLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext *ctx) = 0;
  virtual void exitLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext *ctx) = 0;

  virtual void enterLtl_w_model(ELDOParser::Ltl_w_modelContext *ctx) = 0;
  virtual void exitLtl_w_model(ELDOParser::Ltl_w_modelContext *ctx) = 0;

  virtual void enterLtl_u_model(ELDOParser::Ltl_u_modelContext *ctx) = 0;
  virtual void exitLtl_u_model(ELDOParser::Ltl_u_modelContext *ctx) = 0;

  virtual void enterJunction_diode(ELDOParser::Junction_diodeContext *ctx) = 0;
  virtual void exitJunction_diode(ELDOParser::Junction_diodeContext *ctx) = 0;

  virtual void enterBjt(ELDOParser::BjtContext *ctx) = 0;
  virtual void exitBjt(ELDOParser::BjtContext *ctx) = 0;

  virtual void enterJfet(ELDOParser::JfetContext *ctx) = 0;
  virtual void exitJfet(ELDOParser::JfetContext *ctx) = 0;

  virtual void enterMosfet(ELDOParser::MosfetContext *ctx) = 0;
  virtual void exitMosfet(ELDOParser::MosfetContext *ctx) = 0;

  virtual void enterSubckt_instance(ELDOParser::Subckt_instanceContext *ctx) = 0;
  virtual void exitSubckt_instance(ELDOParser::Subckt_instanceContext *ctx) = 0;

  virtual void enterIvsource(ELDOParser::IvsourceContext *ctx) = 0;
  virtual void exitIvsource(ELDOParser::IvsourceContext *ctx) = 0;

  virtual void enterIcsource(ELDOParser::IcsourceContext *ctx) = 0;
  virtual void exitIcsource(ELDOParser::IcsourceContext *ctx) = 0;

  virtual void enterVcvs(ELDOParser::VcvsContext *ctx) = 0;
  virtual void exitVcvs(ELDOParser::VcvsContext *ctx) = 0;

  virtual void enterCccs(ELDOParser::CccsContext *ctx) = 0;
  virtual void exitCccs(ELDOParser::CccsContext *ctx) = 0;

  virtual void enterVccs(ELDOParser::VccsContext *ctx) = 0;
  virtual void exitVccs(ELDOParser::VccsContext *ctx) = 0;

  virtual void enterCcvs(ELDOParser::CcvsContext *ctx) = 0;
  virtual void exitCcvs(ELDOParser::CcvsContext *ctx) = 0;

  virtual void enterNoise_function(ELDOParser::Noise_functionContext *ctx) = 0;
  virtual void exitNoise_function(ELDOParser::Noise_functionContext *ctx) = 0;

  virtual void enterSw(ELDOParser::SwContext *ctx) = 0;
  virtual void exitSw(ELDOParser::SwContext *ctx) = 0;

  virtual void enterOperational_amplifier(ELDOParser::Operational_amplifierContext *ctx) = 0;
  virtual void exitOperational_amplifier(ELDOParser::Operational_amplifierContext *ctx) = 0;

  virtual void enterTwo_input_gate(ELDOParser::Two_input_gateContext *ctx) = 0;
  virtual void exitTwo_input_gate(ELDOParser::Two_input_gateContext *ctx) = 0;

  virtual void enterEnd(ELDOParser::EndContext *ctx) = 0;
  virtual void exitEnd(ELDOParser::EndContext *ctx) = 0;

  virtual void enterExpression(ELDOParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ELDOParser::ExpressionContext *ctx) = 0;

  virtual void enterExpression_unary(ELDOParser::Expression_unaryContext *ctx) = 0;
  virtual void exitExpression_unary(ELDOParser::Expression_unaryContext *ctx) = 0;

  virtual void enterExpression_function_call(ELDOParser::Expression_function_callContext *ctx) = 0;
  virtual void exitExpression_function_call(ELDOParser::Expression_function_callContext *ctx) = 0;

  virtual void enterExpression_list(ELDOParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(ELDOParser::Expression_listContext *ctx) = 0;

  virtual void enterExpression_operator(ELDOParser::Expression_operatorContext *ctx) = 0;
  virtual void exitExpression_operator(ELDOParser::Expression_operatorContext *ctx) = 0;

  virtual void enterExpression_atom(ELDOParser::Expression_atomContext *ctx) = 0;
  virtual void exitExpression_atom(ELDOParser::Expression_atomContext *ctx) = 0;

  virtual void enterNode_list(ELDOParser::Node_listContext *ctx) = 0;
  virtual void exitNode_list(ELDOParser::Node_listContext *ctx) = 0;

  virtual void enterNode_list_item(ELDOParser::Node_list_itemContext *ctx) = 0;
  virtual void exitNode_list_item(ELDOParser::Node_list_itemContext *ctx) = 0;

  virtual void enterNode_mapping(ELDOParser::Node_mappingContext *ctx) = 0;
  virtual void exitNode_mapping(ELDOParser::Node_mappingContext *ctx) = 0;

  virtual void enterNode(ELDOParser::NodeContext *ctx) = 0;
  virtual void exitNode(ELDOParser::NodeContext *ctx) = 0;

  virtual void enterParameter_list(ELDOParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(ELDOParser::Parameter_listContext *ctx) = 0;

  virtual void enterParameter_list_item(ELDOParser::Parameter_list_itemContext *ctx) = 0;
  virtual void exitParameter_list_item(ELDOParser::Parameter_list_itemContext *ctx) = 0;

  virtual void enterParameter(ELDOParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(ELDOParser::ParameterContext *ctx) = 0;

  virtual void enterParameter_lhs(ELDOParser::Parameter_lhsContext *ctx) = 0;
  virtual void exitParameter_lhs(ELDOParser::Parameter_lhsContext *ctx) = 0;

  virtual void enterParameter_rhs(ELDOParser::Parameter_rhsContext *ctx) = 0;
  virtual void exitParameter_rhs(ELDOParser::Parameter_rhsContext *ctx) = 0;

  virtual void enterFilepath(ELDOParser::FilepathContext *ctx) = 0;
  virtual void exitFilepath(ELDOParser::FilepathContext *ctx) = 0;

  virtual void enterFilepath_element(ELDOParser::Filepath_elementContext *ctx) = 0;
  virtual void exitFilepath_element(ELDOParser::Filepath_elementContext *ctx) = 0;

  virtual void enterEnd_of_line(ELDOParser::End_of_lineContext *ctx) = 0;
  virtual void exitEnd_of_line(ELDOParser::End_of_lineContext *ctx) = 0;


};

}  // namespace edacurry
