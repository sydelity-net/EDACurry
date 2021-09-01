/// @file   library_def.hpp
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
/// @brief Represent a library definition.
class LibraryDef : public Object, public features::NamedObject {
public:
    /// The content of the library definition.
    features::ObjectList<Object> content;

    /// @brief Construct a new Library Def object.
    explicit LibraryDef();

    /// @brief Construct a new Library Def object.
    /// @param name the name.
    /// @param content the content.
    LibraryDef(const std::string &name,
               const features::ObjectList<Object>::base_type &content);

    /// @brief Destroy the Library Def object.
    ~LibraryDef() override = default;

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