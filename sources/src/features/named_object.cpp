/// @file   component.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/component.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"

namespace edacurry::features
{
NamedObject::NamedObject(const std::string &name) : _name(utility::trim(name))
{
    // Nothing to do.
}

void NamedObject::setName(const std::string &name)
{
    _name = utility::trim(name);
}

std::string NamedObject::getName() const
{
    return _name;
}

bool NamedObject::matchName(const std::string &name) const
{
    return _name == name;
}

} // namespace edacurry::features