/// @file   owned_list.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "named_object.hpp"

#include <exception>
#include <sstream>
#include <memory>
#include <vector>

namespace edacurry::structure
{
class Object;
}

namespace edacurry::features
{

template <typename ContentType>
class OwnedList {
public:
    using this_type  = OwnedList<ContentType>;
    using owner_type = std::weak_ptr<edacurry::structure::Object>;
    using value_type = std::shared_ptr<ContentType>;
    using base_type  = std::vector<value_type>;

    OwnedList(const std::weak_ptr<edacurry::structure::Object> &owner)
        : _owner(owner), _objects()
    {
        // Nothing to do.
    }

    OwnedList(const std::shared_ptr<edacurry::structure::Object> &owner)
        : _owner(owner), _objects()
    {
        // Nothing to do.
    }

    OwnedList(const this_type &other) = delete;

    this_type &operator=(const this_type &other) = delete;

    ~OwnedList()
    {
        for (auto &object : _objects) object->setParent(owner_type());
        _objects.clear();
        _owner.reset();
    }

    inline owner_type getOwner()
    {
        return _owner;
    }

    inline void setOwner(const owner_type &owner)
    {
        _owner = owner;
        for (auto &object : _objects) object->setParent(owner);
    }

    operator bool() const
    {
        return !_objects.empty();
    }

    inline const value_type operator[](size_t pos) const
    {
        if (pos >= _objects.size())
            throw std::out_of_range("Out of range");
        return _objects[pos];
    }

    inline value_type &operator[](size_t pos)
    {
        if (pos >= _objects.size())
            throw std::out_of_range("Out of range");
        return _objects[pos];
    }

    inline void clear()
    {
        for (auto &object : _objects) object->setParent(owner_type());
        _objects.clear();
    }

    inline bool empty() const
    {
        return _objects.empty();
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
    inline void push_back(const value_type &object)
    {
        auto parent = object->getParent().lock();
        if (parent)
            throw std::runtime_error("Cannot add the same object to two lists, use transfer_to function.");
        _objects.emplace_back(object);
        object->setParent(_owner);
    }

    /// @brief Add a new object.
    /// @param object the new object to add.
    inline void transfer_to(value_type object, this_type &other)
    {
        if (this->remove(object))
            other.push_back(object);
    }

    /// @brief Removes the last inserted object.
    /// @return the removed object.
    inline value_type pop_back()
    {
        if (!_objects.empty()) {
            value_type object = _objects.back();
            object->setParent(owner_type());
            _objects.pop_back();
            return object;
        }
        return nullptr;
    }

    /// @brief Removes the given object.
    /// @param object the object to remove.
    /// @return the removed object.
    inline value_type remove(value_type object)
    {
        for (auto it = _objects.begin(); it != _objects.end(); ++it) {
            if ((*it) == object) {
                (*it)->setParent(owner_type());
                _objects.erase(it);
                return (*it);
            }
        }
        return nullptr;
    }

    /// @brief Removes the given object by name.
    /// @param object the name of the object to remove.
    /// @return the removed object.
    inline value_type remove(const std::string &name)
    {
        if constexpr (std::is_convertible_v<ContentType, NamedObject>)
        {
            for (auto it = _objects.begin(); it != _objects.end(); ++it) {
                if ((*it)->getName() == name) {
                    (*it)->setParent(owner_type());
                    _objects.erase(it);
                    return (*it);
                }
            }
        }
        return nullptr;
    }

    /// @brief Provides a string representation of the list for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const
    {
        std::stringstream ss;
        ss << "[";
        for (size_t i = 0; i < _objects.size(); ++i) {
            ss << _objects[i]->toString();
            if (i < (_objects.size() - 1))
                ss << ", ";
        }
        ss << "]";
        return ss.str();
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
    owner_type _owner;
    base_type _objects;
};

} // namespace edacurry::features
