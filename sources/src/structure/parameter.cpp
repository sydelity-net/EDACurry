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

Parameter::Parameter(Value *left, Value *right, ParameterType type, structure::Object *reference, bool hide_left)
    : Object(),
      features::ObjectReference(reference),
      _left(left),
      _right(right),
      _type(type),
      _hide_left(hide_left)
{
    // Nothing to do.
}

Parameter::~Parameter()
{
    delete _left;
    delete _right;
}

Value *Parameter::getLeft() const
{
    return _left;
}

Value *Parameter::setLeft(Value *value)
{
    return this->setChild(_left, value);
}

Value *Parameter::getRight() const
{
    return _right;
}

Value *Parameter::setRight(Value *value)
{
    return this->setChild(_right, value);
}

std::string Parameter::toString() const
{
    return "Parameter(" +
           (_left ? _left->toString() : "NULL") + ", " +
           (_right ? _right->toString() : "NULL") + ", " +
           parameter_type_to_plain_string(_type) + ", " +
           "hide_left=" + (_hide_left ? "true" : "false") +
           ")";
}

} // namespace edacurry::structure