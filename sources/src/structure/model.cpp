/// @file   model.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/model.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
Model::Model()
    : Object(),
      features::NamedObject(),
      features::ObjectReference(),
      parameters(this),
      _master(),
      _library(),
      _library_type()
{
    // Nothing to do.
}

Model::Model(const std::string &name,
             const std::string &master,
             const std::string &library,
             const std::string &library_type,
             const features::ObjectList<Parameter>::base_type &parameters)
    : Object(),
      features::NamedObject(name),
      features::ObjectReference(),
      parameters(this, parameters),
      _master(master),
      _library(library),
      _library_type(library_type)
{
    // Nothing to do.
}

std::string Model::toString() const
{
    std::stringstream ss;
    ss << "Model("
       << _library << ", "
       << this->getName() << ", "
       << _master << ", "
       << _library_type << ", "
       << parameters.toString()
       << ")";
    return ss.str();
}
} // namespace edacurry::structure