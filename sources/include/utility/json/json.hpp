/// @file json.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief

#pragma once

#include <algorithm>

#include <iostream>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

#ifdef __cpp_lib_span
#include <span>
#endif

#include "ordered_map/ordered_map.hpp"

/// @brief This namespace contains the main json_t class and stream functions.
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

/// @brief Represent a json node.
class jnode_t {
public:
    /// The internal map of properties for JOBJECT nodes.
    typedef typename ordered_map::ordered_map_t<std::string, jnode_t> property_map_t;
    /// How properties are stored inside the internal map.
    typedef typename ordered_map::ordered_map_t<std::string, jnode_t>::list_entry_t property_t;
    /// The internal array of objects for JARRAY nodes.
    typedef typename std::vector<jnode_t> array_data_t;
    /// Sorting function for JARRAY.
    typedef bool (*sort_function_array_t)(const jnode_t &, const jnode_t &);
    /// Sorting function for JOBJECT.
    typedef bool (*sort_function_object_t)(const property_t &, const property_t &);

    /// @brief Constructor.
    jnode_t();

    /// @brief Constructor.
    /// @param _type The type to set.
    explicit jnode_t(jtype_t _type);

    /// @brief Returns the value of the json node.
    /// @return the unprocessed string contained in the node.
    std::string get_value() const;

    /// @brief Returns the type of the json node.
    /// @return the jtype_t of this node.
    jtype_t get_type() const;

    /// @brief Checks wheter the node is a JSTRING.
    /// @return true if the internal value is a string, false otherwise.
    inline bool is_string() const;

    /// @brief Checks wheter the node is a JBOOLEAN.
    /// @return true if the internal value is a bool, false otherwise.
    inline bool is_bool() const;

    /// @brief Checks wheter the node is a JARRAY.
    /// @return true if the node is an array of elements, false otherwise.
    inline bool is_array() const;

    /// @brief Checks wheter the node is a JOBJECT.
    /// @return true if the node is an object, false otherwise.
    inline bool is_object() const;

    /// @brief Checks wheter the node is a JNUMBER.
    /// @return true if the internal value is a number, false otherwise.
    inline bool is_number() const;

    /// @brief Checks wheter the node is a JNULL.
    /// @return true if the node contains is invalid, false otherwise.
    inline bool is_null() const;

    /// @brief Returns the line number where the object resides in the original code.
    /// @return the line number if the object was created by parsing a file, -1 otherwise.
    int get_line_number() const;

    /// @brief Returns the size of the internal array or the number of properties of the object.
    /// @return the size of the internal array or the number of properties of the object.
    std::size_t size() const;

    /// @brief Checks if the current object has the given property.
    /// @param key The key of the property.
    /// @return true if the object has the property, false otherwise.
    bool has_property(const std::string &key) const;

    /// @brief Turns the value to INT.
    /// @param check_type If true, check the correspondence of types.
    /// @return The extracted value
    template <typename T>
    T as_number() const
    {
        if (type == JNUMBER) {
            std::stringstream ss;
            ss << value;
            T output;
            ss >> output;
            return output;
        }
#ifdef STRICT_TYPE_CHECK
        throw TypeError(line_number, JNUMBER, type);
#else
        return static_cast<T>(0);
#endif
    }

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
    /// @return a reference to this object.
    jnode_t &set_type(jtype_t _type);

    /// @brief Sets the internal value.
    /// @param _value The value to set.
    /// @return a reference to this object.
    jnode_t &set_value(const std::string &_value);

    /// @brief Sets the line number.
    /// @param _line_number The line number to set.
    /// @return a reference to this object.
    jnode_t &set_line_number(int _line_number);

    /// @brief Adds a new property with the given key.
    /// @param key The key of the property.
    /// @return A reference to the newly created property.
    jnode_t &add_property(const std::string &key);

    /// @brief Ads a given property with the given key.
    /// @param key  The key of the property.
    /// @param node The property to set.
    /// @return A reference to the newly created property.
    jnode_t &add_property(const std::string &key, const jnode_t &node);

    /// @brief Remove the property with the given key.
    /// @param key The key of the property.
    void remove_property(const std::string &key);

    /// @brief Adds the element to the array.
    /// @param node The node to add.
    /// @return a reference to the added object.
    jnode_t &add_element(const jnode_t &node = jnode_t());

    /// @brief Removes an element from the array.
    /// @param i position of the element.
    void remove_element(std::size_t i);

    /// @brief Reserves the given space for the array.
    /// @param size the number of elements.
    void reserve(std::size_t size);

    /// @brief Resize the array to the given value and fills it with empty objects.
    /// @param size the number of elements.
    void resize(std::size_t size);

    /// @brief Clears all the internal data structures.
    void clear();

    /// @brief Allows to sort the entry inside the node, which be a JARRAY.
    /// @param fun The function used to sort.
    template <typename SortFunction>
    void sort(const SortFunction &fun)
    {
        if (type == JARRAY) {
            std::sort(arr.begin(), arr.end(), fun);
        } else if (type == JOBJECT) {
            properties.sort(fun);
        } else {
            throw std::runtime_error("You are trying to sort neither a JARRAY nor a JOBJECT");
        }
    }

    /// @brief Provides access to an internal node.
    /// @param i The index of the node.
    /// @return A const reference to the node. If this node is not
    ///          an array, or an object, returns a node of type JNULL.
    const jnode_t &operator[](std::size_t i) const;

    /// @brief Provides access to an internal node (THIS=Object/Array).
    /// @param i The index of the node.
    /// @return A reference to the node. If this node is not an array,
    ///          or an object, returns a node of type JNULL.
    jnode_t &operator[](std::size_t i);

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
    /// @return the string representation of the node.
    std::string to_string(bool pretty = true, unsigned tabsize = 4) const;

    /// @brief Returns a constant iterator pointing to the **beginning** of the **property map**.
    /// @return the iterator.
    property_map_t::const_iterator pbegin() const;

    /// @brief Returns an iterator pointing to the **beginning** of the **property map**.
    /// @return the iterator.
    property_map_t::iterator pbegin();

    /// @brief Returns a constant iterator pointing to the **end** of the **property map**.
    /// @return the iterator.
    property_map_t::const_iterator pend() const;

    /// @brief Returns an iterator pointing to the **end** of the **property map**.
    /// @return the iterator.
    property_map_t::iterator pend();

    /// @brief Returns a constant iterator pointing to the **beginning** of the **array**.
    /// @return the iterator.
    array_data_t::const_iterator abegin() const;

    /// @brief Returns an iterator pointing to the **beginning** of the **array**.
    /// @return the iterator.
    array_data_t::iterator abegin();

    /// @brief Returns a constant iterator pointing to the **end** of the **array**.
    /// @return the iterator.
    array_data_t::const_iterator aend() const;

    /// @brief Returns an iterator pointing to the **end** of the **array**.
    /// @return the iterator.
    array_data_t::iterator aend();

private:
    /// @brief Turns the json object to a formatted string.
    /// @param depth    The current depth, used for indentation (if pretty == true).
    /// @param pretty   Enable/Disable pretty print of json.
    /// @param tabsize	The dimension of tabulation (if pretty == true).
    /// @return the generated string.
    std::string to_string_d(int depth, bool pretty = true, unsigned tabsize = 4) const;

    /// The type of the node.
    jtype_t type;
    /// The value contained inside the node.
    std::string value;
    /// The original line number.
    int line_number;
    /// The properties of the node.
    property_map_t properties;
    /// The array content.
    array_data_t arr;
};

/// @brief This namespace contains all sort of support function.
namespace detail
{

/// @brief Transforms the given JSON type to string.
/// @param type the JSON type to transform to string.
/// @return the string representing the JSON type.
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

/// @brief Access map's elements in a linear fashion.
/// @param map the map we want to access.
/// @param n the index of the element we want to retrieve.
/// @return an interator to the element.
template <class K, class T>
inline typename std::map<K, T>::const_iterator get_iterator_at(const std::map<K, T> &map, std::size_t n)
{
    typename std::map<K, T>::const_iterator it = map.begin();
    for (std::size_t i = 0; i < n; ++i, ++it)
        if (it == map.end())
            break;
    return it;
}

/// @brief Access map's elements in a linear fashion.
/// @param map the map we want to access.
/// @param n the index of the element we want to retrieve.
/// @return an interator to the element.
template <class K, class T>
inline typename std::map<K, T>::iterator get_iterator_at(std::map<K, T> &map, std::size_t n)
{
    typename std::map<K, T>::iterator it = map.begin();
    for (std::size_t i = 0; i < n; ++i, ++it)
        if (it == map.end())
            break;
    return it;
}

/// @brief Replaces all the occurences of WHAT with WITH, in INPUT.
/// @param input the string we want to manipulate.
/// @param what the string we want to replace.
/// @param with the string we use as replacement.
/// @return a reference to the input string.
inline std::string &replace_all(std::string &input, const std::string &what, const std::string &with)
{
    std::size_t i = 0;
    while ((i = input.find(what, i)) != std::string::npos) {
        input.replace(i, what.size(), with);
        i += with.size();
    }
    return input;
}

/// @brief Replaces all the occurences of WHAT with WITH, in INPUT.
/// @param input the string we want to manipulate.
/// @param what the char we want to replace.
/// @param with the string we use as replacement.
/// @return a reference to the input string.
inline std::string &replace_all(std::string &input, char what, const std::string &with)
{
    std::size_t i = 0;
    while ((i = input.find(what, i)) != std::string::npos) {
        input.replace(i, 1U, with);
        i += with.size();
    }
    return input;
}

/// @brief Transforms the boolean value to string.
/// @param value the boolean value.
/// @return the string representation of the boolean value.
inline std::string bool_to_string(bool value)
{
    return value ? "true" : "false";
}

/// @brief Transforms the ASCII integer representing the character into a string.
/// @param value the input character.
/// @return the output string.
inline std::string char_to_string(char value)
{
    std::stringstream ss;
    ss << static_cast<int>(value);
    return ss.str();
}

/// @brief Transforms the number to string.
/// @param value the input number.
/// @return the output string.
template <typename T>
inline std::string number_to_string(T value)
{
    std::stringstream ss;
    ss << value;
    return ss.str();
}

/// @brief Generates the indenation.
/// @param depth depth of the indentation.
/// @param tabsize the number of character for each depth unit.
/// @return the output indentation as string.
inline std::string make_indentation(unsigned depth, unsigned tabsize = 4)
{
    return std::string(depth * tabsize, ' ');
}

/// @brief Checks if the given character is a newline.
/// @param c the input character.
/// @return if the character is a newline.
inline bool isnewline(char c)
{
    return (c == '\n') || (c == '\r');
}

/// @brief Searches for the next whitespace in SOURCE starting from I.
/// @param source the source string.
/// @param index the index.
/// @return the index of the next whitespace.
inline int next_whitespace(const std::string &source, int index)
{
    int slength = static_cast<int>(source.length());
    while (index < slength) {
        if (source[index] == '"') {
            ++index;
            while (index < slength) {
                if (source[index] == '"') {
                    if (source[index - 1] != '\\')
                        break;
                    else if ((source[index - 2] == '\\') && (source[index - 3] != '\\'))
                        break;
                }
                ++index;
            }
        }
        if (source[index] == '\'') {
            ++index;
            while (index < slength) {
                if (source[index] == '\'') {
                    if (source[index - 1] != '\\')
                        break;
                    else if (source[index - 2] == '\\')
                        break;
                }
                ++index;
            }
        }
        if (std::isspace(source[index])) {
            return index;
        }
        ++index;
    }
    return slength;
}

/// @brief Skips the whitespaces starting from INDEX.
/// @param source the sources string.
/// @param index the index we start skipping from.
/// @param line_number the current line number.
/// @return the index of the next non-whitespace character.
inline int skip_whitespaces(const std::string &source, int index, int &line_number)
{
    while (index < static_cast<int>(source.length())) {
        if (!std::isspace(source[index])) {
            return index;
        }
        line_number += detail::isnewline(source[index]);
        ++index;
    }
    return -1;
}

/// @brief Deserializes the given string.
/// @param ref the input string.
/// @return the deserialized input string.
inline std::string deserialize(const std::string &ref)
{
    std::string out;
    for (std::size_t i = 0; i < ref.length(); ++i) {
        if ((ref[i] == '\\') && ((i + 1) < ref.length())) {
            int plus = 2;
            if (ref[i + 1] == '\"') {
                out.push_back('"');
            } else if (ref[i + 1] == '\\') {
                out.push_back('\\');
            } else if (ref[i + 1] == '/') {
                out.push_back('/');
            } else if (ref[i + 1] == 'b') {
                out.push_back('\b');
            } else if (ref[i + 1] == 'f') {
                out.push_back('\f');
            } else if (ref[i + 1] == 'n') {
                out.push_back('\n');
            } else if (ref[i + 1] == 'r') {
                out.push_back('\r');
            } else if (ref[i + 1] == 't') {
                out.push_back('\t');
            } else if (ref[i + 1] == 'u' && i + 5 < ref.length()) {
                unsigned long v = 0;
                for (int j = 0; j < 4; j++) {
                    v *= 16;
                    if (ref[i + 2 + j] <= '9' && ref[i + 2 + j] >= '0')
                        v += ref[i + 2 + j] - '0';
                    if (ref[i + 2 + j] <= 'f' && ref[i + 2 + j] >= 'a')
                        v += ref[i + 2 + j] - 'a' + 10;
                }
                out.push_back((char)v);
                plus = 6;
            }
            i += plus - 1;
            continue;
        }
        out.push_back(ref[i]);
    }
    return out;
}

/// @brief The type of tokens we use to control parsing.
enum token_type_t {
    UNKNOWN,       ///< An unknown token.
    STRING,        ///< We are parsing a string.
    NUMBER,        ///< We are parsing a number.
    CURLY_OPEN,    ///< We found an open curly braket.
    CURLY_CLOSE,   ///< We found a close curly braket.
    BRACKET_OPEN,  ///< We found an open braket.
    BRACKET_CLOSE, ///< We found a close braket.
    COMMA,         ///< We found a comma.
    COLON,         ///< We found a colon.
    BOOLEAN,       ///< We found a boolean.
    NUL            ///< We found a NULL value.
};

/// @brief A token use for parsing.
typedef struct token_t {
    /// The value.
    std::string value;
    /// The type.
    token_type_t type;
    /// The line number.
    int line_number;

    /// @brief Creates a new token.
    /// @param _value the value contained in the token.
    /// @param _type the type of token.
    /// @param _line_number the line where the token was extracted from.
    token_t(const std::string &_value = "", token_type_t _type = UNKNOWN, int _line_number = 0)
        : value(_value),
          type(_type),
          line_number(_line_number)
    {
        // Nothing to do.
    }
} token_t;

/// @brief Parse the SOURCE string and extracts all of its tokens.
/// @param source the input string.
/// @param tokens a vector where we store the parsed tokens.
/// @return a reference to the token vector.
std::vector<token_t> &tokenize(const std::string &source, std::vector<token_t> &tokens)
{
    int line_number = 0;
    int index       = detail::skip_whitespaces(source, 0, line_number);
    while (index >= 0) {
        int next        = detail::next_whitespace(source, index);
        std::string str = source.substr(index, next - index);
        std::size_t k   = 0;
        while (k < str.length()) {
            if (str[k] == '"') {
                std::size_t j = k + 1;
                while (j < str.length()) {
                    if (str[j] == '"') {
                        if (str[j - 1] != '\\')
                            break;
                        else if ((str[j - 2] == '\\') && (str[j - 3] != '\\'))
                            break;
                    }
                    ++j;
                }
                tokens.push_back(token_t(str.substr(k + 1, j - k - 1), STRING, line_number));
                k = j + 1;
                continue;
            }
            if (str[k] == '\'') {
                std::size_t j = k + 1;
                while (j < str.length()) {
                    if (str[j] == '\'') {
                        if (str[j - 1] != '\\')
                            break;
                        else if (str[j - 2] == '\\')
                            break;
                    }
                    ++j;
                }
                tokens.push_back(token_t(str.substr(k + 1, j - k - 1), STRING, line_number));
                k = j + 1;
                continue;
            }
            if (str[k] == ',') {
                tokens.push_back(token_t(",", COMMA, line_number));
                ++k;
                continue;
            }
            if (str[k] == 't' && k + 3 < str.length() && str.substr(k, 4) == "true") {
                tokens.push_back(token_t("true", BOOLEAN, line_number));
                k += 4;
                continue;
            }
            if (str[k] == 'f' && k + 4 < str.length() && str.substr(k, 5) == "false") {
                tokens.push_back(token_t("false", BOOLEAN, line_number));
                k += 5;
                continue;
            }
            if (str[k] == 'n' && k + 3 < str.length() && str.substr(k, 4) == "null") {
                tokens.push_back(token_t("null", NUL, line_number));
                k += 4;
                continue;
            }
            if (str[k] == '}') {
                tokens.push_back(token_t("}", CURLY_CLOSE, line_number));
                ++k;
                continue;
            }
            if (str[k] == '{') {
                tokens.push_back(token_t("{", CURLY_OPEN, line_number));
                ++k;
                continue;
            }
            if (str[k] == ']') {
                tokens.push_back(token_t("]", BRACKET_CLOSE, line_number));
                ++k;
                continue;
            }
            if (str[k] == '[') {
                tokens.push_back(token_t("[", BRACKET_OPEN, line_number));
                ++k;
                continue;
            }
            if (str[k] == ':') {
                tokens.push_back(token_t(":", COLON, line_number));
                ++k;
                continue;
            }
            if (str[k] == '-' || std::isdigit(str[k])) {
                std::size_t k2 = k;
                if (str[k2] == '-') {
                    ++k2;
                }
                while (k2 < str.size()) {
                    if ((str[k2] != '.') && !std::isdigit(str[k2])) {
                        if ((str[k2] != 'e') && (str[k2] != 'E')) {
                            break;
                        }
                        if ((k2 + 1) >= str.size()) {
                            break;
                        }
                        if ((str[k2 + 1] != '+') && (str[k2 + 1] != '-')) {
                            if (std::isdigit(str[k2 + 1])) {
                                k2 += 2;
                            } else {
                                break;
                            }
                        } else {
                            if ((k2 + 3) >= str.size()) {
                                break;
                            }
                            if (std::isdigit(str[k2 + 3])) {
                                k2 += 3;
                            } else {
                                break;
                            }
                        }
                    }
                    ++k2;
                }
                tokens.push_back(token_t(str.substr(k, k2 - k), NUMBER, line_number));
                k = k2;
                continue;
            }
            if (str[k] == '#' && (k + 1 < str.length()) && str.substr(k, 2) == "##") {
                tokens.push_back(token_t(str.substr(k, 2), UNKNOWN, line_number));
                k += 2;
                continue;
            }
            tokens.push_back(token_t(str.substr(k), UNKNOWN, line_number));
            k = str.length();
        }
        index = detail::skip_whitespaces(source, next, line_number);
    }
    return tokens;
}

/// @brief Parse the list of tokens into a JSON tree.
/// @param tokens the list of tokens.
/// @param i the internal index we use to handle tokens.
/// @param r the index we are currently dealing with.
/// @return the generated json sub-tree.
jnode_t json_parse(std::vector<token_t> &tokens, std::size_t i, std::size_t &r)
{
    jnode_t current;
    // Set line number.
    current.set_line_number(tokens[i].line_number + 1);
    // Parse the element.
    if (tokens[i].type == CURLY_OPEN) {
        // Set type.
        current.set_type(JOBJECT);
        // Set the value.
        ++i;
        while (tokens[i].type != CURLY_CLOSE) {
            std::string key = tokens[i].value;
            i += 2; // k+1 should be ':'
            std::size_t j = i;
            current.add_property(key, json_parse(tokens, i, j));
            i = j;
            if (tokens[i].type == COMMA) {
                ++i;
            }
            if (i >= tokens.size()) {
                std::cerr << "We ran out of tokens at token `" << r << "`, at line `" << current.get_line_number() << "`\n";
                std::exit(1);
            }
        }
    } else if (tokens[i].type == BRACKET_OPEN) {
        // Set type.
        current.set_type(JARRAY);
        // Set the value.
        ++i;
        while (tokens[i].type != BRACKET_CLOSE) {
            std::size_t j = i;
            current.add_element(json_parse(tokens, i, j));
            i = j;
            if (tokens[i].type == COMMA) {
                ++i;
            }
        }
    } else if (tokens[i].type == NUMBER) {
        // Set type.
        current.set_type(JNUMBER);
        // Set the value.
        current.set_value(tokens[i].value);
    } else if (tokens[i].type == STRING) {
        // Set type.
        current.set_type(JSTRING);
        // Replace protected special characters, with the actual ones.
        // detail::replace_all(tokens[i].value, "\\n", "\n");
        // detail::replace_all(tokens[i].value, "\\\"", "\"");
        // Set the value.
        current.set_value(tokens[i].value);
    } else if (tokens[i].type == BOOLEAN) {
        // Set type.
        current.set_type(JBOOLEAN);
        // Set the value.
        current.set_value(tokens[i].value);
    } else if (tokens[i].type == NUL) {
        // Set type.
        current.set_type(JNULL);
        // Set the value.
        current.set_value("null");
    } else {
        // Set type.
        current.set_type(JUNKNOWN);
        // Set the value.
        current.set_value("##");
    }
    // Move to the next token.
    r = i + 1;
    return current;
}

} // namespace detail

/// @brief Contains parsing functions.
namespace parser
{

/// @brief Parse the json formatted string.
/// @param json_string The json formatted string.
/// @return the root of the generated json tree.
jnode_t parse(const std::string &json_string)
{
    std::size_t k = 0;
    std::vector<detail::token_t> tokens;
    // Extract the tokens.
    detail::tokenize(json_string, tokens);
    // Parse the tokens.
    return detail::json_parse(tokens, 0UL, k);
}

/// @brief Parse the json file.
/// @param filename Path to the json file.
/// @return the root of the generated json tree.
jnode_t parse_file(const std::string &filename)
{
    std::ifstream in(filename.c_str());
    if (!in.is_open()) {
        jnode_t null_value(JNULL);
        return null_value;
    }
    std::stringstream ss;
    ss << in.rdbuf() << " ";
    in.close();
    return parser::parse(ss.str());
}

/// @brief Write the json node on file.
/// @param filename Path to the json file.
/// @param node     The json tree to write.
/// @param pretty   Enable/Disable pretty print of json.
/// @param tabsize	The dimension of tabulation (if pretto == true).
/// @return if the operation is a success.
bool write_file(const std::string &filename, const jnode_t &node, bool pretty = true, unsigned tabsize = 4)
{
    std::ofstream out(filename.c_str());
    if (out.is_open()) {
        out << node.to_string(pretty, tabsize);
        out.close();
        return true;
    }
    return false;
}

} // namespace parser

/// @brief Represents an out-of-bound error.
class RangeError : public std::out_of_range {
public:
    /// @brief Construct a new range error.
    /// @param index the index we tried to access.
    /// @param size the size of the container.
    RangeError(std::size_t index, std::size_t size)
        : std::out_of_range("Trying to access item at " + detail::number_to_string(index) + " of " + detail::number_to_string(size) + ".")
    {
        // Nothing to do.
    }
};

/// @brief Represents a type error.
class TypeError : public std::runtime_error {
public:
    /// @brief Construct a new type error.
    /// @param line the line where the error was found.
    /// @param expected the expected type.
    /// @param found the type we actually found.
    TypeError(std::size_t line, jtype_t expected, jtype_t found)
        : std::runtime_error("line " + detail::number_to_string(line) + " : Expecting " + detail::jtype_to_string(expected) + " but found " + detail::jtype_to_string(found) + ".")
    {
        // Nothing to do.
    }
};

jnode_t::jnode_t()
    : type(JUNKNOWN),
      value(),
      line_number(),
      properties(),
      arr()
{
    // Nothing to do.
}

jnode_t::jnode_t(jtype_t _type)
    : type(_type),
      value(),
      line_number(),
      properties(),
      arr()
{
    // Nothing to do.
}

inline std::string jnode_t::get_value() const
{
    return value;
}

inline jtype_t jnode_t::get_type() const
{
    return type;
}

inline bool jnode_t::is_string() const
{
    return type == JSTRING;
}

inline bool jnode_t::is_bool() const
{
    return type == JBOOLEAN;
}

inline bool jnode_t::is_array() const
{
    return type == JARRAY;
}

inline bool jnode_t::is_object() const
{
    return type == JOBJECT;
}

inline bool jnode_t::is_number() const
{
    return type == JNUMBER;
}

inline bool jnode_t::is_null() const
{
    return type == JNULL;
}

inline int jnode_t::get_line_number() const
{
    return line_number;
}

inline std::size_t jnode_t::size() const
{
    if (type == JARRAY)
        return arr.size();
    if (type == JOBJECT)
        return properties.size();
    return 0;
}

inline bool jnode_t::has_property(const std::string &key) const
{
    if (type == JOBJECT)
        return properties.find(key) != properties.end();
    return false;
}

inline bool jnode_t::as_bool() const
{
    if (type == JBOOLEAN)
        return value == "true";
#ifdef STRICT_TYPE_CHECK
    throw TypeError(line_number, JBOOLEAN, type);
#else
    return false;
#endif
}

inline std::string jnode_t::as_string() const
{
    if (type == JSTRING)
        return detail::deserialize(value);
#ifdef STRICT_TYPE_CHECK
    throw TypeError(line_number, JSTRING, type);
#else
    return std::string();
#endif
}

inline jnode_t &jnode_t::set_type(jtype_t _type)
{
    type = _type;
    return *this;
}

inline jnode_t &jnode_t::set_value(const std::string &_value)
{
    value = _value;
    return *this;
}

inline jnode_t &jnode_t::set_line_number(int _line_number)
{
    line_number = _line_number;
    return *this;
}

inline jnode_t &jnode_t::add_property(const std::string &key)
{
    return properties.set(key, jnode_t())->second;
}

inline jnode_t &jnode_t::add_property(const std::string &key, const jnode_t &node)
{
    return properties.set(key, node)->second;
}

inline void jnode_t::remove_property(const std::string &key)
{
    properties.erase(key);
}

inline jnode_t &jnode_t::add_element(const jnode_t &node)
{
    arr.push_back(node);
    return arr.back();
}

inline void jnode_t::remove_element(std::size_t i)
{
    if (i >= arr.size())
        throw RangeError(i, arr.size());
    arr.erase(arr.begin() + i);
}

inline void jnode_t::reserve(std::size_t size)
{
    arr.reserve(size);
}

inline void jnode_t::resize(std::size_t size)
{
    arr.resize(size);
}

inline void jnode_t::clear()
{
    value.clear();
    type = JUNKNOWN;
    properties.clear();
    arr.clear();
}

inline const jnode_t &jnode_t::operator[](std::size_t i) const
{
    if (type == JARRAY) {
        if (i >= arr.size())
            throw RangeError(i, arr.size());
        return arr[i];
    } else if (type == JOBJECT) {
        if (i >= properties.size())
            throw RangeError(i, properties.size());
        property_map_t::const_iterator it = properties.at(i);
        if (it == properties.end())
            throw std::out_of_range("Reached end of properties.");
        return it->second;
    }
    static jnode_t null_value(JNULL);
    return null_value;
}

inline jnode_t &jnode_t::operator[](std::size_t i)
{
    if (type == JARRAY) {
        if (i >= arr.size())
            throw RangeError(i, arr.size());
        return arr[i];
    } else if (type == JOBJECT) {
        if (i >= properties.size())
            throw RangeError(i, properties.size());
        property_map_t::iterator it = properties.at(i);
        if (it == properties.end())
            throw std::out_of_range("Reached end of properties.");
        return it->second;
    }
    static jnode_t null_value(JNULL);
    return null_value;
}

inline const jnode_t &jnode_t::operator[](const std::string &key) const
{
    if (type == JOBJECT) {
        property_map_t::const_iterator it = properties.find(key);
        if (it != properties.end()) {
            return it->second;
        }
    }
    static jnode_t null_value(JNULL);
    return null_value;
}

inline jnode_t &jnode_t::operator[](const std::string &key)
{
    if (type == JOBJECT) {
        property_map_t::iterator it = properties.find(key);
        if (it != properties.end()) {
            return it->second;
        }
        return this->add_property(key);
    }
    static jnode_t null_value(JNULL);
    return null_value;
}

inline std::string jnode_t::to_string(bool pretty, unsigned tabsize) const
{
    return this->to_string_d(1, pretty, tabsize);
}

inline jnode_t::property_map_t::const_iterator jnode_t::pbegin() const
{
    return properties.begin();
}

inline jnode_t::property_map_t::iterator jnode_t::pbegin()
{
    return properties.begin();
}

inline jnode_t::property_map_t::const_iterator jnode_t::pend() const
{
    return properties.end();
}

inline jnode_t::property_map_t::iterator jnode_t::pend()
{
    return properties.end();
}

inline jnode_t::array_data_t::const_iterator jnode_t::abegin() const
{
    return arr.begin();
}

inline jnode_t::array_data_t::iterator jnode_t::abegin()
{
    return arr.begin();
}

inline jnode_t::array_data_t::const_iterator jnode_t::aend() const
{
    return arr.end();
}

inline jnode_t::array_data_t::iterator jnode_t::aend()
{
    return arr.end();
}

