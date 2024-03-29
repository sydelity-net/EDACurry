/// @file   string.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"

namespace edacurry::structure
{
/// @brief Represent a string.
class String : public Value {
public:
    /// @brief Construct a new String object.
    /// @param string The string.
    explicit String(const std::string &string = std::string());

    /// @brief Destroy the String object.
    ~String() override = default;

    /// @brief Sets the string.
    /// @param string the string to be set.
    inline void setString(const std::string &string)
    {
        _string = string;
    }

    /// @brief Gets the string.
    /// @return The string.
    inline std::string getString() const
    {
        return _string;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitString(std::static_pointer_cast<String>(this->shared_from_this()));
    }

private:
    /// The string.
    std::string _string;
};

} // namespace edacurry::structure
