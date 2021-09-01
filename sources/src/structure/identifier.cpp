/// @file   identifier.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/identifier.hpp"
#include "utility/logging.hpp"

namespace edacurry::structure
{
Identifier::Identifier()
    : Value(),
      NamedObject()
{
    // Nothing to do.
}

Identifier::Identifier(const std::string &name)
    : Value(),
      NamedObject(name)
{
    // Nothing to do.
}

Identifier::~Identifier()
{
    // Nothing to do.
}

std::string Identifier::toString() const
{
    return "Identifier(" + this->getName() + ")";
}
} // namespace edacurry::structure