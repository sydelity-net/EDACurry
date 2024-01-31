/// @file   include.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/include.hpp"
#include "edacurry/features/named_object.hpp"
#include "edacurry/utility/utility.hpp"

namespace edacurry::structure
{

Include::Include(IncludeType include_type, const std::string &path)
    : Object(),
      parameters(this->weak_from_this()),
      _include_type(include_type),
      _path(path)
{
    // Nothing to do.
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
    ss << "(include " << include_type_to_plain_string(_include_type) << " `"<< _path << "` " << parameters.toString() << ")";
    return ss.str();
}

} // namespace edacurry::structure