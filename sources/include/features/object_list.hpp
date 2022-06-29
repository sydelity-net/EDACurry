/// @file   object_list.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "structure/object.hpp"
#include "named_object.hpp"

#include <type_traits>
#include <cassert>
#include <string>

namespace edacurry::features
{
template <typename T>
class ObjectList {
public:
    using value_type = T *;
    using base_type  = std::vector<value_type>;

    ObjectList(structure::Object *owner)
        : _owner(owner), _objects()
    {
        // Nothing to do.
    }

    ObjectList(structure::Object *owner, const base_type &objects)
        : _owner(owner), _objects(objects)
    {
        for (auto &object : _objects) object->setParent(_owner);
    }

    ObjectList(structure::Object *owner,
               const std::initializer_list<value_type> &objects)
        : _owner(owner), _objects(objects)
    {
        for (auto &object : _objects) object->setParent(_owner);
    }

    ObjectList(structure::Object *owner, base_type &&objects)
        : _owner(owner), _objects(objects)
    {
        for (auto &object : _objects) object->setParent(_owner);
    }

    inline structure::Object *getOwner()
    {
        return _owner;
    }

    inline void setOwner(structure::Object *owner)
    {
        _owner = owner;
        for (auto &object : _objects) object->setParent(_owner);
    }

    ObjectList &operator=(const ObjectList &) = delete;

    operator bool() const
    {
        return !_objects.empty();
    }

    inline const value_type operator[](size_t pos) const
    {
        assert(pos < _objects.size());
        return _objects[pos];
    }

    inline value_type &operator[](size_t pos)
    {
        assert(pos < _objects.size());
        return _objects[pos];
    }

    ObjectList(const ObjectList &) = delete;

    ~ObjectList()
    {
        for (auto object : _objects) delete object;
    }

    inline void clear()
    {
        for (auto object : _objects) delete object;
    }

    inline size_t size() const
    {
        return _objects.size();
    }

    inline void resize(size_t __new_size)
    {
        _objects.resize(__new_size);
    }

    /// @brief Add a new object.
    /// @param object the new object to add.
    inline void push_back(value_type object)
    {
        _objects.emplace_back(object);
        object->setParent(_owner);
    }

    /// @brief Removes the given object.
    /// @param object the object to remove.
    inline value_type remove(value_type object)
    {
        return structure::Object::removeFromList(_objects, object);
    }

    /// @brief Removes the given object by name.
    /// @param object the name of the object to remove.
    value_type remove(const std::string &name)
    {
        return features::NamedObject::removeFromListByName(_objects, name);
    }

    /// @brief Provides a string representation of the list for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const
    {
        return object_list_to_string(_objects);
    }

    inline typename base_type::const_iterator begin() const
    {
        return _objects.begin();
    }

    inline typename base_type::const_iterator begin()
    {
        return _objects.begin();
    }

    inline typename base_type::const_iterator end() const
    {
        return _objects.end();
    }

    inline typename base_type::const_iterator end()
    {
        return _objects.end();
    }

private:
    structure::Object *_owner;
    base_type _objects;
};

} // namespace edacurry::features
