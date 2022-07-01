/// @file   circuit.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/circuit.hpp"
#include "features/named_object.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
Circuit::Circuit()
    : Object(),
      features::NamedObject(),
      nodes(this->weak_from_this()),
      parameters(this->weak_from_this()),
      content(this->weak_from_this())
{
    // Nothing to do.
}

Circuit::Circuit(const std::string &name, const std::string &title)
    : Object(),
      features::NamedObject(name),
      nodes(this->weak_from_this()),
      parameters(this->weak_from_this()),
      content(this->weak_from_this()),
      _title(title)
{
    // Nothing to do.
}

std::string Circuit::toString() const
{
    std::stringstream ss;
    ss << "(circuit `" << this->getName() << "` " << parameters.toString() << " " << nodes.toString() << " " << content.toString() << " `" << _title << "`)";
    return ss.str();
}
} // namespace edacurry::structure