std::string jnode_t::to_string_d(int depth, bool pretty, unsigned tabsize) const
{
    std::stringstream ss;
    if (type == JSTRING) {
        std::string str = value;
        // Replace special characters, with UTF-8 supported ones.
        // detail::replace_all(str, '\\', "\\\\");
        // detail::replace_all(str, '\"', "\\\"");
        // detail::replace_all(str, '\t', "\\t");
        // detail::replace_all(str, "\r\n", "\\r\\n");
        // detail::replace_all(str, '\r', "\\r");
        // detail::replace_all(str, '\n', "\\n");
        return std::string("\"") + str + std::string("\"");
    }
    if (type == JNUMBER)
        return value;
    if (type == JBOOLEAN)
        return value;
    if (type == JNULL)
        return "null";
    if (type == JOBJECT) {
        ss << "{";
        if (pretty)
            ss << "\n";
        property_map_t::const_iterator it = properties.begin();
        for (it = properties.begin(); it != properties.end(); ++it) {
            if (pretty)
                ss << detail::make_indentation(depth, tabsize);
            ss << "\"" << it->first << "\": "
               << it->second.to_string_d(depth + 1, pretty, tabsize)
               << ((std::distance(it, properties.end()) == 1) ? "" : ",");
            if (pretty)
                ss << "\n";
        }
        if (pretty)
            ss << detail::make_indentation(depth - 1, tabsize);
        ss << "}";
        return ss.str();
    }
    if (type == JARRAY) {
        ss << "[";
        for (std::size_t i = 0; i < arr.size(); i++) {
            if (i)
                ss << ", ";
            if (pretty && ((arr[i].type == JARRAY) || (arr[i].type == JOBJECT))) {
                ss << "\n"
                   << detail::make_indentation(depth, tabsize);
            }
            ss << arr[i].to_string_d(depth + 1, pretty, tabsize);
        }
        if (pretty && !arr.empty() && ((arr[0].type == JARRAY) || (arr[0].type == JOBJECT))) {
            ss << "\n"
               << detail::make_indentation(depth - 1, tabsize);
        }
        ss << "]";
        return ss.str();
    }
    return "##";
}

/// @brief Genering output writer.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, T const &rhs);

/// @brief Output writer for pointers.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, T *const &rhs)
{
    return lhs << (*rhs);
}

/// @brief Output writer for const char pointers.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
inline json::jnode_t &operator<<(json::jnode_t &lhs, char const *rhs)
{
    lhs.set_type(json::JSTRING);
    lhs.set_value(rhs);
    return lhs;
}

/// @brief Output writer for char pointers.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
inline json::jnode_t &operator<<(json::jnode_t &lhs, char *rhs)
{
    lhs.set_type(json::JSTRING);
    lhs.set_value(rhs);
    return lhs;
}

/// @brief Output writer for vectors.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::vector<T> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    for (std::size_t i = 0; i < rhs.size(); ++i) {
        lhs[i] << rhs[i];
    }
    return lhs;
}

#ifdef __cpp_lib_span
/// @brief Output writer for span.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::span<T> rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    for (std::size_t i = 0; i < rhs.size(); ++i) {
        lhs[i] << rhs[i];
    }
    return lhs;
}
#endif

/// @brief Output writer for lists.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::list<T> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    std::size_t i = 0;
    for (typename std::list<T>::const_iterator it = rhs.begin(); it != rhs.end(); ++it) {
        lhs[i++] << (*it);
    }
    return lhs;
}

/// @brief Output writer for sets.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, std::set<T> const &rhs)
{
    lhs.clear();
    lhs.set_type(json::JARRAY);
    lhs.resize(rhs.size());
    std::size_t i = 0;
    for (typename std::set<T>::const_iterator it = rhs.begin(); it != rhs.end(); ++it) {
        lhs[i++] << (*it);
    }
    return lhs;
}

/// @brief Output writer for maps.
/// @param lhs the JSON node we are writing into.
/// @param rhs the value we are writing into the JSON node.
/// @return a reference to the JSON node.
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

/// @brief Genering input reader.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, T &rhs);

/// @brief Input reader for pointers.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, T *&rhs)
{
    return lhs >> (*rhs);
}

/// @brief Input reader for vectors.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::vector<T> &rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        // Clear the vector.
        rhs.clear();
        // Resize the vector.
        rhs.resize(lhs.size());
        // Load its elements.
        for (std::size_t i = 0; i < lhs.size(); ++i) {
            lhs[i] >> rhs[i];
        }
    }
    return lhs;
}

#ifdef __cpp_lib_span

/// @brief Input reader for spans.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::span<T> rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        assert(lhs.size() <= rhs.size());
        // NOTE: This should not be necessary (see assert above) but for safety reasons, ensure there is no out of bounds acces
        const std::size_t elem_count = lhs.size() < rhs.size() ? lhs.size() : rhs.size();
        for (std::size_t i = 0; i < elem_count; ++i) {
            lhs[i] >> rhs[i];
        }
    }
    return lhs;
}
#endif

/// @brief Input reader for lists.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::list<T> &rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        rhs.clear();
        rhs.resize(lhs.size());
        std::size_t i = 0;
        for (typename std::list<T>::iterator it = rhs.begin(); it != rhs.end(); ++it) {
            lhs[i++] >> (*it);
        }
    }
    return lhs;
}

