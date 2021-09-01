/// @file   value_list.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/value_list.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"

namespace edacurry::structure
{
ValueList::ValueList() : Value(), values(this), _delimiter()
{
    // Nothing to do.
}

ValueList::ValueList(DelimiterType delimiter,
                     const features::ObjectList<Value>::base_type &values)
    : Value(), values(this, values), _delimiter(delimiter)
{
    // Nothing to do.
}

ValueList::~ValueList()
{
    // Nothing to do.
}

DelimiterType ValueList::getDelimiterType() const
{
    return _delimiter;
}

void ValueList::setDelimiterType(DelimiterType delimiter)
{
    _delimiter = delimiter;
}

std::string ValueList::toString() const
{
    std::stringstream ss;
    ss << "ValueList(" << delimitertype_to_plain_string(_delimiter) << ", "
       << values.toString() << ")";
    return ss.str();
}
} // namespace edacurry::structure