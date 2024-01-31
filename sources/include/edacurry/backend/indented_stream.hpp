/// @file indented_stream.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <sstream>

namespace edacurry::backend
{
const char ind_increase = '\001';
const char ind_decrease = '\002';

class IndentedStream {
public:
    IndentedStream(int width = 4, char ch = ' ')
        : _width(width), _ch(ch), _ss()
    {
        // Nothing to do.
    }

    template <class T>
    inline IndentedStream &operator<<(T rhs)
    {
        _ss << rhs;
        return *this;
    }

    inline auto str() const
    {
        std::stringstream ss;
        std::string indent;
        int level = 0;
        bool after_newline = false;
        for (const auto &c : _ss.str()) {
            if (c == ind_increase) {
                ++level;
                indent = std::string(_width * level, _ch);
            } else if (c == ind_decrease) {
                if (level > 0) {
                    --level;
                    indent = std::string(_width * level, _ch);
                }
            } else {
                if (c == '\n') {
                    after_newline = true;
                } else if (after_newline) {
                    after_newline = false;
                    ss << indent;
                }
                ss << c;
            }
        }
        return ss.str();
    }

private:
    int _width;
    char _ch;
    std::stringstream _ss;
};

} // namespace edacurry::backend