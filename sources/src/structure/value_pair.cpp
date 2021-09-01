/// @file value_pair.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/value_pair.hpp"

namespace edacurry::structure
{
ValuePair::ValuePair() : Value(), _first(), _second()
{
    // Nothing to do.
}

ValuePair::ValuePair(Value *first, Value *second)
    : Value(), _first(first), _second(second)
{
    // Nothing to do.
}

ValuePair::~ValuePair()
{
    delete (_first);
    delete (_second);
}

Value *ValuePair::getFirst() const
{
    return _first;
}

Value *ValuePair::setFirst(Value *value)
{
    return this->setChild(_first, value);
}

Value *ValuePair::getSecond() const
{
    return _second;
}

Value *ValuePair::setSecond(Value *value)
{
    return this->setChild(_second, value);
}

std::string ValuePair::toString() const
{
    std::stringstream ss;
    ss << "ValuePair(" << ((_first) ? _first->toString() : " NULL") << ", "
       << ((_second) ? _second->toString() : " NULL") << ")";
    return ss.str();
}

} // namespace edacurry::structure