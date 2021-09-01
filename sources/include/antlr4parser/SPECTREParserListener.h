
// Generated from g4files/SPECTREParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SPECTREParser.h"


namespace edacurry {

/**
 * This interface defines an abstract listener for a parse tree produced by SPECTREParser.
 */
class  SPECTREParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterNetlist(SPECTREParser::NetlistContext *ctx) = 0;
  virtual void exitNetlist(SPECTREParser::NetlistContext *ctx) = 0;

  virtual void enterNetlist_title(SPECTREParser::Netlist_titleContext *ctx) = 0;
  virtual void exitNetlist_title(SPECTREParser::Netlist_titleContext *ctx) = 0;

  virtual void enterNetlist_entity(SPECTREParser::Netlist_entityContext *ctx) = 0;
  virtual void exitNetlist_entity(SPECTREParser::Netlist_entityContext *ctx) = 0;

  virtual void enterInclude(SPECTREParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(SPECTREParser::IncludeContext *ctx) = 0;

  virtual void enterStandard_include(SPECTREParser::Standard_includeContext *ctx) = 0;
  virtual void exitStandard_include(SPECTREParser::Standard_includeContext *ctx) = 0;

  virtual void enterCpp_include(SPECTREParser::Cpp_includeContext *ctx) = 0;
  virtual void exitCpp_include(SPECTREParser::Cpp_includeContext *ctx) = 0;

  virtual void enterAhdl_include(SPECTREParser::Ahdl_includeContext *ctx) = 0;
  virtual void exitAhdl_include(SPECTREParser::Ahdl_includeContext *ctx) = 0;

  virtual void enterLang(SPECTREParser::LangContext *ctx) = 0;
  virtual void exitLang(SPECTREParser::LangContext *ctx) = 0;

  virtual void enterLibrary(SPECTREParser::LibraryContext *ctx) = 0;
  virtual void exitLibrary(SPECTREParser::LibraryContext *ctx) = 0;

  virtual void enterLibrary_header(SPECTREParser::Library_headerContext *ctx) = 0;
  virtual void exitLibrary_header(SPECTREParser::Library_headerContext *ctx) = 0;

  virtual void enterLibrary_content(SPECTREParser::Library_contentContext *ctx) = 0;
  virtual void exitLibrary_content(SPECTREParser::Library_contentContext *ctx) = 0;

  virtual void enterLibrary_footer(SPECTREParser::Library_footerContext *ctx) = 0;
  virtual void exitLibrary_footer(SPECTREParser::Library_footerContext *ctx) = 0;

  virtual void enterSection(SPECTREParser::SectionContext *ctx) = 0;
  virtual void exitSection(SPECTREParser::SectionContext *ctx) = 0;

  virtual void enterSection_header(SPECTREParser::Section_headerContext *ctx) = 0;
  virtual void exitSection_header(SPECTREParser::Section_headerContext *ctx) = 0;

  virtual void enterSection_content(SPECTREParser::Section_contentContext *ctx) = 0;
  virtual void exitSection_content(SPECTREParser::Section_contentContext *ctx) = 0;

  virtual void enterSection_footer(SPECTREParser::Section_footerContext *ctx) = 0;
  virtual void exitSection_footer(SPECTREParser::Section_footerContext *ctx) = 0;

  virtual void enterAnalogmodel(SPECTREParser::AnalogmodelContext *ctx) = 0;
  virtual void exitAnalogmodel(SPECTREParser::AnalogmodelContext *ctx) = 0;

  virtual void enterSubckt(SPECTREParser::SubcktContext *ctx) = 0;
  virtual void exitSubckt(SPECTREParser::SubcktContext *ctx) = 0;

  virtual void enterSubckt_header(SPECTREParser::Subckt_headerContext *ctx) = 0;
  virtual void exitSubckt_header(SPECTREParser::Subckt_headerContext *ctx) = 0;

  virtual void enterSubckt_content(SPECTREParser::Subckt_contentContext *ctx) = 0;
  virtual void exitSubckt_content(SPECTREParser::Subckt_contentContext *ctx) = 0;

  virtual void enterSubckt_footer(SPECTREParser::Subckt_footerContext *ctx) = 0;
  virtual void exitSubckt_footer(SPECTREParser::Subckt_footerContext *ctx) = 0;

  virtual void enterIf_statement(SPECTREParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(SPECTREParser::If_statementContext *ctx) = 0;

  virtual void enterIf_alternative(SPECTREParser::If_alternativeContext *ctx) = 0;
  virtual void exitIf_alternative(SPECTREParser::If_alternativeContext *ctx) = 0;

  virtual void enterIf_body(SPECTREParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(SPECTREParser::If_bodyContext *ctx) = 0;

  virtual void enterAnalysis(SPECTREParser::AnalysisContext *ctx) = 0;
  virtual void exitAnalysis(SPECTREParser::AnalysisContext *ctx) = 0;

  virtual void enterAc(SPECTREParser::AcContext *ctx) = 0;
  virtual void exitAc(SPECTREParser::AcContext *ctx) = 0;

  virtual void enterAcmatch(SPECTREParser::AcmatchContext *ctx) = 0;
  virtual void exitAcmatch(SPECTREParser::AcmatchContext *ctx) = 0;

  virtual void enterDc(SPECTREParser::DcContext *ctx) = 0;
  virtual void exitDc(SPECTREParser::DcContext *ctx) = 0;

  virtual void enterDcmatch(SPECTREParser::DcmatchContext *ctx) = 0;
  virtual void exitDcmatch(SPECTREParser::DcmatchContext *ctx) = 0;

  virtual void enterEnvlp(SPECTREParser::EnvlpContext *ctx) = 0;
  virtual void exitEnvlp(SPECTREParser::EnvlpContext *ctx) = 0;

  virtual void enterSp(SPECTREParser::SpContext *ctx) = 0;
  virtual void exitSp(SPECTREParser::SpContext *ctx) = 0;

  virtual void enterStb(SPECTREParser::StbContext *ctx) = 0;
  virtual void exitStb(SPECTREParser::StbContext *ctx) = 0;

  virtual void enterSweep(SPECTREParser::SweepContext *ctx) = 0;
  virtual void exitSweep(SPECTREParser::SweepContext *ctx) = 0;

  virtual void enterSweep_header(SPECTREParser::Sweep_headerContext *ctx) = 0;
  virtual void exitSweep_header(SPECTREParser::Sweep_headerContext *ctx) = 0;

  virtual void enterSweep_content(SPECTREParser::Sweep_contentContext *ctx) = 0;
  virtual void exitSweep_content(SPECTREParser::Sweep_contentContext *ctx) = 0;

  virtual void enterSweep_footer(SPECTREParser::Sweep_footerContext *ctx) = 0;
  virtual void exitSweep_footer(SPECTREParser::Sweep_footerContext *ctx) = 0;

  virtual void enterTdr(SPECTREParser::TdrContext *ctx) = 0;
  virtual void exitTdr(SPECTREParser::TdrContext *ctx) = 0;

  virtual void enterTran(SPECTREParser::TranContext *ctx) = 0;
  virtual void exitTran(SPECTREParser::TranContext *ctx) = 0;

  virtual void enterXf(SPECTREParser::XfContext *ctx) = 0;
  virtual void exitXf(SPECTREParser::XfContext *ctx) = 0;

  virtual void enterPac(SPECTREParser::PacContext *ctx) = 0;
  virtual void exitPac(SPECTREParser::PacContext *ctx) = 0;

  virtual void enterPdisto(SPECTREParser::PdistoContext *ctx) = 0;
  virtual void exitPdisto(SPECTREParser::PdistoContext *ctx) = 0;

  virtual void enterPnoise(SPECTREParser::PnoiseContext *ctx) = 0;
  virtual void exitPnoise(SPECTREParser::PnoiseContext *ctx) = 0;

  virtual void enterPsp(SPECTREParser::PspContext *ctx) = 0;
  virtual void exitPsp(SPECTREParser::PspContext *ctx) = 0;

  virtual void enterPss(SPECTREParser::PssContext *ctx) = 0;
  virtual void exitPss(SPECTREParser::PssContext *ctx) = 0;

  virtual void enterPxf(SPECTREParser::PxfContext *ctx) = 0;
  virtual void exitPxf(SPECTREParser::PxfContext *ctx) = 0;

  virtual void enterPz(SPECTREParser::PzContext *ctx) = 0;
  virtual void exitPz(SPECTREParser::PzContext *ctx) = 0;

  virtual void enterQpac(SPECTREParser::QpacContext *ctx) = 0;
  virtual void exitQpac(SPECTREParser::QpacContext *ctx) = 0;

  virtual void enterQpnoise(SPECTREParser::QpnoiseContext *ctx) = 0;
  virtual void exitQpnoise(SPECTREParser::QpnoiseContext *ctx) = 0;

  virtual void enterQpsp(SPECTREParser::QpspContext *ctx) = 0;
  virtual void exitQpsp(SPECTREParser::QpspContext *ctx) = 0;

  virtual void enterQpss(SPECTREParser::QpssContext *ctx) = 0;
  virtual void exitQpss(SPECTREParser::QpssContext *ctx) = 0;

  virtual void enterQpxf(SPECTREParser::QpxfContext *ctx) = 0;
  virtual void exitQpxf(SPECTREParser::QpxfContext *ctx) = 0;

  virtual void enterSens(SPECTREParser::SensContext *ctx) = 0;
  virtual void exitSens(SPECTREParser::SensContext *ctx) = 0;

  virtual void enterSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext *ctx) = 0;
  virtual void exitSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext *ctx) = 0;

  virtual void enterSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext *ctx) = 0;
  virtual void exitSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext *ctx) = 0;

  virtual void enterSens_analyses_list(SPECTREParser::Sens_analyses_listContext *ctx) = 0;
  virtual void exitSens_analyses_list(SPECTREParser::Sens_analyses_listContext *ctx) = 0;

  virtual void enterMontecarlo(SPECTREParser::MontecarloContext *ctx) = 0;
  virtual void exitMontecarlo(SPECTREParser::MontecarloContext *ctx) = 0;

  virtual void enterMontecarlo_header(SPECTREParser::Montecarlo_headerContext *ctx) = 0;
  virtual void exitMontecarlo_header(SPECTREParser::Montecarlo_headerContext *ctx) = 0;

  virtual void enterMontecarlo_content(SPECTREParser::Montecarlo_contentContext *ctx) = 0;
  virtual void exitMontecarlo_content(SPECTREParser::Montecarlo_contentContext *ctx) = 0;

  virtual void enterMontecarlo_export(SPECTREParser::Montecarlo_exportContext *ctx) = 0;
  virtual void exitMontecarlo_export(SPECTREParser::Montecarlo_exportContext *ctx) = 0;

  virtual void enterMontecarlo_footer(SPECTREParser::Montecarlo_footerContext *ctx) = 0;
  virtual void exitMontecarlo_footer(SPECTREParser::Montecarlo_footerContext *ctx) = 0;

  virtual void enterNoise(SPECTREParser::NoiseContext *ctx) = 0;
  virtual void exitNoise(SPECTREParser::NoiseContext *ctx) = 0;

  virtual void enterChecklimit(SPECTREParser::ChecklimitContext *ctx) = 0;
  virtual void exitChecklimit(SPECTREParser::ChecklimitContext *ctx) = 0;

  virtual void enterGlobal(SPECTREParser::GlobalContext *ctx) = 0;
  virtual void exitGlobal(SPECTREParser::GlobalContext *ctx) = 0;

  virtual void enterModel(SPECTREParser::ModelContext *ctx) = 0;
  virtual void exitModel(SPECTREParser::ModelContext *ctx) = 0;

  virtual void enterModel_name(SPECTREParser::Model_nameContext *ctx) = 0;
  virtual void exitModel_name(SPECTREParser::Model_nameContext *ctx) = 0;

  virtual void enterModel_master(SPECTREParser::Model_masterContext *ctx) = 0;
  virtual void exitModel_master(SPECTREParser::Model_masterContext *ctx) = 0;

  virtual void enterControl(SPECTREParser::ControlContext *ctx) = 0;
  virtual void exitControl(SPECTREParser::ControlContext *ctx) = 0;

  virtual void enterAlter(SPECTREParser::AlterContext *ctx) = 0;
  virtual void exitAlter(SPECTREParser::AlterContext *ctx) = 0;

  virtual void enterAltergroup(SPECTREParser::AltergroupContext *ctx) = 0;
  virtual void exitAltergroup(SPECTREParser::AltergroupContext *ctx) = 0;

  virtual void enterAltergroup_header(SPECTREParser::Altergroup_headerContext *ctx) = 0;
  virtual void exitAltergroup_header(SPECTREParser::Altergroup_headerContext *ctx) = 0;

  virtual void enterAltergroup_content(SPECTREParser::Altergroup_contentContext *ctx) = 0;
  virtual void exitAltergroup_content(SPECTREParser::Altergroup_contentContext *ctx) = 0;

  virtual void enterAltergroup_footer(SPECTREParser::Altergroup_footerContext *ctx) = 0;
  virtual void exitAltergroup_footer(SPECTREParser::Altergroup_footerContext *ctx) = 0;

  virtual void enterAssert_statement(SPECTREParser::Assert_statementContext *ctx) = 0;
  virtual void exitAssert_statement(SPECTREParser::Assert_statementContext *ctx) = 0;

  virtual void enterCheck_statement(SPECTREParser::Check_statementContext *ctx) = 0;
  virtual void exitCheck_statement(SPECTREParser::Check_statementContext *ctx) = 0;

  virtual void enterSave(SPECTREParser::SaveContext *ctx) = 0;
  virtual void exitSave(SPECTREParser::SaveContext *ctx) = 0;

  virtual void enterOption(SPECTREParser::OptionContext *ctx) = 0;
  virtual void exitOption(SPECTREParser::OptionContext *ctx) = 0;

  virtual void enterSet(SPECTREParser::SetContext *ctx) = 0;
  virtual void exitSet(SPECTREParser::SetContext *ctx) = 0;

  virtual void enterShell(SPECTREParser::ShellContext *ctx) = 0;
  virtual void exitShell(SPECTREParser::ShellContext *ctx) = 0;

  virtual void enterInfo(SPECTREParser::InfoContext *ctx) = 0;
  virtual void exitInfo(SPECTREParser::InfoContext *ctx) = 0;

  virtual void enterNodeset(SPECTREParser::NodesetContext *ctx) = 0;
  virtual void exitNodeset(SPECTREParser::NodesetContext *ctx) = 0;

  virtual void enterIc(SPECTREParser::IcContext *ctx) = 0;
  virtual void exitIc(SPECTREParser::IcContext *ctx) = 0;

  virtual void enterStatistics(SPECTREParser::StatisticsContext *ctx) = 0;
  virtual void exitStatistics(SPECTREParser::StatisticsContext *ctx) = 0;

  virtual void enterStatistics_header(SPECTREParser::Statistics_headerContext *ctx) = 0;
  virtual void exitStatistics_header(SPECTREParser::Statistics_headerContext *ctx) = 0;

  virtual void enterStatistics_content(SPECTREParser::Statistics_contentContext *ctx) = 0;
  virtual void exitStatistics_content(SPECTREParser::Statistics_contentContext *ctx) = 0;

  virtual void enterStatistics_footer(SPECTREParser::Statistics_footerContext *ctx) = 0;
  virtual void exitStatistics_footer(SPECTREParser::Statistics_footerContext *ctx) = 0;

  virtual void enterProcess(SPECTREParser::ProcessContext *ctx) = 0;
  virtual void exitProcess(SPECTREParser::ProcessContext *ctx) = 0;

  virtual void enterMismatch(SPECTREParser::MismatchContext *ctx) = 0;
  virtual void exitMismatch(SPECTREParser::MismatchContext *ctx) = 0;

  virtual void enterCorrelate(SPECTREParser::CorrelateContext *ctx) = 0;
  virtual void exitCorrelate(SPECTREParser::CorrelateContext *ctx) = 0;

  virtual void enterTruncate(SPECTREParser::TruncateContext *ctx) = 0;
  virtual void exitTruncate(SPECTREParser::TruncateContext *ctx) = 0;

  virtual void enterVary(SPECTREParser::VaryContext *ctx) = 0;
  virtual void exitVary(SPECTREParser::VaryContext *ctx) = 0;

  virtual void enterReliability(SPECTREParser::ReliabilityContext *ctx) = 0;
  virtual void exitReliability(SPECTREParser::ReliabilityContext *ctx) = 0;

  virtual void enterReliability_header(SPECTREParser::Reliability_headerContext *ctx) = 0;
  virtual void exitReliability_header(SPECTREParser::Reliability_headerContext *ctx) = 0;

  virtual void enterReliability_content(SPECTREParser::Reliability_contentContext *ctx) = 0;
  virtual void exitReliability_content(SPECTREParser::Reliability_contentContext *ctx) = 0;

  virtual void enterReliability_footer(SPECTREParser::Reliability_footerContext *ctx) = 0;
  virtual void exitReliability_footer(SPECTREParser::Reliability_footerContext *ctx) = 0;

  virtual void enterReliability_control(SPECTREParser::Reliability_controlContext *ctx) = 0;
  virtual void exitReliability_control(SPECTREParser::Reliability_controlContext *ctx) = 0;

  virtual void enterGlobal_declarations(SPECTREParser::Global_declarationsContext *ctx) = 0;
  virtual void exitGlobal_declarations(SPECTREParser::Global_declarationsContext *ctx) = 0;

  virtual void enterComponent(SPECTREParser::ComponentContext *ctx) = 0;
  virtual void exitComponent(SPECTREParser::ComponentContext *ctx) = 0;

  virtual void enterComponent_id(SPECTREParser::Component_idContext *ctx) = 0;
  virtual void exitComponent_id(SPECTREParser::Component_idContext *ctx) = 0;

  virtual void enterComponent_master(SPECTREParser::Component_masterContext *ctx) = 0;
  virtual void exitComponent_master(SPECTREParser::Component_masterContext *ctx) = 0;

  virtual void enterComponent_attribute(SPECTREParser::Component_attributeContext *ctx) = 0;
  virtual void exitComponent_attribute(SPECTREParser::Component_attributeContext *ctx) = 0;

  virtual void enterComponent_value(SPECTREParser::Component_valueContext *ctx) = 0;
  virtual void exitComponent_value(SPECTREParser::Component_valueContext *ctx) = 0;

  virtual void enterComponent_value_list(SPECTREParser::Component_value_listContext *ctx) = 0;
  virtual void exitComponent_value_list(SPECTREParser::Component_value_listContext *ctx) = 0;

  virtual void enterComponent_analysis(SPECTREParser::Component_analysisContext *ctx) = 0;
  virtual void exitComponent_analysis(SPECTREParser::Component_analysisContext *ctx) = 0;

  virtual void enterNode_list(SPECTREParser::Node_listContext *ctx) = 0;
  virtual void exitNode_list(SPECTREParser::Node_listContext *ctx) = 0;

  virtual void enterNode_list_item(SPECTREParser::Node_list_itemContext *ctx) = 0;
  virtual void exitNode_list_item(SPECTREParser::Node_list_itemContext *ctx) = 0;

  virtual void enterNode_mapping(SPECTREParser::Node_mappingContext *ctx) = 0;
  virtual void exitNode_mapping(SPECTREParser::Node_mappingContext *ctx) = 0;

  virtual void enterNode_pair(SPECTREParser::Node_pairContext *ctx) = 0;
  virtual void exitNode_pair(SPECTREParser::Node_pairContext *ctx) = 0;

  virtual void enterNode_branch(SPECTREParser::Node_branchContext *ctx) = 0;
  virtual void exitNode_branch(SPECTREParser::Node_branchContext *ctx) = 0;

  virtual void enterNode(SPECTREParser::NodeContext *ctx) = 0;
  virtual void exitNode(SPECTREParser::NodeContext *ctx) = 0;

  virtual void enterExpression(SPECTREParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SPECTREParser::ExpressionContext *ctx) = 0;

  virtual void enterExpression_unary(SPECTREParser::Expression_unaryContext *ctx) = 0;
  virtual void exitExpression_unary(SPECTREParser::Expression_unaryContext *ctx) = 0;

  virtual void enterExpression_function_call(SPECTREParser::Expression_function_callContext *ctx) = 0;
  virtual void exitExpression_function_call(SPECTREParser::Expression_function_callContext *ctx) = 0;

  virtual void enterExpression_pair(SPECTREParser::Expression_pairContext *ctx) = 0;
  virtual void exitExpression_pair(SPECTREParser::Expression_pairContext *ctx) = 0;

  virtual void enterExpression_scope(SPECTREParser::Expression_scopeContext *ctx) = 0;
  virtual void exitExpression_scope(SPECTREParser::Expression_scopeContext *ctx) = 0;

  virtual void enterExpression_operator(SPECTREParser::Expression_operatorContext *ctx) = 0;
  virtual void exitExpression_operator(SPECTREParser::Expression_operatorContext *ctx) = 0;

  virtual void enterExpression_atom(SPECTREParser::Expression_atomContext *ctx) = 0;
  virtual void exitExpression_atom(SPECTREParser::Expression_atomContext *ctx) = 0;

  virtual void enterParameter_list(SPECTREParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(SPECTREParser::Parameter_listContext *ctx) = 0;

  virtual void enterParameter_list_item(SPECTREParser::Parameter_list_itemContext *ctx) = 0;
  virtual void exitParameter_list_item(SPECTREParser::Parameter_list_itemContext *ctx) = 0;

  virtual void enterParameter_assign(SPECTREParser::Parameter_assignContext *ctx) = 0;
  virtual void exitParameter_assign(SPECTREParser::Parameter_assignContext *ctx) = 0;

  virtual void enterParameter_id(SPECTREParser::Parameter_idContext *ctx) = 0;
  virtual void exitParameter_id(SPECTREParser::Parameter_idContext *ctx) = 0;

  virtual void enterParameter_access(SPECTREParser::Parameter_accessContext *ctx) = 0;
  virtual void exitParameter_access(SPECTREParser::Parameter_accessContext *ctx) = 0;

  virtual void enterValue_access(SPECTREParser::Value_accessContext *ctx) = 0;
  virtual void exitValue_access(SPECTREParser::Value_accessContext *ctx) = 0;

  virtual void enterValue_access_assign(SPECTREParser::Value_access_assignContext *ctx) = 0;
  virtual void exitValue_access_assign(SPECTREParser::Value_access_assignContext *ctx) = 0;

  virtual void enterTime_pair(SPECTREParser::Time_pairContext *ctx) = 0;
  virtual void exitTime_pair(SPECTREParser::Time_pairContext *ctx) = 0;

  virtual void enterTime_point(SPECTREParser::Time_pointContext *ctx) = 0;
  virtual void exitTime_point(SPECTREParser::Time_pointContext *ctx) = 0;

  virtual void enterFilepath(SPECTREParser::FilepathContext *ctx) = 0;
  virtual void exitFilepath(SPECTREParser::FilepathContext *ctx) = 0;

  virtual void enterFilepath_element(SPECTREParser::Filepath_elementContext *ctx) = 0;
  virtual void exitFilepath_element(SPECTREParser::Filepath_elementContext *ctx) = 0;

  virtual void enterKeyword(SPECTREParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(SPECTREParser::KeywordContext *ctx) = 0;

  virtual void enterAnalysis_type(SPECTREParser::Analysis_typeContext *ctx) = 0;
  virtual void exitAnalysis_type(SPECTREParser::Analysis_typeContext *ctx) = 0;

  virtual void enterComponent_type(SPECTREParser::Component_typeContext *ctx) = 0;
  virtual void exitComponent_type(SPECTREParser::Component_typeContext *ctx) = 0;


};

}  // namespace edacurry
