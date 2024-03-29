/// @file   string.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/string.hpp"
#include "edacurry/utility/logging.hpp"
#include <sstream>

namespace edacurry::structure
{
String::String(const std::string & string)
    : Value(),
      _string(string)
{
    // Nothing to do.
}

std::string String::toString() const
{
    std::stringstream ss;
    ss << "(string `" << _string << "`)";
    return ss.str();
}

} // namespace edacurry::structure