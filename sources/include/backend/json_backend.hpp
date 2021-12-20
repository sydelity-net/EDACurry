/// @file json_parser.hpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

namespace json
{
class jnode_t;
} // namespace json

namespace edacurry
{
namespace structure
{
    class Object;
} // namespace structure

namespace backend
{
    json::jnode_t &write(json::jnode_t &jnode, structure::Object *object);
} // namespace backend

} // namespace edacurry