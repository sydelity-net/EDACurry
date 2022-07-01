/// @file   library.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "object.hpp"
#include "features/named_object.hpp"

namespace edacurry::structure
{
/// @brief Represent a library.
class Library : public Object, public features::NamedObject {
public:

    /// @brief Construct a new Library object.
    /// @param name the name of the library.
    /// @param path the path to the library file.
    Library(const std::string &name = std::string(), const std::string &path = std::string());

    /// @brief Destroy the Library object.
    ~Library() override = default;

    /// @brief Sets the path.
    /// @param path the path to be set.
    void setPath(const std::string &path)
    {
        _path = path;
    }

    /// @brief Gets the path.
    /// @return The path.
    std::string getPath() const
    {
        return _path;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitLibrary(this);
    }

private:
    /// Path of the include statement.
    std::string _path;
};

} // namespace edacurry::structure