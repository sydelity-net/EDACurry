/// @file   object_reference.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)



#pragma once

#include "structure/object.hpp"

#include <string>

namespace edacurry::features
{
/// @brief Class for inter-object referencing.
/// @details
/// Here some examples:
///  1. Parameter -> Parameter.
///  2. Node      -> Node.
///  3. Component -> Subckt.
class ObjectReference {
public:
    /// @brief Sets the reference.
    /// @param reference the reference to be set.
    inline void setReference(structure::Object *reference)
    {
        _reference = reference;
    }

    /// @brief Gets the reference.
    /// @return The reference.
    inline structure::Object *getReference() const
    {
        return _reference;
    }

    /// @brief Checks whether given reference is equals to this object reference.
    /// @param reference The reference to check.
    /// @return <tt>True</tt> if names are equals.
    inline bool matchName(structure::Object *reference) const
    {
        return _reference == reference;
    }

protected:
    ObjectReference() = default;
    ObjectReference(structure::Object *reference) : _reference(reference)
    {
        // Nothing to do.
    }
    ~ObjectReference() = default;

    ObjectReference(const ObjectReference &other) = delete;
    ObjectReference &operator=(const ObjectReference &other) = delete;

private:
    /// @brief The value of the parameter or port assignment.
    structure::Object *_reference;
};

} // namespace edacurry::features