/// @file   include.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/include.hpp"
#include "features/named_object.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
Include::Include()
    : Object(),
      parameters(this),
      _include_type(),
      _path()
{
    // Nothing to do.
}

Include::Include(IncludeType include_type,
                 const std::string &path,
                 const features::ObjectList<Parameter>::base_type &params)
    : Object(),
      parameters(this, params),
      _include_type(include_type),
      _path(path)
{
    // Nothing to do.
}

Include::~Include()
{
}

IncludeType Include::getIncludeType() const
{
    return _include_type;
}

void Include::setIncludeType(IncludeType include_type)
{
    _include_type = include_type;
}

void Include::setPath(const std::string &path)
{
    _path = path;
}

std::string Include::getPath() const
{
    return _path;
}

std::string Include::toString() const
{
    std::stringstream ss;
    ss << "Include("
       << include_type_to_plain_string(_include_type) << ", "
       << _path << ", "
       << parameters.toString()
       << ")";
    return ss.str();
}

} // namespace edacurry::structure