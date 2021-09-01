/// @file   value.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/object_list.hpp"
#include "object.hpp"

namespace edacurry::structure
{
/// @brief Represent a value.
class Value : public Object {
public:
    explicit Value();

    ~Value() override = default;

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;
};

} // namespace edacurry::structure