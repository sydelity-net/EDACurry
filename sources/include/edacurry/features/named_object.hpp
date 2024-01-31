/// @file   named_object.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <string>
#include <vector>

namespace edacurry::features
{
/// @brief Represent a named object.
class NamedObject {
public:
    /// @brief Construct a new Named Object object.
    /// @param name the name of the object.
    NamedObject(const std::string &name = std::string());

    ~NamedObject() = default;

    /// @brief Sets the name.
    /// @param name the name to be set.
    void setName(const std::string &name);

    /// @brief Gets the name.
    /// @return The name.
    std::string getName() const;

    /// @brief Checks whether given name is equals to this object name.
    /// @param name The name to check.
    /// @return <tt>True</tt> if names are equals.
    bool matchName(const std::string &name) const;

    /// @brief Removes the item from the list based on the name.
    /// @tparam Derived
    /// @param list
    /// @param name
    /// @return Derived*
    template <typename Derived>
    static Derived *removeFromListByName(std::vector<Derived *> &list, const std::string &name)
    {
        static_assert(std::is_convertible_v<Derived *, NamedObject *>, "Derived must inherit NamedObject as public");
        for (auto it = list.begin(); it != list.end(); ++it) {
            if ((*it)->getName() == name) {
                (*it)->setParent(nullptr);
                list.erase(it);
                return (*it);
            }
        }
        return nullptr;
    }

protected:
    NamedObject(const NamedObject &other) = delete;

    NamedObject &operator=(const NamedObject &other) = delete;

private:
    /// The name of the object.
    std::string _name;
};

} // namespace edacurry::features