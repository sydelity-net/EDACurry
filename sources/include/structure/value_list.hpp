/// @file   value_list.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"
#include "enums.hpp"

namespace edacurry::structure
{
/// @brief Represent a list of values.
class ValueList : public Value {
public:
    /// @brief The list of values.
    features::ObjectList<Value> values;

    /// @brief Constructor.
    explicit ValueList();

    /// @brief Constructor.
    /// @param delimiter The delimiter. Default value is <tt>dlm_none</tt>.
    /// @param values The values inside the delimiter.
    ValueList(DelimiterType delimiter,
              const features::ObjectList<Value>::base_type &values);

    /// @brief Destructor.
    ~ValueList() override;

    /// @brief Returns the type of delimiter.
    /// @return The type of delimiter.
    DelimiterType getDelimiterType() const;

    /// @brief Sets the type of delimiter.
    /// @param delimiter The type of delimiter to be set.
    void setDelimiterType(DelimiterType delimiter);

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitValueList(this);
    }

private:
    /// @brief The type of delimiter.
    DelimiterType _delimiter;
};

} // namespace edacurry::structure