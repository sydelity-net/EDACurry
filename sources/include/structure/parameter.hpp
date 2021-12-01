/// @file   parameter.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/object_reference.hpp"
#include "features/named_object.hpp"
#include "features/object_list.hpp"
#include "object.hpp"
#include "enums.hpp"
#include "value.hpp"

namespace edacurry::structure
{
/// @brief Represent a parameter.
class Parameter : public Object, public features::NamedObject, public features::ObjectReference {
public:
    /// @brief Construct a new Parameter object.
    /// @param value the initial value of the parameter.
    /// @param type the parameter's type.
    /// @param reference The reference to another parameter.
    /// @param hide_name hide the name during code generation.
    Parameter(Value *value, ParameterType type = param_assign, structure::Object *reference = nullptr, bool hide_name = false);

    /// @brief Construct a new Parameter object.
    /// @param name  the name of the parameter.
    /// @param value the initial value of the parameter.
    /// @param type the parameter's type.
    /// @param reference The reference to another parameter.
    /// @param hide_name hide the name during code generation.
    Parameter(const std::string &name, Value *value, ParameterType type = param_assign, structure::Object *reference = nullptr, bool hide_name = false);

    /// @brief Destroy the Parameter object.
    ~Parameter() override;

    /// @brief Returns the initial value of the parameter.
    /// @return The initial value of the parameter.
    Value *getValue() const;

    /// @brief Sets the initial value of the data parameter.
    /// @param value the initial value of the data parameter to be set.
    /// @return The old initial value of the data parameter if it is
    /// different from the new one, nullptr otherwise.
    Value *setValue(Value *value);

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

    /// @brief Sets if the name is hidden during code generation.
    /// @param hide_name if the name should be hidden.
    inline void setHideName(bool hide_name)
    {
        _hide_name = hide_name;
    }

    /// @brief Sets if the name is hidden during code generation.
    /// @return if the name should be hidden.
    inline bool getHideName() const
    {
        return _hide_name;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline void accept(features::Visitor *visitor) const override
    {
        visitor->visit(this);
    }

private:
    /// The initial value of the parameter.
    Value *_value;
    /// The type of parameter.
    ParameterType _type;
    /// Hide the name during code generation.
    bool _hide_name;
};

} // namespace edacurry::structure
