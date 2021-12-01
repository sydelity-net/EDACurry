/// @file   node.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "object.hpp"
#include "features/object_reference.hpp"
#include "features/named_object.hpp"
#include "features/object_list.hpp"

namespace edacurry::structure
{
/// @brief Represent a node.
class Node : public Object, public features::NamedObject, public features::ObjectReference {
public:
    /// @brief Construct a new Node object.
    /// @param name The name of the identifier.
    /// @param reference The reference to another node.
    explicit Node(const std::string &name, structure::Object *reference = nullptr);

    ~Node() override;

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
