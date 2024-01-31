/// @file   factory.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/factory.hpp"
#include "edacurry/utility/utility.hpp"

namespace edacurry
{
std::shared_ptr<structure::Analysis> Factory::analysis(const std::string &name)
{
    auto _ptr = std::make_shared<structure::Analysis>(utility::trim(name, "'\""));
    _ptr->parameters.setOwner(_ptr->weak_from_this());
    return _ptr;
}

std::shared_ptr<structure::Circuit> Factory::circuit(const std::string &name, const std::string &title)
{
    auto _ptr = std::make_shared<structure::Circuit>(utility::trim(name, "'\""), utility::trim(title, "'\""));
    _ptr->nodes.setOwner(_ptr);
    _ptr->parameters.setOwner(_ptr);
    _ptr->content.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::Component> Factory::component(const std::string &name, const std::string &master)
{
    auto _ptr = std::make_shared<structure::Component>(utility::trim(name, "'\""), utility::trim(master, "'\""));
    _ptr->nodes.setOwner(_ptr);
    _ptr->parameters.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::ControlScope> Factory::controlScope(const std::string &name, ControlType type)
{
    auto _ptr = std::make_shared<structure::ControlScope>(utility::trim(name, "'\""), type);
    _ptr->nodes.setOwner(_ptr);
    _ptr->parameters.setOwner(_ptr);
    _ptr->content.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::Control> Factory::control(const std::string &name, ControlType type)
{
    auto _ptr = std::make_shared<structure::Control>(utility::trim(name, "'\""), type);
    _ptr->parameters.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::ExpressionUnary> Factory::expressionUnary(Operator op, const std::shared_ptr<structure::Value> &value)
{
    return std::make_shared<structure::ExpressionUnary>(op, value);
}

std::shared_ptr<structure::Expression> Factory::expression(Operator op, const std::shared_ptr<structure::Value> &value1, const std::shared_ptr<structure::Value> &value2)
{
    return std::make_shared<structure::Expression>(op, value1, value2);
}

std::shared_ptr<structure::FunctionCall> Factory::functionCall(const std::string &name)
{
    auto _ptr = std::make_shared<structure::FunctionCall>(utility::trim(name, "'\""));
    _ptr->parameters.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::Identifier> Factory::identifier(const std::string &id)
{
    return std::make_shared<structure::Identifier>(utility::trim(id, "'\""));
}

std::shared_ptr<structure::Include> Factory::include(IncludeType include_type, const std::string &path)
{
    auto _ptr = std::make_shared<structure::Include>(include_type, utility::trim(path, "'\""));
    _ptr->parameters.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::LibraryDef> Factory::libraryDef(const std::string &name)
{
    auto _ptr = std::make_shared<structure::LibraryDef>(utility::trim(name, "'\""));
    _ptr->content.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::Library> Factory::library(const std::string &name, const std::string &path)
{
    return std::make_shared<structure::Library>(utility::trim(name, "'\""), utility::trim(path, "'\""));
}

std::shared_ptr<structure::Model> Factory::model(const std::string &name, const std::string &master, const std::string &library, const std::string &library_type)
{
    auto _ptr = std::make_shared<structure::Model>(
        utility::trim(name, "'\""),
        utility::trim(master, "'\""),
        utility::trim(library, "'\""),
        utility::trim(library_type, "'\""));
    _ptr->parameters.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::Node> Factory::node(const std::string &name)
{
    return std::make_shared<structure::Node>(utility::trim(name, "'\""));
}

std::shared_ptr<structure::Parameter> Factory::parameter(const std::shared_ptr<structure::Value> &left, const std::shared_ptr<structure::Value> &right, ParameterType type, bool hide_name)
{
    return std::make_shared<structure::Parameter>(left, right, type, hide_name);
}

std::shared_ptr<structure::Subckt> Factory::subckt(const std::string &name)
{
    auto _ptr = std::make_shared<structure::Subckt>(utility::trim(name, "'\""));
    _ptr->nodes.setOwner(_ptr);
    _ptr->parameters.setOwner(_ptr);
    _ptr->content.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::String> Factory::string(const std::string &string)
{
    return std::make_shared<structure::String>(utility::trim(string, "'\""));
}

std::shared_ptr<structure::ValueList> Factory::valueList(DelimiterType delimiter)
{
    auto _ptr = std::make_shared<structure::ValueList>(delimiter);
    _ptr->values.setOwner(_ptr);
    return _ptr;
}

std::shared_ptr<structure::ValuePair> Factory::valuePair(const std::shared_ptr<structure::Value> &first, const std::shared_ptr<structure::Value> &second)
{
    return std::make_shared<structure::ValuePair>(first, second);
}

} // namespace edacurry