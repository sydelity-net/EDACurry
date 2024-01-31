/// @file json_parser.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <json/json.hpp>
#include <memory>

namespace edacurry
{
namespace structure
{
class Object;
} // namespace structure

namespace backend
{
std::string write_json(const std::shared_ptr<structure::Object> &object);
} // namespace backend

} // namespace edacurry