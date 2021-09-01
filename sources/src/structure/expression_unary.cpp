/// @file   expression_unary.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/expression_unary.hpp"
#include "utility/logging.hpp"
#include <sstream>

namespace edacurry::structure
{
ExpressionUnary::ExpressionUnary()
    : Value(),
      _operator(op_none),
      _value(nullptr)
{
    // Nothing to do.
}

ExpressionUnary::ExpressionUnary(Operator op, Value *value)
    : Value(),
      _operator(op),
      _value(value)
{
    // Nothing to do.
}

ExpressionUnary::~ExpressionUnary()
{
    delete (_value);
}

Operator ExpressionUnary::getOperator() const
{
    return _operator;
}

void ExpressionUnary::setOperator(Operator op)
{
    _operator = op;
}

Value *ExpressionUnary::getValue() const
{
    return _value;
}

Value *ExpressionUnary::setValue(Value *value)
{
    return this->setChild(_value, value);
}

std::string ExpressionUnary::toString() const
{
    std::stringstream ss;
    ss << "ExpressionUnary("
       << operator_to_plain_string(_operator) << ", "
       << ((_value) ? _value->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure