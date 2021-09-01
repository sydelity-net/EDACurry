
// Generated from g4files/SPECTREParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SPECTREParserListener.h"


namespace edacurry {

/**
 * This class provides an empty implementation of SPECTREParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SPECTREParserBaseListener : public SPECTREParserListener {
public:

  virtual void enterNetlist(SPECTREParser::NetlistContext * /*ctx*/) override { }
  virtual void exitNetlist(SPECTREParser::NetlistContext * /*ctx*/) override { }

  virtual void enterNetlist_title(SPECTREParser::Netlist_titleContext * /*ctx*/) override { }
  virtual void exitNetlist_title(SPECTREParser::Netlist_titleContext * /*ctx*/) override { }

  virtual void enterNetlist_entity(SPECTREParser::Netlist_entityContext * /*ctx*/) override { }
  virtual void exitNetlist_entity(SPECTREParser::Netlist_entityContext * /*ctx*/) override { }

  virtual void enterInclude(SPECTREParser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(SPECTREParser::IncludeContext * /*ctx*/) override { }

  virtual void enterStandard_include(SPECTREParser::Standard_includeContext * /*ctx*/) override { }
  virtual void exitStandard_include(SPECTREParser::Standard_includeContext * /*ctx*/) override { }

  virtual void enterCpp_include(SPECTREParser::Cpp_includeContext * /*ctx*/) override { }
  virtual void exitCpp_include(SPECTREParser::Cpp_includeContext * /*ctx*/) override { }

  virtual void enterAhdl_include(SPECTREParser::Ahdl_includeContext * /*ctx*/) override { }
  virtual void exitAhdl_include(SPECTREParser::Ahdl_includeContext * /*ctx*/) override { }

  virtual void enterLang(SPECTREParser::LangContext * /*ctx*/) override { }
  virtual void exitLang(SPECTREParser::LangContext * /*ctx*/) override { }

  virtual void enterLibrary(SPECTREParser::LibraryContext * /*ctx*/) override { }
  virtual void exitLibrary(SPECTREParser::LibraryContext * /*ctx*/) override { }

  virtual void enterLibrary_header(SPECTREParser::Library_headerContext * /*ctx*/) override { }
  virtual void exitLibrary_header(SPECTREParser::Library_headerContext * /*ctx*/) override { }

  virtual void enterLibrary_content(SPECTREParser::Library_contentContext * /*ctx*/) override { }
  virtual void exitLibrary_content(SPECTREParser::Library_contentContext * /*ctx*/) override { }

  virtual void enterLibrary_footer(SPECTREParser::Library_footerContext * /*ctx*/) override { }
  virtual void exitLibrary_footer(SPECTREParser::Library_footerContext * /*ctx*/) override { }

  virtual void enterSection(SPECTREParser::SectionContext * /*ctx*/) override { }
  virtual void exitSection(SPECTREParser::SectionContext * /*ctx*/) override { }

  virtual void enterSection_header(SPECTREParser::Section_headerContext * /*ctx*/) override { }
  virtual void exitSection_header(SPECTREParser::Section_headerContext * /*ctx*/) override { }

  virtual void enterSection_content(SPECTREParser::Section_contentContext * /*ctx*/) override { }
  virtual void exitSection_content(SPECTREParser::Section_contentContext * /*ctx*/) override { }

  virtual void enterSection_footer(SPECTREParser::Section_footerContext * /*ctx*/) override { }
  virtual void exitSection_footer(SPECTREParser::Section_footerContext * /*ctx*/) override { }

  virtual void enterAnalogmodel(SPECTREParser::AnalogmodelContext * /*ctx*/) override { }
  virtual void exitAnalogmodel(SPECTREParser::AnalogmodelContext * /*ctx*/) override { }

  virtual void enterSubckt(SPECTREParser::SubcktContext * /*ctx*/) override { }
  virtual void exitSubckt(SPECTREParser::SubcktContext * /*ctx*/) override { }

  virtual void enterSubckt_header(SPECTREParser::Subckt_headerContext * /*ctx*/) override { }
  virtual void exitSubckt_header(SPECTREParser::Subckt_headerContext * /*ctx*/) override { }

  virtual void enterSubckt_content(SPECTREParser::Subckt_contentContext * /*ctx*/) override { }
  virtual void exitSubckt_content(SPECTREParser::Subckt_contentContext * /*ctx*/) override { }

  virtual void enterSubckt_footer(SPECTREParser::Subckt_footerContext * /*ctx*/) override { }
  virtual void exitSubckt_footer(SPECTREParser::Subckt_footerContext * /*ctx*/) override { }

  virtual void enterIf_statement(SPECTREParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(SPECTREParser::If_statementContext * /*ctx*/) override { }

  virtual void enterIf_alternative(SPECTREParser::If_alternativeContext * /*ctx*/) override { }
  virtual void exitIf_alternative(SPECTREParser::If_alternativeContext * /*ctx*/) override { }

  virtual void enterIf_body(SPECTREParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(SPECTREParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterAnalysis(SPECTREParser::AnalysisContext * /*ctx*/) override { }
  virtual void exitAnalysis(SPECTREParser::AnalysisContext * /*ctx*/) override { }

  virtual void enterAc(SPECTREParser::AcContext * /*ctx*/) override { }
  virtual void exitAc(SPECTREParser::AcContext * /*ctx*/) override { }

  virtual void enterAcmatch(SPECTREParser::AcmatchContext * /*ctx*/) override { }
  virtual void exitAcmatch(SPECTREParser::AcmatchContext * /*ctx*/) override { }

  virtual void enterDc(SPECTREParser::DcContext * /*ctx*/) override { }
  virtual void exitDc(SPECTREParser::DcContext * /*ctx*/) override { }

  virtual void enterDcmatch(SPECTREParser::DcmatchContext * /*ctx*/) override { }
  virtual void exitDcmatch(SPECTREParser::DcmatchContext * /*ctx*/) override { }

  virtual void enterEnvlp(SPECTREParser::EnvlpContext * /*ctx*/) override { }
  virtual void exitEnvlp(SPECTREParser::EnvlpContext * /*ctx*/) override { }

  virtual void enterSp(SPECTREParser::SpContext * /*ctx*/) override { }
  virtual void exitSp(SPECTREParser::SpContext * /*ctx*/) override { }

  virtual void enterStb(SPECTREParser::StbContext * /*ctx*/) override { }
  virtual void exitStb(SPECTREParser::StbContext * /*ctx*/) override { }

  virtual void enterSweep(SPECTREParser::SweepContext * /*ctx*/) override { }
  virtual void exitSweep(SPECTREParser::SweepContext * /*ctx*/) override { }

  virtual void enterSweep_header(SPECTREParser::Sweep_headerContext * /*ctx*/) override { }
  virtual void exitSweep_header(SPECTREParser::Sweep_headerContext * /*ctx*/) override { }

  virtual void enterSweep_content(SPECTREParser::Sweep_contentContext * /*ctx*/) override { }
  virtual void exitSweep_content(SPECTREParser::Sweep_contentContext * /*ctx*/) override { }

  virtual void enterSweep_footer(SPECTREParser::Sweep_footerContext * /*ctx*/) override { }
  virtual void exitSweep_footer(SPECTREParser::Sweep_footerContext * /*ctx*/) override { }

  virtual void enterTdr(SPECTREParser::TdrContext * /*ctx*/) override { }
  virtual void exitTdr(SPECTREParser::TdrContext * /*ctx*/) override { }

  virtual void enterTran(SPECTREParser::TranContext * /*ctx*/) override { }
  virtual void exitTran(SPECTREParser::TranContext * /*ctx*/) override { }

  virtual void enterXf(SPECTREParser::XfContext * /*ctx*/) override { }
  virtual void exitXf(SPECTREParser::XfContext * /*ctx*/) override { }

  virtual void enterPac(SPECTREParser::PacContext * /*ctx*/) override { }
  virtual void exitPac(SPECTREParser::PacContext * /*ctx*/) override { }

  virtual void enterPdisto(SPECTREParser::PdistoContext * /*ctx*/) override { }
  virtual void exitPdisto(SPECTREParser::PdistoContext * /*ctx*/) override { }

  virtual void enterPnoise(SPECTREParser::PnoiseContext * /*ctx*/) override { }
  virtual void exitPnoise(SPECTREParser::PnoiseContext * /*ctx*/) override { }

  virtual void enterPsp(SPECTREParser::PspContext * /*ctx*/) override { }
  virtual void exitPsp(SPECTREParser::PspContext * /*ctx*/) override { }

  virtual void enterPss(SPECTREParser::PssContext * /*ctx*/) override { }
  virtual void exitPss(SPECTREParser::PssContext * /*ctx*/) override { }

  virtual void enterPxf(SPECTREParser::PxfContext * /*ctx*/) override { }
  virtual void exitPxf(SPECTREParser::PxfContext * /*ctx*/) override { }

  virtual void enterPz(SPECTREParser::PzContext * /*ctx*/) override { }
  virtual void exitPz(SPECTREParser::PzContext * /*ctx*/) override { }

  virtual void enterQpac(SPECTREParser::QpacContext * /*ctx*/) override { }
  virtual void exitQpac(SPECTREParser::QpacContext * /*ctx*/) override { }

  virtual void enterQpnoise(SPECTREParser::QpnoiseContext * /*ctx*/) override { }
  virtual void exitQpnoise(SPECTREParser::QpnoiseContext * /*ctx*/) override { }

  virtual void enterQpsp(SPECTREParser::QpspContext * /*ctx*/) override { }
  virtual void exitQpsp(SPECTREParser::QpspContext * /*ctx*/) override { }

  virtual void enterQpss(SPECTREParser::QpssContext * /*ctx*/) override { }
  virtual void exitQpss(SPECTREParser::QpssContext * /*ctx*/) override { }

  virtual void enterQpxf(SPECTREParser::QpxfContext * /*ctx*/) override { }
  virtual void exitQpxf(SPECTREParser::QpxfContext * /*ctx*/) override { }

  virtual void enterSens(SPECTREParser::SensContext * /*ctx*/) override { }
  virtual void exitSens(SPECTREParser::SensContext * /*ctx*/) override { }

  virtual void enterSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext * /*ctx*/) override { }
  virtual void exitSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext * /*ctx*/) override { }

  virtual void enterSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext * /*ctx*/) override { }
  virtual void exitSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext * /*ctx*/) override { }

  virtual void enterSens_analyses_list(SPECTREParser::Sens_analyses_listContext * /*ctx*/) override { }
  virtual void exitSens_analyses_list(SPECTREParser::Sens_analyses_listContext * /*ctx*/) override { }

  virtual void enterMontecarlo(SPECTREParser::MontecarloContext * /*ctx*/) override { }
  virtual void exitMontecarlo(SPECTREParser::MontecarloContext * /*ctx*/) override { }

  virtual void enterMontecarlo_header(SPECTREParser::Montecarlo_headerContext * /*ctx*/) override { }
  virtual void exitMontecarlo_header(SPECTREParser::Montecarlo_headerContext * /*ctx*/) override { }

  virtual void enterMontecarlo_content(SPECTREParser::Montecarlo_contentContext * /*ctx*/) override { }
  virtual void exitMontecarlo_content(SPECTREParser::Montecarlo_contentContext * /*ctx*/) override { }

  virtual void enterMontecarlo_export(SPECTREParser::Montecarlo_exportContext * /*ctx*/) override { }
  virtual void exitMontecarlo_export(SPECTREParser::Montecarlo_exportContext * /*ctx*/) override { }

  virtual void enterMontecarlo_footer(SPECTREParser::Montecarlo_footerContext * /*ctx*/) override { }
  virtual void exitMontecarlo_footer(SPECTREParser::Montecarlo_footerContext * /*ctx*/) override { }

  virtual void enterNoise(SPECTREParser::NoiseContext * /*ctx*/) override { }
  virtual void exitNoise(SPECTREParser::NoiseContext * /*ctx*/) override { }

  virtual void enterChecklimit(SPECTREParser::ChecklimitContext * /*ctx*/) override { }
  virtual void exitChecklimit(SPECTREParser::ChecklimitContext * /*ctx*/) override { }

  virtual void enterGlobal(SPECTREParser::GlobalContext * /*ctx*/) override { }
  virtual void exitGlobal(SPECTREParser::GlobalContext * /*ctx*/) override { }

  virtual void enterModel(SPECTREParser::ModelContext * /*ctx*/) override { }
  virtual void exitModel(SPECTREParser::ModelContext * /*ctx*/) override { }

  virtual void enterModel_name(SPECTREParser::Model_nameContext * /*ctx*/) override { }
  virtual void exitModel_name(SPECTREParser::Model_nameContext * /*ctx*/) override { }

  virtual void enterModel_master(SPECTREParser::Model_masterContext * /*ctx*/) override { }
  virtual void exitModel_master(SPECTREParser::Model_masterContext * /*ctx*/) override { }

  virtual void enterControl(SPECTREParser::ControlContext * /*ctx*/) override { }
  virtual void exitControl(SPECTREParser::ControlContext * /*ctx*/) override { }

  virtual void enterAlter(SPECTREParser::AlterContext * /*ctx*/) override { }
  virtual void exitAlter(SPECTREParser::AlterContext * /*ctx*/) override { }

  virtual void enterAltergroup(SPECTREParser::AltergroupContext * /*ctx*/) override { }
  virtual void exitAltergroup(SPECTREParser::AltergroupContext * /*ctx*/) override { }

  virtual void enterAltergroup_header(SPECTREParser::Altergroup_headerContext * /*ctx*/) override { }
  virtual void exitAltergroup_header(SPECTREParser::Altergroup_headerContext * /*ctx*/) override { }

  virtual void enterAltergroup_content(SPECTREParser::Altergroup_contentContext * /*ctx*/) override { }
  virtual void exitAltergroup_content(SPECTREParser::Altergroup_contentContext * /*ctx*/) override { }

  virtual void enterAltergroup_footer(SPECTREParser::Altergroup_footerContext * /*ctx*/) override { }
  virtual void exitAltergroup_footer(SPECTREParser::Altergroup_footerContext * /*ctx*/) override { }

  virtual void enterAssert_statement(SPECTREParser::Assert_statementContext * /*ctx*/) override { }
  virtual void exitAssert_statement(SPECTREParser::Assert_statementContext * /*ctx*/) override { }

  virtual void enterCheck_statement(SPECTREParser::Check_statementContext * /*ctx*/) override { }
  virtual void exitCheck_statement(SPECTREParser::Check_statementContext * /*ctx*/) override { }

  virtual void enterSave(SPECTREParser::SaveContext * /*ctx*/) override { }
  virtual void exitSave(SPECTREParser::SaveContext * /*ctx*/) override { }

  virtual void enterOption(SPECTREParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(SPECTREParser::OptionContext * /*ctx*/) override { }

  virtual void enterSet(SPECTREParser::SetContext * /*ctx*/) override { }
  virtual void exitSet(SPECTREParser::SetContext * /*ctx*/) override { }

  virtual void enterShell(SPECTREParser::ShellContext * /*ctx*/) override { }
  virtual void exitShell(SPECTREParser::ShellContext * /*ctx*/) override { }

  virtual void enterInfo(SPECTREParser::InfoContext * /*ctx*/) override { }
  virtual void exitInfo(SPECTREParser::InfoContext * /*ctx*/) override { }

  virtual void enterNodeset(SPECTREParser::NodesetContext * /*ctx*/) override { }
  virtual void exitNodeset(SPECTREParser::NodesetContext * /*ctx*/) override { }

  virtual void enterIc(SPECTREParser::IcContext * /*ctx*/) override { }
  virtual void exitIc(SPECTREParser::IcContext * /*ctx*/) override { }

  virtual void enterStatistics(SPECTREParser::StatisticsContext * /*ctx*/) override { }
  virtual void exitStatistics(SPECTREParser::StatisticsContext * /*ctx*/) override { }

  virtual void enterStatistics_header(SPECTREParser::Statistics_headerContext * /*ctx*/) override { }
  virtual void exitStatistics_header(SPECTREParser::Statistics_headerContext * /*ctx*/) override { }

  virtual void enterStatistics_content(SPECTREParser::Statistics_contentContext * /*ctx*/) override { }
  virtual void exitStatistics_content(SPECTREParser::Statistics_contentContext * /*ctx*/) override { }

  virtual void enterStatistics_footer(SPECTREParser::Statistics_footerContext * /*ctx*/) override { }
  virtual void exitStatistics_footer(SPECTREParser::Statistics_footerContext * /*ctx*/) override { }

  virtual void enterProcess(SPECTREParser::ProcessContext * /*ctx*/) override { }
  virtual void exitProcess(SPECTREParser::ProcessContext * /*ctx*/) override { }

  virtual void enterMismatch(SPECTREParser::MismatchContext * /*ctx*/) override { }
  virtual void exitMismatch(SPECTREParser::MismatchContext * /*ctx*/) override { }

  virtual void enterCorrelate(SPECTREParser::CorrelateContext * /*ctx*/) override { }
  virtual void exitCorrelate(SPECTREParser::CorrelateContext * /*ctx*/) override { }

  virtual void enterTruncate(SPECTREParser::TruncateContext * /*ctx*/) override { }
  virtual void exitTruncate(SPECTREParser::TruncateContext * /*ctx*/) override { }

  virtual void enterVary(SPECTREParser::VaryContext * /*ctx*/) override { }
  virtual void exitVary(SPECTREParser::VaryContext * /*ctx*/) override { }

  virtual void enterReliability(SPECTREParser::ReliabilityContext * /*ctx*/) override { }
  virtual void exitReliability(SPECTREParser::ReliabilityContext * /*ctx*/) override { }

  virtual void enterReliability_header(SPECTREParser::Reliability_headerContext * /*ctx*/) override { }
  virtual void exitReliability_header(SPECTREParser::Reliability_headerContext * /*ctx*/) override { }

  virtual void enterReliability_content(SPECTREParser::Reliability_contentContext * /*ctx*/) override { }
  virtual void exitReliability_content(SPECTREParser::Reliability_contentContext * /*ctx*/) override { }

  virtual void enterReliability_footer(SPECTREParser::Reliability_footerContext * /*ctx*/) override { }
  virtual void exitReliability_footer(SPECTREParser::Reliability_footerContext * /*ctx*/) override { }

  virtual void enterReliability_control(SPECTREParser::Reliability_controlContext * /*ctx*/) override { }
  virtual void exitReliability_control(SPECTREParser::Reliability_controlContext * /*ctx*/) override { }

  virtual void enterGlobal_declarations(SPECTREParser::Global_declarationsContext * /*ctx*/) override { }
  virtual void exitGlobal_declarations(SPECTREParser::Global_declarationsContext * /*ctx*/) override { }

  virtual void enterComponent(SPECTREParser::ComponentContext * /*ctx*/) override { }
  virtual void exitComponent(SPECTREParser::ComponentContext * /*ctx*/) override { }

  virtual void enterComponent_id(SPECTREParser::Component_idContext * /*ctx*/) override { }
  virtual void exitComponent_id(SPECTREParser::Component_idContext * /*ctx*/) override { }

  virtual void enterComponent_master(SPECTREParser::Component_masterContext * /*ctx*/) override { }
  virtual void exitComponent_master(SPECTREParser::Component_masterContext * /*ctx*/) override { }

  virtual void enterComponent_attribute(SPECTREParser::Component_attributeContext * /*ctx*/) override { }
  virtual void exitComponent_attribute(SPECTREParser::Component_attributeContext * /*ctx*/) override { }

  virtual void enterComponent_value(SPECTREParser::Component_valueContext * /*ctx*/) override { }
  virtual void exitComponent_value(SPECTREParser::Component_valueContext * /*ctx*/) override { }

  virtual void enterComponent_value_list(SPECTREParser::Component_value_listContext * /*ctx*/) override { }
  virtual void exitComponent_value_list(SPECTREParser::Component_value_listContext * /*ctx*/) override { }

  virtual void enterComponent_analysis(SPECTREParser::Component_analysisContext * /*ctx*/) override { }
  virtual void exitComponent_analysis(SPECTREParser::Component_analysisContext * /*ctx*/) override { }

  virtual void enterNode_list(SPECTREParser::Node_listContext * /*ctx*/) override { }
  virtual void exitNode_list(SPECTREParser::Node_listContext * /*ctx*/) override { }

  virtual void enterNode_list_item(SPECTREParser::Node_list_itemContext * /*ctx*/) override { }
  virtual void exitNode_list_item(SPECTREParser::Node_list_itemContext * /*ctx*/) override { }

  virtual void enterNode_mapping(SPECTREParser::Node_mappingContext * /*ctx*/) override { }
  virtual void exitNode_mapping(SPECTREParser::Node_mappingContext * /*ctx*/) override { }

  virtual void enterNode_pair(SPECTREParser::Node_pairContext * /*ctx*/) override { }
  virtual void exitNode_pair(SPECTREParser::Node_pairContext * /*ctx*/) override { }

  virtual void enterNode_branch(SPECTREParser::Node_branchContext * /*ctx*/) override { }
  virtual void exitNode_branch(SPECTREParser::Node_branchContext * /*ctx*/) override { }

  virtual void enterNode(SPECTREParser::NodeContext * /*ctx*/) override { }
  virtual void exitNode(SPECTREParser::NodeContext * /*ctx*/) override { }

  virtual void enterExpression(SPECTREParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SPECTREParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterExpression_unary(SPECTREParser::Expression_unaryContext * /*ctx*/) override { }
  virtual void exitExpression_unary(SPECTREParser::Expression_unaryContext * /*ctx*/) override { }

  virtual void enterExpression_function_call(SPECTREParser::Expression_function_callContext * /*ctx*/) override { }
  virtual void exitExpression_function_call(SPECTREParser::Expression_function_callContext * /*ctx*/) override { }

  virtual void enterExpression_pair(SPECTREParser::Expression_pairContext * /*ctx*/) override { }
  virtual void exitExpression_pair(SPECTREParser::Expression_pairContext * /*ctx*/) override { }

  virtual void enterExpression_scope(SPECTREParser::Expression_scopeContext * /*ctx*/) override { }
  virtual void exitExpression_scope(SPECTREParser::Expression_scopeContext * /*ctx*/) override { }

  virtual void enterExpression_operator(SPECTREParser::Expression_operatorContext * /*ctx*/) override { }
  virtual void exitExpression_operator(SPECTREParser::Expression_operatorContext * /*ctx*/) override { }

  virtual void enterExpression_atom(SPECTREParser::Expression_atomContext * /*ctx*/) override { }
  virtual void exitExpression_atom(SPECTREParser::Expression_atomContext * /*ctx*/) override { }

  virtual void enterParameter_list(SPECTREParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(SPECTREParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterParameter_list_item(SPECTREParser::Parameter_list_itemContext * /*ctx*/) override { }
  virtual void exitParameter_list_item(SPECTREParser::Parameter_list_itemContext * /*ctx*/) override { }

  virtual void enterParameter_assign(SPECTREParser::Parameter_assignContext * /*ctx*/) override { }
  virtual void exitParameter_assign(SPECTREParser::Parameter_assignContext * /*ctx*/) override { }

  virtual void enterParameter_id(SPECTREParser::Parameter_idContext * /*ctx*/) override { }
  virtual void exitParameter_id(SPECTREParser::Parameter_idContext * /*ctx*/) override { }

  virtual void enterParameter_access(SPECTREParser::Parameter_accessContext * /*ctx*/) override { }
  virtual void exitParameter_access(SPECTREParser::Parameter_accessContext * /*ctx*/) override { }

  virtual void enterValue_access(SPECTREParser::Value_accessContext * /*ctx*/) override { }
  virtual void exitValue_access(SPECTREParser::Value_accessContext * /*ctx*/) override { }

  virtual void enterValue_access_assign(SPECTREParser::Value_access_assignContext * /*ctx*/) override { }
  virtual void exitValue_access_assign(SPECTREParser::Value_access_assignContext * /*ctx*/) override { }

  virtual void enterTime_pair(SPECTREParser::Time_pairContext * /*ctx*/) override { }
  virtual void exitTime_pair(SPECTREParser::Time_pairContext * /*ctx*/) override { }

  virtual void enterTime_point(SPECTREParser::Time_pointContext * /*ctx*/) override { }
  virtual void exitTime_point(SPECTREParser::Time_pointContext * /*ctx*/) override { }

  virtual void enterFilepath(SPECTREParser::FilepathContext * /*ctx*/) override { }
  virtual void exitFilepath(SPECTREParser::FilepathContext * /*ctx*/) override { }

  virtual void enterFilepath_element(SPECTREParser::Filepath_elementContext * /*ctx*/) override { }
  virtual void exitFilepath_element(SPECTREParser::Filepath_elementContext * /*ctx*/) override { }

  virtual void enterKeyword(SPECTREParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(SPECTREParser::KeywordContext * /*ctx*/) override { }

  virtual void enterAnalysis_type(SPECTREParser::Analysis_typeContext * /*ctx*/) override { }
  virtual void exitAnalysis_type(SPECTREParser::Analysis_typeContext * /*ctx*/) override { }

  virtual void enterComponent_type(SPECTREParser::Component_typeContext * /*ctx*/) override { }
  virtual void exitComponent_type(SPECTREParser::Component_typeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace edacurry
