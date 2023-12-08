/// @file json_frontend.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include <json/json.hpp>

#include "utility/typename.hpp"
#include "classes.hpp"

template <typename Base, typename Derived>
static inline bool try_to_read(const json::jnode_t &lhs, std::shared_ptr<Base> &rhs)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    // Prepare the pointer with the type of the derived class.
    std::shared_ptr<Derived> ptr = nullptr;
    // Try to stream with the given pointer.
    lhs >> ptr;
    // If the stream is successful, we should receive a valid pointer.
    if (ptr) {
        // Save the pointer to the rhs.
        rhs = ptr;
        // Notify that we succesfully loaded from stream.
        return true;
    }
    // Notify that we failed to load from stream.
    return false;
}

namespace edacurry
{

template <typename T>
struct TypeName<edacurry::structure::Number<T>> {
    static std::string get()
    {
        return "Number<" + TypeName<T>::get() + ">";
    }
};

template <>
struct TypeName<edacurry::structure::Analysis> {
    static std::string get()
    {
        return "Analysis";
    }
};

template <>
struct TypeName<edacurry::structure::Circuit> {
    static std::string get()
    {
        return "Circuit";
    }
};

template <>
struct TypeName<edacurry::structure::Component> {
    static std::string get()
    {
        return "Component";
    }
};

template <>
struct TypeName<edacurry::structure::Control> {
    static std::string get()
    {
        return "Control";
    }
};

template <>
struct TypeName<edacurry::structure::ControlScope> {
    static std::string get()
    {
        return "ControlScope";
    }
};

template <>
struct TypeName<edacurry::structure::ExpressionUnary> {
    static std::string get()
    {
        return "UnaryExpression";
    }
};

template <>
struct TypeName<edacurry::structure::Expression> {
    static std::string get()
    {
        return "Expression";
    }
};

template <>
struct TypeName<edacurry::structure::FunctionCall> {
    static std::string get()
    {
        return "FunctionCall";
    }
};

template <>
struct TypeName<edacurry::structure::Identifier> {
    static std::string get()
    {
        return "Identifier";
    }
};

template <>
struct TypeName<edacurry::structure::Include> {
    static std::string get()
    {
        return "Include";
    }
};

template <>
struct TypeName<edacurry::structure::LibraryDef> {
    static std::string get()
    {
        return "LibraryDef";
    }
};

template <>
struct TypeName<edacurry::structure::Library> {
    static std::string get()
    {
        return "Library";
    }
};

template <>
struct TypeName<edacurry::structure::Model> {
    static std::string get()
    {
        return "Model";
    }
};

template <>
struct TypeName<edacurry::structure::Node> {
    static std::string get()
    {
        return "Node";
    }
};

template <>
struct TypeName<edacurry::structure::Parameter> {
    static std::string get()
    {
        return "Parameter";
    }
};

template <>
struct TypeName<edacurry::structure::String> {
    static std::string get()
    {
        return "String";
    }
};

template <>
struct TypeName<edacurry::structure::Subckt> {
    static std::string get()
    {
        return "Subckt";
    }
};

template <>
struct TypeName<edacurry::structure::ValueList> {
    static std::string get()
    {
        return "List";
    }
};

template <>
struct TypeName<edacurry::structure::ValuePair> {
    static std::string get()
    {
        return "Pair";
    }
};

template <typename T>
struct TypeName<edacurry::features::OwnedList<T>> {
    static std::string get()
    {
        return "List<" + TypeName<T>::get() + ">";
    }
};

template <>
struct TypeName<edacurry::structure::Value> {
    static std::string get()
    {
        return "Value";
    }
};

template <>
struct TypeName<edacurry::structure::Object> {
    static std::string get()
    {
        return "Object";
    }
};

} // namespace edacurry

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Object> &rhs)
{
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Analysis>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Circuit>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Component>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ControlScope>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Control>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Include>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::LibraryDef>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Library>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Model>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Node>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Parameter>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Subckt>(lhs, rhs)) {
        return lhs;
    }
    // Derived of Value.
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ExpressionUnary>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Expression>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::FunctionCall>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Identifier>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Number<int>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Number<unsigned>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Number<double>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::String>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ValueList>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ValuePair>(lhs, rhs)) {
        return lhs;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Value> &rhs)
{
    if (try_to_read<edacurry::structure::Value, edacurry::structure::ExpressionUnary>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Expression>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::FunctionCall>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Identifier>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Number<int>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Number<unsigned>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Number<double>>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::String>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::ValueList>(lhs, rhs)) {
        return lhs;
    }
    if (try_to_read<edacurry::structure::Value, edacurry::structure::ValuePair>(lhs, rhs)) {
        return lhs;
    }
    return lhs;
}

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, edacurry::features::OwnedList<T> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::features::OwnedList<T>>::get()) {
        // Clear the vector.
        rhs.clear();
        // Resize the vector.
        rhs.resize(lhs["objects"].size());
        // Load its elements.
        for (size_t i = 0; i < lhs["objects"].size(); ++i) {
            lhs["objects"][i] >> rhs[i];
            rhs[i]->setParent(rhs.getOwner());
        }
    }
    return lhs;
}

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Number<T>> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Number<T>>::get()) {
        T value;
        std::string unit;
        lhs["value"] >> value;
        lhs["unit"] >> unit;
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Number<T>>(value, unit);
        } else {
            rhs->setValue(value);
            rhs->setUnit(unit);
        }
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Analysis> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Analysis>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Analysis>();
        }
        std::string name;
        lhs["name"] >> name;
        rhs->setName(name);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Circuit> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Circuit>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Circuit>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["title"] >> str;
        rhs->setTitle(str);
        lhs["nodes"] >> rhs->nodes;
        lhs["parameters"] >> rhs->parameters;
        lhs["content"] >> rhs->content;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Component> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Component>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Component>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["master"] >> str;
        rhs->setMaster(str);
        lhs["nodes"] >> rhs->nodes;
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Control> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Control>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Control>();
        }
        // Support variables.
        edacurry::ControlType type;
        std::string str;
        // Read the values.
        lhs["control_type"] >> type;
        rhs->setControlType(type);
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::ControlScope> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::ControlScope>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::ControlScope>();
        }
        // Support variables.
        edacurry::ControlType type;
        std::string str;
        // Read the values.
        lhs["control_type"] >> type;
        rhs->setControlType(type);
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["parameters"] >> rhs->parameters;
        lhs["nodes"] >> rhs->nodes;
        lhs["content"] >> rhs->content;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::ExpressionUnary> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::ExpressionUnary>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::ExpressionUnary>();
        }
        // Support variables.
        std::shared_ptr<edacurry::structure::Value> value = nullptr;
        edacurry::Operator op;
        // Read the values.
        lhs["operator"] >> op;
        rhs->setOperator(op);
        lhs["value"] >> value;
        rhs->setValue(value);
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Expression> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Expression>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Expression>();
        }
        // Support variables.
        std::shared_ptr<edacurry::structure::Value> first = nullptr, second = nullptr;
        edacurry::Operator op;
        // Read the values.
        lhs["operator"] >> op;
        rhs->setOperator(op);
        lhs["first"] >> first;
        rhs->setFirst(first);
        lhs["second"] >> second;
        rhs->setSecond(second);
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::FunctionCall> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::FunctionCall>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::FunctionCall>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Identifier> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Identifier>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Identifier>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Include> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Include>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Include>();
        }
        // Support variables.
        edacurry::IncludeType include_type;
        std::string str;
        // Read the values.
        lhs["include_type"] >> include_type;
        rhs->setIncludeType(include_type);
        lhs["path"] >> str;
        rhs->setPath(str);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::LibraryDef> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::LibraryDef>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::LibraryDef>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["content"] >> rhs->content;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Library> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Library>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Library>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["path"] >> str;
        rhs->setPath(str);
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Model> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Model>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Model>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["master"] >> str;
        rhs->setMaster(str);
        lhs["library"] >> str;
        rhs->setLibrary(str);
        lhs["library_type"] >> str;
        rhs->setLibraryType(str);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Node> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Node>::get()) {
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Node>(str);
        } else {
            rhs->setName(str);
        }
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Parameter> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Parameter>::get()) {
        // Support variables.
        std::shared_ptr<edacurry::structure::Value> left  = nullptr;
        std::shared_ptr<edacurry::structure::Value> right = nullptr;
        edacurry::ParameterType parameter_type;
        bool hide_name;
        // Read the values.
        lhs["left"] >> left;
        lhs["right"] >> right;
        lhs["parameter_type"] >> parameter_type;
        lhs["hide_name"] >> hide_name;
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Parameter>(left, right, parameter_type, hide_name);
        } else {
            rhs->setLeft(left);
            rhs->setRight(right);
            rhs->setType(parameter_type);
            rhs->setHideName(hide_name);
        }
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::String> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::String>::get()) {
        // Support variables.
        std::string str;
        // Read the values.
        lhs["string"] >> str;
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::String>(str);
        } else {
            rhs->setString(str);
        }
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::Subckt> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::Subckt>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::Subckt>();
        }
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["nodes"] >> rhs->nodes;
        lhs["parameters"] >> rhs->parameters;
        lhs["content"] >> rhs->content;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::ValueList> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::ValueList>::get()) {
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::ValueList>();
        }
        // Support variables.
        edacurry::DelimiterType delimiter_type;
        // Read the values.
        lhs["delimiter_type"] >> delimiter_type;
        rhs->setDelimiterType(delimiter_type);
        lhs["values"] >> rhs->values;
    }
    return lhs;
}

const json::jnode_t &operator>>(const json::jnode_t &lhs, std::shared_ptr<edacurry::structure::ValuePair> &rhs)
{
    if (lhs["type"].get_value() == edacurry::TypeName<edacurry::structure::ValuePair>::get()) {
        // Support variables.
        std::shared_ptr<edacurry::structure::Value> first = nullptr, second = nullptr;
        // Read the values.
        lhs["first"] >> first;
        lhs["second"] >> second;
        if (rhs == nullptr) {
            rhs = std::make_shared<edacurry::structure::ValuePair>(first, second);
        } else {
            rhs->setFirst(first);
            rhs->setSecond(second);
        }
    }
    return lhs;
}

namespace edacurry::frontend
{

std::shared_ptr<edacurry::structure::Object> parse_json(const std::string &path)
{
    // Parse the file to json.
    const json::jnode_t jnode = json::parser::parse_file(path);
    // Turn json to edacurry.
    std::shared_ptr<structure::Object> object = nullptr;
    jnode >> object;
    return object;
}

} // namespace edacurry::frontend
