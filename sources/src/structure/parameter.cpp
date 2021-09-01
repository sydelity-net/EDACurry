/// @file   parameter.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/parameter.hpp"
#include "features/named_object.hpp"
#include "utility/logging.hpp"

namespace edacurry::structure
{
Parameter::Parameter(Value *value, structure::Object *reference, bool hide_name)
    : Object(), features::NamedObject(), features::ObjectReference(reference), _value(value), _hide_name(hide_name)
{
    // Nothing to do.
}

Parameter::Parameter(const std::string &name, Value *value, structure::Object *reference, bool hide_name)
    : Object(), features::NamedObject(name), features::ObjectReference(reference), _value(value), _hide_name(hide_name)
{
    // Nothing to do.
}

Parameter::~Parameter()
{
    delete _value;
}

Value *Parameter::getValue() const
{
    return _value;
}

Value *Parameter::setValue(Value *value)
{
    return this->setChild(_value, value);
}

std::string Parameter::toString() const
{
    return "Parameter(" +
           this->getName() + ", " +
           (_value ? _value->toString() : "NULL") +
           (_hide_name ? ", hide_name" : "") + ")";
}

} // namespace edacurry::structure