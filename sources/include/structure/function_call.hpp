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
    features::ObjectList<Parameter> parameters;

    /// @brief Construct a new Function Call object.
    explicit FunctionCall();

    /// @brief Construct a new Function Call object.
    /// @param name the name.
    /// @param parameters the parameters.
    FunctionCall(const std::string &name, const features::ObjectList<Parameter>::base_type &parameters);

    /// @brief Destroy the Function Call object.
    ~FunctionCall() override;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline void accept(features::Visitor *visitor) const override
    {
        visitor->visit(this);
    }
};

} // namespace edacurry::structure