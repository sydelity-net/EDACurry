/// @file   subckt.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/subckt.hpp"
#include "edacurry/utility/utility.hpp"

namespace edacurry::structure
{
Subckt::Subckt(const std::string &name)
    : Object(),
      features::NamedObject(name),
      nodes(this->weak_from_this()),
      parameters(this->weak_from_this()),
      content(this->weak_from_this())
{
    // Nothing to do.
}

std::string Subckt::toString() const
{
    std::stringstream ss;
    ss << "(subckt `" << this->getName() << "` " << parameters.toString() << " " << nodes.toString() << " " << content.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure