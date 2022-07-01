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
FunctionCall::FunctionCall(const std::string &name)
    : Value(), features::NamedObject(name), parameters(this->weak_from_this())
{
    // Nothing to do.
}

std::string FunctionCall::toString() const
{
    std::stringstream ss;
    ss << "(function_call `" << this->getName() << "` " << parameters.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure