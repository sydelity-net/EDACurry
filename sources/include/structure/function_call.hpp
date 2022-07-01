/// @file   function_call.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"
#include "features/named_object.hpp"
#include "parameter.hpp"

namespace edacurry::structure
{
/// @brief Represent a function call.
class FunctionCall : public Value, public features::NamedObject {
public:
    /// The parameters of the function.
    features::OwnedList<Parameter> parameters;

    /// @brief Construct a new Function Call object.
    /// @param name the name.
    FunctionCall(const std::string &name = std::string());

    /// @brief Destroy the FunctionCall object.
    ~FunctionCall() override = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitFunctionCall(std::static_pointer_cast<FunctionCall>(this->shared_from_this()));
    }
};

} // namespace edacurry::structure