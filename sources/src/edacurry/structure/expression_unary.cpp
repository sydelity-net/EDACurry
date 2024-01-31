/// @file   expression_unary.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/expression_unary.hpp"
#include "edacurry/utility/logging.hpp"
#include <sstream>

namespace edacurry::structure
{

ExpressionUnary::ExpressionUnary(Operator op, const std::shared_ptr<structure::Value> &value)
    : Value(),
      _operator(op),
      _value(value)
{
    // Nothing to do.
}

Operator ExpressionUnary::getOperator() const
{
    return _operator;
}

void ExpressionUnary::setOperator(Operator op)
{
    _operator = op;
}

std::shared_ptr<structure::Value> ExpressionUnary::getValue() const
{
    return _value;
}

std::shared_ptr<structure::Value> ExpressionUnary::setValue(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_value, value);
}

std::string ExpressionUnary::toString() const
{
    std::stringstream ss;
    ss << "(unary " << operator_to_plain_string(_operator) << " " << ((_value) ? _value->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure