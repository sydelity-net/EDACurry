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
Component::Component()
    : Object(), features::NamedObject(), nodes(this), parameters(this), _master()
{
    // Nothing to do.
}

Component::Component(const std::string &name,
                     const std::string &master,
                     const features::ObjectList<Node>::base_type &nodes,
                     const features::ObjectList<Parameter>::base_type &parameters)
    : Object(), features::NamedObject(name),  nodes(this, nodes), parameters(this, parameters), _master(utility::trim(master))
{
    // Nothing to do.
}

Component::~Component()
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
    ss << "Component(" << this->getName() << ", " << _master << ", " << nodes.toString() << ", "
       << parameters.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure