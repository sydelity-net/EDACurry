/// @file   parameter.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "structure/parameter.hpp"
#include "features/named_object.hpp"
#include "utility/logging.hpp"

namespace edacurry::structure
{

Parameter::Parameter(const std::shared_ptr<structure::Value> &left, const std::shared_ptr<structure::Value> &right, ParameterType type, bool hide_name)
    : Object(),
      _left(left),
      _right(right),
      _type(type),
      _hide_name(hide_name)
{
    // Nothing to do.
}

std::shared_ptr<structure::Value> Parameter::getLeft() const
{
    return _left;
}

std::shared_ptr<structure::Value> Parameter::setLeft(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_left, value);
}

std::shared_ptr<structure::Value> Parameter::getRight() const
{
    return _right;
}

std::shared_ptr<structure::Value> Parameter::setRight(const std::shared_ptr<structure::Value> &value)
{
    return this->setChild(_right, value);
}

std::string Parameter::toString() const
{
    return "(parameter " +
           (_left ? _left->toString() : "NULL") + " " +
           (_right ? _right->toString() : "NULL") + " `" +
           parameter_type_to_plain_string(_type) + "` " +
           (_hide_name ? "true" : "false") + ")";
}

} // namespace edacurry::structure