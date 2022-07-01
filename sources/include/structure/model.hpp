/// @file   model.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "object.hpp"
#include "features/named_object.hpp"
#include "parameter.hpp"

namespace edacurry::structure
{
/// @brief Represent a model.
class Model : public Object, public features::NamedObject {
public:
    /// The assignments to parameters.
    features::OwnedList<Parameter> parameters;

    /// @brief Construct a new Component object.
    /// @param name the name.
    /// @param master the master.
    /// @param library the library to which the model belongs.
    /// @param library_type TODO: CHECK!
    Model(
        const std::string &name = std::string(),
        const std::string &master = std::string(),
        const std::string &library = std::string(),
        const std::string &library_type = std::string());

    ~Model() override = default;

    /// @brief Sets the master's name.
    /// @param master the new name of the master.
    inline void setMaster(const std::string &master)
    {
        _master = master;
    }

    /// @brief Gets the master's name.
    /// @return The master's name.
    inline std::string getMaster() const
    {
        return _master;
    }

    /// @brief Checks whether given master is equals to this object master.
    /// @param master The master to check.
    /// @return <tt>True</tt> if names are equals.
    inline bool matchMaster(const std::string &master) const
    {
        return _master == master;
    }

    /// @brief Sets the library's name.
    /// @param library the new name of the library.
    inline void setLibrary(const std::string &library)
    {
        _library = library;
    }

    /// @brief Gets the library's name.
    /// @return The library's name.
    inline std::string getLibrary() const
    {
        return _library;
    }

    /// @brief Sets the library's type.
    /// @param library_type the new type of the library.
    inline void setLibraryType(const std::string &library_type)
    {
        _library_type = library_type;
    }

    /// @brief Gets the library's type.
    /// @return The library's type.
    inline std::string getLibraryType() const
    {
        return _library_type;
    }

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitModel(std::static_pointer_cast<Model>(this->shared_from_this()));
    }

private:
    /// The name of the master.
    std::string _master;
    /// The name of the library to which the model belongs.
    std::string _library;
    /// TODO: CHECK!
    std::string _library_type;
};

} // namespace edacurry::structure