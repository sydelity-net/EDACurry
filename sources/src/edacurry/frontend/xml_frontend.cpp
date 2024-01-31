/// @file xml_frontend.cpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/frontend/xml_frontend.hpp"
#include "edacurry/classes.hpp"

#include <pugixml.hpp>
#include <iostream>

static std::shared_ptr<edacurry::structure::ExpressionUnary> visitExpressionUnary(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::Expression> visitExpression(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::FunctionCall> visitFunctionCall(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::ValuePair> visitValuePair(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::ValueList> visitValueList(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::ControlScope> visitControlScope(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::LibraryDef> visitLibraryDef(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::Model> visitModel(const pugi::xml_node &e);
static std::shared_ptr<edacurry::structure::Subckt> visitSubckt(const pugi::xml_node &e);

static std::shared_ptr<edacurry::structure::Library> visitLibrary(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::Library>(e.attribute("name").as_string(), e.attribute("path").as_string());
}

static std::shared_ptr<edacurry::structure::Identifier> visitIdentifier(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::Identifier>(e.attribute("name").as_string());
}

static std::shared_ptr<edacurry::structure::String> visitString(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::String>(e.attribute("value").as_string());
}

static std::shared_ptr<edacurry::structure::Number<double>> visitDouble(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::Number<double>>(e.attribute("value").as_double(), e.attribute("unit").as_string());
}

static std::shared_ptr<edacurry::structure::Number<unsigned>> visitUnsigned(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::Number<unsigned>>(e.attribute("value").as_double(), e.attribute("unit").as_string());
}

static std::shared_ptr<edacurry::structure::Number<int>> visitInt(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::Number<int>>(e.attribute("value").as_double(), e.attribute("unit").as_string());
}

static std::shared_ptr<edacurry::structure::Node> visitNode(const pugi::xml_node &e)
{
    return std::make_shared<edacurry::structure::Node>(e.attribute("name").as_string());
}

static std::shared_ptr<edacurry::structure::Value> visitNumber(const pugi::xml_node &e)
{
    auto type = std::string(e.attribute("type").as_string());
    if (type == "int") {
        return visitInt(e);
    }
    if (type == "unsigned") {
        return visitUnsigned(e);
    }
    if (type == "double") {
        return visitDouble(e);
    }
    return nullptr;
}

static std::shared_ptr<edacurry::structure::Value> visitValue(const pugi::xml_node &e)
{
    if (e.child("identifier")) {
        return visitIdentifier(e.child("identifier"));
    }
    if (e.child("string")) {
        return visitIdentifier(e.child("string"));
    }
    if (e.child("number")) {
        return visitNumber(e.child("number"));
    }
    if (e.child("string")) {
        return visitString(e.child("string"));
    }
    if (e.child("expression")) {
        return visitExpression(e.child("expression"));
    }
    if (e.child("expression_unary")) {
        return visitExpressionUnary(e.child("expression_unary"));
    }
    if (e.child("function_call")) {
        return visitFunctionCall(e.child("function_call"));
    }
    if (e.child("pair")) {
        return visitValuePair(e.child("pair"));
    }
    if (e.child("list")) {
        return visitValueList(e.child("list"));
    }
    return nullptr;
}

static std::shared_ptr<edacurry::structure::ExpressionUnary> visitExpressionUnary(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::ExpressionUnary>();
    entity->setOperator(edacurry::plain_string_to_operator(e.attribute("type").as_string()));
    entity->setValue(visitValue(e.child("left")));
    return entity;
}

static std::shared_ptr<edacurry::structure::Expression> visitExpression(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Expression>();
    entity->setOperator(edacurry::plain_string_to_operator(e.attribute("type").as_string()));
    entity->setFirst(visitValue(e.child("value1")));
    entity->setSecond(visitValue(e.child("value2")));
    return entity;
}

static std::shared_ptr<edacurry::structure::ValuePair> visitValuePair(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::ValuePair>();
    entity->setFirst(visitValue(e.child("first")));
    entity->setSecond(visitValue(e.child("second")));
    return entity;
}

static std::shared_ptr<edacurry::structure::ValueList> visitValueList(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::ValueList>();
    entity->setDelimiterType(edacurry::plain_string_to_delimiter_type(e.attribute("delimiter").as_string()));
    for (const auto &it : e.child("values").children("value")) {
        entity->values.push_back(visitValue(it));
    }
    return 0;
}

static std::shared_ptr<edacurry::structure::Parameter> visitParameter(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Parameter>();
    entity->setType(edacurry::plain_string_to_parameter_type(e.attribute("type").as_string()));
    entity->setHideName(e.attribute("hide_name").as_bool());
    entity->setLeft(visitValue(e.child("left")));
    entity->setRight(visitValue(e.child("right")));
    return entity;
}

static std::shared_ptr<edacurry::structure::Component> visitComponent(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Component>();
    entity->setName(e.attribute("name").as_string());
    entity->setMaster(e.attribute("master").as_string());
    for (const auto &it : e.child("nodes").children("node")) {
        entity->nodes.push_back(visitNode(it));
    }
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::Analysis> visitAnalysis(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Analysis>();
    entity->setName(e.attribute("name").as_string());
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::Control> visitControl(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Control>();
    entity->setName(e.attribute("name").as_string());
    entity->setControlType(edacurry::plain_string_to_control_type(e.attribute("type").as_string()));
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::FunctionCall> visitFunctionCall(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::FunctionCall>();
    entity->setName(e.attribute("name").as_string());
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::Include> visitInclude(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Include>();
    entity->setPath(e.attribute("path").as_string());
    entity->setIncludeType(edacurry::plain_string_to_include_type(e.attribute("type").as_string()));
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::Object> visitObject(const pugi::xml_node &e)
{
    auto name = std::string(e.name());
    if (name == "library") {
        return visitLibrary(e);
    }
    if (name == "component") {
        return visitComponent(e);
    }
    if (name == "analysis") {
        return visitAnalysis(e);
    }
    if (name == "control") {
        return visitControl(e);
    }
    if (name == "control_scope") {
        return visitControlScope(e);
    }
    if (name == "include") {
        return visitInclude(e);
    }
    if (name == "library_def") {
        return visitLibraryDef(e);
    }
    if (name == "model") {
        return visitModel(e);
    }
    if (name == "subckt") {
        return visitSubckt(e);
    }
    return nullptr;
}

static std::shared_ptr<edacurry::structure::Subckt> visitSubckt(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Subckt>();
    entity->setName(e.attribute("name").as_string());
    for (const auto &it : e.child("nodes").children("node")) {
        entity->nodes.push_back(visitNode(it));
    }
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    for (const auto &it : e.child("content").children()) {
        entity->content.push_back(visitObject(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::Model> visitModel(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Model>();
    entity->setName(e.attribute("name").as_string());
    entity->setMaster(e.attribute("master").as_string());
    entity->setLibrary(e.attribute("library").as_string());
    entity->setLibraryType(e.attribute("library_type").as_string());
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::LibraryDef> visitLibraryDef(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::LibraryDef>();
    entity->setName(e.attribute("name").as_string());
    for (const auto &it : e.child("content").children()) {
        entity->content.push_back(visitObject(it));
    }
    return 0;
}

static std::shared_ptr<edacurry::structure::ControlScope> visitControlScope(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::ControlScope>();
    entity->setName(e.attribute("name").as_string());
    entity->setControlType(edacurry::plain_string_to_control_type(e.attribute("type").as_string()));
    for (const auto &it : e.child("nodes").children("node")) {
        entity->nodes.push_back(visitNode(it));
    }
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    for (const auto &it : e.child("content").children()) {
        entity->content.push_back(visitObject(it));
    }
    return entity;
}

static std::shared_ptr<edacurry::structure::Circuit> visitCircuit(const pugi::xml_node &e)
{
    auto entity = std::make_shared<edacurry::structure::Circuit>();
    entity->setName(e.attribute("name").as_string());
    for (const auto &it : e.child("nodes").children("node")) {
        entity->nodes.push_back(visitNode(it));
    }
    for (const auto &it : e.child("parameters").children("parameter")) {
        entity->parameters.push_back(visitParameter(it));
    }
    for (const auto &it : e.child("content").children()) {
        entity->content.push_back(visitObject(it));
    }
    return entity;
}

namespace edacurry::frontend
{

std::shared_ptr<edacurry::structure::Object> parse_xml(const std::string &path)
{
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(path.c_str());
    if (!result) {
        std::cerr << "Failed to parse `" << path << "`\n";
        return nullptr;
    }
    return visitCircuit(doc.child("circuit"));
}

} // namespace edacurry::frontend
