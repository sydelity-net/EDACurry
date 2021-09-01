/// @file   object.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/object.hpp"

namespace edacurry::structure
{
Object::Object(Object *parent)
    : _parent(parent)
{
    // Nothing to do.
}

Object *Object::getParent() const
{
    return _parent;
}

Object *Object::setParent(Object *parent)
{
    Object *old_parent = _parent;

    _parent = parent;
    return old_parent;
}

std::string Object::toString() const
{
    return "Object";
}

} // namespace edacurry::structure