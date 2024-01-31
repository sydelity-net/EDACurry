/// @file   analysis.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/analysis.hpp"
#include "edacurry/utility/logging.hpp"
#include "edacurry/utility/utility.hpp"
#include <sstream>

namespace edacurry::structure
{
Analysis::Analysis()
    : Object(),
      features::NamedObject(),
      parameters(this->weak_from_this())
{
    // Nothing to do.
}

Analysis::Analysis(const std::string &name)
    : Object(),
      features::NamedObject(name),
      parameters(this->weak_from_this())
{
    // Nothing to do.
}
std::string Analysis::toString() const
{
    std::stringstream ss;
    ss << "(analysis `" << this->getName() << "` " << parameters.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure