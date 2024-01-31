/// @file   utility.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <string>
#include <iostream>
#include <unistd.h>
#include <sys/stat.h>
#include <memory>
#include <iomanip>

namespace edacurry::utility
{
/// @brief Checks if the file at the given path exists.
/// @param path the path to the file.
/// @return **true**  if the file exists.
/// @return **false** if the file does not exist.
inline bool file_exists(std::string const &path)
{
    return (access(path.c_str(), F_OK) != -1);
}

/// @brief Checks if the path points to a file.
/// @param path the path to check.
/// @return **true**  if the path points to a file.
/// @return **false** if the path does not point to a file.
inline bool is_file(std::string const &path)
{
    struct stat buf;
    stat(path.c_str(), &buf);
    return S_ISREG(buf.st_mode);
}

/// @brief Checks if the path points to a directory.
/// @param path the path to check.
/// @return **true**  if the path points to a directory.
/// @return **false** if the path does not point to a directory.
inline bool is_directory(std::string const &path)
{
    struct stat buf;
    stat(path.c_str(), &buf);
    return S_ISDIR(buf.st_mode);
}

/// @brief Extracts the path from the path to the file.
/// @param filepath the path to the file including the filename.
/// @return The path to the file.
inline std::string dirname(std::string const &filepath)
{
    std::string::size_type pos;
    std::string path;
    if ((pos = filepath.rfind('/')) != std::string::npos) {
        path = filepath.substr(0, pos + 1);
    }
    return path;
}

/// @brief Returns an indentention based on the given level and size of each level.
/// @param level    the number of levels to build.
/// @param tab_size the size of each level.
/// @param c        the character used for building the indentation.
/// @return the desired indentation.
inline std::string get_indent(unsigned int level, unsigned int tab_size = 4, char c = ' ')
{
    std::string s;
    for (unsigned int i = 0; i < level; ++i) {
        for (unsigned int j = 0; j < tab_size; ++j) {
            s.push_back(c);
        }
    }
    return s;
}

/// @brief Checks if the given string s starts with the given prefix.
/// @param source    the source string.
/// @param prefix    the prefix to check.
/// @param sensitive turn on/off sensitivity for capits/non-capitals
/// @param n         specify the minimum number of characters to check.
/// @return **true**  if the source starts with the prefix, give all the conditions.
/// @return **false** if the source does not start with the prefix, give all the conditions.
bool starts_with(const std::string &source, const std::string &prefix, bool sensitive = false, int n = -1);

/// @brief Find and Replace all sub-strings.
/// @param data        the source data which **will be changed**.
/// @param to_search   the string to replace.
/// @param replacement the replacement.
inline void findAndReplaceAll(std::string &data, std::string to_search, std::string replacement)
{
    // Get the first occurrence
    size_t pos = data.find(to_search);
    // Repeat till end is reached
    while (pos != std::string::npos) {
        // Replace this occurrence of Sub String
        data.replace(pos, to_search.size(), replacement);
        // Get the next occurrence from the current position
        pos = data.find(to_search, pos + replacement.size());
    }
}

/// @brief Removes the specified characters from the beginning and the end of the string.
/// @param s       the input string.
/// @param padchar characters that must be removed.
/// @return The input string, trimmed from the unwanted characters.
inline std::string trim(const std::string &s, const std::string &padchar = " ")
{
    std::string::size_type left  = s.find_first_not_of(padchar);
    std::string::size_type right = s.find_last_not_of(padchar);
    return (left != std::string::npos) ? s.substr(left, right - left + 1) : "";
}

/// @brief Removes the specified characters from the beginning of the string.
/// @param s       the input string.
/// @param padchar characters that must be removed.
/// @return The input string, trimmed from the unwanted characters.
inline std::string ltrim(const std::string &s, const std::string &padchar = " ")
{
    std::string::size_type left = s.find_first_not_of(padchar);
    return (left != std::string::npos) ? s.substr(left) : "";
}

/// @brief Removes the specified characters from the end of the string.
/// @param s       the input string.
/// @param padchar characters that must be removed.
/// @return The input string, trimmed from the unwanted characters.
inline std::string rtrim(const std::string &s, const std::string &padchar = " ")
{
    std::string::size_type right = s.find_last_not_of(padchar);
    return (right != std::string::npos) ? s.substr(0, right + 1) : "";
}

/// @brief Converts the string to upper-case
/// @param s the string to convert.
/// @return the new string completely upper-case.
inline std::string to_upper(const std::string &s)
{
    std::string sr;
    for (std::string::const_iterator i = s.begin(); i != s.end(); ++i) {
        sr.push_back(static_cast<char>(toupper(*i)));
    }
    return sr;
}

/// @brief Converts the string to lower-case
/// @param s the string to convert.
/// @return the new string completely lower-case.
inline std::string to_lower(const std::string &s)
{
    std::string sr;
    for (std::string::const_iterator i = s.begin(); i != s.end(); ++i) {
        sr.push_back(static_cast<char>(tolower(*i)));
    }
    return sr;
}

/// @brief Helper function to cast a pointer of type **Base** to a pointer
///        of type **Derived**. **Base** must be father of **Derived**.
/// @tparam Derived the derived class type.
/// @tparam Base    the base class type.
/// @param ptr the pointer to cast.
/// @return the pointer to the same object of type **Derived**.
template <typename Derived, typename Base>
inline std::shared_ptr<Derived> to(const std::shared_ptr<Base>& ptr)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    return std::dynamic_pointer_cast<Derived>(ptr);
}

/// @brief Helper function to cast a pointer of type **Base** to a pointer
///        of type **Derived**. **Base** must be father of **Derived**.
/// @tparam Derived the derived class type.
/// @tparam Base    the base class type.
/// @param ptr the pointer to cast.
/// @return the pointer to the same object of type **Derived**.
template <typename Derived, typename Base>
inline std::shared_ptr<Derived> to_check(const std::shared_ptr<Base>& ptr)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    auto derived = std::dynamic_pointer_cast<Derived>(ptr);
    if (derived == nullptr) {
        std::cerr << "Casting to `" << typeid(Derived).name() << "` failed.";
        std::abort();
    }
    return derived;
}

/// @brief Helper function to check if a pointer of type **Base** is actually
///        a pointer to **Derived**. **Base** must be father of **Derived**.
/// @tparam Derived the derived class type.
/// @tparam Base    the base class type.
/// @param ptr the pointer to check.
/// @return **true**  if the object is actually of type **Derived**.
/// @return **false** if the object is not of type **Derived**.
template <typename Derived, typename Base>
inline bool is_a(const std::shared_ptr<Base>& ptr)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    return utility::to<Derived>(ptr) != nullptr;
}

} // namespace edacurry::utility