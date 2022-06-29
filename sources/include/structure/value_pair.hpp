/// @file value_pair.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "value.hpp"
#include "enums.hpp"

namespace edacurry::structure
{
/// @brief Represent a pair of values.
class ValuePair : public Value {
public:
    /// @brief Constructor.
    /// @param first The first value. Default value is <tt>nullptr</tt>.
    /// @param second The second value. Default value is <tt>nullptr</tt>.
    ValuePair(Value *first = nullptr, Value *second = nullptr);

    /// @brief Destructor.
    ~ValuePair() override;

    /// @brief Disable copy constructor.
    ValuePair(const ValuePair &) = delete;

    /// @brief Disable assign operator.
    ValuePair &operator=(const ValuePair &) = delete;

    /// @brief Returns the first value.
    /// @return The first value.
    Value *getFirst() const;

    /// @brief Sets the first value.
    /// @param value The first value to be set.
    /// @return The old first value if it is different
    /// from the new one, nullptr otherwise.
    Value *setFirst(Value *value);

    /// @brief Returns the second value.
    /// @return The second value.
    Value *getSecond() const;

    /// @brief Sets the second value.
    /// @param value The second value to be set.
    /// @return The old second value if it is different
    /// from the new one, nullptr otherwise.
    Value *setSecond(Value *value);

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) const override
    {
        return visitor->visitValuePair(this);
    }

private:
    /// @brief The first value.
    Value *_first;
    /// @brief The second value.
    Value *_second;
};

} // namespace edacurry::structure