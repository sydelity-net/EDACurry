/// @file   factory.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "classes.hpp"

#include <string>

namespace edacurry
{
/// @brief This class helps to create hierarchies of netlist objects quickly.
class Factory {
public:
    /// @brief Construct a new Factory.
    Factory() = default;

    /// @name Helper methods.
    /// @{

    /// @brief Creates a new analysis.
    /// @param name       the name.
    /// @return the newly generated object.
    std::shared_ptr<structure::Analysis> analysis(const std::string &name);

    /// @brief Creates a new circuit.
    /// @param name the name of the circuit.
    /// @param title the title of the circuit.
    /// @return the newly generated object.
    std::shared_ptr<structure::Circuit> circuit(const std::string &name, const std::string &title);

    /// @brief Creates a new Component.
    /// @param name the name of the component.
    /// @param master the master of the component.
    /// @return the newly generated object.
    std::shared_ptr<structure::Component> component(const std::string &name, const std::string &master);

    /// @brief Creates a new controlled scope.
    /// @param name the name of the control scope.
    /// @param type the type of control object.
    /// @return the newly generated object.
    std::shared_ptr<structure::ControlScope> controlScope(const std::string &name, ControlType type);

    /// @brief Creates a new control.
    /// @param name the name of the control.
    /// @param type the type of control object.
    /// @return the newly generated object.
    std::shared_ptr<structure::Control> control(const std::string &name, ControlType type);

    /// @brief Creates a new expression.
    /// @param op     the operator.
    /// @param value the operand.
    /// @return the newly generated object.
    std::shared_ptr<structure::ExpressionUnary> expressionUnary(Operator op, const std::shared_ptr<structure::Value> &value);

    /// @brief Creates a new expression.
    /// @param op     the operator.
    /// @param value1 the first operand.
    /// @param value2 the second operand.
    /// @return the newly generated object.
    std::shared_ptr<structure::Expression> expression(Operator op, const std::shared_ptr<structure::Value> &value1, const std::shared_ptr<structure::Value> &value2);

    /// @brief Creates a new function call.
    /// @param name the name of the function called.
    /// @return the newly generated object.
    std::shared_ptr<structure::FunctionCall> functionCall(const std::string &name);

    /// @brief Creates a new identifier.
    /// @param id The id.
    /// @return the newly generated object.
    std::shared_ptr<structure::Identifier> identifier(const std::string &id);

    /// @brief Creates a new Include object.
    /// @param include_type the type of include.
    /// @param path the path of the include statement.
    /// @return the newly generated object.
    std::shared_ptr<structure::Include> include(IncludeType include_type, const std::string &path);

    /// @brief Creates a new Library Def object.
    /// @param name the name.
    std::shared_ptr<structure::LibraryDef> libraryDef(const std::string &name);

    /// @brief Creates a new Library object.
    /// @param name the name of the library.
    /// @param path the path to the library file.
    std::shared_ptr<structure::Library> library(const std::string &name, const std::string &path);

    /// @brief Creates a new model.
    /// @param name the name.
    /// @param master the master.
    /// @param library the library to which the model belongs.
    /// @param library_type TODO: CHECK!
    /// @return the newly generated object.
    std::shared_ptr<structure::Model> model(const std::string &name, const std::string &master, const std::string &library, const std::string &library_type);

    /// @brief Creates a new node.
    /// @param name The name of the identifier.
    /// @return the newly generated object.
    std::shared_ptr<structure::Node> node(const std::string &name);

    /// @brief Creates a new number.
    /// @tparam T The type of the number.
    /// @param value the value of the number.
    /// @return the newly generated object.
    template <typename T>
    std::shared_ptr<structure::Number<T>> number(T value, std::string unit = std::string())
    {
        return std::make_shared<structure::Number<T>>(value, unit);
    }

    /// @brief Creates a new parameter.
    /// @param left the left-hand-side value of the parameter.
    /// @param right the right-hand-side value of the parameter.
    /// @return the newly generated object.
    std::shared_ptr<structure::Parameter> parameter(const std::shared_ptr<structure::Value> &left, const std::shared_ptr<structure::Value> &right, ParameterType type, bool hide_name);

    /// @brief Creates a new subckt.
    /// @param name       the name of the subckt.
    /// @param nodes      the new nodes to be set.
    /// @param parameters the new parameters to be set.
    /// @param content    the new content to be set.
    /// @return the newly generated object.
    std::shared_ptr<structure::Subckt> subckt(const std::string &name);

    /// @brief Creates a new String object.
    /// @param string The string.
    /// @return the newly generated object.
    std::shared_ptr<structure::String> string(const std::string &string);

    /// @brief Creates a new value list.
    /// @param delimiter external delimiters to the list.
    /// @param values the values of the list.
    /// @return the newly generated object.
    std::shared_ptr<structure::ValueList> valueList(DelimiterType delimiter);

    /// @brief Creates a new value pair.
    /// @param first The first value. Default value is <tt>nullptr</tt>.
    /// @param second The second value. Default value is <tt>nullptr</tt>.
    /// @return the newly generated object.
    std::shared_ptr<structure::ValuePair> valuePair(const std::shared_ptr<structure::Value> &first, const std::shared_ptr<structure::Value> &second);

    /// @}
};
} // namespace edacurry