/// @file typename.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief Code for turning typenames to string.
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <string>

namespace edacurry
{

template <typename T>
struct TypeName {
    static std::string get();
};

template <>
struct TypeName<bool> {
    static std::string get()
    {
        return "bool";
    }
};

template <>
struct TypeName<char> {
    static std::string get()
    {
        return "char";
    }
};

template <>
struct TypeName<unsigned char> {
    static std::string get()
    {
        return "unsigned char";
    }
};

template <>
struct TypeName<short> {
    static std::string get()
    {
        return "short";
    }
};

template <>
struct TypeName<unsigned short> {
    static std::string get()
    {
        return "unsigned short";
    }
};

template <>
struct TypeName<int> {
    static std::string get()
    {
        return "int";
    }
};

template <>
struct TypeName<unsigned int> {
    static std::string get()
    {
        return "unsigned int";
    }
};

template <>
struct TypeName<long> {
    static std::string get()
    {
        return "long";
    }
};

template <>
struct TypeName<unsigned long> {
    static std::string get()
    {
        return "unsigned long";
    }
};

template <>
struct TypeName<float> {
    static std::string get()
    {
        return "float";
    }
};

template <>
struct TypeName<double> {
    static std::string get()
    {
        return "double";
    }
};

template <>
struct TypeName<long double> {
    static std::string get()
    {
        return "long double";
    }
};

} // namespace edacurry
