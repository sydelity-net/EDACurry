/// @file   parameter.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/named_object.hpp"
#include "features/object_list.hpp"
#include "object.hpp"
#include "enums.hpp"
#include "value.hpp"

namespace edacurry::structure
{
/// @brief Represent a parameter.
class Parameter : public Object {
public:
    /// @brief Construct a new Parameter object.
    /// @param left the right value of the parameter.
    /// @param right the initial right value of the parameter.
    /// @param type the parameter's type.
    /// @param hide_left hide the left-hand side value during code generation.
    Parameter(Value *left, Value *right, ParameterType type = param_assign, bool hide_left = false);

    /// @brief Destroy the Parameter object.
    ~Parameter() override;

    /// @brief Returns the initial value of the parameter.
    /// @return The initial value of the parameter.
    Value *getRight() const;

    /// @brief Sets the initial value of the data parameter.
    /// @param value the initial value of the data parameter to be set.
    /// @return The old initial value of the data parameter if it is
    /// different from the new one, nullptr otherwise.
    Value *setRight(Value *value);

    /// @brief Returns the initial value of the parameter.
    /// @return The initial value of the parameter.
    Value *getLeft() const;

    /// @brief Sets the initial value of the data parameter.
    /// @param value the initial value of the data parameter to be set.
    /// @return The old initial value of the data parameter if it is
    /// different from the new one, nullptr otherwise.
    Value *setLeft(Value *value);

    /// @brief Sets the type of parameter.
    /// @param type the parameter's type.
    inline void setType(ParameterType type)
    {
        _type = type;
    }

    /// @brief Returns the type of parameter.
    /// @return the type of parameter.
    inline auto getType() const
    {
        return _type;
    }

    /// @brief Sets if the left-hand side value is hidden during code generation.
    /// @param hide_left if the left-hand side value should be hidden.
    inline void setHideLeft(bool hide_left)
    {
        _hide_left = hide_left;
    }

    /// @brief Sets if the left-hand side value is hidden during code generation.
    /// @return if the left-hand side value should be hidden.
    inline bool getHideLeft() const
    {
        return _hide_left;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitParameter(this);
    }

private:
    /// The value on the left of the parameter.
    Value *_left;
    /// The value on the right of the parameter.
    Value *_right;
    /// The type of parameter.
    ParameterType _type;
    /// Hide the left-hand side value during code generation.
    bool _hide_left;
};

} // namespace edacurry::structure
