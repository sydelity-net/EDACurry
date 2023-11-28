/// @file spectre_frontend.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "frontend/spectre_frontend.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"
#include "classes.hpp"

#include "antlr4parser/SPECTREParser.h"
#include "antlr4parser/SPECTRELexer.h"

namespace edacurry::frontend
{

SPECTREFrontend::SPECTREFrontend(antlr4::CommonTokenStream &_tokens)
    : tokens(_tokens),
      _stack(),
      _root(),
      _factory()
{
}

antlrcpp::Any SPECTREFrontend::visitNetlist(SPECTREParser::NetlistContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNetlist_title(SPECTREParser::Netlist_titleContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNetlist_entity(SPECTREParser::Netlist_entityContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitInclude(SPECTREParser::IncludeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitStandard_include(SPECTREParser::Standard_includeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitCpp_include(SPECTREParser::Cpp_includeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAhdl_include(SPECTREParser::Ahdl_includeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitLang(SPECTREParser::LangContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitLibrary(SPECTREParser::LibraryContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitLibrary_header(SPECTREParser::Library_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitLibrary_content(SPECTREParser::Library_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitLibrary_footer(SPECTREParser::Library_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSection(SPECTREParser::SectionContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSection_header(SPECTREParser::Section_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSection_content(SPECTREParser::Section_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSection_footer(SPECTREParser::Section_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAnalogmodel(SPECTREParser::AnalogmodelContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSubckt(SPECTREParser::SubcktContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSubckt_header(SPECTREParser::Subckt_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSubckt_content(SPECTREParser::Subckt_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSubckt_footer(SPECTREParser::Subckt_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitIf_statement(SPECTREParser::If_statementContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitIf_alternative(SPECTREParser::If_alternativeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitIf_body(SPECTREParser::If_bodyContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAnalysis(SPECTREParser::AnalysisContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAc(SPECTREParser::AcContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAcmatch(SPECTREParser::AcmatchContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitDc(SPECTREParser::DcContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitDcmatch(SPECTREParser::DcmatchContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitEnvlp(SPECTREParser::EnvlpContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSp(SPECTREParser::SpContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitStb(SPECTREParser::StbContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSweep(SPECTREParser::SweepContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSweep_header(SPECTREParser::Sweep_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSweep_content(SPECTREParser::Sweep_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSweep_footer(SPECTREParser::Sweep_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitTdr(SPECTREParser::TdrContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitTran(SPECTREParser::TranContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitXf(SPECTREParser::XfContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPac(SPECTREParser::PacContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPdisto(SPECTREParser::PdistoContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPnoise(SPECTREParser::PnoiseContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPsp(SPECTREParser::PspContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPss(SPECTREParser::PssContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPxf(SPECTREParser::PxfContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitPz(SPECTREParser::PzContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitQpac(SPECTREParser::QpacContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitQpnoise(SPECTREParser::QpnoiseContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitQpsp(SPECTREParser::QpspContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitQpss(SPECTREParser::QpssContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitQpxf(SPECTREParser::QpxfContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSens(SPECTREParser::SensContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSens_output_variables_list(SPECTREParser::Sens_output_variables_listContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSens_design_parameters_list(SPECTREParser::Sens_design_parameters_listContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSens_analyses_list(SPECTREParser::Sens_analyses_listContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitMontecarlo(SPECTREParser::MontecarloContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitMontecarlo_header(SPECTREParser::Montecarlo_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitMontecarlo_content(SPECTREParser::Montecarlo_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitMontecarlo_export(SPECTREParser::Montecarlo_exportContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitMontecarlo_footer(SPECTREParser::Montecarlo_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNoise(SPECTREParser::NoiseContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitChecklimit(SPECTREParser::ChecklimitContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitGlobal(SPECTREParser::GlobalContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitModel(SPECTREParser::ModelContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitModel_name(SPECTREParser::Model_nameContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitModel_master(SPECTREParser::Model_masterContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitControl(SPECTREParser::ControlContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAlter(SPECTREParser::AlterContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAltergroup(SPECTREParser::AltergroupContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAltergroup_header(SPECTREParser::Altergroup_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAltergroup_content(SPECTREParser::Altergroup_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAltergroup_footer(SPECTREParser::Altergroup_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAssert_statement(SPECTREParser::Assert_statementContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitCheck_statement(SPECTREParser::Check_statementContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSave(SPECTREParser::SaveContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitOption(SPECTREParser::OptionContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitSet(SPECTREParser::SetContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitShell(SPECTREParser::ShellContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitInfo(SPECTREParser::InfoContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNodeset(SPECTREParser::NodesetContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitIc(SPECTREParser::IcContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitStatistics(SPECTREParser::StatisticsContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitStatistics_header(SPECTREParser::Statistics_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitStatistics_content(SPECTREParser::Statistics_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitStatistics_footer(SPECTREParser::Statistics_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitProcess(SPECTREParser::ProcessContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitMismatch(SPECTREParser::MismatchContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitCorrelate(SPECTREParser::CorrelateContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitTruncate(SPECTREParser::TruncateContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitVary(SPECTREParser::VaryContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitReliability(SPECTREParser::ReliabilityContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitReliability_header(SPECTREParser::Reliability_headerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitReliability_content(SPECTREParser::Reliability_contentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitReliability_footer(SPECTREParser::Reliability_footerContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitReliability_control(SPECTREParser::Reliability_controlContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitGlobal_declarations(SPECTREParser::Global_declarationsContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent(SPECTREParser::ComponentContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_id(SPECTREParser::Component_idContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_master(SPECTREParser::Component_masterContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_attribute(SPECTREParser::Component_attributeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_value(SPECTREParser::Component_valueContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_value_list(SPECTREParser::Component_value_listContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_analysis(SPECTREParser::Component_analysisContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNode_list(SPECTREParser::Node_listContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNode_list_item(SPECTREParser::Node_list_itemContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNode_mapping(SPECTREParser::Node_mappingContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNode_pair(SPECTREParser::Node_pairContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNode_branch(SPECTREParser::Node_branchContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitNode(SPECTREParser::NodeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression(SPECTREParser::ExpressionContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression_unary(SPECTREParser::Expression_unaryContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression_function_call(SPECTREParser::Expression_function_callContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression_pair(SPECTREParser::Expression_pairContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression_scope(SPECTREParser::Expression_scopeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression_operator(SPECTREParser::Expression_operatorContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitExpression_atom(SPECTREParser::Expression_atomContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitParameter_list(SPECTREParser::Parameter_listContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitParameter_list_item(SPECTREParser::Parameter_list_itemContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitParameter_assign(SPECTREParser::Parameter_assignContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitParameter_id(SPECTREParser::Parameter_idContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitParameter_access(SPECTREParser::Parameter_accessContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitValue_access(SPECTREParser::Value_accessContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitValue_access_assign(SPECTREParser::Value_access_assignContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitTime_pair(SPECTREParser::Time_pairContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitTime_point(SPECTREParser::Time_pointContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitFilepath(SPECTREParser::FilepathContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitFilepath_element(SPECTREParser::Filepath_elementContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitKeyword(SPECTREParser::KeywordContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitAnalysis_type(SPECTREParser::Analysis_typeContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any SPECTREFrontend::visitComponent_type(SPECTREParser::Component_typeContext *ctx)
{
    return visitChildren(ctx);
}

// ============================================================================
std::shared_ptr<structure::Object> SPECTREFrontend::back() const
{
    if (_stack.empty())
        return nullptr;
    return _stack.back();
}

void SPECTREFrontend::push(const std::shared_ptr<structure::Object> &node)
{
    if (node == nullptr)
        _error("Executing push and receiving a NULL node!");
    _stack.emplace_back(node);
}

std::shared_ptr<structure::Object> SPECTREFrontend::pop()
{
    auto node = this->back();
    if (node == nullptr)
        _error("Executing pop and receiving a NULL node!");
    _stack.pop_back();
    return node;
}

void SPECTREFrontend::add_to_parent(const std::shared_ptr<structure::Object> &node)
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
                    _factory.parameter(nullptr, analysis_value, param_assign, false));
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
                        _factory.parameter(nullptr, component_value, param_assign, false));
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
            auto control_parameter = utility::to<structure::Parameter>(node);
            if (control_parameter) {
                control_scope->parameters.push_back(control_parameter);
            } else {
                control_scope->content.push_back(node);
            }
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
        if (!expression->getFirst())
            expression->setFirst(utility::to<structure::Value>(node));
        else if (!expression->getSecond())
            expression->setSecond(utility::to<structure::Value>(node));
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
                    _factory.parameter(nullptr, function_call_value, param_assign, false));
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
        if (!parameter->getLeft())
            parameter->setLeft(utility::to<structure::Value>(node));
        else if (!parameter->getRight())
            parameter->setRight(utility::to<structure::Value>(node));
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

antlrcpp::Any SPECTREFrontend::advance_visit(antlr4::ParserRuleContext *ctx, const std::shared_ptr<structure::Object> &node)
{
    this->add_to_parent(node);
    this->push(node);
    auto result = visitChildren(ctx);
    this->pop();
    return result;
}

std::shared_ptr<edacurry::structure::Object> parse_spectre(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::SPECTRELexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
    // Create the parser.
    edacurry::SPECTREParser parser(&tokens);
    // Create the frontend.
    edacurry::frontend::SPECTREFrontend frontend(tokens);
    // Parse the circuit.
    parser.netlist()->accept(&frontend);
    // Return the object.
    return frontend.getRoot();
}

} // namespace edacurry::frontend