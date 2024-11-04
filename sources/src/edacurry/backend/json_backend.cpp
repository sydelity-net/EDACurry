/// @file json_backend.cpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include <json/json.hpp>

#include "edacurry/classes.hpp"

#include <memory>

namespace edacurry::detail
{

// Primary template for TypeName, used as a fallback for unknown types
template <typename T>
struct TypeName {
    static std::string get()
    {
        return "Unknown";
    }
};

// Macro to define specializations for specific types
#define DEFINE_TYPE_NAME(TYPE, NAME) \
    template <>                      \
    struct TypeName<TYPE> {          \
        static std::string get()     \
        {                            \
            return NAME;             \
        }                            \
    }

// Define specializations for each type using the macro
DEFINE_TYPE_NAME(edacurry::structure::Analysis, "Analysis");
DEFINE_TYPE_NAME(edacurry::structure::Circuit, "Circuit");
DEFINE_TYPE_NAME(edacurry::structure::Component, "Component");
DEFINE_TYPE_NAME(edacurry::structure::Control, "Control");
DEFINE_TYPE_NAME(edacurry::structure::ControlScope, "ControlScope");
DEFINE_TYPE_NAME(edacurry::structure::ExpressionUnary, "UnaryExpression");
DEFINE_TYPE_NAME(edacurry::structure::Expression, "Expression");
DEFINE_TYPE_NAME(edacurry::structure::FunctionCall, "FunctionCall");
DEFINE_TYPE_NAME(edacurry::structure::Identifier, "Identifier");
DEFINE_TYPE_NAME(edacurry::structure::Include, "Include");
DEFINE_TYPE_NAME(edacurry::structure::LibraryDef, "LibraryDef");
DEFINE_TYPE_NAME(edacurry::structure::Library, "Library");
DEFINE_TYPE_NAME(edacurry::structure::Model, "Model");
DEFINE_TYPE_NAME(edacurry::structure::Node, "Node");
DEFINE_TYPE_NAME(edacurry::structure::Parameter, "Parameter");
DEFINE_TYPE_NAME(edacurry::structure::String, "String");
DEFINE_TYPE_NAME(edacurry::structure::Subckt, "Subckt");
DEFINE_TYPE_NAME(edacurry::structure::ValueList, "List");
DEFINE_TYPE_NAME(edacurry::structure::ValuePair, "Pair");
DEFINE_TYPE_NAME(edacurry::structure::Value, "Value");
DEFINE_TYPE_NAME(edacurry::structure::Object, "Object");
DEFINE_TYPE_NAME(edacurry::structure::Number<int>, "Number<int>");
DEFINE_TYPE_NAME(edacurry::structure::Number<double>, "Number<double>");
DEFINE_TYPE_NAME(edacurry::structure::Number<unsigned>, "Number<unsigned>");

// Partial specialization for OwnedList<T>
template <typename T>
struct TypeName<edacurry::features::OwnedList<T>> {
    static std::string get()
    {
        return "List<" + TypeName<T>::get() + ">";
    }
};

// Define a helper function that calls TypeName<T>::get()
template <typename T>
std::string type_to_string()
{
    return TypeName<T>::get();
}

#undef DEFINE_TYPE_NAME

} // namespace edacurry::detail

namespace json
{

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, const edacurry::features::OwnedList<T> &rhs);
template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Number<T>> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Analysis> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Circuit> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Component> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Control> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ControlScope> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ExpressionUnary> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Expression> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::FunctionCall> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Identifier> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Include> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::LibraryDef> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Library> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Model> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Node> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Parameter> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::String> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Subckt> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ValueList> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::ValuePair> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Value> &rhs);
json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Object> &rhs);

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, const edacurry::features::OwnedList<T> &rhs)
{
    lhs.set_type(json::JTYPE_OBJECT);
    lhs["type"] << edacurry::detail::type_to_string<edacurry::features::OwnedList<T>>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Number<T>>();
    lhs["value"] << rhs->getValue();
    lhs["unit"] << rhs->getUnit();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Analysis> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Analysis>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Circuit>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Component>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Control>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::ControlScope>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::ExpressionUnary>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Expression>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::FunctionCall>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Identifier>();
    // Write the fields.
    lhs["name"] << rhs->getName();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Include> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Include>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::LibraryDef>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Library>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Model>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Node>();
    // Write the fields.
    lhs["name"] << rhs->getName();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Parameter> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Parameter>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::String>();
    // Write the fields.
    lhs["string"] << rhs->getString();
    return lhs;
}

json::jnode_t &operator<<(json::jnode_t &lhs, const std::shared_ptr<edacurry::structure::Subckt> &rhs)
{
    // Set the type to object.
    lhs.set_type(json::JTYPE_OBJECT);
    // Write the type.
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::Subckt>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::ValueList>();
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
    lhs["type"] << edacurry::detail::type_to_string<edacurry::structure::ValuePair>();
    // Write the fields.
    lhs["first"] << rhs->getFirst();
    lhs["second"] << rhs->getSecond();
    return lhs;
}

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

} // namespace json

namespace edacurry::backend
{
std::string write_json(const std::shared_ptr<structure::Object> &object)
{
    json::jnode_t jnode;
    jnode << object;
    return jnode.to_string(true, 4);
}
} // namespace edacurry::backend