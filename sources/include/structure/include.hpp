/// @file   include.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "parameter.hpp"
#include "object.hpp"
#include "enums.hpp"

namespace edacurry::structure
{
/// @brief Represent a include.
class Include : public Object {
public:
    /// Parameters of the include statement.
    features::OwnedList<Parameter> parameters;

    /// @brief Construct a new Include object.
    /// @param include_type the type of include.
    /// @param path the path of the include statement.
    Include(IncludeType include_type = IncludeType::inc_none, const std::string &path = std::string());

    /// @brief Destroy the Include object.
    ~Include() override = default;

    /// @brief Returns the type of include.
    /// @return The type of include.
    IncludeType getIncludeType() const;

    /// @brief Sets the type of include.
    /// @param include_type the type of include to be set.
    void setIncludeType(IncludeType include_type);

    /// @brief Sets the path.
    /// @param path the path to be set.
    void setPath(const std::string &path);

    /// @brief Gets the path.
    /// @return The path.
    std::string getPath() const;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitInclude(std::static_pointer_cast<Include>(this->shared_from_this()));
    }

private:
    /// The type of include.
    IncludeType _include_type;
    /// Path of the include statement.
    std::string _path;
};

} // namespace edacurry::structure