/// @file   subckt.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/subckt.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
Subckt::Subckt()
    : Object(),
      features::NamedObject(),
      nodes(this),
      parameters(this),
      content(this)
{
    // Nothing to do.
}

Subckt::Subckt(const std::string &name,
               const features::ObjectList<Node>::base_type &nodes,
               const features::ObjectList<Parameter>::base_type &params,
               const features::ObjectList<Object>::base_type &content)
    : Object(),
      features::NamedObject(name),
      nodes(this, nodes),
      parameters(this, params),
      content(this, content)
{
    // Nothing to do.
}

Subckt::~Subckt()
{
    // Nothing to do.
}

std::string Subckt::toString() const
{
    std::stringstream ss;
    ss << "Subckt("
       << this->getName() << ", "
       << parameters.toString() << ", "
       << nodes.toString() << ", "
       << content.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure