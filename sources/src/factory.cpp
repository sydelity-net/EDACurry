/// @file   factory.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "factory.hpp"

namespace edacurry
{
structure::Analysis *Factory::analysis(
    const std::string &name,
    const features::ObjectList<structure::Parameter>::base_type &parameters)
{
    return new structure::Analysis(name, parameters);
}

structure::Circuit *Factory::circuit(
    const std::string &name,
    const std::string &title,
    const features::ObjectList<structure::Node>::base_type &nodes,
    const features::ObjectList<structure::Parameter>::base_type &parameters,
    const features::ObjectList<structure::Object>::base_type &content)
{
    return new structure::Circuit(name, title, nodes, parameters, content);
}

structure::Component *Factory::component(
    const std::string &name,
    const std::string &master,
    const features::ObjectList<structure::Node>::base_type &nodes,
    const features::ObjectList<structure::Parameter>::base_type &parameters,
    structure::Object *reference)
{
    return new structure::Component(name, master, nodes, parameters, reference);
}

structure::ControlScope *Factory::controlScope(
    const std::string &name,
    ControlType type,
    const features::ObjectList<structure::Parameter>::base_type &parameters,
    const features::ObjectList<structure::Node>::base_type &nodes,
    const features::ObjectList<structure::Object>::base_type &content)
{
    return new structure::ControlScope(name, type, parameters, nodes, content);
}

structure::Control *Factory::control(
    const std::string &name,
    ControlType type,
    const features::ObjectList<structure::Parameter>::base_type &parameters)
{
    return new structure::Control(name, type, parameters);
}

structure::ExpressionUnary *Factory::expressionUnary(Operator op, structure::Value *value)
{
    return new structure::ExpressionUnary(op, value);
}

structure::Expression *Factory::expression(Operator op,
                                           structure::Value *value1,
                                           structure::Value *value2)
{
    return new structure::Expression(op, value1, value2);
}

structure::FunctionCall *Factory::functionCall(
    const std::string &name,
    const features::ObjectList<structure::Parameter>::base_type &parameters)
{
    return new structure::FunctionCall(name, parameters);
}

structure::Identifier *Factory::identifier(const std::string &id)
{
    return new structure::Identifier(id);
}

structure::Include *Factory::include(
    IncludeType include_type,
    const std::string &path,
    const features::ObjectList<structure::Parameter>::base_type &parameters)
{
    return new structure::Include(include_type, path, parameters);
}

structure::LibraryDef *Factory::libraryDef(
    const std::string &name,
    const features::ObjectList<structure::Object>::base_type &content)
{
    return new structure::LibraryDef(name, content);
}

structure::Library *Factory::library(const std::string &name, const std::string &path)
{
    return new structure::Library(name, path);
}

structure::Model *Factory::model(
    const std::string &name,
    const std::string &master,
    const std::string &library,
    const std::string &library_type,
    const features::ObjectList<structure::Parameter>::base_type &parameters)
{
    return new structure::Model(name, master, library, library_type,
                                parameters);
}

structure::Node *Factory::node(const std::string &name, structure::Object *reference)
{
    return new structure::Node(name, reference);
}

structure::Parameter *Factory::parameter(
    structure::Value *value,
    ParameterType type,
    structure::Object *reference,
    bool hide_name)
{
    return new structure::Parameter(value, type, reference, hide_name);
}

structure::Parameter *Factory::parameter(
    const std::string &name,
    structure::Value *value,
    ParameterType type,
    structure::Object *reference,
    bool hide_name)
{
    return new structure::Parameter(name, value, type, reference, hide_name);
}

structure::Subckt *Factory::subckt(
    const std::string &name,
    const features::ObjectList<structure::Node>::base_type &nodes,
    const features::ObjectList<structure::Parameter>::base_type &parameters,
    const features::ObjectList<structure::Object>::base_type &content)
{
    return new structure::Subckt(name, nodes, parameters, content);
}

structure::String *Factory::string(const std::string &string)
{
    return new structure::String(string);
}

structure::ValueList *Factory::valueList(
    DelimiterType delimiter,
    const features::ObjectList<structure::Value>::base_type &values)
{
    return new structure::ValueList(delimiter, values);
}

structure::ValuePair *Factory::valuePair(structure::Value *first, structure::Value *second)
{
    return new structure::ValuePair(first, second);
}

} // namespace edacurry