/// @file   component.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/named_object.hpp"
#include "parameter.hpp"
#include "object.hpp"
#include "node.hpp"

namespace edacurry::structure
{
/// @brief Represent a component.
class Component : public Object, public features::NamedObject {
public:
    /// The nodes.
    features::ObjectList<Node> nodes;
    /// The parameters.
    features::ObjectList<Parameter> parameters;

    /// @brief Construct a new Component object.
    explicit Component();

    /// @brief Construct a new Component object.
    /// @param name the name of the component.
    /// @param master the master of the component.
    /// @param nodes the node connected to the component.
    /// @param parameters the parameter assignments of the component.
    Component(const std::string &name,
              const std::string &master,
              const features::ObjectList<Node>::base_type &nodes,
              const features::ObjectList<Parameter>::base_type &parameters);

    ~Component() override;

    /// @brief Sets the name.
    /// @param master the master to be set.
    void setMaster(const std::string &master);

    /// @brief Gets the master.
    /// @return The master.
    std::string getMaster() const;

    /// @brief Checks whether given master is equals to this object master.
    /// @param master The master to check.
    /// @return <tt>True</tt> if names are equals.
    bool matchMaster(const std::string &master) const;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitComponent(this);
    }

private:
    /// The name of the master.
    std::string _master;
};

} // namespace edacurry::structure