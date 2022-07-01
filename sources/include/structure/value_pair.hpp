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
    ValuePair(const std::shared_ptr<structure::Value> &first = nullptr, const std::shared_ptr<structure::Value> &second = nullptr);

    /// @brief Destructor.
    ~ValuePair() override = default;

    /// @brief Disable copy constructor.
    ValuePair(const ValuePair &) = delete;

    /// @brief Disable assign operator.
    ValuePair &operator=(const ValuePair &) = delete;

    /// @brief Returns the first value.
    /// @return The first value.
    std::shared_ptr<structure::Value> getFirst() const;

    /// @brief Sets the first value.
    /// @param value The first value to be set.
    /// @return The old first value if it is different
    /// from the new one, nullptr otherwise.
    std::shared_ptr<structure::Value> setFirst(const std::shared_ptr<structure::Value> &value);

    /// @brief Returns the second value.
    /// @return The second value.
    std::shared_ptr<structure::Value> getSecond() const;

    /// @brief Sets the second value.
    /// @param value The second value to be set.
    /// @return The old second value if it is different
    /// from the new one, nullptr otherwise.
    std::shared_ptr<structure::Value> setSecond(const std::shared_ptr<structure::Value> &value);

    /// @brief Provides a string representation of the object for **debugging** purposes.
    /// @return the string representation.
    std::string toString() const override;

    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    inline int accept(features::Visitor *visitor) override
    {
        return visitor->visitValuePair(std::static_pointer_cast<ValuePair>(this->shared_from_this()));
    }

private:
    /// @brief The first value.
    std::shared_ptr<structure::Value> _first;
    /// @brief The second value.
    std::shared_ptr<structure::Value> _second;
};

} // namespace edacurry::structure