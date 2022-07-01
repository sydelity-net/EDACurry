/// @file   library_def.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/library_def.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
LibraryDef::LibraryDef(const std::string &name)
    : Object(),
      features::NamedObject(name),
      content(this->weak_from_this())
{
    // Nothing to do.
}

std::string LibraryDef::toString() const
{
    std::stringstream ss;
    ss << "(library_def `" << this->getName() << "` " << content.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure