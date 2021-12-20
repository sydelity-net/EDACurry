/// @file json.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief Json parser/writer.
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <vector>
#include <list>
#include <set>
#include <map>

namespace json
{
/// @brief JSON types.
enum jtype_t {
    JSTRING,
    JOBJECT,
    JARRAY,
    JBOOLEAN,
    JNUMBER,
    JNULL,
    JUNKNOWN,
    JERROR
};

inline std::string jtype_to_string(jtype_t type)
{
    if (type == JSTRING)
        return "JSTRING";
    if (type == JOBJECT)
        return "JOBJECT";
    if (type == JARRAY)
        return "JARRAY";
    if (type == JBOOLEAN)
        return "JBOOLEAN";
    if (type == JNUMBER)
        return "JNUMBER";
    if (type == JNULL)
        return "JNULL";
    if (type == JERROR)
        return "JERROR";
    return "JUNKNOWN";
}

class jnode_t;

typedef bool (*json_sort_function)(const jnode_t &, const jnode_t &);

typedef std::map<std::string, jnode_t> property_map_t;

/// @brief Represent a json node.
class jnode_t {
private:
    /// The type of the node.
    jtype_t type;
    /// The value contained inside the node.
    std::string value;
    /// The original line number.
    int line_number;
    /// The properties of the node.
    property_map_t properties;
    /// The array content.
    std::vector<jnode_t> arr;

public:
    /// @brief Constructor.
    jnode_t();

    /// @brief Constructor.
    /// @param type The type to set.
    explicit jnode_t(jtype_t type);

    /// @brief Returns the value of the json node.
    std::string get_value() const;

    /// @brief Returns the type of the json node.
    jtype_t get_type() const;

    /// @brief Checks wheter the node is a JSTRING.
    inline bool is_string() const
    {
        return type == JSTRING;
    }

    /// @brief Checks wheter the node is a JBOOLEAN.
    inline bool is_bool() const
    {
        return type == JBOOLEAN;
    }

    /// @brief Checks wheter the node is a JARRAY.
    inline bool is_array() const
    {
        return type == JARRAY;
    }

    /// @brief Checks wheter the node is a JOBJECT.
    inline bool is_object() const
    {
        return type == JOBJECT;
    }

    /// @brief Checks wheter the node is a JNUMBER.
    inline bool is_number() const
    {
        return type == JNUMBER;
    }

    /// @brief Checks wheter the node is a JNULL.
    inline bool is_null() const
    {
        return type == JNULL;
    }

    /// @brief Returns the original line number.
    int get_line_number() const;

    /// @brief Returns the size of the internal array.
    size_t size() const;

    /// @brief Checks if the current object has the given property.
    /// @param key The key of the property.
    /// @return If the object has the property.
    bool has_property(const std::string &key) const;

    /// @brief Turns the value to INT.
    /// @param check_type If true, check the correspondence of types.
    /// @return The extracted value
    int as_int() const;

    /// @brief Turns the value to DOUBLE.
    /// @param check_type If true, check the correspondence of types.
    /// @return The extracted value
    double as_double() const;

    /// @brief Turns the value to BOOL.
    /// @param check_type If true, check the correspondence of types.
    /// @return The extracted value
    bool as_bool() const;

    /// @brief Turns the value to STRING.
    /// @param check_type If true, check the correspondence of types.
    /// @return The extracted value
    std::string as_string() const;

    /// @brief Sets the type.
    /// @param _type The type to set.
    jnode_t &set_type(jtype_t _type);

    /// @brief Sets the internal value.
    /// @param _value The value to set.
    jnode_t &set_value(const std::string &_value);

    /// @brief Sets the line number.
    /// @param _line_number The line number to set.
    jnode_t &set_line_number(int _line_number);

    /// @brief Adds a new property with the given key.
    /// @param key The key of the property.
    /// @return A reference to the newly created property.
    jnode_t &add_property(const std::string &key);

    /// @brief Remove the property with the given key.
    /// @param key The key of the property.
    void remove_property(const std::string &key);

    /// @brief Ads a given property with the given key.
    /// @param key  The key of the property.
    /// @param node The property to set.
    /// @return A reference to the newly created property.
    jnode_t &add_property(const std::string &key, const jnode_t &node);

    /// @brief Adds the element to the array.
    /// @param node The node to add.
    jnode_t &add_element(const jnode_t &node);

    /// @brief Reserves the given space for the array.
    void reserve(size_t size);

    /// @brief Resize the given space for the array.
    void resize(size_t size);

    /// @brief Clears all the internal data structures.
    void clear();

    /// @brief Allows to sort the entry inside the node, which be a JARRAY.
    /// @param sort_function The function used to sort.
    void sort(json_sort_function sort_function);

    /// @brief Provides access to an internal node.
    /// @param i The index of the node.
    /// @return A const reference to the node. If this node is not
    ///          an array, or an object, returns a node of type JNULL.
    const jnode_t &operator[](size_t i) const;

    /// @brief Provides access to an internal node (THIS=Object/Array).
    /// @param i The index of the node.
    /// @return A reference to the node. If this node is not an array,
    ///          or an object, returns a node of type JNULL.
    jnode_t &operator[](size_t i);

    /// @brief Provides access to an internal node.
    /// @param key The key of the internal node.
    /// @return A const reference to the node. If this node is not
    ///          an array, or an object, returns a node of type JNULL.
    const jnode_t &operator[](const std::string &key) const;

