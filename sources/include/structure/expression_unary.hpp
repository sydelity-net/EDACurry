/// @file   expression_unary.hpp
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
class ExpressionUnary : public Value {
public:
    /// @brief Constructor.
    explicit ExpressionUnary();

    /// @brief Constructor.
    /// @param op The operator. Default value is <tt>op_none</tt>.
    /// @param value The operand. Default value is <tt>nullptr</tt>.
    ExpressionUnary(Operator op, Value *value = nullptr);

    /// @brief Destructor.
    ~ExpressionUnary() override;

    /// @brief Disable copy constructor.
    ExpressionUnary(const ExpressionUnary &) = delete;

    /// @brief Disable assign operator.
    ExpressionUnary &operator=(const ExpressionUnary &) = delete;

    /// @brief Returns the operator of the expression.
    /// @return The operator of the expression.
    Operator getOperator() const;

    /// @brief Sets the operator of the expression.
    /// @param op The operand of the expression to be set.
    void setOperator(Operator op);

    /// @brief Returns the operand of the expression.
    /// @return The operand of the expression.
    Value *getValue() const;

    /// @brief Sets the operand of the expression.
    /// @param value The operand of the expression to be set.
    /// @return The old operand of the expression if it is different
    /// from the new one, nullptr otherwise.
    Value *setValue(Value *value);

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitExpressionUnary(this);
    }

private:
    /// @brief The operator of the expression.
    Operator _operator;
    /// @brief The operand of the expression.
    Value *_value;
};

} // namespace edacurry::structure