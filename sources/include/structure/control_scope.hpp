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
    features::ObjectList<Node> nodes;
    /// The control scope content.
    features::ObjectList<Object> content;

    /// @brief Construct a new controlled scope.
    explicit ControlScope();

    /// @brief Construct a new controlled scope.
    /// @param name the name of the control scope.
    /// @param type the type of control object.
    /// @param params the parameters to be set.
    /// @param nodes the nodes to be set.
    /// @param content the content to be set.
    ControlScope(const std::string &name,
                 ControlType type,
                 const features::ObjectList<Parameter>::base_type &params,
                 const features::ObjectList<Node>::base_type &nodes,
                 const features::ObjectList<Object>::base_type &content);

    ~ControlScope() override;

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
