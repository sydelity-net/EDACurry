/// @file   control_scope.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/control_scope.hpp"
#include "edacurry/utility/utility.hpp"

namespace edacurry::structure
{
ControlScope::ControlScope(const std::string &name, ControlType type)
    : Control(name, type),
      nodes(this->weak_from_this()),
      content(this->weak_from_this())
{
    // Nothing to do.
}

std::string ControlScope::toString() const
{
    std::stringstream ss;
    ss << "(control_scope `"
       << this->getName() << "` "
       << control_type_to_plain_string(this->getControlType()) << " "
       << parameters.toString() << " "
       << nodes.toString() << " "
       << content.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure