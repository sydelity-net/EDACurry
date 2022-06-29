/// @file json_frontend.cpp
/// @author Enrico Fraccaroli (enry.frak@gmail.com)
/// @brief
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "frontend/json_frontend.hpp"
#include "backend/json_backend.hpp"
#include "utility/typename.hpp"
#include "utility/json.hpp"
#include "classes.hpp"

template <typename Base, typename Derived>
static inline bool try_to_read(const json::jnode_t &lhs, Base *&rhs)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    // Prepare the pointer with the type of the derived class.
    Derived *ptr = nullptr;
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

template <typename Base, typename Derived>
static inline bool try_to_write(json::jnode_t &lhs, Base *const &rhs)
{
    static_assert(std::is_convertible<Derived *, Base *>::value, "Class must inherit Base as public");
    // Try to dynamically cast the pointer to the derived class type.
    auto ptr = dynamic_cast<Derived *>(rhs);
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

namespace json
{

// ============================================================================
// REGISTER ENUMS
// ============================================================================

JSON_DEFINE_OP_ENUM(edacurry::ControlType);
JSON_DEFINE_OP_ENUM(edacurry::Operator);
JSON_DEFINE_OP_ENUM(edacurry::IncludeType);
JSON_DEFINE_OP_ENUM(edacurry::ParameterType);
JSON_DEFINE_OP_ENUM(edacurry::DelimiterType);

// ============================================================================
// TYPENAMES
// ============================================================================

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
struct TypeName<edacurry::features::ObjectList<T>> {
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

// ============================================================================
// STREAM OPERATORS
// ============================================================================

template <>
jnode_t &operator<<<edacurry::structure::Object *>(jnode_t &lhs, edacurry::structure::Object *const &rhs)
{
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Analysis>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Circuit>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Component>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ControlScope>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Control>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Include>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::LibraryDef>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Library>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Model>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Node>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Parameter>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Subckt>(lhs, rhs))
        return lhs;
    // Derived of Value.
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ExpressionUnary>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Expression>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::FunctionCall>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Identifier>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Number<int>>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Number<unsigned>>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::Number<double>>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::String>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ValueList>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Object, edacurry::structure::ValuePair>(lhs, rhs))
        return lhs;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Object *>(const jnode_t &lhs, edacurry::structure::Object *&rhs)
{
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Analysis>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Circuit>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Component>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ControlScope>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Control>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Include>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::LibraryDef>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Library>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Model>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Node>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Parameter>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Subckt>(lhs, rhs))
        return lhs;
    // Derived of Value.
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ExpressionUnary>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Expression>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::FunctionCall>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Identifier>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Number<int>>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Number<unsigned>>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::Number<double>>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::String>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ValueList>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Object, edacurry::structure::ValuePair>(lhs, rhs))
        return lhs;
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Value *>(jnode_t &lhs, edacurry::structure::Value *const &rhs)
{
    if (try_to_write<edacurry::structure::Value, edacurry::structure::ExpressionUnary>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Expression>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::FunctionCall>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Identifier>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Number<int>>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Number<unsigned>>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::Number<double>>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::String>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::ValueList>(lhs, rhs))
        return lhs;
    if (try_to_write<edacurry::structure::Value, edacurry::structure::ValuePair>(lhs, rhs))
        return lhs;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Value *>(const jnode_t &lhs, edacurry::structure::Value *&rhs)
{
    if (try_to_read<edacurry::structure::Value, edacurry::structure::ExpressionUnary>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Expression>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::FunctionCall>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Identifier>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Number<int>>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Number<unsigned>>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::Number<double>>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::String>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::ValueList>(lhs, rhs))
        return lhs;
    if (try_to_read<edacurry::structure::Value, edacurry::structure::ValuePair>(lhs, rhs))
        return lhs;
    return lhs;
}

template <typename T>
json::jnode_t &operator<<(json::jnode_t &lhs, edacurry::features::ObjectList<T> const &rhs)
{
    lhs.set_type(json::JOBJECT);
    lhs["type"] << json::TypeName<edacurry::features::ObjectList<T>>::get();
    lhs["objects"].clear();
    lhs["objects"].set_type(json::JARRAY);
    lhs["objects"].resize(rhs.size());
    for (size_t i = 0; i < rhs.size(); ++i) {
        lhs["objects"][i] << rhs[i];
    }
    return lhs;
}

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, edacurry::features::ObjectList<T> &rhs)
{
    if (lhs["type"].get_value() == json::TypeName<edacurry::features::ObjectList<T>>::get()) {
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
json::jnode_t &operator<<(json::jnode_t &lhs, edacurry::structure::Number<T> *const &rhs)
{
    lhs.set_type(json::JOBJECT);
    lhs["type"] << json::TypeName<edacurry::structure::Number<T>>::get();
    lhs["value"] << rhs->getValue();
    lhs["unit"] << rhs->getUnit();
    return lhs;
}

template <typename T>
const json::jnode_t &operator>>(const json::jnode_t &lhs, edacurry::structure::Number<T> *&rhs)
{
    if (lhs["type"].get_value() == json::TypeName<edacurry::structure::Number<T>>::get()) {
        T value;
        std::string unit;
        lhs["value"] >> value;
        lhs["unit"] >> unit;
        if (rhs == nullptr) {
            rhs = new edacurry::structure::Number<T>(value, unit);
        } else {
            rhs->setValue(value);
            rhs->setUnit(unit);
        }
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Analysis *>(jnode_t &lhs, edacurry::structure::Analysis *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Analysis>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Analysis *>(const jnode_t &lhs, edacurry::structure::Analysis *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Analysis>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Analysis();
        std::string name;
        lhs["name"] >> name;
        rhs->setName(name);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Circuit *>(jnode_t &lhs, edacurry::structure::Circuit *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Circuit>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["title"] << rhs->getTitle();
    lhs["nodes"] << rhs->nodes;
    lhs["parameters"] << rhs->parameters;
    lhs["content"] << rhs->content;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Circuit *>(const jnode_t &lhs, edacurry::structure::Circuit *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Circuit>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Circuit();
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

template <>
jnode_t &operator<<<edacurry::structure::Component *>(jnode_t &lhs, edacurry::structure::Component *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Component>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["master"] << rhs->getMaster();
    lhs["nodes"] << rhs->nodes;
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Component *>(const jnode_t &lhs, edacurry::structure::Component *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Component>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Component();
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

template <>
jnode_t &operator<<<edacurry::structure::Control *>(jnode_t &lhs, edacurry::structure::Control *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Control>::get();
    // Write the fields.
    lhs["control_type"] << rhs->getControlType();
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Control *>(const jnode_t &lhs, edacurry::structure::Control *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Control>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Control();
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

template <>
jnode_t &operator<<<edacurry::structure::ControlScope *>(jnode_t &lhs, edacurry::structure::ControlScope *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::ControlScope>::get();
    // Write the fields.
    lhs["control_type"] << rhs->getControlType();
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    lhs["nodes"] << rhs->nodes;
    lhs["content"] << rhs->content;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::ControlScope *>(const jnode_t &lhs, edacurry::structure::ControlScope *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::ControlScope>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::ControlScope();
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

template <>
jnode_t &operator<<<edacurry::structure::ExpressionUnary *>(jnode_t &lhs, edacurry::structure::ExpressionUnary *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::ExpressionUnary>::get();
    // Write the fields.
    lhs["operator"] << rhs->getOperator();
    lhs["value"] << rhs->getValue();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::ExpressionUnary *>(const jnode_t &lhs, edacurry::structure::ExpressionUnary *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::ExpressionUnary>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::ExpressionUnary();
        // Support variables.
        edacurry::structure::Value *value = nullptr;
        edacurry::Operator op;
        // Read the values.
        lhs["operator"] >> op;
        rhs->setOperator(op);
        lhs["value"] >> value;
        rhs->setValue(value);
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Expression *>(jnode_t &lhs, edacurry::structure::Expression *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Expression>::get();
    // Write the fields.
    lhs["operator"] << rhs->getOperator();
    lhs["first"] << rhs->getFirst();
    lhs["second"] << rhs->getSecond();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Expression *>(const jnode_t &lhs, edacurry::structure::Expression *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Expression>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Expression();
        // Support variables.
        edacurry::structure::Value *first = nullptr, *second = nullptr;
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

template <>
jnode_t &operator<<<edacurry::structure::FunctionCall *>(jnode_t &lhs, edacurry::structure::FunctionCall *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::FunctionCall>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::FunctionCall *>(const jnode_t &lhs, edacurry::structure::FunctionCall *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::FunctionCall>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::FunctionCall();
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["parameters"] >> rhs->parameters;
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Identifier *>(jnode_t &lhs, edacurry::structure::Identifier *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Identifier>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Identifier *>(const jnode_t &lhs, edacurry::structure::Identifier *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Identifier>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Identifier();
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Include *>(jnode_t &lhs, edacurry::structure::Include *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Include>::get();
    // Write the fields.
    lhs["include_type"] << rhs->getIncludeType();
    lhs["path"] << rhs->getPath();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Include *>(const jnode_t &lhs, edacurry::structure::Include *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Include>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Include();
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

template <>
jnode_t &operator<<<edacurry::structure::LibraryDef *>(jnode_t &lhs, edacurry::structure::LibraryDef *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::LibraryDef>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["content"] << rhs->content;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::LibraryDef *>(const jnode_t &lhs, edacurry::structure::LibraryDef *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::LibraryDef>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::LibraryDef();
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        rhs->setName(str);
        lhs["content"] >> rhs->content;
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Library *>(jnode_t &lhs, edacurry::structure::Library *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Library>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["path"] << rhs->getPath();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Library *>(const jnode_t &lhs, edacurry::structure::Library *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Library>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Library();
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

template <>
jnode_t &operator<<<edacurry::structure::Model *>(jnode_t &lhs, edacurry::structure::Model *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Model>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["master"] << rhs->getMaster();
    lhs["library"] << rhs->getLibrary();
    lhs["library_type"] << rhs->getLibraryType();
    lhs["parameters"] << rhs->parameters;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Model *>(const jnode_t &lhs, edacurry::structure::Model *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Model>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Model();
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

template <>
jnode_t &operator<<<edacurry::structure::Node *>(jnode_t &lhs, edacurry::structure::Node *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Node>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Node *>(const jnode_t &lhs, edacurry::structure::Node *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Node>::get()) {
        // Support variables.
        std::string str;
        // Read the values.
        lhs["name"] >> str;
        if (rhs == nullptr)
            rhs = new edacurry::structure::Node(str);
        else
            rhs->setName(str);
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Parameter *>(jnode_t &lhs, edacurry::structure::Parameter *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Parameter>::get();
    // Write the fields.
    if (rhs->getLeft()) {
        lhs["left"] << rhs->getLeft();
    } else {
        lhs["left"].set_type(json::JOBJECT);
    }
    lhs["right"] << rhs->getRight();
    lhs["parameter_type"] << rhs->getType();
    lhs["hide_left"] << rhs->getHideLeft();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Parameter *>(const jnode_t &lhs, edacurry::structure::Parameter *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Parameter>::get()) {
        // Support variables.
        edacurry::structure::Value *left  = nullptr;
        edacurry::structure::Value *right = nullptr;
        edacurry::ParameterType parameter_type;
        bool hide_left;
        // Read the values.
        lhs["left"] >> left;
        lhs["right"] >> right;
        lhs["parameter_type"] >> parameter_type;
        lhs["hide_left"] >> hide_left;
        if (rhs == nullptr) {
            rhs = new edacurry::structure::Parameter(left, right, parameter_type, hide_left);
        } else {
            rhs->setLeft(left);
            rhs->setRight(right);
            rhs->setType(parameter_type);
            rhs->setHideLeft(hide_left);
        }
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::String *>(jnode_t &lhs, edacurry::structure::String *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::String>::get();
    // Write the fields.
    lhs["string"] << rhs->getString();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::String *>(const jnode_t &lhs, edacurry::structure::String *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::String>::get()) {
        // Support variables.
        std::string str;
        // Read the values.
        lhs["string"] >> str;
        if (rhs == nullptr)
            rhs = new edacurry::structure::String(str);
        else
            rhs->setString(str);
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::Subckt *>(jnode_t &lhs, edacurry::structure::Subckt *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::Subckt>::get();
    // Write the fields.
    lhs["name"] << rhs->getName();
    lhs["nodes"] << rhs->nodes;
    lhs["parameters"] << rhs->parameters;
    lhs["content"] << rhs->content;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::Subckt *>(const jnode_t &lhs, edacurry::structure::Subckt *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::Subckt>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::Subckt();
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

template <>
jnode_t &operator<<<edacurry::structure::ValueList *>(jnode_t &lhs, edacurry::structure::ValueList *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::ValueList>::get();
    // Write the fields.
    lhs["delimiter_type"] << rhs->getDelimiterType();
    lhs["values"] << rhs->values;
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::ValueList *>(const jnode_t &lhs, edacurry::structure::ValueList *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::ValueList>::get()) {
        if (rhs == nullptr)
            rhs = new edacurry::structure::ValueList();
        // Support variables.
        edacurry::DelimiterType delimiter_type;
        // Read the values.
        lhs["delimiter_type"] >> delimiter_type;
        rhs->setDelimiterType(delimiter_type);
        lhs["values"] >> rhs->values;
    }
    return lhs;
}

template <>
jnode_t &operator<<<edacurry::structure::ValuePair *>(jnode_t &lhs, edacurry::structure::ValuePair *const &rhs)
{
    // Set the type to object.
    lhs.set_type(JOBJECT);
    // Write the type.
    lhs["type"] << TypeName<edacurry::structure::ValuePair>::get();
    // Write the fields.
    lhs["first"] << rhs->getFirst();
    lhs["second"] << rhs->getParent();
    return lhs;
}

template <>
const jnode_t &operator>><edacurry::structure::ValuePair *>(const jnode_t &lhs, edacurry::structure::ValuePair *&rhs)
{
    if (lhs["type"].get_value() == TypeName<edacurry::structure::ValuePair>::get()) {
        // Support variables.
        edacurry::structure::Value *first = nullptr, *second = nullptr;
        // Read the values.
        lhs["first"] >> first;
        lhs["second"] >> second;
        if (rhs == nullptr) {
            rhs = new edacurry::structure::ValuePair(first, second);
        } else {
            rhs->setFirst(first);
            rhs->setSecond(second);
        }
    }
    return lhs;
}

} // namespace json

namespace edacurry::frontend
{
structure::Object *parse(const json::jnode_t jnode)
{
    structure::Object *object = nullptr;
    jnode >> object;
    return object;
}
} // namespace edacurry::frontend

namespace edacurry::backend
{
json::jnode_t &write(json::jnode_t &jnode, structure::Object *object)
{
    jnode << object;
    return jnode;
}
} // namespace edacurry::backend