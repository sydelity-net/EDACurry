/// @file   node.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "object.hpp"
#include "features/named_object.hpp"
#include "features/object_list.hpp"

namespace edacurry::structure
{
/// @brief Represent a node.
class Node : public Object, public features::NamedObject {
public:
    /// @brief Construct a new Node object.
    /// @param name The name of the identifier.
    explicit Node(const std::string &name);

    ~Node() override;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitNode(this);
    }
};

} // namespace edacurry::structure
