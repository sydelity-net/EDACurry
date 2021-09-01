/// @file   function_call.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/function_call.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
FunctionCall::FunctionCall() : Value(), features::NamedObject(), parameters(this)
{
    // Nothing to do.
}

FunctionCall::FunctionCall(const std::string &name, const features::ObjectList<Parameter>::base_type &parameters)
    : Value(), features::NamedObject(name), parameters(this, parameters)
{
    // Nothing to do.
}

FunctionCall::~FunctionCall()
{
    // Nothing to do.
}

std::string FunctionCall::toString() const
{
    std::stringstream ss;
    ss << "FunctionCall(" << this->getName() << ", " << parameters.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure