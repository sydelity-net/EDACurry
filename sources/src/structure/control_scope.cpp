/// @file   control_scope.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/control_scope.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
ControlScope::ControlScope()
    : Control(),
      nodes(this),
      content(this)
{
    // Nothing to do.
}

ControlScope::ControlScope(const std::string &name,
                           ControlType type,
                           const features::ObjectList<Parameter>::base_type &params,
                           const features::ObjectList<Node>::base_type &nodes,
                           const features::ObjectList<Object>::base_type &content)
    : Control(name, type, params),
      nodes(this, nodes),
      content(this, content)
{
    // Nothing to do.
}

ControlScope::~ControlScope()
{
    // Nothing to do.
}

std::string ControlScope::toString() const
{
    std::stringstream ss;
    ss << "ControlScope("
       << this->getName() << ", "
       << control_type_to_plain_string(this->getControlType()) << ", "
       << parameters.toString() << ", "
       << nodes.toString() << ", "
       << content.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure