/// @file   expression.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/expression.hpp"
#include "edacurry/utility/logging.hpp"
#include <sstream>

namespace edacurry::structure
{

Expression::Expression(Operator op, const std::shared_ptr<structure::Value> &first, const std::shared_ptr<structure::Value> &second)
    : Value(),
      _operator(op),
      _first(first),
      _second(second)
{
    // Nothing to do.
}

Operator Expression::getOperator() const
{
    return _operator;
}

void Expression::setOperator(Operator op)
{
    _operator = op;
}

std::shared_ptr<structure::Value> Expression::getFirst() const
{
    return _first;
}

std::shared_ptr<structure::Value> Expression::setFirst(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_first, value);
}

std::shared_ptr<structure::Value> Expression::getSecond() const
{
    return _second;
}

std::shared_ptr<structure::Value> Expression::setSecond(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_second, value);
}

std::string Expression::toString() const
{
    std::stringstream ss;
    ss << "(expression " << operator_to_plain_string(_operator) << " " << ((_first) ? _first->toString() : " NULL") << ", " << ((_second) ? _second->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure