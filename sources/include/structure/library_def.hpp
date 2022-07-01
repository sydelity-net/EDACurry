/// @file   library_def.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "object.hpp"
#include "features/named_object.hpp"
#include "features/owned_list.hpp"

namespace edacurry::structure
{
/// @brief Represent a library definition.
class LibraryDef : public Object, public features::NamedObject {
public:
    /// The content of the library definition.
    features::OwnedList<Object> content;

    /// @brief Construct a new Library Def object.
    /// @param name the name.
    LibraryDef(const std::string &name = std::string());

    /// @brief Destroy the Library Def object.
    ~LibraryDef() override = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitLibraryDef(std::static_pointer_cast<LibraryDef>(this->shared_from_this()));
    }
};

} // namespace edacurry::structure