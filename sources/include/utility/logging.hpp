/// @file   logging.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <string>
#include <cstring>

enum class LogLevel {
	DEBUG = 10,
	INFO = 20,
	WARNING = 30,
	ERROR = 40,
	CRITICAL = 50
};

namespace logging {

void initialize();

std::string get_simple_date();

std::string get_simple_time();

bool is_enabled(LogLevel level);

void print(char const* file, char const* fun, int line, LogLevel level, char const* format, ...);

} // namespace logging

#define __FILENAME__ (std::strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define _log(LEVEL, ...) \
	(logging::is_enabled(LEVEL) ? logging::print(__FILENAME__, __PRETTY_FUNCTION__, __LINE__, LEVEL, __VA_ARGS__) : (void) 0)
#define _debug(...)    _log(LogLevel::DEBUG, __VA_ARGS__)
#define _info(...)     _log(LogLevel::INFO, __VA_ARGS__)
#define _warning(...)  _log(LogLevel::WARNING, __VA_ARGS__)
#define _error(...)    _log(LogLevel::ERROR, __VA_ARGS__)
#define _critical(...) _log(LogLevel::CRITICAL, __VA_ARGS__)
