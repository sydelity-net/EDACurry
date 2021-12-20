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
    /// @param parameters the parameters.
    /// @return the newly generated object, **remember to delete it**.
    structure::Analysis *analysis(
        const std::string &name,
        const features::ObjectList<structure::Parameter>::base_type &parameters);

    /// @brief Creates a new circuit.
    /// @param name the name of the circuit.
    /// @param title the title of the circuit.
    /// @param nodes the new nodes to be set.
    /// @param parameters the new parameters to be set.
    /// @param content the new content to be set.
    /// @return the newly generated object, **remember to delete it**.
    structure::Circuit *circuit(
        const std::string &name,
        const std::string &title,
        const features::ObjectList<structure::Node>::base_type &nodes,
        const features::ObjectList<structure::Parameter>::base_type &parameters,
        const features::ObjectList<structure::Object>::base_type &content);

    /// @brief Creates a new Component.
    /// @param name the name of the component.
    /// @param master the master of the component.
    /// @param nodes the node assignments of the component.
    /// @param parameters the parameter assignments of the component.
    /// @param reference The reference to the instantiated subckt.
    /// @return the newly generated object, **remember to delete it**.
    structure::Component *component(
        const std::string &name,
        const std::string &master,
        const features::ObjectList<structure::Node>::base_type &nodes,
        const features::ObjectList<structure::Parameter>::base_type &parameters,
        structure::Object *reference = nullptr);

    /// @brief Creates a new controlled scope.
    /// @param name the name of the control scope.
    /// @param type the type of control object.
    /// @param parameters the parameters to be set.
    /// @param nodesthe nodes to be set.
    /// @param content the content to be set.
    /// @return the newly generated object, **remember to delete it**.
    structure::ControlScope *controlScope(
        const std::string &name,
        ControlType type,
        const features::ObjectList<structure::Parameter>::base_type &parameters,
        const features::ObjectList<structure::Node>::base_type &nodes,
        const features::ObjectList<structure::Object>::base_type &content);

    /// @brief Creates a new control.
    /// @param name the name of the control.
    /// @param type the type of control object.
    /// @param parameters the parameters of the control.
    /// @return the newly generated object, **remember to delete it**.
    structure::Control *control(
        const std::string &name,
        ControlType type,
        const features::ObjectList<structure::Parameter>::base_type &parameters);

    /// @brief Creates a new expression.
    /// @param op     the operator.
    /// @param value the operand.
    /// @return the newly generated object, **remember to delete it**.
    structure::ExpressionUnary *expressionUnary(
        Operator op,
        structure::Value *value = nullptr);

    /// @brief Creates a new expression.
    /// @param op     the operator.
    /// @param value1 the first operand.
    /// @param value2 the second operand.
    /// @return the newly generated object, **remember to delete it**.
    structure::Expression *expression(
        Operator op,
        structure::Value *value1 = nullptr,
        structure::Value *value2 = nullptr);

    /// @brief Creates a new function call.
    /// @param name the name of the function called.
    /// @param parameters the parameters for the function call.
    /// @return the newly generated object, **remember to delete it**.
    structure::FunctionCall *functionCall(
        const std::string &name,
        const features::ObjectList<structure::Parameter>::base_type &parameters);

    /// @brief Creates a new identifier.
    /// @param id The id.
    /// @return the newly generated object, **remember to delete it**.
    structure::Identifier *identifier(const std::string &id);

    /// @brief Creates a new Include object.
    /// @param include_type the type of include.
    /// @param path the path of the include statement.
    /// @param parameters the parameters of the include statement.
    /// @return the newly generated object, **remember to delete it**.
    structure::Include *include(
        IncludeType include_type,
        const std::string &path,
        const features::ObjectList<structure::Parameter>::base_type &parameters);

    /// @brief Creates a new Library Def object.
    /// @param name the name.
    /// @param content the content.
    structure::LibraryDef *libraryDef(
        const std::string &name,
        const features::ObjectList<structure::Object>::base_type &content);

    /// @brief Creates a new Library object.
    /// @param name the name of the library.
    /// @param path the path to the library file.
    structure::Library *library(const std::string &name, const std::string &path);

    /// @brief Creates a new model.
    /// @param name the name.
    /// @param master the master.
    /// @param library the library to which the model belongs.
    /// @param library_type TODO: CHECK!
    /// @param parameters the parameter assignments.
    /// @return the newly generated object, **remember to delete it**.
    structure::Model *model(
        const std::string &name,
        const std::string &master,
        const std::string &library,
        const std::string &library_type,
        const features::ObjectList<structure::Parameter>::base_type &parameters);

    /// @brief Creates a new node.
    /// @param name The name of the identifier.
    /// @param reference The reference to another node.
    /// @return the newly generated object, **remember to delete it**.
    structure::Node *node(
        const std::string &name,
        structure::Object *reference = nullptr);

    /// @brief Creates a new number.
    /// @tparam T The type of the number.
    /// @param value the value of the number.
    /// @return the newly generated object, **remember to delete it**.
    template <typename T>
    structure::Number<T> *number(T value, std::string unit = std::string())
    {
        return new structure::Number<T>(value, unit);
    }

    /// @brief Creates a new parameter.
    /// @param left the left-hand-side value of the parameter.
    /// @param right the right-hand-side value of the parameter.
    /// @param reference The reference to another parameter.
    /// @return the newly generated object, **remember to delete it**.
    structure::Parameter *parameter(
        structure::Value *left,
        structure::Value *right,
        ParameterType type           = param_assign,
        structure::Object *reference = nullptr,
        bool hide_name               = false);

    /// @brief Creates a new subckt.
    /// @param name       the name of the subckt.
    /// @param nodes      the new nodes to be set.
    /// @param parameters the new parameters to be set.
    /// @param content    the new content to be set.
    /// @return the newly generated object, **remember to delete it**.
    structure::Subckt *subckt(
        const std::string &name,
        const features::ObjectList<structure::Node>::base_type &nodes,
        const features::ObjectList<structure::Parameter>::base_type &parameters,
        const features::ObjectList<structure::Object>::base_type &content);

    /// @brief Creates a new String object.
    /// @param string The string.
    /// @return the newly generated object, **remember to delete it**.
    structure::String *string(const std::string &string);

    /// @brief Creates a new value list.
    /// @param delimiter external delimiters to the list.
    /// @param values the values of the list.
    /// @return the newly generated object, **remember to delete it**.
    structure::ValueList *valueList(
        DelimiterType delimiter,
        const features::ObjectList<structure::Value>::base_type &values);

    /// @brief Creates a new value pair.
    /// @param first The first value. Default value is <tt>nullptr</tt>.
    /// @param second The second value. Default value is <tt>nullptr</tt>.
    /// @return the newly generated object, **remember to delete it**.
    structure::ValuePair *valuePair(
        structure::Value *first  = nullptr,
        structure::Value *second = nullptr);

    /// @}
};
} // namespace edacurry