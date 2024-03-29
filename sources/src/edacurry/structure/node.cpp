/// @file   node.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/node.hpp"
#include "edacurry/utility/logging.hpp"

namespace edacurry::structure
{
Node::Node(const std::string &name)
    : Object(), features::NamedObject(name)
{
    // Nothing to do.
}

std::string Node::toString() const
{
    return "(node `" + this->getName() + "`)";
}
} // namespace edacurry::structure