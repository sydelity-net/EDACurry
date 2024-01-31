/// @file json_backend.cpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include <json/json.hpp>

#include "edacurry/utility/typename.hpp"
#include "edacurry/classes.hpp"

#include <memory>

template <typename Base, typename Derived>
static inline bool try_to_write(json::jnode_t &lhs, const std::shared_ptr<Base> &rhs)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    // Try to dynamically cast the pointer to the derived class type.
    auto ptr = std::dynamic_pointer_cast<Derived>(rhs);
    // Check if the pointer is valid.
    if (ptr) {
        // Stream with the given pointer.
        lhs << ptr;
        // Notify that we succesfully written to the stream.
        return true;
    }
    // Notify that we failed to write to the stream.
    return false;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Object> &rhs)
{
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Analysis>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Circuit>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Component>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ControlScope>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Control>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Include>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::LibraryDef>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Library>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Model>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Node>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Parameter>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Subckt>(lhs, rhs)) {
        return lhs;
    }
    // Derived of Value.
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ExpressionUnary>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Expression>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::FunctionCall>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Identifier>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Number<int>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Number<unsigned>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Number<double>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::String>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ValueList>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ValuePair>(lhs, rhs)) {
        return lhs;
    }
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Value> &rhs)
{
    if (try_to_write<edacurry::structure::Value, edacurry::structure::ExpressionUnary>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Expression>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::FunctionCall>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Identifier>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Number<int>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Number<unsigned>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Number<double>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::String>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::ValueList>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_write<edacurry::structure::Value, edacurry::structure::ValuePair>(lhs, rhs)) {
        return lhs;
    }
    return lhs;
}

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, const edacurry::features::OwnedList<T> &rhs)
{
    lhs.set_type(json::JTYPE_OBJECT);
    lhs["type"] << edacurry::TypeName<edacurry::features::OwnedList<T>>::get();
    lhs["objects"].clear();
    lhs["objects"].set_type(json::JTYPE_ARRAY);
    lhs["objects"].resize(rhs.size());
    for (size_t i = 0; i < rhs.size(); ++i) {
        lhs["objects"][i] << rhs[i];
    }
    return lhs;
}

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Number<T>> &rhs)
{
    lhs.set_type(json::JTYPE_OBJECT);
    lhs["type"] << edacurry::TypeName<edacurry::structure::Number<T>>::get();
    lhs["value"] << rhs->getValue();
    lhs["unit"] << rhs->getUnit();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Analysis> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Analysis>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Circuit> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Circuit>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["title"] << rhs->getTitle();
    lhs["nodes"] << rhs->nodes;
    lhs["parameters"] << rhs->parameters;
    lhs["content"] << rhs->content;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Component> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Component>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["master"] << rhs->getMaster();
    lhs["nodes"] << rhs->nodes;
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Control> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Control>::get();
    // Write the fields.
    lhs["control_type"] << rhs->getControlType();
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ControlScope> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::ControlScope>::get();
    // Write the fields.
    lhs["control_type"] << rhs->getControlType();
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    lhs["nodes"] << rhs->nodes;
    lhs["content"] << rhs->content;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ExpressionUnary> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::ExpressionUnary>::get();
    // Write the fields.
    lhs["operator"] << rhs->getOperator();
    lhs["value"] << rhs->getValue();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Expression> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Expression>::get();
    // Write the fields.
    lhs["operator"] << rhs->getOperator();
    lhs["first"] << rhs->getFirst();
    lhs["second"] << rhs->getSecond();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::FunctionCall> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::FunctionCall>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Identifier> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Identifier>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Include> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Include>::get();
    // Write the fields.
    lhs["include_type"] << rhs->getIncludeType();
    lhs["path"] << rhs->getPath();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::LibraryDef> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::LibraryDef>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["content"] << rhs->content;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Library> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Library>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["path"] << rhs->getPath();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Model> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Model>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["master"] << rhs->getMaster();
    lhs["library"] << rhs->getLibrary();
    lhs["library_type"] << rhs->getLibraryType();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Node> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Node>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Parameter> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Parameter>::get();
    // Write the fields.
    if (rhs->getLeft()) {
        lhs["left"] << rhs->getLeft();
    } else {
        lhs["left"].set_type(json::JTYPE_OBJECT);
    }
    lhs["right"] << rhs->getRight();
    lhs["parameter_type"] << rhs->getType();
    lhs["hide_name"] << rhs->getHideName();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::String> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::String>::get();
    // Write the fields.
    lhs["string"] << rhs->getString();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Subckt> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::Subckt>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["nodes"] << rhs->nodes;
    lhs["parameters"] << rhs->parameters;
    lhs["content"] << rhs->content;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ValueList> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::ValueList>::get();
    // Write the fields.
    lhs["delimiter_type"] << rhs->getDelimiterType();
    lhs["values"] << rhs->values;
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ValuePair> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::TypeName<edacurry::structure::ValuePair>::get();
    // Write the fields.
    lhs["first"] << rhs->getFirst();
    lhs["second"] << rhs->getSecond();
    return lhs;
}

namespace edacurry::backend
{
std::string write_json(const std::shared_ptr<structure::Object> &object)
{
    json::jnode_t jnode;
    jnode << object;
    return jnode.to_string(true, 4);
}
} // namespace edacurry::backend