    /// @brief Provides access to an internal node.
    /// @param key The key of the internal node.
    /// @return A reference to the node. If this node is not
    ///          an array, or an object, returns a node of type JNULL.
    jnode_t &operator[](const std::string &key);

    /// @brief Turns the json object to a formatted string.
    /// @param pretty   Enable/Disable pretty print of json.
    /// @param tabsize	The dimension of tabulation (if pretto == true).
    std::string to_string(bool pretty = true, unsigned tabsize = 4) const;

    property_map_t::const_iterator begin() const
    {
        return properties.begin();
    }

    property_map_t::iterator begin()
    {
        return properties.begin();
    }

    property_map_t::const_iterator end() const
    {
        return properties.end();
    }

    property_map_t::iterator end()
    {
        return properties.end();
    }

private:
    /// @brief Turns the json object to a formatted string.
    /// @param depth    The current depth, used for indentation (if pretty == true).
    /// @param pretty   Enable/Disable pretty print of json.
    /// @param tabsize	The dimension of tabulation (if pretty == true).
    std::string to_string_d(int depth, bool pretty = true, unsigned tabsize = 4) const;
};

namespace parser
{
    /// @brief Parse the json formatted string.
    /// @param json_string The json formatted string.
    /// @return the root of the generated json tree.
    jnode_t parse(const std::string &json_string);

    /// @brief Parse the json file.
    /// @param filename Path to the json file.
    /// @return the root of the generated json tree.
    jnode_t parse_file(const std::string &filename);

    /// @brief Write the json node on file.
    /// @param filename Path to the json file.
    /// @param node     The json tree to write.
    /// @param pretty   Enable/Disable pretty print of json.
    /// @param tabsize	The dimension of tabulation (if pretto == true).
    /// @return if the operation is a success.
    bool write_file(const std::string &filename, const jnode_t &node, bool pretty = true, unsigned tabsize = 4);

} // namespace parser

// == From C++ to JSON ========================================================
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, T const &rhs);

inline json::jnode_t &operator<<(json::jnode_t &lhs, char const *rhs)
{
    lhs.set_type(json::JSTRING);
    lhs.set_value(rhs);
    return lhs;
}

inline json::jnode_t &operator<<(json::jnode_t &lhs, char *rhs)
{
    lhs.set_type(json::JSTRING);
    lhs.set_value(rhs);
    return lhs;
}

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::vector<T> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    for (size_t i = 0; i < rhs.size(); ++i) {
        lhs[i] << rhs[i];
    }
    return lhs;
}

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::list<T> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    size_t i = 0;
    for (typename std::list<T>::const_iterator it = rhs.begin(); it != rhs.end(); ++it) {
        lhs[i++] << (*it);
    }
    return lhs;
}

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::set<T> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    size_t i = 0;
    for (typename std::set<T>::const_iterator it = rhs.begin(); it != rhs.end(); ++it) {
        lhs[i++] << (*it);
    }
    return lhs;
}

template <typename T1, typename T2>
json::jnode_t &operator<<(json::jnode_t &lhs, std::map<T1, T2> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JOBJECT);
    typename std::map<T1, T2>::const_iterator it;
    for (it = rhs.begin(); it != rhs.end(); ++it) {
        std::stringstream ss;
        ss << it->first;
        lhs.add_property(ss.str()) << it->second;
    }
    return lhs;
}

// == From JSON to C++ ========================================================
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, T &rhs);

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::vector<T> &rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        // Clear the vector.
        rhs.clear();
        // Resize the vector.
        rhs.resize(lhs.size());
        // Load its elements.
        for (size_t i = 0; i < lhs.size(); ++i) {
            lhs[i] >> rhs[i];
        }
    }
    return lhs;
}

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::list<T> &rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        rhs.clear();
        rhs.resize(lhs.size());
        size_t i = 0;
        for (typename std::list<T>::iterator it = rhs.begin(); it != rhs.end(); ++it) {
            lhs[i++] >> (*it);
        }
    }
    return lhs;
}

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::set<T> &rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        rhs.clear();
        for (size_t i = 0; i < lhs.size(); ++i) {
            T t;
            lhs[i] >> t;
            rhs.insert(t);
        }
    }
    return lhs;
}

template <typename T1, typename T2>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::map<T1, T2> &rhs)
{
    // Check the type.
    if (lhs.get_type() == json::JOBJECT) {
        rhs.clear();
        json::property_map_t::const_iterator it;
        for (it = lhs.begin(); it != lhs.end(); ++it) {
            std::stringstream ss;
            ss << it->first;
            T1 key;
            ss >> key;
            it->second >> rhs[key];
        }
    }
    return lhs;
}

/// @brief Define the pair of operators required to handle C++ enums.
#define JSON_DEFINE_OP_ENUM(type)                                        \
    template <>                                                          \
    json::jnode_t &operator<<(json::jnode_t &lhs, const type &rhs)       \
    {                                                                    \
        return (lhs << static_cast<int>(rhs));                           \
    }                                                                    \
    template <>                                                          \
    const json::jnode_t &operator>>(const json::jnode_t &lhs, type &rhs) \
    {                                                                    \
        rhs = static_cast<type>(lhs.as_int());                           \
        return lhs;                                                      \
    }

} // namespace json