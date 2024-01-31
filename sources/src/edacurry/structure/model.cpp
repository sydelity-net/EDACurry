/// @file   model.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/structure/model.hpp"
#include "edacurry/utility/logging.hpp"
#include "edacurry/utility/utility.hpp"

namespace edacurry::structure
{

Model::Model(const std::string &name, const std::string &master, const std::string &library, const std::string &library_type)
    : Object(),
      features::NamedObject(name),
      parameters(this->weak_from_this()),
      _master(master),
      _library(library),
      _library_type(library_type)
{
    // Nothing to do.
}

std::string Model::toString() const
{
    std::stringstream ss;
    ss << "(model `" << _library << "` `" << this->getName() << "` `"<< _master << "` `" << _library_type << "` " << parameters.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure