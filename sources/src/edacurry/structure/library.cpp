/// @file   library.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/library.hpp"

namespace edacurry::structure
{

Library::Library(const std::string &name, const std::string &path)
    : Object(),
      features::NamedObject(name),
      _path(path)
{
    // Nothing to do.
}

std::string Library::toString() const
{
    std::stringstream ss;
    ss << "(library `" << this->getName() << "` `" << _path << "`)";
    return ss.str();
}
} // namespace edacurry::structure