/// @file ordered_map.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief

#pragma once

#include <map>
#include <list>

/// @brief This namespace contains the main table class.
namespace ordered_map
{

/// @brief A wrapper for a `std::list` container, which uses a `std::map` for accessing the data.
/// @tparam Key the type of the key for building the `std::map`.
/// @tparam Value the value stored inside the `std::list`.
template <typename Key, typename Value>
class ordered_map_t {
public:
    /// @brief The  storage.
    typedef std::pair<Key, Value> list_entry_t;
    /// @brief The value storage.
    typedef std::list<list_entry_t> list_t;
    /// @brief Iteartor for the list.
    typedef typename list_t::iterator iterator;
    /// @brief Constant iteartor for the list.
    typedef typename list_t::const_iterator const_iterator;
    /// @brief The type of a compatible sort function.
    typedef bool (*sort_function_t)(const list_entry_t &, const list_entry_t &);

    /// @brief Construct a new ordered map.
    ordered_map_t()
        : list(),
          table()
    {
        // Nothing to do.
    }

    /// @brief Copy constructor.
    /// @param other a reference to the map to copy.
    /// @details I had to define one, otherwise copying this map will screw up
    /// the copy of the iterators contained inside the `std::map`. That is why,
    /// here I copy each individual element of the list and store the iterator,
    /// again.
    ordered_map_t(const ordered_map_t &other)
        : list(),
          table()
    {
        for (const_iterator it = other.list.begin(); it != other.list.end(); ++it) {
            list.push_back(std::make_pair(it->first, it->second));
            table.insert(std::make_pair(it->first, --(list.end())));
        }
    }

    /// @brief Clears the content of the map.
    void clear()
    {
        list.clear();
        table.clear();
    }

    /// @brief Returns the number of element in the map.
    std::size_t size() const
    {
        return list.size();
    }

    /// @brief Sets/updates the `<key,value>` pair inside the map.
    /// @param key the value identifier.
    /// @param value the actual value.
    /// @return the iterator to the newly inserted/updated element in the map.
    iterator set(const Key &key, const Value &value)
    {
        // First, we search for the element inside the table.
        table_iterator it_table = table.find(key);
        // Create the return iterator.
        iterator it_list;
        // Now, if the element is not in the table, we need to add it.
        if (it_table == table.end()) {
            // First, we add the element to the list.
            list.push_back(std::make_pair(key, value));
            // Then, we get the pointer to the newly inserted element.
            it_list = --(list.end());
            // Finally, we store inside the map the `<key, iteartor>` pair to
            // easily access the element inside the list.
            table.insert(std::make_pair(key, it_list));
        } else {
            // First, we get the list iterator.
            it_list = it_table->second;
            // Then, we update the associated value.
            it_list->second = value;
        }
        return it_list;
    }

    /// @brief Returns an iterator the beginning of the list.
    iterator begin()
    {
        return list.begin();
    }

    /// @brief Returns a const iterator the beginning of the list.
    const_iterator begin() const
    {
        return list.begin();
    }

    /// @brief Returns an iterator the end of the list.
    iterator end()
    {
        return list.end();
    }

    /// @brief Returns a const iterator the end of the list.
    const_iterator end() const
    {
        return list.end();
    }

    /// @brief Erases the elment from the list, and returns an iteator to the
    /// same position in the list (i.e., the elment after the one removed).
    /// @param key the key of the element to remove.
    /// @return an iterator to the same position in the list.
    iterator erase(const Key &key)
    {
        table_iterator it_table = table.find(key);
        if (it_table == table.end())
            return list.end();
        iterator it_list = it_table->second;
        ++it_list;
        list.erase(it_table->second);
        table.erase(it_table);
        return it_list;
    }

    /// @brief Erases the elment from the list, and returns an iteator to the
    /// same position in the list (i.e., the elment after the one removed).
    /// @param it_list the iterator of the element to remove.
    /// @return an iterator to the same position in the list.
    iterator erase(iterator it_list)
    {
        table_iterator it_table = table.find(it_list->first);
        if (it_table == table.end())
            return list.end();
        ++it_list;
        list.erase(it_table->second);
        table.erase(it_table);
        return it_list;
    }

    /// @brief Returns an iterator to the element in the given position.
    /// @param position the position of the element to retrieve.
    /// @return an iterator to the element, or the end of the list if not found.
    iterator at(std::size_t position)
    {
        iterator it = list.begin();
        for (std::size_t i = 0; (i < position) && (it != list.end()); ++i, ++it) {}
        return it;
    }

    /// @brief Returns an iterator to the element in the given position.
    /// @param position the position of the element to retrieve.
    /// @return an iterator to the element, or the end of the list if not found.
    const_iterator at(std::size_t position) const
    {
        const_iterator it = list.begin();
        for (std::size_t i = 0; (i < position) && (it != list.end()); ++i, ++it) {}
        return it;
    }

    /// @brief Returns an iterator to the element associated with the given key.
    /// @param key the key of the element to search for.
    /// @return an iterator to the element, or the end of the list if not found.
    iterator find(const Key &key)
    {
        table_iterator it = table.find(key);
        if (it == table.end())
            return list.end();
        return it->second;
    }

    /// @brief Returns an iterator to the element associated with the given key.
    /// @param key the key of the element to search for.
    /// @return an iterator to the element, or the end of the list if not found.
    const_iterator find(const Key &key) const
    {
        table_const_iterator it = table.find(key);
        if (it == table.end())
            return list.end();
        return it->second;
    }

    /// @brief Sorts the internal list.
    /// @param fun the sorting function.
    inline void sort(const sort_function_t &fun)
    {
        list.sort(fun);
    }

    /// @brief Copy constructor.
    /// @param other a reference to the map to copy.
    /// @details I had to define one, otherwise copying this map will screw up
    /// the copy of the iterators contained inside the `std::map`. That is why,
    /// here I copy each individual element of the list and store the iterator,
    /// again.
    ordered_map_t &operator=(const ordered_map_t &other)
    {
        this->clear();
        for (const_iterator it = other.list.begin(); it != other.list.end(); ++it) {
            list.push_back(std::make_pair(it->first, it->second));
            table.insert(std::make_pair(it->first, --(list.end())));
        }
        return *this;
    }

private:
    /// @brief Type of the map.
    typedef std::map<Key, iterator> table_t;
    typedef typename table_t::iterator table_iterator;
    typedef typename table_t::const_iterator table_const_iterator;
    /// @brief The list containing the actual data.
    list_t list;
    /// @brief A table for easy access to the data by using a key.
    table_t table;
};

} // namespace ordered_map
