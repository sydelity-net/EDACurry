/// @file   control.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/named_object.hpp"
#include "parameter.hpp"
#include "object.hpp"
#include "enums.hpp"

namespace edacurry::structure
{
/// @brief Represent a control object.
class Control : public Object, public features::NamedObject {
public:
    /// The parameters of the control statement.
    features::ObjectList<Parameter> parameters;

    /// @brief Construct a new control object.
    explicit Control();

    /// @brief Construct a new control object.
    /// @param name   the name of the control object.
    /// @param type   the type of control object.
    /// @param params the parameters of the control object.
    Control(const std::string &name,
            ControlType type,
            const features::ObjectList<Parameter>::base_type &params);

    /// @brief Destroy the control object.
    ~Control() override = default;

    /// @brief Sets the control type.
    /// @param type the control type to be set.
    inline void setControlType(ControlType type)
    {
        _type = type;
    }

    /// @brief Gets the control type.
    /// @return The control type.
    inline ControlType getControlType() const
    {
        return _type;
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
    ControlType _type;
};

} // namespace edacurry::structure