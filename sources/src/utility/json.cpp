/// @file json.cpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief 
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <cassert>
#include <algorithm>

#include "utility/json.hpp"

#define JSON_DEBUG 0

namespace json
{

template <class K, class T>
static inline typename std::map<K, T>::const_iterator get_iterator_at(const std::map<K, T> &map, int n)
{
    typename std::map<K, T>::const_iterator it = map.begin();
    while (n > 0) {
        --n;
        assert(it != map.end());
        ++it;
    }
    return it;
}

template <class K, class T>
static inline typename std::map<K, T>::iterator get_iterator_at(std::map<K, T> &map, int n)
{
    typename std::map<K, T>::iterator it = map.begin();
    while (n > 0) {
        --n;
        assert(it != map.end());
        ++it;
    }
    return it;
}

static inline std::string &replace_all(std::string &s, const std::string &what, const std::string &with)
{
    size_t i = 0;
    while ((i = s.find(what, i)) != std::string::npos) {
        s.replace(i, what.size(), with);
        i += with.size();
    }
    return s;
}
static inline std::string &replace_all(std::string &s, char what, const std::string &with)
{
    size_t i = 0;
    while ((i = s.find(what, i)) != std::string::npos) {
        s.replace(i, 1U, with);
        i += with.size();
    }
    return s;
}

static inline std::string bool_to_string(bool value)
{
    return value ? "true" : "false";
}

static inline std::string char_to_string(char value)
{
    std::stringstream ss;
    ss << static_cast<int>(value);
    return ss.str();
}

template <typename T>
static inline std::string value_to_string(T value)
{
    std::stringstream ss;
    ss << value;
    return ss.str();
}

static inline std::string make_indentation(unsigned depth, unsigned tabsize = 4)
{
    return std::string(depth * tabsize, ' ');
}

static std::string deserialize(const std::string &ref)
{
    std::string out;
    for (size_t i = 0; i < ref.length(); ++i) {
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
                unsigned long long v = 0;
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

std::string jnode_t::get_value() const
{
    return value;
}

jtype_t jnode_t::get_type() const
{
    return type;
}

int jnode_t::get_line_number() const
{
    return line_number;
}

size_t jnode_t::size() const
{
    if (type == JARRAY) {
        return arr.size();
    }
    if (type == JOBJECT) {
        return properties.size();
    }
    return 0;
}

bool jnode_t::has_property(const std::string &key) const
{
    if (type == JOBJECT) {
        return properties.find(key) != properties.end();
    }
    return false;
}

int jnode_t::as_int() const
{
    if (type != JNUMBER) {
#if JSON_DEBUG
        mudlog(LOG_ERROR, "line %d : Expecting JNUMBER but got %s.", line_number, jtype_to_string(type).c_str());
#endif
        return 0;
    }
    std::stringstream ss;
    ss << value;
    int k;
    ss >> k;
    return k;
}

double jnode_t::as_double() const
{
    if (type != JNUMBER) {
#if JSON_DEBUG
        mudlog(LOG_ERROR, "line %d : Expecting JNUMBER but got %s.", line_number, jtype_to_string(type).c_str());
#endif
        return 0.0;
    }
    std::stringstream ss;
    ss << value;
    double k;
    ss >> k;
    return k;
}

bool jnode_t::as_bool() const
{
    if (type != JBOOLEAN) {
#if JSON_DEBUG
        mudlog(LOG_ERROR, "line %d : Expecting JBOOLEAN but got %s.", line_number, jtype_to_string(type).c_str());
#endif
        return false;
    }
    return value == "true";
}

std::string jnode_t::as_string() const
{
    if (type != JSTRING) {
#if JSON_DEBUG
        mudlog(LOG_ERROR, "line %d : Expecting JSTRING but got %s.", line_number, jtype_to_string(type).c_str());
#endif
        return std::string();
    }
    return deserialize(value);
}

jnode_t &jnode_t::set_type(jtype_t _type)
{
    type = _type;
    return *this;
}

jnode_t &jnode_t::set_value(const std::string &_value)
{
    value = _value;
    return *this;
}

jnode_t &jnode_t::set_line_number(int _line_number)
{
    line_number = _line_number;
    return *this;
}

jnode_t &jnode_t::add_property(const std::string &key)
{
    return (properties[key] = jnode_t());
}

void jnode_t::remove_property(const std::string &key)
{
    property_map_t::iterator it = properties.find(key);
    if (it != properties.end()) {
        properties.erase(it);
    }
}

jnode_t &jnode_t::add_property(const std::string &key, const jnode_t &node)
{
    return (properties[key] = node);
}

jnode_t &jnode_t::add_element(const jnode_t &v)
{
    arr.push_back(v);
    return arr.back();
}

void jnode_t::reserve(size_t size)
{
    arr.reserve(size);
}

void jnode_t::resize(size_t size)
{
    arr.resize(size);
}

void jnode_t::clear()
{
    value.clear();
    type = JUNKNOWN;
    properties.clear();
    arr.clear();
}

void jnode_t::sort(json_sort_function sort_function)
{
    if (type == JARRAY) {
        std::sort(arr.begin(), arr.end(), sort_function);
    }
}

const jnode_t &jnode_t::operator[](size_t i) const
{
    if (type == JARRAY) {
        assert(i < arr.size());
        return arr[i];
    } else if (type == JOBJECT) {
        assert(i < properties.size());
        return get_iterator_at(properties, i)->second;
    }
    static jnode_t null_value(JNULL);
    return null_value;
}

jnode_t &jnode_t::operator[](size_t i)
{
    if (type == JARRAY) {
        assert(i < arr.size());
        return arr[i];
    } else if (type == JOBJECT) {
        assert(i < properties.size());
        return get_iterator_at(properties, i)->second;
    }
    static jnode_t null_value(JNULL);
    return null_value;
}

const jnode_t &jnode_t::operator[](const std::string &key) const
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

jnode_t &jnode_t::operator[](const std::string &key)
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

std::string jnode_t::to_string(bool pretty, unsigned tabsize) const
{
    return to_string_d(1, pretty, tabsize);
}

std::string jnode_t::to_string_d(int depth, bool pretty, unsigned tabsize) const
{
    std::stringstream ss;
    if (type == JSTRING) {
        std::string str = value;
        // Replace special characters, with UTF-8 supported ones.
        replace_all(str, '\\', "\\\\");
        replace_all(str, '\"', "\\\"");
        replace_all(str, '\t', "\\t");
        replace_all(str, "\r\n", "\\r\\n");
        replace_all(str, '\r', "\\r");
        replace_all(str, '\n', "\\n");
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
                ss << make_indentation(depth, tabsize);
            ss << "\"" << it->first << "\": "
               << it->second.to_string_d(depth + 1, pretty, tabsize)
               << ((std::distance(it, properties.end()) == 1) ? "" : ",");
            if (pretty)
                ss << "\n";
        }
        if (pretty)
            ss << make_indentation(depth - 1, tabsize);
        ss << "}";
        return ss.str();
    }
    if (type == JARRAY) {
        ss << "[";
        for (size_t i = 0; i < arr.size(); i++) {
            if (i)
                ss << ", ";
            if (pretty && ((arr[i].type == JARRAY) || (arr[i].type == JOBJECT))) {
                ss << "\n"
                   << make_indentation(depth, tabsize);
            }
            ss << arr[i].to_string_d(depth + 1, pretty, tabsize);
        }
        if (pretty && !arr.empty() && ((arr[0].type == JARRAY) || (arr[0].type == JOBJECT))) {
            ss << "\n"
               << make_indentation(depth - 1, tabsize);
        }
        ss << "]";
        return ss.str();
    }
    return "##";
}

namespace parser
{
    typedef enum token_type {
        UNKNOWN,
        STRING,
        NUMBER,
        CURLY_OPEN,
        CURLY_CLOSE,
        BRACKET_OPEN,
        BRACKET_CLOSE,
        COMMA,
        COLON,
        BOOLEAN,
        NUL
    } token_type;

    typedef struct token_t {
        /// The value.
        std::string value;
        /// The type.
        token_type type;
        /// The line number.
        size_t line_number;

        /// @brief Constructor.
        /// @param value
        /// @param type
        explicit token_t(const std::string &_value = "",
                         token_type _type          = UNKNOWN,
                         size_t _line_number       = 0)
            : value(_value),
              type(_type),
              line_number(_line_number)
        {
            // Nothing to do.
        }
    } token_t;

    static inline bool is_whitespace(char c)
    {
        return isspace(c);
    }

    static inline bool is_number(char c)
    {
        return (c >= '0') && (c <= '9');
    }

    static inline bool is_newline(char c)
    {
        return (c == '\n') || (c == '\r');
    }

    static inline int next_whitespace(const std::string &source, int i)
    {
        int slength = static_cast<int>(source.length());
        while (i < slength) {
            if (source[i] == '"') {
                ++i;
                while ((i < slength) && (source[i] != '"' || source[i - 1] == '\\')) {
                    ++i;
                }
            }
            if (source[i] == '\'') {
                ++i;
                while ((i < slength) && (source[i] != '\'' || source[i - 1] == '\\')) {
                    ++i;
                }
            }
            if (is_whitespace(source[i])) {
                return i;
            }
            ++i;
        }
        return slength;
    }

    static inline int skip_whitespaces(const std::string &source, int i, int &line_number)
    {
        while (i < static_cast<int>(source.length())) {
            if (!is_whitespace(source[i])) {
                return i;
            }
            line_number += is_newline(source[i]);
            ++i;
        }
        return -1;
    }

    static std::vector<token_t> &tokenize(const std::string &source, std::vector<token_t> &tokens)
    {
        int line_number = 0;
        int index       = skip_whitespaces(source, 0, line_number);
        while (index >= 0) {
            int next        = next_whitespace(source, index);
            std::string str = source.substr(index, next - index);
            size_t k        = 0;
            while (k < str.length()) {
                if (str[k] == '"') {
                    size_t tmp_k = k + 1;
                    while (tmp_k < str.length() && (str[tmp_k] != '"' || str[tmp_k - 1] == '\\')) {
                        ++tmp_k;
                    }
                    tokens.push_back(token_t(str.substr(k + 1, tmp_k - k - 1), STRING, line_number));
                    k = tmp_k + 1;
                    continue;
                }
                if (str[k] == '\'') {
                    size_t tmp_k = k + 1;
                    while (tmp_k < str.length() && (str[tmp_k] != '\'' || str[tmp_k - 1] == '\\')) {
                        ++tmp_k;
                    }
                    tokens.push_back(token_t(str.substr(k + 1, tmp_k - k - 1), STRING, line_number));
                    k = tmp_k + 1;
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
                if (str[k] == '-' || is_number(str[k])) {
                    size_t k2 = k;
                    if (str[k2] == '-') {
                        ++k2;
                    }
                    while (k2 < str.size()) {
                        if ((str[k2] != '.') && !is_number(str[k2])) {
                            if ((str[k2] != 'e') && (str[k2] != 'E')) {
                                break;
                            }
                            if ((k2 + 1) >= str.size()) {
                                break;
                            }
                            if ((str[k2 + 1] != '+') && (str[k2 + 1] != '-')) {
                                if (is_number(str[k2 + 1])) {
                                    k2 += 2;
                                } else {
                                    break;
                                }
                            } else {
                                if ((k2 + 3) >= str.size()) {
                                    break;
                                }
                                if (is_number(str[k2 + 3])) {
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
            index = skip_whitespaces(source, next, line_number);
        }
        return tokens;
    }

    static jnode_t json_parse(std::vector<token_t> &v, int i, int &r)
    {
        jnode_t current;
        // Set line number.
        current.set_line_number(v[i].line_number + 1);
        // Parse the element.
        if (v[i].type == CURLY_OPEN) {
            // Set type.
            current.set_type(JOBJECT);
            // Set the value.
            ++i;
            while (v[i].type != CURLY_CLOSE) {
                std::string key = v[i].value;
                i += 2; // k+1 should be ':'
                int j        = i;
                current[key] = json_parse(v, i, j);
                i            = j;
                if (v[i].type == COMMA) {
                    ++i;
                }
            }
        } else if (v[i].type == BRACKET_OPEN) {
            // Set type.
            current.set_type(JARRAY);
            // Set the value.
            ++i;
            while (v[i].type != BRACKET_CLOSE) {
                int j = i;
                current.add_element(json_parse(v, i, j));
                i = j;
                if (v[i].type == COMMA) {
                    ++i;
                }
            }
        } else if (v[i].type == NUMBER) {
            // Set type.
            current.set_type(JNUMBER);
            // Set the value.
            current.set_value(v[i].value);
        } else if (v[i].type == STRING) {
            // Set type.
            current.set_type(JSTRING);
            // Replace protected special characters, with the actual ones.
            replace_all(v[i].value, "\\n", "\n");
            replace_all(v[i].value, "\\\"", "\"");
            // Set the value.
            current.set_value(v[i].value);
        } else if (v[i].type == BOOLEAN) {
            // Set type.
            current.set_type(JBOOLEAN);
            // Set the value.
            current.set_value(v[i].value);
        } else if (v[i].type == NUL) {
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

    jnode_t parse(const std::string &str)
    {
        int k = 0;
        std::vector<token_t> tokens;
        return json_parse(tokenize(str, tokens), 0, k);
    }

    jnode_t parse_file(const std::string &filename)
    {
        std::ifstream in(filename.c_str());
        if (!in.is_open()) {
            static jnode_t null_value(JNULL);
            return null_value;
        }
        std::stringstream ss;
        ss << in.rdbuf() << " ";
        in.close();
        return parse(ss.str());
    }

    bool write_file(const std::string &filename,
                    const jnode_t &node,
                    bool pretty,
                    unsigned tabsize)
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

#define JSON_DEFINE_OP(json_type, type, write_function, read_function)   \
    template <>                                                          \
    json::jnode_t &operator<<(json::jnode_t &lhs, const type &rhs)       \
    {                                                                    \
        lhs.set_type(json_type);                                         \
        lhs.set_value(write_function(rhs));                              \
        return lhs;                                                      \
    }                                                                    \
    template <>                                                          \
    const json::jnode_t &operator>>(const json::jnode_t &lhs, type &rhs) \
    {                                                                    \
        rhs = lhs.read_function();                                       \
        return lhs;                                                      \
    }

JSON_DEFINE_OP(json::JBOOLEAN, bool, json::bool_to_string, as_bool)
JSON_DEFINE_OP(json::JNUMBER, char, json::char_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, unsigned char, json::char_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, short, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, unsigned short, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, int, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, unsigned int, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, long, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, unsigned long, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, long long, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, unsigned long long, json::value_to_string, as_int)
JSON_DEFINE_OP(json::JNUMBER, float, json::value_to_string, as_double)
JSON_DEFINE_OP(json::JNUMBER, double, json::value_to_string, as_double)
JSON_DEFINE_OP(json::JNUMBER, long double, json::value_to_string, as_double)
JSON_DEFINE_OP(json::JSTRING, std::string, , as_string)

} // namespace json