/// @brief Input reader for sets.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::set<T> &rhs)
{
    if (lhs.get_type() == json::JARRAY) {
        rhs.clear();
        for (std::size_t i = 0; i < lhs.size(); ++i) {
            T t;
            lhs[i] >> t;
            rhs.insert(t);
        }
    }
    return lhs;
}

/// @brief Input reader for maps.
/// @param lhs the JSON node we are reading from.
/// @param rhs the value we are storing the JSON node content.
/// @return a const reference to the JSON node.
template <typename T1, typename T2>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::map<T1, T2> &rhs)
{
    // Check the type.
    if (lhs.get_type() == json::JOBJECT) {
        rhs.clear();
        json::jnode_t::property_map_t::const_iterator it;
        for (it = lhs.pbegin(); it != lhs.pend(); ++it) {
            std::stringstream ss;
            ss << it->first;
            T1 key;
            ss >> key;
            it->second >> rhs[key];
        }
    }
    return lhs;
}

/// @brief Allows to easily implement stream operators.
#define JSON_DEFINE_OP(json_type, type, write_function, read_function)          \
    template <>                                                                 \
    inline json::jnode_t &operator<<(json::jnode_t &lhs, const type &rhs)       \
    {                                                                           \
        lhs.set_type(json_type);                                                \
        lhs.set_value(write_function(rhs));                                     \
        return lhs;                                                             \
    }                                                                           \
    template <>                                                                 \
    inline const json::jnode_t &operator>>(const json::jnode_t &lhs, type &rhs) \
    {                                                                           \
        rhs = static_cast<type>(lhs.read_function());                           \
        return lhs;                                                             \
    }

JSON_DEFINE_OP(json::JBOOLEAN, bool, json::detail::bool_to_string, as_bool)
JSON_DEFINE_OP(json::JNUMBER, char, json::detail::char_to_string, as_number<int>)
JSON_DEFINE_OP(json::JNUMBER, unsigned char, json::detail::char_to_string, as_number<unsigned int>)
JSON_DEFINE_OP(json::JNUMBER, short, json::detail::number_to_string, as_number<short>)
JSON_DEFINE_OP(json::JNUMBER, unsigned short, json::detail::number_to_string, as_number<unsigned short>)
JSON_DEFINE_OP(json::JNUMBER, int, json::detail::number_to_string, as_number<int>)
JSON_DEFINE_OP(json::JNUMBER, unsigned int, json::detail::number_to_string, as_number<unsigned int>)
JSON_DEFINE_OP(json::JNUMBER, long, json::detail::number_to_string, as_number<long>)
JSON_DEFINE_OP(json::JNUMBER, unsigned long, json::detail::number_to_string, as_number<unsigned long>)
JSON_DEFINE_OP(json::JNUMBER, float, json::detail::number_to_string, as_number<float>)
JSON_DEFINE_OP(json::JNUMBER, double, json::detail::number_to_string, as_number<double>)
JSON_DEFINE_OP(json::JNUMBER, long double, json::detail::number_to_string, as_number<long double>)
JSON_DEFINE_OP(json::JSTRING, std::string, json::detail::number_to_string, as_string)
#if __cplusplus >= 201103L
JSON_DEFINE_OP(json::JNUMBER, long long, json::detail::number_to_string, as_number<long long>)
JSON_DEFINE_OP(json::JNUMBER, unsigned long long, json::detail::number_to_string, as_number<unsigned long long>)
#endif

#undef JSON_DEFINE_OP

} // namespace json

/// @brief Define the pair of operators required to handle C++ enums.
#define JSON_DEFINE_OP_ENUM(ENUM_TYPE)                                        \
    namespace json                                                            \
    {                                                                         \
    template <>                                                               \
    json::jnode_t &operator<<(json::jnode_t &lhs, const ENUM_TYPE &rhs)       \
    {                                                                         \
        return (lhs << static_cast<int>(rhs));                                \
    }                                                                         \
    template <>                                                               \
    const json::jnode_t &operator>>(const json::jnode_t &lhs, ENUM_TYPE &rhs) \
    {                                                                         \
        rhs = static_cast<ENUM_TYPE>(lhs.as_number<int>());                   \
        return lhs;                                                           \
    }                                                                         \
    }

/// @brief Sends the JSON node to the output stream.
/// @param lhs the stream we are writing the content of the JSON node.
/// @param rhs the JSON node.
/// @return a reference to the output stream.
inline std::ostream &operator<<(std::ostream &lhs, const json::jnode_t &rhs)
{
    lhs << rhs.to_string();
    return lhs;
}

/// @brief Sends the JSON node to the output file stream.
/// @param lhs the stream we are writing the content of the JSON node.
/// @param rhs the JSON node.
/// @return a reference to the output file stream.
inline std::ofstream &operator<<(std::ofstream &lhs, const json::jnode_t &rhs)
{
    lhs << rhs.to_string();
    return lhs;
}
