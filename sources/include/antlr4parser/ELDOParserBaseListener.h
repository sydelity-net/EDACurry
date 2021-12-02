
// Generated from g4files/ELDOParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ELDOParserListener.h"


namespace edacurry {

/**
 * This class provides an empty implementation of ELDOParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ELDOParserBaseListener : public ELDOParserListener {
public:

  virtual void enterNetlist(ELDOParser::NetlistContext * /*ctx*/) override { }
  virtual void exitNetlist(ELDOParser::NetlistContext * /*ctx*/) override { }

  virtual void enterNetlist_title(ELDOParser::Netlist_titleContext * /*ctx*/) override { }
  virtual void exitNetlist_title(ELDOParser::Netlist_titleContext * /*ctx*/) override { }

  virtual void enterNetlist_entity(ELDOParser::Netlist_entityContext * /*ctx*/) override { }
  virtual void exitNetlist_entity(ELDOParser::Netlist_entityContext * /*ctx*/) override { }

  virtual void enterInclude(ELDOParser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(ELDOParser::IncludeContext * /*ctx*/) override { }

  virtual void enterStandard_include(ELDOParser::Standard_includeContext * /*ctx*/) override { }
  virtual void exitStandard_include(ELDOParser::Standard_includeContext * /*ctx*/) override { }

  virtual void enterVerilog_include(ELDOParser::Verilog_includeContext * /*ctx*/) override { }
  virtual void exitVerilog_include(ELDOParser::Verilog_includeContext * /*ctx*/) override { }

  virtual void enterDspf_include(ELDOParser::Dspf_includeContext * /*ctx*/) override { }
  virtual void exitDspf_include(ELDOParser::Dspf_includeContext * /*ctx*/) override { }

  virtual void enterLibrary(ELDOParser::LibraryContext * /*ctx*/) override { }
  virtual void exitLibrary(ELDOParser::LibraryContext * /*ctx*/) override { }

  virtual void enterLibrary_key(ELDOParser::Library_keyContext * /*ctx*/) override { }
  virtual void exitLibrary_key(ELDOParser::Library_keyContext * /*ctx*/) override { }

  virtual void enterLibrary_path(ELDOParser::Library_pathContext * /*ctx*/) override { }
  virtual void exitLibrary_path(ELDOParser::Library_pathContext * /*ctx*/) override { }

  virtual void enterLibrary_name(ELDOParser::Library_nameContext * /*ctx*/) override { }
  virtual void exitLibrary_name(ELDOParser::Library_nameContext * /*ctx*/) override { }

  virtual void enterLibrary_def(ELDOParser::Library_defContext * /*ctx*/) override { }
  virtual void exitLibrary_def(ELDOParser::Library_defContext * /*ctx*/) override { }

  virtual void enterLibrary_def_header(ELDOParser::Library_def_headerContext * /*ctx*/) override { }
  virtual void exitLibrary_def_header(ELDOParser::Library_def_headerContext * /*ctx*/) override { }

  virtual void enterLibrary_def_content(ELDOParser::Library_def_contentContext * /*ctx*/) override { }
  virtual void exitLibrary_def_content(ELDOParser::Library_def_contentContext * /*ctx*/) override { }

  virtual void enterLibrary_def_footer(ELDOParser::Library_def_footerContext * /*ctx*/) override { }
  virtual void exitLibrary_def_footer(ELDOParser::Library_def_footerContext * /*ctx*/) override { }

  virtual void enterSubckt(ELDOParser::SubcktContext * /*ctx*/) override { }
  virtual void exitSubckt(ELDOParser::SubcktContext * /*ctx*/) override { }

  virtual void enterSubckt_header(ELDOParser::Subckt_headerContext * /*ctx*/) override { }
  virtual void exitSubckt_header(ELDOParser::Subckt_headerContext * /*ctx*/) override { }

  virtual void enterSubckt_content(ELDOParser::Subckt_contentContext * /*ctx*/) override { }
  virtual void exitSubckt_content(ELDOParser::Subckt_contentContext * /*ctx*/) override { }

  virtual void enterSubckt_footer(ELDOParser::Subckt_footerContext * /*ctx*/) override { }
  virtual void exitSubckt_footer(ELDOParser::Subckt_footerContext * /*ctx*/) override { }

  virtual void enterAnalysis(ELDOParser::AnalysisContext * /*ctx*/) override { }
  virtual void exitAnalysis(ELDOParser::AnalysisContext * /*ctx*/) override { }

  virtual void enterAc(ELDOParser::AcContext * /*ctx*/) override { }
  virtual void exitAc(ELDOParser::AcContext * /*ctx*/) override { }

  virtual void enterAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext * /*ctx*/) override { }
  virtual void exitAc_parameter_driven(ELDOParser::Ac_parameter_drivenContext * /*ctx*/) override { }

  virtual void enterAc_data_driven(ELDOParser::Ac_data_drivenContext * /*ctx*/) override { }
  virtual void exitAc_data_driven(ELDOParser::Ac_data_drivenContext * /*ctx*/) override { }

  virtual void enterAc_list_driven(ELDOParser::Ac_list_drivenContext * /*ctx*/) override { }
  virtual void exitAc_list_driven(ELDOParser::Ac_list_drivenContext * /*ctx*/) override { }

  virtual void enterAc_adaptive(ELDOParser::Ac_adaptiveContext * /*ctx*/) override { }
  virtual void exitAc_adaptive(ELDOParser::Ac_adaptiveContext * /*ctx*/) override { }

  virtual void enterAge(ELDOParser::AgeContext * /*ctx*/) override { }
  virtual void exitAge(ELDOParser::AgeContext * /*ctx*/) override { }

  virtual void enterChecksoa(ELDOParser::ChecksoaContext * /*ctx*/) override { }
  virtual void exitChecksoa(ELDOParser::ChecksoaContext * /*ctx*/) override { }

  virtual void enterDc(ELDOParser::DcContext * /*ctx*/) override { }
  virtual void exitDc(ELDOParser::DcContext * /*ctx*/) override { }

  virtual void enterDc_component_analysis(ELDOParser::Dc_component_analysisContext * /*ctx*/) override { }
  virtual void exitDc_component_analysis(ELDOParser::Dc_component_analysisContext * /*ctx*/) override { }

  virtual void enterDc_source_analysis(ELDOParser::Dc_source_analysisContext * /*ctx*/) override { }
  virtual void exitDc_source_analysis(ELDOParser::Dc_source_analysisContext * /*ctx*/) override { }

  virtual void enterDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext * /*ctx*/) override { }
  virtual void exitDc_temperature_analysis(ELDOParser::Dc_temperature_analysisContext * /*ctx*/) override { }

  virtual void enterDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext * /*ctx*/) override { }
  virtual void exitDc_parameter_analysis(ELDOParser::Dc_parameter_analysisContext * /*ctx*/) override { }

  virtual void enterDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext * /*ctx*/) override { }
  virtual void exitDc_data_driven_analysis(ELDOParser::Dc_data_driven_analysisContext * /*ctx*/) override { }

  virtual void enterDchiz(ELDOParser::DchizContext * /*ctx*/) override { }
  virtual void exitDchiz(ELDOParser::DchizContext * /*ctx*/) override { }

  virtual void enterDcmismatch(ELDOParser::DcmismatchContext * /*ctx*/) override { }
  virtual void exitDcmismatch(ELDOParser::DcmismatchContext * /*ctx*/) override { }

  virtual void enterDex(ELDOParser::DexContext * /*ctx*/) override { }
  virtual void exitDex(ELDOParser::DexContext * /*ctx*/) override { }

  virtual void enterDsp(ELDOParser::DspContext * /*ctx*/) override { }
  virtual void exitDsp(ELDOParser::DspContext * /*ctx*/) override { }

  virtual void enterDspmod(ELDOParser::DspmodContext * /*ctx*/) override { }
  virtual void exitDspmod(ELDOParser::DspmodContext * /*ctx*/) override { }

  virtual void enterFour(ELDOParser::FourContext * /*ctx*/) override { }
  virtual void exitFour(ELDOParser::FourContext * /*ctx*/) override { }

  virtual void enterLstb(ELDOParser::LstbContext * /*ctx*/) override { }
  virtual void exitLstb(ELDOParser::LstbContext * /*ctx*/) override { }

  virtual void enterMc(ELDOParser::McContext * /*ctx*/) override { }
  virtual void exitMc(ELDOParser::McContext * /*ctx*/) override { }

  virtual void enterNoise(ELDOParser::NoiseContext * /*ctx*/) override { }
  virtual void exitNoise(ELDOParser::NoiseContext * /*ctx*/) override { }

  virtual void enterNoisetran(ELDOParser::NoisetranContext * /*ctx*/) override { }
  virtual void exitNoisetran(ELDOParser::NoisetranContext * /*ctx*/) override { }

  virtual void enterOp(ELDOParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(ELDOParser::OpContext * /*ctx*/) override { }

  virtual void enterOp_selective(ELDOParser::Op_selectiveContext * /*ctx*/) override { }
  virtual void exitOp_selective(ELDOParser::Op_selectiveContext * /*ctx*/) override { }

  virtual void enterOp_time_based(ELDOParser::Op_time_basedContext * /*ctx*/) override { }
  virtual void exitOp_time_based(ELDOParser::Op_time_basedContext * /*ctx*/) override { }

  virtual void enterOp_dc_based(ELDOParser::Op_dc_basedContext * /*ctx*/) override { }
  virtual void exitOp_dc_based(ELDOParser::Op_dc_basedContext * /*ctx*/) override { }

  virtual void enterOptfour(ELDOParser::OptfourContext * /*ctx*/) override { }
  virtual void exitOptfour(ELDOParser::OptfourContext * /*ctx*/) override { }

  virtual void enterOptimize(ELDOParser::OptimizeContext * /*ctx*/) override { }
  virtual void exitOptimize(ELDOParser::OptimizeContext * /*ctx*/) override { }

  virtual void enterOptnoise(ELDOParser::OptnoiseContext * /*ctx*/) override { }
  virtual void exitOptnoise(ELDOParser::OptnoiseContext * /*ctx*/) override { }

  virtual void enterPz(ELDOParser::PzContext * /*ctx*/) override { }
  virtual void exitPz(ELDOParser::PzContext * /*ctx*/) override { }

  virtual void enterRamp(ELDOParser::RampContext * /*ctx*/) override { }
  virtual void exitRamp(ELDOParser::RampContext * /*ctx*/) override { }

  virtual void enterSens(ELDOParser::SensContext * /*ctx*/) override { }
  virtual void exitSens(ELDOParser::SensContext * /*ctx*/) override { }

  virtual void enterSensac(ELDOParser::SensacContext * /*ctx*/) override { }
  virtual void exitSensac(ELDOParser::SensacContext * /*ctx*/) override { }

  virtual void enterSensparam(ELDOParser::SensparamContext * /*ctx*/) override { }
  virtual void exitSensparam(ELDOParser::SensparamContext * /*ctx*/) override { }

  virtual void enterSnf(ELDOParser::SnfContext * /*ctx*/) override { }
  virtual void exitSnf(ELDOParser::SnfContext * /*ctx*/) override { }

  virtual void enterSolve(ELDOParser::SolveContext * /*ctx*/) override { }
  virtual void exitSolve(ELDOParser::SolveContext * /*ctx*/) override { }

  virtual void enterSolve_parameter(ELDOParser::Solve_parameterContext * /*ctx*/) override { }
  virtual void exitSolve_parameter(ELDOParser::Solve_parameterContext * /*ctx*/) override { }

  virtual void enterSolve_object(ELDOParser::Solve_objectContext * /*ctx*/) override { }
  virtual void exitSolve_object(ELDOParser::Solve_objectContext * /*ctx*/) override { }

  virtual void enterSolve_component(ELDOParser::Solve_componentContext * /*ctx*/) override { }
  virtual void exitSolve_component(ELDOParser::Solve_componentContext * /*ctx*/) override { }

  virtual void enterTf(ELDOParser::TfContext * /*ctx*/) override { }
  virtual void exitTf(ELDOParser::TfContext * /*ctx*/) override { }

  virtual void enterTran(ELDOParser::TranContext * /*ctx*/) override { }
  virtual void exitTran(ELDOParser::TranContext * /*ctx*/) override { }

  virtual void enterTran_point_driven(ELDOParser::Tran_point_drivenContext * /*ctx*/) override { }
  virtual void exitTran_point_driven(ELDOParser::Tran_point_drivenContext * /*ctx*/) override { }

  virtual void enterTran_parameterized(ELDOParser::Tran_parameterizedContext * /*ctx*/) override { }
  virtual void exitTran_parameterized(ELDOParser::Tran_parameterizedContext * /*ctx*/) override { }

  virtual void enterTran_data_driven(ELDOParser::Tran_data_drivenContext * /*ctx*/) override { }
  virtual void exitTran_data_driven(ELDOParser::Tran_data_drivenContext * /*ctx*/) override { }

  virtual void enterWcase(ELDOParser::WcaseContext * /*ctx*/) override { }
  virtual void exitWcase(ELDOParser::WcaseContext * /*ctx*/) override { }

  virtual void enterExtract(ELDOParser::ExtractContext * /*ctx*/) override { }
  virtual void exitExtract(ELDOParser::ExtractContext * /*ctx*/) override { }

  virtual void enterGlobal(ELDOParser::GlobalContext * /*ctx*/) override { }
  virtual void exitGlobal(ELDOParser::GlobalContext * /*ctx*/) override { }

  virtual void enterModel(ELDOParser::ModelContext * /*ctx*/) override { }
  virtual void exitModel(ELDOParser::ModelContext * /*ctx*/) override { }

  virtual void enterModel_lib(ELDOParser::Model_libContext * /*ctx*/) override { }
  virtual void exitModel_lib(ELDOParser::Model_libContext * /*ctx*/) override { }

  virtual void enterModel_name(ELDOParser::Model_nameContext * /*ctx*/) override { }
  virtual void exitModel_name(ELDOParser::Model_nameContext * /*ctx*/) override { }

  virtual void enterModel_master(ELDOParser::Model_masterContext * /*ctx*/) override { }
  virtual void exitModel_master(ELDOParser::Model_masterContext * /*ctx*/) override { }

  virtual void enterModel_lib_type(ELDOParser::Model_lib_typeContext * /*ctx*/) override { }
  virtual void exitModel_lib_type(ELDOParser::Model_lib_typeContext * /*ctx*/) override { }

  virtual void enterControl(ELDOParser::ControlContext * /*ctx*/) override { }
  virtual void exitControl(ELDOParser::ControlContext * /*ctx*/) override { }

  virtual void enterAlter(ELDOParser::AlterContext * /*ctx*/) override { }
  virtual void exitAlter(ELDOParser::AlterContext * /*ctx*/) override { }

  virtual void enterAlter_header(ELDOParser::Alter_headerContext * /*ctx*/) override { }
  virtual void exitAlter_header(ELDOParser::Alter_headerContext * /*ctx*/) override { }

  virtual void enterAlter_content(ELDOParser::Alter_contentContext * /*ctx*/) override { }
  virtual void exitAlter_content(ELDOParser::Alter_contentContext * /*ctx*/) override { }

  virtual void enterAlter_footer(ELDOParser::Alter_footerContext * /*ctx*/) override { }
  virtual void exitAlter_footer(ELDOParser::Alter_footerContext * /*ctx*/) override { }

  virtual void enterSave(ELDOParser::SaveContext * /*ctx*/) override { }
  virtual void exitSave(ELDOParser::SaveContext * /*ctx*/) override { }

  virtual void enterSave_file(ELDOParser::Save_fileContext * /*ctx*/) override { }
  virtual void exitSave_file(ELDOParser::Save_fileContext * /*ctx*/) override { }

  virtual void enterSave_when(ELDOParser::Save_whenContext * /*ctx*/) override { }
  virtual void exitSave_when(ELDOParser::Save_whenContext * /*ctx*/) override { }

  virtual void enterOption(ELDOParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(ELDOParser::OptionContext * /*ctx*/) override { }

  virtual void enterNodeset(ELDOParser::NodesetContext * /*ctx*/) override { }
  virtual void exitNodeset(ELDOParser::NodesetContext * /*ctx*/) override { }

  virtual void enterCall_tcl(ELDOParser::Call_tclContext * /*ctx*/) override { }
  virtual void exitCall_tcl(ELDOParser::Call_tclContext * /*ctx*/) override { }

  virtual void enterCall_tcl_when(ELDOParser::Call_tcl_whenContext * /*ctx*/) override { }
  virtual void exitCall_tcl_when(ELDOParser::Call_tcl_whenContext * /*ctx*/) override { }

  virtual void enterUse_tcl(ELDOParser::Use_tclContext * /*ctx*/) override { }
  virtual void exitUse_tcl(ELDOParser::Use_tclContext * /*ctx*/) override { }

  virtual void enterDefmac(ELDOParser::DefmacContext * /*ctx*/) override { }
  virtual void exitDefmac(ELDOParser::DefmacContext * /*ctx*/) override { }

  virtual void enterChrent(ELDOParser::ChrentContext * /*ctx*/) override { }
  virtual void exitChrent(ELDOParser::ChrentContext * /*ctx*/) override { }

  virtual void enterChrent_behaviour(ELDOParser::Chrent_behaviourContext * /*ctx*/) override { }
  virtual void exitChrent_behaviour(ELDOParser::Chrent_behaviourContext * /*ctx*/) override { }

  virtual void enterChrent_point(ELDOParser::Chrent_pointContext * /*ctx*/) override { }
  virtual void exitChrent_point(ELDOParser::Chrent_pointContext * /*ctx*/) override { }

  virtual void enterChrent_pair(ELDOParser::Chrent_pairContext * /*ctx*/) override { }
  virtual void exitChrent_pair(ELDOParser::Chrent_pairContext * /*ctx*/) override { }

  virtual void enterIc(ELDOParser::IcContext * /*ctx*/) override { }
  virtual void exitIc(ELDOParser::IcContext * /*ctx*/) override { }

  virtual void enterIc_content(ELDOParser::Ic_contentContext * /*ctx*/) override { }
  virtual void exitIc_content(ELDOParser::Ic_contentContext * /*ctx*/) override { }

  virtual void enterIc_subckt(ELDOParser::Ic_subcktContext * /*ctx*/) override { }
  virtual void exitIc_subckt(ELDOParser::Ic_subcktContext * /*ctx*/) override { }

  virtual void enterPrint(ELDOParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(ELDOParser::PrintContext * /*ctx*/) override { }

  virtual void enterPlot(ELDOParser::PlotContext * /*ctx*/) override { }
  virtual void exitPlot(ELDOParser::PlotContext * /*ctx*/) override { }

  virtual void enterFfile(ELDOParser::FfileContext * /*ctx*/) override { }
  virtual void exitFfile(ELDOParser::FfileContext * /*ctx*/) override { }

  virtual void enterFfile_tabulation(ELDOParser::Ffile_tabulationContext * /*ctx*/) override { }
  virtual void exitFfile_tabulation(ELDOParser::Ffile_tabulationContext * /*ctx*/) override { }

  virtual void enterFfile_singleline(ELDOParser::Ffile_singlelineContext * /*ctx*/) override { }
  virtual void exitFfile_singleline(ELDOParser::Ffile_singlelineContext * /*ctx*/) override { }

  virtual void enterFfile_unit(ELDOParser::Ffile_unitContext * /*ctx*/) override { }
  virtual void exitFfile_unit(ELDOParser::Ffile_unitContext * /*ctx*/) override { }

  virtual void enterFfile_storage_format(ELDOParser::Ffile_storage_formatContext * /*ctx*/) override { }
  virtual void exitFfile_storage_format(ELDOParser::Ffile_storage_formatContext * /*ctx*/) override { }

  virtual void enterProbe(ELDOParser::ProbeContext * /*ctx*/) override { }
  virtual void exitProbe(ELDOParser::ProbeContext * /*ctx*/) override { }

  virtual void enterDefwave(ELDOParser::DefwaveContext * /*ctx*/) override { }
  virtual void exitDefwave(ELDOParser::DefwaveContext * /*ctx*/) override { }

  virtual void enterTemp(ELDOParser::TempContext * /*ctx*/) override { }
  virtual void exitTemp(ELDOParser::TempContext * /*ctx*/) override { }

  virtual void enterMeas(ELDOParser::MeasContext * /*ctx*/) override { }
  virtual void exitMeas(ELDOParser::MeasContext * /*ctx*/) override { }

  virtual void enterMeas_info(ELDOParser::Meas_infoContext * /*ctx*/) override { }
  virtual void exitMeas_info(ELDOParser::Meas_infoContext * /*ctx*/) override { }

  virtual void enterMeas_vect(ELDOParser::Meas_vectContext * /*ctx*/) override { }
  virtual void exitMeas_vect(ELDOParser::Meas_vectContext * /*ctx*/) override { }

  virtual void enterMeas_catvect(ELDOParser::Meas_catvectContext * /*ctx*/) override { }
  virtual void exitMeas_catvect(ELDOParser::Meas_catvectContext * /*ctx*/) override { }

  virtual void enterMeas_targ(ELDOParser::Meas_targContext * /*ctx*/) override { }
  virtual void exitMeas_targ(ELDOParser::Meas_targContext * /*ctx*/) override { }

  virtual void enterConnect(ELDOParser::ConnectContext * /*ctx*/) override { }
  virtual void exitConnect(ELDOParser::ConnectContext * /*ctx*/) override { }

  virtual void enterGlobal_declarations(ELDOParser::Global_declarationsContext * /*ctx*/) override { }
  virtual void exitGlobal_declarations(ELDOParser::Global_declarationsContext * /*ctx*/) override { }

  virtual void enterComponent(ELDOParser::ComponentContext * /*ctx*/) override { }
  virtual void exitComponent(ELDOParser::ComponentContext * /*ctx*/) override { }

  virtual void enterComponent_type(ELDOParser::Component_typeContext * /*ctx*/) override { }
  virtual void exitComponent_type(ELDOParser::Component_typeContext * /*ctx*/) override { }

  virtual void enterComponent_attribute(ELDOParser::Component_attributeContext * /*ctx*/) override { }
  virtual void exitComponent_attribute(ELDOParser::Component_attributeContext * /*ctx*/) override { }

  virtual void enterComponent_value(ELDOParser::Component_valueContext * /*ctx*/) override { }
  virtual void exitComponent_value(ELDOParser::Component_valueContext * /*ctx*/) override { }

  virtual void enterComponent_parameter_list(ELDOParser::Component_parameter_listContext * /*ctx*/) override { }
  virtual void exitComponent_parameter_list(ELDOParser::Component_parameter_listContext * /*ctx*/) override { }

  virtual void enterComponent_analysis(ELDOParser::Component_analysisContext * /*ctx*/) override { }
  virtual void exitComponent_analysis(ELDOParser::Component_analysisContext * /*ctx*/) override { }

  virtual void enterComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext * /*ctx*/) override { }
  virtual void exitComponent_positional_keywork(ELDOParser::Component_positional_keyworkContext * /*ctx*/) override { }

  virtual void enterComponent_pin_list(ELDOParser::Component_pin_listContext * /*ctx*/) override { }
  virtual void exitComponent_pin_list(ELDOParser::Component_pin_listContext * /*ctx*/) override { }

  virtual void enterComponent_port_list(ELDOParser::Component_port_listContext * /*ctx*/) override { }
  virtual void exitComponent_port_list(ELDOParser::Component_port_listContext * /*ctx*/) override { }

  virtual void enterComponent_net_list(ELDOParser::Component_net_listContext * /*ctx*/) override { }
  virtual void exitComponent_net_list(ELDOParser::Component_net_listContext * /*ctx*/) override { }

  virtual void enterComponent_coupling_list(ELDOParser::Component_coupling_listContext * /*ctx*/) override { }
  virtual void exitComponent_coupling_list(ELDOParser::Component_coupling_listContext * /*ctx*/) override { }

  virtual void enterComponent_table(ELDOParser::Component_tableContext * /*ctx*/) override { }
  virtual void exitComponent_table(ELDOParser::Component_tableContext * /*ctx*/) override { }

  virtual void enterComponent_value_list(ELDOParser::Component_value_listContext * /*ctx*/) override { }
  virtual void exitComponent_value_list(ELDOParser::Component_value_listContext * /*ctx*/) override { }

  virtual void enterInterp_type(ELDOParser::Interp_typeContext * /*ctx*/) override { }
  virtual void exitInterp_type(ELDOParser::Interp_typeContext * /*ctx*/) override { }

  virtual void enterResistor(ELDOParser::ResistorContext * /*ctx*/) override { }
  virtual void exitResistor(ELDOParser::ResistorContext * /*ctx*/) override { }

  virtual void enterCapacitor(ELDOParser::CapacitorContext * /*ctx*/) override { }
  virtual void exitCapacitor(ELDOParser::CapacitorContext * /*ctx*/) override { }

  virtual void enterInductor(ELDOParser::InductorContext * /*ctx*/) override { }
  virtual void exitInductor(ELDOParser::InductorContext * /*ctx*/) override { }

  virtual void enterCoupled_inductor(ELDOParser::Coupled_inductorContext * /*ctx*/) override { }
  virtual void exitCoupled_inductor(ELDOParser::Coupled_inductorContext * /*ctx*/) override { }

  virtual void enterDiffusion_resistor(ELDOParser::Diffusion_resistorContext * /*ctx*/) override { }
  virtual void exitDiffusion_resistor(ELDOParser::Diffusion_resistorContext * /*ctx*/) override { }

  virtual void enterTransmission_line(ELDOParser::Transmission_lineContext * /*ctx*/) override { }
  virtual void exitTransmission_line(ELDOParser::Transmission_lineContext * /*ctx*/) override { }

  virtual void enterLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext * /*ctx*/) override { }
  virtual void exitLossy_transmission_line(ELDOParser::Lossy_transmission_lineContext * /*ctx*/) override { }

  virtual void enterLtl_w_model(ELDOParser::Ltl_w_modelContext * /*ctx*/) override { }
  virtual void exitLtl_w_model(ELDOParser::Ltl_w_modelContext * /*ctx*/) override { }

  virtual void enterLtl_u_model(ELDOParser::Ltl_u_modelContext * /*ctx*/) override { }
  virtual void exitLtl_u_model(ELDOParser::Ltl_u_modelContext * /*ctx*/) override { }

  virtual void enterJunction_diode(ELDOParser::Junction_diodeContext * /*ctx*/) override { }
  virtual void exitJunction_diode(ELDOParser::Junction_diodeContext * /*ctx*/) override { }

  virtual void enterBjt(ELDOParser::BjtContext * /*ctx*/) override { }
  virtual void exitBjt(ELDOParser::BjtContext * /*ctx*/) override { }

  virtual void enterJfet(ELDOParser::JfetContext * /*ctx*/) override { }
  virtual void exitJfet(ELDOParser::JfetContext * /*ctx*/) override { }

  virtual void enterMosfet(ELDOParser::MosfetContext * /*ctx*/) override { }
  virtual void exitMosfet(ELDOParser::MosfetContext * /*ctx*/) override { }

  virtual void enterSubckt_instance(ELDOParser::Subckt_instanceContext * /*ctx*/) override { }
  virtual void exitSubckt_instance(ELDOParser::Subckt_instanceContext * /*ctx*/) override { }

  virtual void enterIvsource(ELDOParser::IvsourceContext * /*ctx*/) override { }
  virtual void exitIvsource(ELDOParser::IvsourceContext * /*ctx*/) override { }

  virtual void enterIcsource(ELDOParser::IcsourceContext * /*ctx*/) override { }
  virtual void exitIcsource(ELDOParser::IcsourceContext * /*ctx*/) override { }

  virtual void enterVcvs(ELDOParser::VcvsContext * /*ctx*/) override { }
  virtual void exitVcvs(ELDOParser::VcvsContext * /*ctx*/) override { }

  virtual void enterCccs(ELDOParser::CccsContext * /*ctx*/) override { }
  virtual void exitCccs(ELDOParser::CccsContext * /*ctx*/) override { }

  virtual void enterVccs(ELDOParser::VccsContext * /*ctx*/) override { }
  virtual void exitVccs(ELDOParser::VccsContext * /*ctx*/) override { }

  virtual void enterCcvs(ELDOParser::CcvsContext * /*ctx*/) override { }
  virtual void exitCcvs(ELDOParser::CcvsContext * /*ctx*/) override { }

  virtual void enterNoise_function(ELDOParser::Noise_functionContext * /*ctx*/) override { }
  virtual void exitNoise_function(ELDOParser::Noise_functionContext * /*ctx*/) override { }

  virtual void enterSw(ELDOParser::SwContext * /*ctx*/) override { }
  virtual void exitSw(ELDOParser::SwContext * /*ctx*/) override { }

  virtual void enterOperational_amplifier(ELDOParser::Operational_amplifierContext * /*ctx*/) override { }
  virtual void exitOperational_amplifier(ELDOParser::Operational_amplifierContext * /*ctx*/) override { }

  virtual void enterTwo_input_gate(ELDOParser::Two_input_gateContext * /*ctx*/) override { }
  virtual void exitTwo_input_gate(ELDOParser::Two_input_gateContext * /*ctx*/) override { }

  virtual void enterEnd(ELDOParser::EndContext * /*ctx*/) override { }
  virtual void exitEnd(ELDOParser::EndContext * /*ctx*/) override { }

  virtual void enterExpression(ELDOParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ELDOParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterExpression_unary(ELDOParser::Expression_unaryContext * /*ctx*/) override { }
  virtual void exitExpression_unary(ELDOParser::Expression_unaryContext * /*ctx*/) override { }

  virtual void enterExpression_function_call(ELDOParser::Expression_function_callContext * /*ctx*/) override { }
  virtual void exitExpression_function_call(ELDOParser::Expression_function_callContext * /*ctx*/) override { }

  virtual void enterExpression_list(ELDOParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(ELDOParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterExpression_operator(ELDOParser::Expression_operatorContext * /*ctx*/) override { }
  virtual void exitExpression_operator(ELDOParser::Expression_operatorContext * /*ctx*/) override { }

  virtual void enterExpression_atom(ELDOParser::Expression_atomContext * /*ctx*/) override { }
  virtual void exitExpression_atom(ELDOParser::Expression_atomContext * /*ctx*/) override { }

  virtual void enterNode_list(ELDOParser::Node_listContext * /*ctx*/) override { }
  virtual void exitNode_list(ELDOParser::Node_listContext * /*ctx*/) override { }

  virtual void enterNode_list_item(ELDOParser::Node_list_itemContext * /*ctx*/) override { }
  virtual void exitNode_list_item(ELDOParser::Node_list_itemContext * /*ctx*/) override { }

  virtual void enterNode_mapping(ELDOParser::Node_mappingContext * /*ctx*/) override { }
  virtual void exitNode_mapping(ELDOParser::Node_mappingContext * /*ctx*/) override { }

  virtual void enterNode(ELDOParser::NodeContext * /*ctx*/) override { }
  virtual void exitNode(ELDOParser::NodeContext * /*ctx*/) override { }

  virtual void enterParameter_list(ELDOParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(ELDOParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterParameter_list_item(ELDOParser::Parameter_list_itemContext * /*ctx*/) override { }
  virtual void exitParameter_list_item(ELDOParser::Parameter_list_itemContext * /*ctx*/) override { }

  virtual void enterParameter(ELDOParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ELDOParser::ParameterContext * /*ctx*/) override { }

  virtual void enterParameter_lhs(ELDOParser::Parameter_lhsContext * /*ctx*/) override { }
  virtual void exitParameter_lhs(ELDOParser::Parameter_lhsContext * /*ctx*/) override { }

  virtual void enterParameter_rhs(ELDOParser::Parameter_rhsContext * /*ctx*/) override { }
  virtual void exitParameter_rhs(ELDOParser::Parameter_rhsContext * /*ctx*/) override { }

  virtual void enterFilepath(ELDOParser::FilepathContext * /*ctx*/) override { }
  virtual void exitFilepath(ELDOParser::FilepathContext * /*ctx*/) override { }

  virtual void enterFilepath_element(ELDOParser::Filepath_elementContext * /*ctx*/) override { }
  virtual void exitFilepath_element(ELDOParser::Filepath_elementContext * /*ctx*/) override { }

  virtual void enterEnd_of_line(ELDOParser::End_of_lineContext * /*ctx*/) override { }
  virtual void exitEnd_of_line(ELDOParser::End_of_lineContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace edacurry
