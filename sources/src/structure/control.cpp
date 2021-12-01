/// @file   control.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/control.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
Control::Control()
    : Object(),
      features::NamedObject(),
      parameters(this),
      _type(ctrl_none)
{
    // Nothing to do.
}

Control::Control(const std::string &name, ControlType type, const features::ObjectList<Parameter>::base_type &params)
    : Object(),
      features::NamedObject(name),
      parameters(this, params),
      _type(type)
{
    // Nothing to do.
}

std::string Control::toString() const
{
    std::stringstream ss;
    ss << "Control("
       << this->getName() << ", "
       << control_type_to_plain_string(this->getControlType()) << ", "
       << parameters.toString()
       << ")";
    return ss.str();
}
} // namespace edacurry::structure