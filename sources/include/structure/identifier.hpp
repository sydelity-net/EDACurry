/// @file   identifier.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"
#include "features/named_object.hpp"

namespace edacurry::structure
{
/// @brief Represent a identifier.
class Identifier : public Value, public features::NamedObject {
public:
    /// @brief Construct a new Identifier object.
    /// @param name The name of the identifier.
    explicit Identifier(const std::string &name = std::string());

    /// @brief Destroy the Identifier object.
    ~Identifier() override = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitIdentifier(std::static_pointer_cast<Identifier>(this->shared_from_this()));
    }
};

} // namespace edacurry::structure