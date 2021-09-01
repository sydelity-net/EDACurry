
// Generated from g4files/SPECTREParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SPECTREParser.h"


namespace edacurry {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SPECTREParser.
 */
class  SPECTREParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SPECTREParser.
   */
    virtual antlrcpp::Any visitNetlist(SPECTREParser::NetlistContext *context) = 0;

    virtual antlrcpp::Any visitNetlist_title(SPECTREParser::Netlist_titleContext *context) = 0;

    virtual antlrcpp::Any visitNetlist_entity(SPECTREParser::Netlist_entityContext *context) = 0;

    virtual antlrcpp::Any visitInclude(SPECTREParser::IncludeContext *context) = 0;

    virtual antlrcpp::Any visitStandard_include(SPECTREParser::Standard_includeContext *context) = 0;

    virtual antlrcpp::Any visitCpp_include(SPECTREParser::Cpp_includeContext *context) = 0;

    virtual antlrcpp::Any visitAhdl_include(SPECTREParser::Ahdl_includeContext *context) = 0;

    virtual antlrcpp::Any visitLang(SPECTREParser::LangContext *context) = 0;

    virtual antlrcpp::Any visitLibrary(SPECTREParser::LibraryContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_header(SPECTREParser::Library_headerContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_content(SPECTREParser::Library_contentContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_footer(SPECTREParser::Library_footerContext *context) = 0;

    virtual antlrcpp::Any visitSection(SPECTREParser::SectionContext *context) = 0;

    virtual antlrcpp::Any visitSection_header(SPECTREParser::Section_headerContext *context) = 0;

    virtual antlrcpp::Any visitSection_content(SPECTREParser::Section_contentContext *context) = 0;

    virtual antlrcpp::Any visitSection_footer(SPECTREParser::Section_footerContext *context) = 0;

    virtual antlrcpp::Any visitAnalogmodel(SPECTREParser::AnalogmodelContext *context) = 0;

    virtual antlrcpp::Any visitSubckt(SPECTREParser::SubcktContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_header(SPECTREParser::Subckt_headerContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_content(SPECTREParser::Subckt_contentContext *context) = 0;

    virtual antlrcpp::Any visitSubckt_footer(SPECTREParser::Subckt_footerContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(SPECTREParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_alternative(SPECTREParser::If_alternativeContext *context) = 0;

    virtual antlrcpp::Any visitIf_body(SPECTREParser::If_bodyContext *context) = 0;

    virtual antlrcpp::Any visitAnalysis(SPECTREParser::AnalysisContext *context) = 0;

    virtual antlrcpp::Any visitAc(SPECTREParser::AcContext *context) = 0;

    virtual antlrcpp::Any visitAcmatch(SPECTREParser::AcmatchContext *context) = 0;

    virtual antlrcpp::Any visitDc(SPECTREParser::DcContext *context) = 0;

    virtual antlrcpp::Any visitDcmatch(SPECTREParser::DcmatchContext *context) = 0;

    virtual antlrcpp::Any visitEnvlp(SPECTREParser::EnvlpContext *context) = 0;

    virtual antlrcpp::Any visitSp(SPECTREParser::SpContext *context) = 0;

    virtual antlrcpp::Any visitStb(SPECTREParser::StbContext *context) = 0;

    virtual antlrcpp::Any visitSweep(SPECTREParser::SweepContext *context) = 0;

    virtual antlrcpp::Any visitSweep_header(SPECTREParser::Sweep_headerContext *context) = 0;

    virtual antlrcpp::Any visitSweep_content(SPECTREParser::Sweep_contentContext *context) = 0;

    virtual antlrcpp::Any visitSweep_footer(SPECTREParser::Sweep_footerContext *context) = 0;

    virtual antlrcpp::Any visitTdr(SPECTREParser::TdrContext *context) = 0;

    virtual antlrcpp::Any visitTran(SPECTREParser::TranContext *context) = 0;

    virtual antlrcpp::Any visitXf(SPECTREParser::XfContext *context) = 0;

    virtual antlrcpp::Any visitPac(SPECTREParser::PacContext *context) = 0;

    virtual antlrcpp::Any visitPdisto(SPECTREParser::PdistoContext *context) = 0;

    virtual antlrcpp::Any visitPnoise(SPECTREParser::PnoiseContext *context) = 0;

    virtual antlrcpp::Any visitPsp(SPECTREParser::PspContext *context) = 0;

    virtual antlrcpp::Any visitPss(SPECTREParser::PssContext *context) = 0;

    virtual antlrcpp::Any visitPxf(SPECTREParser::PxfContext *context) = 0;

    virtual antlrcpp::Any visitPz(SPECTREParser::PzContext *context) = 0;

    virtual antlrcpp::Any visitQpac(SPECTREParser::QpacContext *context) = 0;

    virtual antlrcpp::Any visitQpnoise(SPECTREParser::QpnoiseContext *context) = 0;

    virtual antlrcpp::Any visitQpsp(SPECTREParser::QpspContext *context) = 0;

    virtual antlrcpp::Any visitQpss(SPECTREParser::QpssContext *context) = 0;

    virtual antlrcpp::Any visitQpxf(SPECTREParser::QpxfContext *context) = 0;

    virtual antlrcpp::Any visitSens(SPECTREParser::SensContext *context) = 0;

    virtual antlrcpp::Any visitSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext *context) = 0;

    virtual antlrcpp::Any visitSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext *context) = 0;

    virtual antlrcpp::Any visitSens_analyses_list(SPECTREParser::Sens_analyses_listContext *context) = 0;

    virtual antlrcpp::Any visitMontecarlo(SPECTREParser::MontecarloContext *context) = 0;

    virtual antlrcpp::Any visitMontecarlo_header(SPECTREParser::Montecarlo_headerContext *context) = 0;

    virtual antlrcpp::Any visitMontecarlo_content(SPECTREParser::Montecarlo_contentContext *context) = 0;

    virtual antlrcpp::Any visitMontecarlo_export(SPECTREParser::Montecarlo_exportContext *context) = 0;

    virtual antlrcpp::Any visitMontecarlo_footer(SPECTREParser::Montecarlo_footerContext *context) = 0;

    virtual antlrcpp::Any visitNoise(SPECTREParser::NoiseContext *context) = 0;

    virtual antlrcpp::Any visitChecklimit(SPECTREParser::ChecklimitContext *context) = 0;

    virtual antlrcpp::Any visitGlobal(SPECTREParser::GlobalContext *context) = 0;

    virtual antlrcpp::Any visitModel(SPECTREParser::ModelContext *context) = 0;

    virtual antlrcpp::Any visitModel_name(SPECTREParser::Model_nameContext *context) = 0;

    virtual antlrcpp::Any visitModel_master(SPECTREParser::Model_masterContext *context) = 0;

    virtual antlrcpp::Any visitControl(SPECTREParser::ControlContext *context) = 0;

    virtual antlrcpp::Any visitAlter(SPECTREParser::AlterContext *context) = 0;

    virtual antlrcpp::Any visitAltergroup(SPECTREParser::AltergroupContext *context) = 0;

    virtual antlrcpp::Any visitAltergroup_header(SPECTREParser::Altergroup_headerContext *context) = 0;

    virtual antlrcpp::Any visitAltergroup_content(SPECTREParser::Altergroup_contentContext *context) = 0;

    virtual antlrcpp::Any visitAltergroup_footer(SPECTREParser::Altergroup_footerContext *context) = 0;

    virtual antlrcpp::Any visitAssert_statement(SPECTREParser::Assert_statementContext *context) = 0;

    virtual antlrcpp::Any visitCheck_statement(SPECTREParser::Check_statementContext *context) = 0;

    virtual antlrcpp::Any visitSave(SPECTREParser::SaveContext *context) = 0;

    virtual antlrcpp::Any visitOption(SPECTREParser::OptionContext *context) = 0;

    virtual antlrcpp::Any visitSet(SPECTREParser::SetContext *context) = 0;

    virtual antlrcpp::Any visitShell(SPECTREParser::ShellContext *context) = 0;

    virtual antlrcpp::Any visitInfo(SPECTREParser::InfoContext *context) = 0;

    virtual antlrcpp::Any visitNodeset(SPECTREParser::NodesetContext *context) = 0;

    virtual antlrcpp::Any visitIc(SPECTREParser::IcContext *context) = 0;

    virtual antlrcpp::Any visitStatistics(SPECTREParser::StatisticsContext *context) = 0;

    virtual antlrcpp::Any visitStatistics_header(SPECTREParser::Statistics_headerContext *context) = 0;

    virtual antlrcpp::Any visitStatistics_content(SPECTREParser::Statistics_contentContext *context) = 0;

    virtual antlrcpp::Any visitStatistics_footer(SPECTREParser::Statistics_footerContext *context) = 0;

    virtual antlrcpp::Any visitProcess(SPECTREParser::ProcessContext *context) = 0;

    virtual antlrcpp::Any visitMismatch(SPECTREParser::MismatchContext *context) = 0;

    virtual antlrcpp::Any visitCorrelate(SPECTREParser::CorrelateContext *context) = 0;

    virtual antlrcpp::Any visitTruncate(SPECTREParser::TruncateContext *context) = 0;

    virtual antlrcpp::Any visitVary(SPECTREParser::VaryContext *context) = 0;

    virtual antlrcpp::Any visitReliability(SPECTREParser::ReliabilityContext *context) = 0;

    virtual antlrcpp::Any visitReliability_header(SPECTREParser::Reliability_headerContext *context) = 0;

    virtual antlrcpp::Any visitReliability_content(SPECTREParser::Reliability_contentContext *context) = 0;

    virtual antlrcpp::Any visitReliability_footer(SPECTREParser::Reliability_footerContext *context) = 0;

    virtual antlrcpp::Any visitReliability_control(SPECTREParser::Reliability_controlContext *context) = 0;

    virtual antlrcpp::Any visitGlobal_declarations(SPECTREParser::Global_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitComponent(SPECTREParser::ComponentContext *context) = 0;

    virtual antlrcpp::Any visitComponent_id(SPECTREParser::Component_idContext *context) = 0;

    virtual antlrcpp::Any visitComponent_master(SPECTREParser::Component_masterContext *context) = 0;

    virtual antlrcpp::Any visitComponent_attribute(SPECTREParser::Component_attributeContext *context) = 0;

    virtual antlrcpp::Any visitComponent_value(SPECTREParser::Component_valueContext *context) = 0;

    virtual antlrcpp::Any visitComponent_value_list(SPECTREParser::Component_value_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent_analysis(SPECTREParser::Component_analysisContext *context) = 0;

    virtual antlrcpp::Any visitNode_list(SPECTREParser::Node_listContext *context) = 0;

    virtual antlrcpp::Any visitNode_list_item(SPECTREParser::Node_list_itemContext *context) = 0;

    virtual antlrcpp::Any visitNode_mapping(SPECTREParser::Node_mappingContext *context) = 0;

    virtual antlrcpp::Any visitNode_pair(SPECTREParser::Node_pairContext *context) = 0;

    virtual antlrcpp::Any visitNode_branch(SPECTREParser::Node_branchContext *context) = 0;

    virtual antlrcpp::Any visitNode(SPECTREParser::NodeContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SPECTREParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression_unary(SPECTREParser::Expression_unaryContext *context) = 0;

    virtual antlrcpp::Any visitExpression_function_call(SPECTREParser::Expression_function_callContext *context) = 0;

    virtual antlrcpp::Any visitExpression_pair(SPECTREParser::Expression_pairContext *context) = 0;

    virtual antlrcpp::Any visitExpression_scope(SPECTREParser::Expression_scopeContext *context) = 0;

    virtual antlrcpp::Any visitExpression_operator(SPECTREParser::Expression_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression_atom(SPECTREParser::Expression_atomContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(SPECTREParser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list_item(SPECTREParser::Parameter_list_itemContext *context) = 0;

    virtual antlrcpp::Any visitParameter_assign(SPECTREParser::Parameter_assignContext *context) = 0;

    virtual antlrcpp::Any visitParameter_id(SPECTREParser::Parameter_idContext *context) = 0;

    virtual antlrcpp::Any visitParameter_access(SPECTREParser::Parameter_accessContext *context) = 0;

    virtual antlrcpp::Any visitValue_access(SPECTREParser::Value_accessContext *context) = 0;

    virtual antlrcpp::Any visitValue_access_assign(SPECTREParser::Value_access_assignContext *context) = 0;

    virtual antlrcpp::Any visitTime_pair(SPECTREParser::Time_pairContext *context) = 0;

    virtual antlrcpp::Any visitTime_point(SPECTREParser::Time_pointContext *context) = 0;

    virtual antlrcpp::Any visitFilepath(SPECTREParser::FilepathContext *context) = 0;

    virtual antlrcpp::Any visitFilepath_element(SPECTREParser::Filepath_elementContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(SPECTREParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitAnalysis_type(SPECTREParser::Analysis_typeContext *context) = 0;

    virtual antlrcpp::Any visitComponent_type(SPECTREParser::Component_typeContext *context) = 0;


};

}  // namespace edacurry
