
// Generated from g4files/SPECTREParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SPECTREParserVisitor.h"


namespace edacurry {

/**
 * This class provides an empty implementation of SPECTREParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SPECTREParserBaseVisitor : public SPECTREParserVisitor {
public:

  virtual antlrcpp::Any visitNetlist(SPECTREParser::NetlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNetlist_title(SPECTREParser::Netlist_titleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNetlist_entity(SPECTREParser::Netlist_entityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude(SPECTREParser::IncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_include(SPECTREParser::Standard_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCpp_include(SPECTREParser::Cpp_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAhdl_include(SPECTREParser::Ahdl_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLang(SPECTREParser::LangContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary(SPECTREParser::LibraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_header(SPECTREParser::Library_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_content(SPECTREParser::Library_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_footer(SPECTREParser::Library_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSection(SPECTREParser::SectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSection_header(SPECTREParser::Section_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSection_content(SPECTREParser::Section_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSection_footer(SPECTREParser::Section_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalogmodel(SPECTREParser::AnalogmodelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt(SPECTREParser::SubcktContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_header(SPECTREParser::Subckt_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_content(SPECTREParser::Subckt_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubckt_footer(SPECTREParser::Subckt_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(SPECTREParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_alternative(SPECTREParser::If_alternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_body(SPECTREParser::If_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalysis(SPECTREParser::AnalysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAc(SPECTREParser::AcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcmatch(SPECTREParser::AcmatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDc(SPECTREParser::DcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcmatch(SPECTREParser::DcmatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnvlp(SPECTREParser::EnvlpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSp(SPECTREParser::SpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStb(SPECTREParser::StbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSweep(SPECTREParser::SweepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSweep_header(SPECTREParser::Sweep_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSweep_content(SPECTREParser::Sweep_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSweep_footer(SPECTREParser::Sweep_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTdr(SPECTREParser::TdrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTran(SPECTREParser::TranContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXf(SPECTREParser::XfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPac(SPECTREParser::PacContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPdisto(SPECTREParser::PdistoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPnoise(SPECTREParser::PnoiseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPsp(SPECTREParser::PspContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPss(SPECTREParser::PssContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPxf(SPECTREParser::PxfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPz(SPECTREParser::PzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQpac(SPECTREParser::QpacContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQpnoise(SPECTREParser::QpnoiseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQpsp(SPECTREParser::QpspContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQpss(SPECTREParser::QpssContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQpxf(SPECTREParser::QpxfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSens(SPECTREParser::SensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSens_analyses_list(SPECTREParser::Sens_analyses_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMontecarlo(SPECTREParser::MontecarloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMontecarlo_header(SPECTREParser::Montecarlo_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMontecarlo_content(SPECTREParser::Montecarlo_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMontecarlo_export(SPECTREParser::Montecarlo_exportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMontecarlo_footer(SPECTREParser::Montecarlo_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoise(SPECTREParser::NoiseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChecklimit(SPECTREParser::ChecklimitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal(SPECTREParser::GlobalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel(SPECTREParser::ModelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_name(SPECTREParser::Model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_master(SPECTREParser::Model_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControl(SPECTREParser::ControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter(SPECTREParser::AlterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltergroup(SPECTREParser::AltergroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltergroup_header(SPECTREParser::Altergroup_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltergroup_content(SPECTREParser::Altergroup_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltergroup_footer(SPECTREParser::Altergroup_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssert_statement(SPECTREParser::Assert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_statement(SPECTREParser::Check_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSave(SPECTREParser::SaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption(SPECTREParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet(SPECTREParser::SetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShell(SPECTREParser::ShellContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfo(SPECTREParser::InfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNodeset(SPECTREParser::NodesetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIc(SPECTREParser::IcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatistics(SPECTREParser::StatisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatistics_header(SPECTREParser::Statistics_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatistics_content(SPECTREParser::Statistics_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatistics_footer(SPECTREParser::Statistics_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcess(SPECTREParser::ProcessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMismatch(SPECTREParser::MismatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCorrelate(SPECTREParser::CorrelateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate(SPECTREParser::TruncateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVary(SPECTREParser::VaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReliability(SPECTREParser::ReliabilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReliability_header(SPECTREParser::Reliability_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReliability_content(SPECTREParser::Reliability_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReliability_footer(SPECTREParser::Reliability_footerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReliability_control(SPECTREParser::Reliability_controlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal_declarations(SPECTREParser::Global_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent(SPECTREParser::ComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_id(SPECTREParser::Component_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_master(SPECTREParser::Component_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_attribute(SPECTREParser::Component_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_value(SPECTREParser::Component_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_value_list(SPECTREParser::Component_value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_analysis(SPECTREParser::Component_analysisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_list(SPECTREParser::Node_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_list_item(SPECTREParser::Node_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_mapping(SPECTREParser::Node_mappingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_pair(SPECTREParser::Node_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode_branch(SPECTREParser::Node_branchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNode(SPECTREParser::NodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SPECTREParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_unary(SPECTREParser::Expression_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_function_call(SPECTREParser::Expression_function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_pair(SPECTREParser::Expression_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_scope(SPECTREParser::Expression_scopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_operator(SPECTREParser::Expression_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_atom(SPECTREParser::Expression_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list(SPECTREParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list_item(SPECTREParser::Parameter_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_assign(SPECTREParser::Parameter_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_id(SPECTREParser::Parameter_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_access(SPECTREParser::Parameter_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_access(SPECTREParser::Value_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_access_assign(SPECTREParser::Value_access_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTime_pair(SPECTREParser::Time_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTime_point(SPECTREParser::Time_pointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilepath(SPECTREParser::FilepathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilepath_element(SPECTREParser::Filepath_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(SPECTREParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalysis_type(SPECTREParser::Analysis_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_type(SPECTREParser::Component_typeContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace edacurry
