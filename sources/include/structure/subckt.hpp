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
    features::OwnedList<Node> nodes;
    /// The subckt parameters.
    features::OwnedList<Parameter> parameters;
    /// The subckt content.
    features::OwnedList<Object> content;

    explicit Subckt();

    /// @brief Construct a new Component object.
    /// @param name       the name of the subckt.
    Subckt(const std::string &name);

    ~Subckt() override = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitSubckt(this);
    }
};

} // namespace edacurry::structure
