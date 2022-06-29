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
      _first(nullptr),
      _second(nullptr)
{
    // Nothing to do.
}

Expression::Expression(Operator op, Value *first, Value *second)
    : Value(),
      _operator(op),
      _first(first),
      _second(second)
{
    // Nothing to do.
}

Expression::~Expression()
{
    delete (_first);
    delete (_second);
}

Operator Expression::getOperator() const
{
    return _operator;
}

void Expression::setOperator(Operator op)
{
    _operator = op;
}

Value *Expression::getFirst() const
{
    return _first;
}

Value *Expression::setFirst(Value *value)
{
    return this->setChild(_first, value);
}

Value *Expression::getSecond() const
{
    return _second;
}

Value *Expression::setSecond(Value *value)
{
    return this->setChild(_second, value);
}

std::string Expression::toString() const
{
    std::stringstream ss;
    ss << "Expression("
       << operator_to_plain_string(_operator) << ", "
       << ((_first) ? _first->toString() : " NULL") << ", "
       << ((_second) ? _second->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure