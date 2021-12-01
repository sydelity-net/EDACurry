/// @file   analysis.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/analysis.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"
#include <sstream>

namespace edacurry::structure
{
Analysis::Analysis()
    : Object(),
      features::NamedObject(),
      parameters(this)
{
    // Nothing to do.
}

Analysis::Analysis(const std::string &name, const features::ObjectList<Parameter>::base_type &params)
    : Object(),
      features::NamedObject(name),
      parameters(this, params)
{
    // Nothing to do.
}

Analysis::~Analysis()
{
    // Nothing to do.
}

std::string Analysis::toString() const
{
    std::stringstream ss;
    ss << "Analysis("
       << this->getName() << ", "
       << parameters.toString()
       << ")";
    return ss.str();
}
} // namespace edacurry::structure