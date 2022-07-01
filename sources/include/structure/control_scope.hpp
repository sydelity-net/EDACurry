/// @file   control_scope.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "control.hpp"
#include "node.hpp"

namespace edacurry::structure
{
/// @brief Represent a controlled scope.
class ControlScope : public Control {
public:
    /// The control scope nodes.
    features::OwnedList<Node> nodes;
    /// The control scope content.
    features::OwnedList<Object> content;

    /// @brief Construct a new controlled scope.
    /// @param name the name of the control scope.
    /// @param type the type of control object.
    ControlScope(const std::string &name = std::string(), ControlType type = ControlType::ctrl_none);

    /// @brief Destroy the ControlScope object.
    ~ControlScope() override = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitControlScope(this);
    }
};

} // namespace edacurry::structure
