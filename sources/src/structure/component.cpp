/// @file   component.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/component.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
Component::Component(const std::string &name, const std::string &master)
    : Object(),
      features::NamedObject(name),
      nodes(this->weak_from_this()),
      parameters(this->weak_from_this()),
      _master(utility::trim(master))
{
    // Nothing to do.
}

void Component::setMaster(const std::string &master)
{
    _master = utility::trim(master);
}

std::string Component::getMaster() const
{
    return _master;
}

bool Component::matchMaster(const std::string &master) const
{
    return _master == master;
}

std::string Component::toString() const
{
    std::stringstream ss;
    ss << "(component `" << this->getName() << "` `" << _master << "` " << nodes.toString() << " " << parameters.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure