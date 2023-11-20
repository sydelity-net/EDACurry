/// @file   edacurry.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "enums.hpp"
#include "factory.hpp"
#include "antlr4-runtime.h"
#include "antlr4parser/ELDOLexer.h"
#include "antlr4parser/ELDOParser.h"
#include "backend/eldo_backend.hpp"
#include "backend/xml_backend.hpp"
#include "frontend/eldo_frontend.hpp"
#include "structure/component.hpp"
#include "structure/expression.hpp"
#include "structure/function_call.hpp"
#include "structure/identifier.hpp"
#include "structure/node.hpp"
#include "structure/parameter.hpp"
#include "structure/value_list.hpp"
#include "utility/logging.hpp"
#include "utility/utility.hpp"

#include <json/json.hpp>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

std::string parse_to_xml(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
#if 0
    for (size_t index = 0; index < tokens.size(); ++index) {
        antlr4::Token *token = tokens.get(index);
        std::cout << "Channel: " << token->getChannel() << "\n";
        std::cout << " Type: " << token->getType() << "\n";
        std::cout << " Hidden: ";
        for (auto const &hidden : tokens.getHiddenTokensToLeft(index)) {
            std::cout << "\n\tChannel: " << hidden->getChannel() << ", Type: " << hidden->getType() << "\n";
        }
        std::cout << token->getText() << "\n";
    }
#endif

    edacurry::ELDOParser parser(&tokens);
    edacurry::frontend::ELDOFrontend frontend(tokens);

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    edacurry::backend::XmlBackend backend;
    frontend.getRoot()->accept(&backend);
    return backend.str();
}

std::string parse_to_eldo(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
#if 0
    for (size_t index = 0; index < tokens.size(); ++index) {
        antlr4::Token *token = tokens.get(index);
        std::cout << "Channel: " << token->getChannel() << "\n";
        std::cout << " Type: " << token->getType() << "\n";
        std::cout << " Hidden: ";
        for (auto const &hidden : tokens.getHiddenTokensToLeft(index)) {
            std::cout << "\n\tChannel: " << hidden->getChannel() << ", Type: " << hidden->getType() << "\n";
        }
        std::cout << token->getText() << "\n";
    }
#endif

    edacurry::ELDOParser parser(&tokens);
    edacurry::frontend::ELDOFrontend frontend(tokens);

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    edacurry::backend::EldoBackend backend;
    frontend.getRoot()->accept(&backend);
    return backend.str();
}

#if 0
void test_json(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();

    edacurry::ELDOParser parser(&tokens);

    edacurry::frontend::ELDOFrontend frontend(tokens);

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    auto output_root = frontend.getRoot();

    json::jnode_t json_0;

    json_0 << output_root;

    json::parser::write_file("output.json", json_0, false);

    json::jnode_t json_1 = json::parser::parse_file("output.json");

    json_1 << input_root;

    std::cout << std::string(80, '=') << "\n";
    std::cout << json_0.to_string() << "\n";
    std::cout << std::string(80, '=') << "\n";
    std::cout << json_1.to_string() << "\n";
    std::cout << std::string(80, '=') << "\n";

    delete input_root;
    delete output_root;
}
#endif

namespace edacurry
{

namespace features
{
class PyAbstractVisitor : public edacurry::features::Visitor {
public:
    PyAbstractVisitor()
        : edacurry::features::Visitor()
    {
    }

    int visitCircuit(const std::shared_ptr<structure::Circuit> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitCircuit, e);
    }

    int visitAnalysis(const std::shared_ptr<structure::Analysis> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitAnalysis, e);
    }

    int visitComponent(const std::shared_ptr<structure::Component> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitComponent, e);
    }

    int visitControlScope(const std::shared_ptr<structure::ControlScope> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitControlScope, e);
    }

    int visitControl(const std::shared_ptr<structure::Control> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitControl, e);
    }

    int visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitExpressionUnary, e);
    }

    int visitExpression(const std::shared_ptr<structure::Expression> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitExpression, e);
    }

    int visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitFunctionCall, e);
    }

    int visitIdentifier(const std::shared_ptr<structure::Identifier> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitIdentifier, e);
    }

    int visitInclude(const std::shared_ptr<structure::Include> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitInclude, e);
    }

    int visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitLibraryDef, e);
    }

    int visitLibrary(const std::shared_ptr<structure::Library> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitLibrary, e);
    }

    int visitModel(const std::shared_ptr<structure::Model> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitModel, e);
    }

    int visitNode(const std::shared_ptr<structure::Node> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitNode, e);
    }

    int visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitUnsigned, e);
    }

    int visitInt(const std::shared_ptr<structure::Number<int>> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitInt, e);
    }

    int visitDouble(const std::shared_ptr<structure::Number<double>> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitDouble, e);
    }

    int visitParameter(const std::shared_ptr<structure::Parameter> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitParameter, e);
    }

    int visitSubckt(const std::shared_ptr<structure::Subckt> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitSubckt, e);
    }

    int visitString(const std::shared_ptr<structure::String> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitString, e);
    }

    int visitValuePair(const std::shared_ptr<structure::ValuePair> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitValuePair, e);
    }

    int visitValueList(const std::shared_ptr<structure::ValueList> &e) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitValueList, e);
    }
};

class PyBaseVisitor : public edacurry::features::BaseVisitor {
public:
    PyBaseVisitor()
        : edacurry::features::BaseVisitor()
    {
    }

    int visitCircuit(const std::shared_ptr<structure::Circuit> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitCircuit, e);
    }

    int visitAnalysis(const std::shared_ptr<structure::Analysis> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitAnalysis, e);
    }

    int visitComponent(const std::shared_ptr<structure::Component> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitComponent, e);
    }

    int visitControlScope(const std::shared_ptr<structure::ControlScope> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitControlScope, e);
    }

    int visitControl(const std::shared_ptr<structure::Control> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitControl, e);
    }

    int visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitExpressionUnary, e);
    }

    int visitExpression(const std::shared_ptr<structure::Expression> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitExpression, e);
    }

    int visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitFunctionCall, e);
    }

    int visitIdentifier(const std::shared_ptr<structure::Identifier> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitIdentifier, e);
    }

    int visitInclude(const std::shared_ptr<structure::Include> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitInclude, e);
    }

    int visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitLibraryDef, e);
    }

    int visitLibrary(const std::shared_ptr<structure::Library> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitLibrary, e);
    }

    int visitModel(const std::shared_ptr<structure::Model> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitModel, e);
    }

    int visitNode(const std::shared_ptr<structure::Node> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitNode, e);
    }

    int visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitUnsigned, e);
    }

    int visitInt(const std::shared_ptr<structure::Number<int>> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitInt, e);
    }

    int visitDouble(const std::shared_ptr<structure::Number<double>> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitDouble, e);
    }

    int visitParameter(const std::shared_ptr<structure::Parameter> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitParameter, e);
    }

    int visitSubckt(const std::shared_ptr<structure::Subckt> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitSubckt, e);
    }

    int visitString(const std::shared_ptr<structure::String> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitString, e);
    }

    int visitValuePair(const std::shared_ptr<structure::ValuePair> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitValuePair, e);
    }

    int visitValueList(const std::shared_ptr<structure::ValueList> &e) override
    {
        PYBIND11_OVERRIDE(int, edacurry::features::BaseVisitor, visitValueList, e);
    }
};
} // namespace features

namespace structure
{

class PyObject : public edacurry::structure::Object {
public:
    /// @brief Construct a new object.
    /// @param parent The parent of the object.
    explicit PyObject(std::weak_ptr<edacurry::structure::Object> parent)
        : edacurry::structure::Object(parent)
    {
    }

    int accept(edacurry::features::Visitor *visitor) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::structure::Object, accept, visitor);
    }
};

class PyValue : public edacurry::structure::Value {
public:
    explicit PyValue()
        : edacurry::structure::Value()
    {
    }

    int accept(edacurry::features::Visitor *visitor) override
    {
        PYBIND11_OVERRIDE_PURE(int, edacurry::structure::Value, accept, visitor);
    }
};

template <typename T>
void register_list(pybind11::module_ &m, const std::string &name)
{
    // ========================================================================
    namespace py = pybind11;
    using namespace edacurry;
    using namespace edacurry::features;
    using namespace edacurry::structure;

    // ========================================================================
    py::class_<OwnedList<T>>(m, ("List" + name).c_str())
        .def(py::init<std::shared_ptr<Object>>())
        .def("clear", &OwnedList<T>::clear, "Clears the list and deletes the objects.")
        .def("empty", &OwnedList<T>::empty, "Checks if the list is empty.")
        .def("__len__", &OwnedList<T>::size, "Returns the size of the list.")
        .def("append",
             &OwnedList<T>::push_back,
             py::arg("item"),
             "Adds a new item to the list.")
        .def("pop", &OwnedList<T>::pop_back, "Removes the last inserted object.", py::return_value_policy::move)
        .def("remove",
             static_cast<typename OwnedList<T>::value_type (OwnedList<T>::*)(typename OwnedList<T>::value_type)>(&OwnedList<T>::remove),
             py::arg("item"),
             "Removes the item from the list.",
             py::return_value_policy::move)
        .def("remove",
             static_cast<typename OwnedList<T>::value_type (OwnedList<T>::*)(const std::string &)>(&OwnedList<T>::remove),
             py::arg("name"),
             "Removes the item from the list based on the name.",
             py::return_value_policy::move)
        .def("transfer_to",
             static_cast<void (OwnedList<T>::*)(typename OwnedList<T>::value_type, OwnedList<T> &)>(&OwnedList<T>::transfer_to),
             py::arg("item"),
             py::arg("other"),
             "Transfer the item from this list to the other.")
        .def(
            "__getitem__",
            [](OwnedList<T> &self, unsigned index) { return self[index]; },
            "Returns the item at the given index.")
        .def(
            "__iter__",
            [](OwnedList<T> &self) { return py::make_iterator(self.begin(), self.end()); },
            py::keep_alive<0, 1>(),
            "Allows iterating the content of the dataset.");
}
} // namespace structure

} // namespace edacurry

PYBIND11_MODULE(edacurry, m)
{
    logging::initialize();

    // ========================================================================
    namespace py = pybind11;
    using namespace edacurry;
    using namespace edacurry::features;
    using namespace edacurry::structure;

    // ========================================================================
    m.def("parse_to_xml", parse_to_xml);
    m.def("parse_to_eldo", parse_to_eldo);

    // ========================================================================
    py::enum_<NetlistType>(m, "NetlistType", "All the supported languages.")
        .value("net_none", NetlistType::net_none, "No netlist type.")
        .value("net_spice", NetlistType::net_spice, "A SPICE netlist.")
        .value("net_spectre", NetlistType::net_spectre, "A Spectre netlist.")
        .value("net_eldo", NetlistType::net_eldo, "An ELDO netlist.")
        .export_values();

    // ========================================================================
    py::enum_<IncludeType>(m, "IncludeType", "All the supported types of include.")
        .value("inc_none", IncludeType::inc_none, "No include type.")
        .value("inc_standard", IncludeType::inc_standard, "Standard include.")
        .value("inc_hdl", IncludeType::inc_hdl, "Include a Hardware Description Language (HDL).")
        .value("inc_ahdl", IncludeType::inc_ahdl, "Include an Analog Hardware Description Language (AHDL).")
        .value("inc_cpp", IncludeType::inc_cpp, "Include a C or C++ code.")
        .export_values();

    // ========================================================================
    py::enum_<Operator>(m, "Operator", "All supported operators.")
        .value("op_none", Operator::op_none, "No operator type.")
        .value("op_assign", Operator::op_assign, "Assign operator.")
        .value("op_plus", Operator::op_plus, "Operator `+`.")
        .value("op_minus", Operator::op_minus, "Operator `-`.")
        .value("op_mult", Operator::op_mult, "Operator `*`.")
        .value("op_div", Operator::op_div, "Operator `/`.")
        .value("op_or", Operator::op_or, "Operator `||`.")
        .value("op_and", Operator::op_and, "Operator `&&`.")
        .value("op_xor", Operator::op_xor, "Operator `^`.")
        .value("op_not", Operator::op_not, "Operator `!`.")
        .value("op_bor", Operator::op_bor, "Operator `|`.")
        .value("op_band", Operator::op_band, "Operator `&`.")
        .value("op_bsl", Operator::op_bsl, "Operator `<<`.")
        .value("op_bsr", Operator::op_bsr, "Operator `>>`.")
        .value("op_eq", Operator::op_eq, "Operator `==`.")
        .value("op_neq", Operator::op_neq, "Operator `!=`.")
        .value("op_lt", Operator::op_lt, "Operator `<`.")
        .value("op_gt", Operator::op_gt, "Operator `>`.")
        .value("op_le", Operator::op_le, "Operator `<=`.")
        .value("op_ge", Operator::op_ge, "Operator `>=`.")
        .value("op_mod", Operator::op_mod, "Operator `%`.")
        .value("op_pow", Operator::op_pow, "Operator `^`.")
        .export_values();

    // ========================================================================
    py::enum_<DelimiterType>(m, "DelimiterType", "Content delimiters.")
        .value("dlm_none", DelimiterType::dlm_none, "No delimiter type.")
        .value("dlm_round", DelimiterType::dlm_round, "Round brackets ( )")
        .value("dlm_square", DelimiterType::dlm_square, "Square brackets [ ]")
        .value("dlm_curly", DelimiterType::dlm_curly, "Curly brackets { }")
        .value("dlm_apex", DelimiterType::dlm_apex, "Apex ' '")
        .value("dlm_quotes", DelimiterType::dlm_quotes, "Quotes "
                                                        "")
        .export_values();

    // ========================================================================
    py::enum_<SiPrefix>(m, "SiPrefix", "International System of Units (SI)")
        .value("si_yotta", SiPrefix::si_yotta, "Y  10e24")
        .value("si_zetta", SiPrefix::si_zetta, "Z  10e21")
        .value("si_exa", SiPrefix::si_exa, "E  10e18")
        .value("si_peta", SiPrefix::si_peta, "P  10e15")
        .value("si_tera", SiPrefix::si_tera, "T  10e12")
        .value("si_giga", SiPrefix::si_giga, "G  10e9")
        .value("si_mega", SiPrefix::si_mega, "M  10e6")
        .value("si_chilo", SiPrefix::si_chilo, "k  10e3")
        .value("si_none", SiPrefix::si_none, "-  1")
        .value("si_milli", SiPrefix::si_milli, "m  10e-3")
        .value("si_micro", SiPrefix::si_micro, "u  10e-6")
        .value("si_nano", SiPrefix::si_nano, "n  10e-9")
        .value("si_pico", SiPrefix::si_pico, "p  10e-12")
        .value("si_femto", SiPrefix::si_femto, "f  10e-15")
        .value("si_atto", SiPrefix::si_atto, "a  10e-18")
        .value("si_zepto", SiPrefix::si_zepto, "z  10e-21")
        .value("si_yocto", SiPrefix::si_yocto, "y  10e-24")
        .export_values();

    // ========================================================================
    py::enum_<edacurry::ParameterType>(m, "ParameterType")
        .value("param_none", param_none)
        .value("param_assign", param_assign)
        .value("param_tabular", param_tabular)
        .value("param_list", param_list)
        .value("param_arithmetic", param_arithmetic)
        .value("param_no_equal", param_no_equal)
        .export_values();

    // ========================================================================
    py::enum_<ControlType>(m, "ControlType", "The type of control statement.")
        .value("ctrl_none", ControlType::ctrl_none, " No control statement.")
        .value("ctrl_alter", ControlType::ctrl_alter, " A single alter statement.")
        .value("ctrl_altergroup", ControlType::ctrl_altergroup, " A group of alter statements.")
        .value("ctrl_save", ControlType::ctrl_save, " Save statement.")
        .value("ctrl_option", ControlType::ctrl_option, " Set compilers option.")
        .value("ctrl_nodeset", ControlType::ctrl_nodeset, " DC Analysis Conditions.")
        .value("ctrl_defmac", ControlType::ctrl_defmac, " Macro Definition")
        .value("ctrl_chrent", ControlType::ctrl_chrent, " Piece Wise Linear Source")
        .value("ctrl_print", ControlType::ctrl_print, " Print contents of a tabular listing.")
        .value("ctrl_plot", ControlType::ctrl_plot, " Plotting of Simulation Results")
        .value("ctrl_probe", ControlType::ctrl_probe, "")
        .value("ctrl_temp", ControlType::ctrl_temp, "")
        .value("ctrl_meas", ControlType::ctrl_meas, "")
        .export_values();

    // ========================================================================
    py::class_<Visitor, PyAbstractVisitor>(m, "AbstractVisitor")
        .def(py::init<>());

    // ========================================================================
    py::class_<NamedObject, std::shared_ptr<NamedObject>>(m, "NamedObject")
        .def(
            py::init<const std::string &>(),
            py::arg("name") = std::string(),
            "Construct a new Named Object object.")
        .def_property("name", &NamedObject::getName, &NamedObject::setName, "The name of the object.")
        .def("matchName", &NamedObject::matchName, py::arg("name"), "Checks whether given name is equals to this object name.");

    // ========================================================================
    py::class_<Object, structure::PyObject, std::shared_ptr<Object>>(m, "Object")
        .def(
            py::init<std::shared_ptr<Object>>(),
            py::arg("parent") = nullptr,
            "Construct a new object.")
        .def("accept", &Object::accept, py::arg("visitor"), "Accepts a visitor and runs the visit starting from this object.")
        .def_property(
            "parent",
            [](const std::shared_ptr<Object> &self) { return self->getParent().lock(); },
            [](const std::shared_ptr<Object> &self, const std::shared_ptr<Object> &parent) { return self->setParent(parent); },
            "The parent of the object.");

    // ========================================================================
    edacurry::structure::register_list<Object>(m, "Object");

    // ========================================================================
    py::class_<Value, PyValue, Object, std::shared_ptr<Value>>(m, "Value")
        .def(py::init<>(), "Construct a new value object.");

    // ========================================================================
    edacurry::structure::register_list<Value>(m, "Value");

    // ========================================================================
    py::class_<String, Value, std::shared_ptr<String>>(m, "String")
        .def(
            py::init<const std::string &>(),
            py::arg("string") = std::string(),
            "Construct a new string object.")
        .def_property("string", &String::getString, &String::setString, "The stored string.")
        .def("__str__", &String::toString)
        .def("__repr__", &String::toString);

    // ========================================================================
    py::class_<Parameter, Object, std::shared_ptr<Parameter>>(m, "Parameter")
        .def(
            py::init<const std::shared_ptr<Value> &, const std::shared_ptr<Value> &, ParameterType, bool>(),
            py::arg("left")      = nullptr,
            py::arg("right")     = nullptr,
            py::arg("type")      = static_cast<int>(ParameterType::param_assign),
            py::arg("hide_name") = false,
            "Construct a new Parameter object.")
        .def_property("left", &Parameter::getLeft, &Parameter::setLeft, "The left-hand side value.")
        .def_property("right", &Parameter::getRight, &Parameter::setRight, "The right-hand side value.")
        .def_property("type", &Parameter::getType, &Parameter::setType, "The type of parameter.")
        .def_property("hide_name", &Parameter::getHideName, &Parameter::setHideName, "If true the name will be hidden when generating outputs.")
        .def("__str__", &Parameter::toString)
        .def("__repr__", &Parameter::toString);

    // ========================================================================
    edacurry::structure::register_list<Parameter>(m, "Parameter");

    // ========================================================================
    py::class_<ValuePair, Value, std::shared_ptr<ValuePair>>(m, "ValuePair")
        .def(
            py::init<const std::shared_ptr<Value> &, const std::shared_ptr<Value> &>(),
            py::arg("first")  = nullptr,
            py::arg("second") = nullptr,
            "Construct a new value pair.")
        .def_property("first", &ValuePair::getFirst, &ValuePair::setFirst, "The first value.")
        .def_property("second", &ValuePair::getSecond, &ValuePair::setSecond, "The second value.")
        .def("__str__", &ValuePair::toString)
        .def("__repr__", &ValuePair::toString);

    // ========================================================================
    py::class_<Expression, Value, std::shared_ptr<Expression>>(m, "Expression")
        .def(
            py::init<Operator, const std::shared_ptr<Value> &, const std::shared_ptr<Value> &>(),
            py::arg("op")     = static_cast<int>(Operator::op_none),
            py::arg("first")  = nullptr,
            py::arg("second") = nullptr,
            "Construct a new expression.")
        .def_property("operator", &Expression::getOperator, &Expression::setOperator, "The operator of the expression.")
        .def_property("first", &Expression::getFirst, &Expression::setFirst, "The first value.")
        .def_property("second", &Expression::getSecond, &Expression::setSecond, "The second value.")
        .def("__str__", &Expression::toString)
        .def("__repr__", &Expression::toString);

    // ========================================================================
    py::class_<ExpressionUnary, Value, std::shared_ptr<ExpressionUnary>>(m, "ExpressionUnary")
        .def(
            py::init<Operator, const std::shared_ptr<Value> &>(),
            py::arg("op")    = static_cast<int>(Operator::op_none),
            py::arg("value") = nullptr,
            "Construct a new unary expression.")
        .def_property("operator", &ExpressionUnary::getOperator, &ExpressionUnary::setOperator, "The operator of the expression.")
        .def_property("value", &ExpressionUnary::getValue, &ExpressionUnary::setValue, "The value.")
        .def("__str__", &ExpressionUnary::toString)
        .def("__repr__", &ExpressionUnary::toString);

    // ========================================================================
    py::class_<Identifier, Value, NamedObject, std::shared_ptr<Identifier>>(m, "Identifier")
        .def(
            py::init<const std::string &>(),
            py::arg("name") = std::string(),
            "Construct a new identifier.")
        .def("__str__", &Identifier::toString)
        .def("__repr__", &Identifier::toString);

    // ========================================================================
    py::class_<Number<unsigned>, Value, std::shared_ptr<Number<unsigned>>>(m, "Unsigned")
        .def(
            py::init<unsigned, std::string>(),
            py::arg("value") = 0u,
            py::arg("unit")  = std::string(),
            "Construct a new unsigned.")
        .def_property("value", &Number<unsigned>::getValue, &Number<unsigned>::setValue, "The stored value.")
        .def_property("unit", &Number<unsigned>::getUnit, &Number<unsigned>::setUnit, "The unit of the number.")
        .def("__str__", &Number<unsigned>::toString)
        .def("__repr__", &Number<unsigned>::toString);

    // ========================================================================
    py::class_<Number<int>, Value, std::shared_ptr<Number<int>>>(m, "Int")
        .def(
            py::init<int, std::string>(),
            py::arg("value") = 0,
            py::arg("unit")  = std::string(),
            "Construct a new int.")
        .def_property("value", &Number<int>::getValue, &Number<int>::setValue, "The stored value.")
        .def_property("unit", &Number<int>::getUnit, &Number<int>::setUnit, "The unit of the number.")
        .def("__str__", &Number<int>::toString)
        .def("__repr__", &Number<int>::toString);

    // ========================================================================
    py::class_<Number<double>, Value, std::shared_ptr<Number<double>>>(m, "Double")
        .def(
            py::init<double, std::string>(),
            py::arg("value") = .0,
            py::arg("unit")  = std::string(),
            "Construct a new double.")
        .def_property("value", &Number<double>::getValue, &Number<double>::setValue, "The stored value.")
        .def_property("unit", &Number<double>::getUnit, &Number<double>::setUnit, "The unit of the number.")
        .def("__str__", &Number<double>::toString)
        .def("__repr__", &Number<double>::toString);

    // ========================================================================
    py::class_<ValueList, Value, std::shared_ptr<ValueList>>(m, "ValueList")
        .def(
            py::init([](DelimiterType delimiter) {
                auto _ptr = std::make_shared<structure::ValueList>(delimiter);
                _ptr->values.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("delimiter") = static_cast<int>(DelimiterType::dlm_none),
            "Construct a new list of values.")
        .def_readonly("values", &ValueList::values)
        .def_property("delimiter", &ValueList::getDelimiterType, &ValueList::setDelimiterType, "The type of delimiter.")
        .def("__str__", &ValueList::toString)
        .def("__repr__", &ValueList::toString);

    // ========================================================================
    py::class_<FunctionCall, Value, NamedObject, std::shared_ptr<FunctionCall>>(m, "FunctionCall")
        .def(
            py::init([](const std::string &name) {
                auto _ptr = std::make_shared<structure::FunctionCall>(name);
                _ptr->parameters.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name") = std::string(),
            "Construct a new function call.")
        .def_readonly("parameters", &FunctionCall::parameters)
        .def("__str__", &FunctionCall::toString)
        .def("__repr__", &FunctionCall::toString);

    // ========================================================================
    py::class_<Node, Object, NamedObject, std::shared_ptr<Node>>(m, "Node")
        .def(
            py::init<const std::string &>(),
            py::arg("name") = std::string(),
            "Construct a new node.")
        .def("__str__", &Node::toString)
        .def("__repr__", &Node::toString);

    // ========================================================================
    edacurry::structure::register_list<Node>(m, "Node");

    // ========================================================================
    py::class_<Component, Object, NamedObject, std::shared_ptr<Component>>(m, "Component")
        .def(
            py::init([](const std::string &name, const std::string &master) {
                auto _ptr = std::make_shared<structure::Component>(name, master);
                _ptr->nodes.setOwner(_ptr);
                _ptr->parameters.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name")   = std::string(),
            py::arg("master") = std::string(),
            "Construct a new component.")
        .def_readonly("nodes", &Component::nodes)
        .def_readonly("parameters", &Component::parameters)
        .def_property("master", &Component::getMaster, &Component::setMaster, "The component's master.")
        .def("matchMaster", &Component::matchMaster, py::arg("master"), "Checks whether given master is equals to this object master.")
        .def("__str__", &Component::toString)
        .def("__repr__", &Component::toString);

    // ========================================================================
    py::class_<Model, Object, NamedObject, std::shared_ptr<Model>>(m, "Model")
        .def(
            py::init([](const std::string &name, const std::string &master, const std::string &library, const std::string &library_type) {
                auto _ptr = std::make_shared<structure::Model>(name, master, library, library_type);
                _ptr->parameters.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name"),
            py::arg("master"),
            py::arg("library"),
            py::arg("library_type"),
            "Construct a new model.")
        .def_readonly("parameters", &Model::parameters)
        .def_property("master", &Model::getMaster, &Model::setMaster, "The model's master.")
        .def_property("library", &Model::getLibrary, &Model::setLibrary, "The model's library.")
        .def_property("library_type", &Model::getLibraryType, &Model::setLibraryType, "The model's library type.")
        .def("matchMaster", &Model::matchMaster, py::arg("master"), "Checks whether given master is equals to this object master.")
        .def("__str__", &Model::toString)
        .def("__repr__", &Model::toString);

    // ========================================================================
    py::class_<Include, Object, std::shared_ptr<Include>>(m, "Include")
        .def(
            py::init([](IncludeType include_type, const std::string &path) {
                auto _ptr = std::make_shared<structure::Include>(include_type, path);
                _ptr->parameters.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("include_type") = static_cast<int>(IncludeType::inc_none),
            py::arg("path")         = std::string(),
            "Construct a new include.")
        .def_readonly("parameters", &Include::parameters)
        .def_property("include_type", &Include::getIncludeType, &Include::setIncludeType, "The include type.")
        .def_property("path", &Include::getPath, &Include::setPath, "The included path.")
        .def("__str__", &Include::toString)
        .def("__repr__", &Include::toString);

    // ========================================================================
    py::class_<Library, Object, NamedObject, std::shared_ptr<Library>>(m, "Library")
        .def(
            py::init<const std::string &, const std::string &>(),
            py::arg("name") = std::string(),
            py::arg("path") = std::string(),
            "Construct a new library.")
        .def_property("path", &Library::getPath, &Library::setPath, "The included path.")
        .def("__str__", &Library::toString)
        .def("__repr__", &Library::toString);

    // ========================================================================
    py::class_<LibraryDef, Object, NamedObject, std::shared_ptr<LibraryDef>>(m, "LibraryDef")
        .def(
            py::init([](const std::string &name) {
                auto _ptr = std::make_shared<structure::LibraryDef>(name);
                _ptr->content.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name") = std::string(),
            "Construct a new library def.")
        .def_readonly("content", &LibraryDef::content)
        .def("__str__", &LibraryDef::toString)
        .def("__repr__", &LibraryDef::toString);

    // ========================================================================
    py::class_<Control, Object, NamedObject, std::shared_ptr<Control>>(m, "Control")
        .def(
            py::init([](const std::string &name, ControlType type) {
                auto _ptr = std::make_shared<structure::Control>(name, type);
                _ptr->parameters.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name") = std::string(),
            py::arg("type") = static_cast<int>(ControlType::ctrl_none),
            "Construct a new control.")
        .def_readonly("parameters", &Control::parameters)
        .def_property("control_type", &Control::getControlType, &Control::setControlType, "The type of control.")
        .def("__str__", &Control::toString)
        .def("__repr__", &Control::toString);

    // ========================================================================
    py::class_<ControlScope, Control, std::shared_ptr<ControlScope>>(m, "ControlScope")
        .def(
            py::init([](const std::string &name, ControlType type) {
                auto _ptr = std::make_shared<structure::ControlScope>(name, type);
                _ptr->nodes.setOwner(_ptr);
                _ptr->parameters.setOwner(_ptr);
                _ptr->content.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name") = std::string(),
            py::arg("type") = static_cast<int>(ControlType::ctrl_none),
            "Construct a new control scope.")
        .def_readonly("nodes", &ControlScope::nodes)
        .def_readonly("content", &ControlScope::content)
        .def("__str__", &ControlScope::toString)
        .def("__repr__", &ControlScope::toString);

    // ========================================================================
    py::class_<Analysis, Object, NamedObject, std::shared_ptr<Analysis>>(m, "Analysis")
        .def(
            py::init([](const std::string &name) {
                auto _ptr = std::make_shared<structure::Analysis>(name);
                _ptr->parameters.setOwner(_ptr->weak_from_this());
                return _ptr;
            }),
            py::arg("name") = std::string(),
            "Construct a new analysis.")
        .def_readonly("parameters", &Analysis::parameters)
        .def("__str__", &Analysis::toString)
        .def("__repr__", &Analysis::toString);

    // ========================================================================
    py::class_<Subckt, Object, NamedObject, std::shared_ptr<Subckt>>(m, "Subckt")
        .def(
            py::init([](const std::string &name) {
                auto _ptr = std::make_shared<structure::Subckt>(name);
                _ptr->nodes.setOwner(_ptr);
                _ptr->parameters.setOwner(_ptr);
                _ptr->content.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name") = std::string(),
            "Construct a new subckt.")
        .def_readonly("nodes", &Subckt::nodes)
        .def_readonly("parameters", &Subckt::parameters)
        .def_readonly("content", &Subckt::content)
        .def("__str__", &Subckt::toString)
        .def("__repr__", &Subckt::toString);

    // ========================================================================
    py::class_<Circuit, Object, NamedObject, std::shared_ptr<Circuit>>(m, "Circuit")
        .def(
            py::init([](const std::string &name, const std::string &title) {
                auto _ptr = std::make_shared<structure::Circuit>(name, title);
                _ptr->nodes.setOwner(_ptr);
                _ptr->parameters.setOwner(_ptr);
                _ptr->content.setOwner(_ptr);
                return _ptr;
            }),
            py::arg("name")  = std::string(),
            py::arg("title") = std::string(),
            "Construct a new control scope.")
        .def_readonly("nodes", &Circuit::nodes)
        .def_readonly("parameters", &Circuit::parameters)
        .def_readonly("content", &Circuit::content)
        .def_property("title", &Circuit::getTitle, &Circuit::setTitle, "The title of the circuit.")
        .def("__str__", &Circuit::toString)
        .def("__repr__", &Circuit::toString);

    // ========================================================================
    py::class_<BaseVisitor, Visitor, PyBaseVisitor>(m, "Visitor")
        .def(py::init<>())
        .def("visitCircuit", &BaseVisitor::visitCircuit, "Visit a Circuit")
        .def("visitAnalysis", &BaseVisitor::visitAnalysis, "Visit a Analysis")
        .def("visitComponent", &BaseVisitor::visitComponent, "Visit a Component")
        .def("visitControlScope", &BaseVisitor::visitControlScope, "Visit a ControlScope")
        .def("visitControl", &BaseVisitor::visitControl, "Visit a Control")
        .def("visitExpressionUnary", &BaseVisitor::visitExpressionUnary, "Visit a ExpressionUnary")
        .def("visitExpression", &BaseVisitor::visitExpression, "Visit a Expression")
        .def("visitFunctionCall", &BaseVisitor::visitFunctionCall, "Visit a FunctionCall")
        .def("visitIdentifier", &BaseVisitor::visitIdentifier, "Visit a Identifier")
        .def("visitInclude", &BaseVisitor::visitInclude, "Visit a Include")
        .def("visitLibraryDef", &BaseVisitor::visitLibraryDef, "Visit a LibraryDef")
        .def("visitLibrary", &BaseVisitor::visitLibrary, "Visit a Library")
        .def("visitModel", &BaseVisitor::visitModel, "Visit a Model")
        .def("visitNode", &BaseVisitor::visitNode, "Visit a Node")
        .def("visitUnsigned", &BaseVisitor::visitUnsigned, "Visit a Unsigned")
        .def("visitInt", &BaseVisitor::visitInt, "Visit a Int")
        .def("visitDouble", &BaseVisitor::visitDouble, "Visit a Double")
        .def("visitParameter", &BaseVisitor::visitParameter, "Visit a Parameter")
        .def("visitSubckt", &BaseVisitor::visitSubckt, "Visit a Subckt")
        .def("visitString", &BaseVisitor::visitString, "Visit a String")
        .def("visitValuePair", &BaseVisitor::visitValuePair, "Visit a ValuePair")
        .def("visitValueList", &BaseVisitor::visitValueList, "Visit a ValueList");
}
