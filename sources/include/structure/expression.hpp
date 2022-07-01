/// @file   expression.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"
#include "enums.hpp"

namespace edacurry::structure
{
/// @brief Represent a expression.
class Expression : public Value {
public:
    /// @brief Constructor.
    /// @param op The operator. Default value is <tt>op_none</tt>.
    /// @param first The first operand. Default value is <tt>nullptr</tt>.
    /// @param second The second operand. Default value is <tt>nullptr</tt>.
    Expression(
        Operator op = Operator::op_none,
        const std::shared_ptr<structure::Value> &first = nullptr,
        const std::shared_ptr<structure::Value> &second = nullptr);

    /// @brief Disable copy constructor.
    Expression(const Expression &) = delete;

    /// @brief Disable assign operator.
    Expression &operator=(const Expression &) = delete;

    /// @brief Destroy the Expression object.
    ~Expression() override = default;

    /// @brief Returns the operator of the expression.
    /// @return The operator of the expression.
    Operator getOperator() const;

    /// @brief Sets the operator of the expression.
    /// @param op The operand of the expression to be set.
    void setOperator(Operator op);

    /// @brief Returns the first operand of the expression.
    /// @return The first operand of the expression.
    std::shared_ptr<structure::Value> getFirst() const;

    /// @brief Sets the first operand of the expression.
    /// @param value The first operand of the expression to be set.
    /// @return The old first operand of the expression if it is different
    /// from the new one, nullptr otherwise.
    std::shared_ptr<structure::Value> setFirst(const std::shared_ptr<structure::Value> &value);

    /// @brief Returns the second operand of the expression.
    /// @return The second operand of the expression.
    std::shared_ptr<structure::Value> getSecond() const;

    /// @brief Sets the second operand of the expression.
    /// @param value The second operand of the expression to be set.
    /// @return The old second operand of the expression if it is different
    /// from the new one, nullptr otherwise.
    std::shared_ptr<structure::Value> setSecond(const std::shared_ptr<structure::Value> &value);

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitExpression(std::static_pointer_cast<Expression>(this->shared_from_this()));
    }

private:
    /// @brief The operator of the expression.
    Operator _operator;
    /// @brief The first operand of the expression.
    std::shared_ptr<structure::Value> _first;
    /// @brief The second operand of the expression.
    std::shared_ptr<structure::Value> _second;
};

} // namespace edacurry::structure