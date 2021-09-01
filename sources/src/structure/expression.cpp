/// @file   expression.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/expression.hpp"
#include "utility/logging.hpp"
#include <sstream>

namespace edacurry::structure
{
Expression::Expression()
    : Value(),
      _operator(op_none),
      _value1(nullptr),
      _value2(nullptr)
{
    // Nothing to do.
}

Expression::Expression(Operator op, Value *value1, Value *value2)
    : Value(),
      _operator(op),
      _value1(value1),
      _value2(value2)
{
    // Nothing to do.
}

Expression::~Expression()
{
    delete (_value1);
    delete (_value2);
}

Operator Expression::getOperator() const
{
    return _operator;
}

void Expression::setOperator(Operator op)
{
    _operator = op;
}

Value *Expression::getValue1() const
{
    return _value1;
}

Value *Expression::setValue1(Value *value)
{
    return this->setChild(_value1, value);
}

Value *Expression::getValue2() const
{
    return _value2;
}

Value *Expression::setValue2(Value *value)
{
    return this->setChild(_value2, value);
}

std::string Expression::toString() const
{
    std::stringstream ss;
    ss << "Expression("
       << operator_to_plain_string(_operator) << ", "
       << ((_value1) ? _value1->toString() : " NULL") << ", "
       << ((_value2) ? _value2->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure