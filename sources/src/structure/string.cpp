/// @file   string.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/string.hpp"
#include "utility/logging.hpp"
#include <sstream>

namespace edacurry::structure
{
String::String()
    : Value(),
      _string()
{
    // Nothing to do.
}

String::String(const std::string & string)
    : Value(),
      _string(string)
{
    // Nothing to do.
}

String::~String()
{
    // Nothing to do.
}

std::string String::toString() const
{
    std::stringstream ss;
    ss << "String(" << _string << ")";
    return ss.str();
}

} // namespace edacurry::structure