/// @file value_pair.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/value_pair.hpp"

namespace edacurry::structure
{
ValuePair::ValuePair(const std::shared_ptr<structure::Value> &first, const std::shared_ptr<structure::Value> &second)
    : Value(), _first(first), _second(second)
{
    // Nothing to do.
}

std::shared_ptr<structure::Value> ValuePair::getFirst() const
{
    return _first;
}

std::shared_ptr<structure::Value> ValuePair::setFirst(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_first, value);
}

std::shared_ptr<structure::Value> ValuePair::getSecond() const
{
    return _second;
}

std::shared_ptr<structure::Value> ValuePair::setSecond(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_second, value);
}

std::string ValuePair::toString() const
{
    std::stringstream ss;
    ss << "(value_pair " << ((_first) ? _first->toString() : " NULL") << " " << ((_second) ? _second->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure