/// @file   object.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/visitable_object.hpp"
#include <sstream>
#include <vector>
#include <string>

namespace edacurry::structure
{
/// @brief Basic circuit element.
class Object : public features::Visitable {
public:
    /// @brief Construct a new object.
    /// @param parent The parent of the object.
    explicit Object(Object *parent = nullptr);

    /// @brief Destructor.
    virtual ~Object() = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    virtual std::string toString() const;

    /// @brief Returns the parent of the object.
    /// @return The parent of the object.
    Object *getParent() const;

    /// @brief Sets the parent of the object.
    /// @param parent The parent of the object.
    /// @return The old parent.
    Object *setParent(Object *parent);

    /// @brief Removes the item from the list.
    /// @tparam Derived
    /// @param list
    /// @param item
    /// @return Derived*
    template <typename Derived>
    static Derived *removeFromList(std::vector<Derived *> &list, Derived *item)
    {
        static_assert(std::is_convertible<Derived *, Object *>::value,
                      "Derived must inherit Object as public");
        for (auto it = list.begin(); it != list.end(); ++it) {
            if ((*it) == item) {
                (*it)->setParent(nullptr);
                list.erase(it);
                return (*it);
            }
        }
        return nullptr;
    }

protected:
    /// @brief Set the child of the current object.
    /// @tparam Derived the type of the child.
    /// @param child the child to be replaced.
    /// @param value the new child.
    /// @return The old child if it is different from the new one, nullptr otherwise.
    template <typename Derived>
    Derived *setChild(Derived *&child, Derived *value)
    {
        static_assert(std::is_convertible<Derived *, Object *>::value,
                      "Derived must inherit Object as public");
        // If child and new value are the same value, return it.
        if (child == value)
            return child;

        if (value != nullptr) {
            // If value is child of another object, we need to migrate
            // it from the old parent to the new one.
            if (value->getParent() != nullptr)
                value->getParent()->setChild(value, (Derived *)nullptr);
            value->setParent(this);
        }
        if (child != nullptr) {
            child->setParent(nullptr);
        }
        // Set the child and return it.
        return (child = value);
    }

    /// @brief Set the child of the current object.
    /// @tparam Derived the type of the child.
    /// @param child the child to be replaced.
    /// @param value the new child.
    /// @return The old child if it is different from the new one, nullptr otherwise.
    template <typename Derived>
    std::vector<Derived *> setChildren(std::vector<Derived *> &children,
                                       std::vector<Derived *> values)
    {
        static_assert(std::is_convertible<Derived *, Object *>::value,
                      "Derived must inherit Object as public");

        // Unset the parent for the children.
        for (auto &child : children) { child->setParent(nullptr); }

        // Save the old values.
        auto old_values = std::move(children);

        // Set the new list.
        children = values;

        // Change the parent of the new internal elements.
        for (auto &child : children) { child->setParent(this); }

        // Return the old values.
        return old_values;
    }

private:
    /// The parent of the object.
    Object *_parent;
};

template <typename Derived>
inline std::string object_list_to_string(const std::vector<Derived *> &list)
{
    static_assert(std::is_convertible<Derived *, Object *>::value,
                  "Derived must inherit Object as public");
    std::stringstream ss;
    ss << "(";
    for (size_t i = 0; i < list.size(); ++i) {
        ss << list[i]->toString();
        if (i < (list.size() - 1))
            ss << ",";
    }
    ss << ")";
    return ss.str();
}

} // namespace edacurry::structure