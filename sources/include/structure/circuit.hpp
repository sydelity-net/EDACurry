/// @file   circuit.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <string>
#include <vector>

#include "features/named_object.hpp"
#include "parameter.hpp"
#include "object.hpp"
#include "node.hpp"

namespace edacurry::structure
{
/// @brief Represent the entire circuit.
class Circuit : public Object,
                public features::NamedObject {
public:
    /// The circuit global nodes.
    features::OwnedList<Node> nodes;
    /// The circuit global parameters.
    features::OwnedList<Parameter> parameters;
    /// The circuit content.
    features::OwnedList<Object> content;

    /// @brief Construct a new circuit object.
    /// @param name the name of the file where the circuit resides.
    /// @param title the title of the circuit.
    Circuit(const std::string &name = std::string(), const std::string &title = std::string());

    /// @brief Destroy the Circuit object.
    ~Circuit() override = default;

    /// @brief Sets the title.
    /// @param title the title to be set.
    inline void setTitle(const std::string &title)
    {
        _title = title;
    }

    /// @brief Gets the title.
    /// @return The title.
    inline std::string getTitle() const
    {
        return _title;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitCircuit(std::static_pointer_cast<Circuit>(this->shared_from_this()));
    }

private:
    /// The netlist title.
    std::string _title;
};

} // namespace edacurry::structure