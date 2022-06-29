/// @file   node.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/node.hpp"
#include "utility/logging.hpp"

namespace edacurry::structure
{
Node::Node(const std::string &name)
    : Object(), features::NamedObject(name)
{
    // Nothing to do.
}

Node::~Node()
{
    // Nothing to do.
}

std::string Node::toString() const
{
    return "Node(" + this->getName() + ")";
}
} // namespace edacurry::structure