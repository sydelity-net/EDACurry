/// @file   utility.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "utility/utility.hpp"

namespace edacurry::utility
{
bool starts_with(const std::string &source, const std::string &prefix, bool sensitive, int n)
{
    if (&prefix == &source) {
        return true;
    }
    if (prefix.length() > source.length()) {
        return false;
    }
    if (source.empty() || prefix.empty()) {
        return false;
    }
    std::string::const_iterator it0 = source.begin(), it1 = prefix.begin();
    if (sensitive) {
        while ((it1 != prefix.end()) && ((*it1) == (*it0))) {
            if ((n > 0) && (--n <= 0)) {
                return true;
            }
            ++it0, ++it1;
        }
    } else {
        while ((it1 != prefix.end()) && (tolower(*it1) == tolower(*it0))) {
            if ((n > 0) && (--n <= 0)) {
                return true;
            }
            ++it0, ++it1;
        }
    }
    return it1 == prefix.end();
}

} // namespace edacurry::utility