/// @file   number.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"
#include <sstream>

namespace edacurry::structure
{
/// @brief Represent a numerical value.
///
/// @tparam T The type of numerical value.
template <typename T>
class Number : public Value {
public:
    /// @brief Construct a new Number object.
    /// @param value the value of the Number.
    Number(T value, std::string unit = std::string())
        : Value(), _value(value), _unit(unit)
    {
        // Nothing to do.
    }

    /// @brief Destroy the Number object.
    ~Number() override = default;

    /// @brief Returns the value of the number.
    /// @return The value of the number.
    T getValue() const
    {
        return _value;
    }

    /// @brief Sets the value of the number.
    /// @param value the value of the number to be set.
    void setValue(T value)
    {
        _value = value;
    }

    /// @brief Returns the unit of the number.
    /// @return The unit of the number.
    std::string getUnit() const
    {
        return _unit;
    }

    /// @brief Sets the unit of the number.
    /// @param unit the unit of the number to be set.
    void setUnit(std::string unit)
    {
        _unit = unit;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override
    {
        std::stringstream ss;
        ss << "Number(" << _value << ", " << _unit << ")";
        return ss.str();
    }

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override;

private:
    /// @brief The value of the number.
    T _value;
    /// @brief The unit of the number.
    std::string _unit;
};

template <>
inline int structure::Number<unsigned>::accept(features::Visitor *visitor) const
{
    return visitor->visitUnsigned(this);
}

template <>
inline int structure::Number<int>::accept(features::Visitor *visitor) const
{
    return visitor->visitInt(this);
}

template <>
inline int structure::Number<double>::accept(features::Visitor *visitor) const
{
    return visitor->visitDouble(this);
}

} // namespace edacurry::structure