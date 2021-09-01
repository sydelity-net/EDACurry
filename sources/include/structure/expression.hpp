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
    explicit Expression();

    /// @brief Constructor.
    /// @param op The operator. Default value is <tt>op_none</tt>.
    /// @param value1 The first operand. Default value is <tt>nullptr</tt>.
    /// @param value2 The second operand. Default value is <tt>nullptr</tt>.
    Expression(Operator op, Value *value1 = nullptr, Value *value2 = nullptr);

    /// @brief Destructor.
    ~Expression() override;

    /// @brief Disable copy constructor.
    Expression(const Expression &) = delete;

    /// @brief Disable assign operator.
    Expression &operator=(const Expression &) = delete;

    /// @brief Returns the operator of the expression.
    /// @return The operator of the expression.
    Operator getOperator() const;

    /// @brief Sets the operator of the expression.
    /// @param op The operand of the expression to be set.
    void setOperator(Operator op);

    /// @brief Returns the first operand of the expression.
    /// @return The first operand of the expression.
    Value *getValue1() const;

    /// @brief Sets the first operand of the expression.
    /// @param value The first operand of the expression to be set.
    /// @return The old first operand of the expression if it is different
    /// from the new one, nullptr otherwise.
    Value *setValue1(Value *value);

    /// @brief Returns the second operand of the expression.
    /// @return The second operand of the expression.
    Value *getValue2() const;

    /// @brief Sets the second operand of the expression.
    /// @param value The second operand of the expression to be set.
    /// @return The old second operand of the expression if it is different
    /// from the new one, nullptr otherwise.
    Value *setValue2(Value *value);

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline void accept(features::Visitor *visitor) const override
    {
        visitor->visit(this);
    }

private:
    /// @brief The operator of the expression.
    Operator _operator;
    /// @brief The first operand of the expression.
    Value *_value1;
    /// @brief The second operand of the expression.
    Value *_value2;
};

} // namespace edacurry::structure