/// @file   value.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/value.hpp"

namespace edacurry::structure
{
Value::Value() : Object()
{
    // Nothing to do.
}

std::string Value::toString() const
{
    return "Value";
}
} // namespace edacurry::structure