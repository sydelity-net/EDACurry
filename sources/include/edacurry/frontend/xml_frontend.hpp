/// @file xml_frontend.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <memory>

namespace edacurry
{
namespace structure
{
class Object;
} // namespace structure

namespace frontend
{

std::shared_ptr<edacurry::structure::Object> parse_xml(const std::string &path);

} // namespace frontend
} // namespace edacurry