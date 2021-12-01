/// @file   subckt.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "parameter.hpp"
#include "object.hpp"
#include "node.hpp"

namespace edacurry::structure
{
/// @brief Represent a subckt.
class Subckt : public Object, public features::NamedObject {
public:
    /// The subckt nodes.
    features::ObjectList<Node> nodes;
    /// The subckt parameters.
    features::ObjectList<Parameter> parameters;
    /// The subckt content.
    features::ObjectList<Object> content;

    explicit Subckt();

    /// @brief Construct a new Component object.
    /// @param name       the name of the subckt.
    /// @param nodes      the new nodes to be set.
    /// @param params the new parameters to be set.
    /// @param content    the new content to be set.
    Subckt(const std::string &name,
           const features::ObjectList<Node>::base_type &nodes,
           const features::ObjectList<Parameter>::base_type &params,
           const features::ObjectList<Object>::base_type &content);

    ~Subckt() override;

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
