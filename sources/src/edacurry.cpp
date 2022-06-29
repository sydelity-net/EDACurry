/// @file   edacurry.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "factory.hpp"

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "utility/logging.hpp"
#include "utility/json.hpp"

#include "antlr4parser/ELDOParser.h"
#include "antlr4parser/ELDOLexer.h"
#include "antlr4-runtime.h"
#include "frontend/eldo_frontend.hpp"

#include "structure/identifier.hpp"
#include "structure/expression.hpp"
#include "structure/value_list.hpp"
#include "structure/function_call.hpp"
#include "structure/node.hpp"
#include "structure/parameter.hpp"
#include "structure/component.hpp"

#include "utility/utility.hpp"

#include "backend/xml_backend.hpp"
#include "backend/eldo_backend.hpp"

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

    edacurry::structure::Object *output_root = frontend.getRoot(), *input_root = nullptr;

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

namespace edacurry
{

namespace features
{
    class PyVisitor : public edacurry::features::Visitor {
    public:
        /* Inherit the constructors */
        using edacurry::features::Visitor::Visitor;

        PyVisitor()
        {
        }

        int visitCircuit(const structure::Circuit *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitCircuit, e);
        }

        int visitAnalysis(const structure::Analysis *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitAnalysis, e);
        }

        int visitComponent(const structure::Component *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitComponent, e);
        }

        int visitControlScope(const structure::ControlScope *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitControlScope, e);
        }

        int visitControl(const structure::Control *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitControl, e);
        }

        int visitExpressionUnary(const structure::ExpressionUnary *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitExpressionUnary, e);
        }

        int visitExpression(const structure::Expression *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitExpression, e);
        }

        int visitFunctionCall(const structure::FunctionCall *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitFunctionCall, e);
        }

        int visitIdentifier(const structure::Identifier *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitIdentifier, e);
        }

        int visitInclude(const structure::Include *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitInclude, e);
        }

        int visitLibraryDef(const structure::LibraryDef *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitLibraryDef, e);
        }

        int visitLibrary(const structure::Library *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitLibrary, e);
        }

        int visitModel(const structure::Model *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitModel, e);
        }

        int visitNode(const structure::Node *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitNode, e);
        }

        int visitUnsigned(const structure::Number<unsigned> *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitUnsigned, e);
        }

        int visitInt(const structure::Number<int> *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitInt, e);
        }

        int visitDouble(const structure::Number<double> *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitDouble, e);
        }

        int visitParameter(const structure::Parameter *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitParameter, e);
        }

        int visitSubckt(const structure::Subckt *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitSubckt, e);
        }

        int visitString(const structure::String *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitString, e);
        }

        int visitValuePair(const structure::ValuePair *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitValuePair, e);
        }

        int visitValueList(const structure::ValueList *e) override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::features::Visitor, visitValueList, e);
        }
    };
} // namespace features

namespace structure
{

    class PyObject : public edacurry::structure::Object {
    public:
        using edacurry::structure::Object::Object;
        int accept(edacurry::features::Visitor *visitor) const override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::structure::Object, accept, visitor);
        }
    };

    class PyValue : public edacurry::structure::Value {
    public:
        using edacurry::structure::Value::Value;
        int accept(edacurry::features::Visitor *visitor) const override
        {
            PYBIND11_OVERRIDE_PURE(int, edacurry::structure::Value, accept, visitor);
        }
    };
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
        .value("dlm_quotes", DelimiterType::dlm_quotes, "Quotes " "")
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
    py::enum_<ParameterType>(m, "ParameterType", "The type of paramters.")
        .value("param_none", ParameterType::param_none, "No type of parameter.")
        .value("param_assign", ParameterType::param_assign, "Normal parameter assign.")
        .value("param_tabular", ParameterType::param_tabular, "A tabular parameter.")
        .value("param_list", ParameterType::param_list, "A list of values.")
        .value("param_arithmetic", ParameterType::param_arithmetic, "An arithmetic expression.")
        .value("param_no_equal", ParameterType::param_no_equal, "A label followed by its value, without the equal sign.")
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
    py::class_<Visitor, PyVisitor>(m, "AbstractVisitor")
        .def(py::init<>());

    // ========================================================================
    py::class_<BaseVisitor, Visitor>(m, "Visitor")
        .def(py::init<>());
        
    // ========================================================================
    py::class_<NamedObject>(m, "NamedObject")
        .def(py::init<>())
        .def(py::init<const std::string &>(), py::arg("name"), "Construct a new Named Object object.")
        .def("getName", &NamedObject::getName, "Returns the name of the object.")
        .def("setName", &NamedObject::setName, py::arg("name"), "Sets the name of the object.")
        .def("matchName", &NamedObject::matchName, py::arg("name"), "Checks whether given name is equals to this object name.");

    // ========================================================================
    py::class_<Object, structure::PyObject>(m, "Object")
        .def(py::init<Object *>(), py::arg("parent"), "Construct a new object.")
        .def("accept", &Object::accept, py::arg("visitor"), "Accepts a visitor and runs the visit starting from this object.")
        .def("getParent", &Object::getParent, "Returns the parent of the object.")
        .def("setParent", &Object::setParent, py::arg("parent"), "Sets the parent of the object.");

    // ========================================================================
    py::class_<Value, PyValue, Object>(m, "Value")
        .def(py::init<>(), "Construct a new value object.");

    // ========================================================================
    py::class_<String, Value>(m, "String")
        .def(py::init<>(), "Construct a new string object.")
        .def(py::init<const std::string &>(), py::arg("string"), "Construct a new string object.");

    // ========================================================================
    py::class_<Parameter, Object>(m, "Parameter")
        .def(py::init<Value *, Value *, ParameterType, bool>(), "Construct a new parameter object.")
        .def("getRight", &Parameter::getRight, "Returns the right-hand side value.")
        .def("setRight", &Parameter::setRight, py::arg("value"), "Sets the right-hand side value.")
        .def("getLeft", &Parameter::getLeft, "Returns the left-hand side value.")
        .def("setLeft", &Parameter::setLeft, py::arg("value"), "Sets the left-hand side value.")
        .def("getType", &Parameter::getType, "Returns the type of parameter.")
        .def("setType", &Parameter::setType, py::arg("type"), "Sets the type of parameter.")
        .def("getHideLeft", &Parameter::getHideLeft, "Checks if the left-hand side value is hidden during code generation.")
        .def("setHideLeft", &Parameter::setHideLeft, py::arg("hide_left"), "Sets if the left-hand side value is hidden during code generation.");

    // ========================================================================
    py::class_<ValuePair, Value>(m, "ValuePair")
        .def(py::init<Value *, Value *>(), py::arg("first"), py::arg("second"), "Construct a new value pair.")
        .def("getFirst", &ValuePair::getFirst, "Returns the First value.")
        .def("setFirst", &ValuePair::setFirst, py::arg("value"), "Sets the First value.")
        .def("getSecond", &ValuePair::getSecond, "Returns the Second value.")
        .def("setSecond", &ValuePair ::setSecond, py::arg("value"), "Sets the Second value.");

    // ========================================================================
    py::class_<Expression, Value>(m, "Expression")
        .def(py::init<>(), "Construct a new expression.")
        .def(py::init<Operator, Value *, Value *>(), py::arg("op"), py::arg("first"), py::arg("second"), "Construct a new expression.")
        .def("getOperator", &Expression::getOperator, "Returns the operator of the expression.")
        .def("setOperator", &Expression::setOperator, py::arg("value"), "Sets the operator of the expression.")
        .def("getFirst", &Expression::getFirst, "Returns the first value.")
        .def("setFirst", &Expression::setFirst, py::arg("value"), "Sets the first value.")
        .def("getSecond", &Expression::getSecond, "Returns the Second value.")
        .def("setSecond", &Expression ::setSecond, py::arg("value"), "Sets the Second value.");

    // ========================================================================
    py::class_<ExpressionUnary, Value>(m, "ExpressionUnary")
        .def(py::init<>(), "Construct a new unary expression.")
        .def(py::init<Operator, Value *>(), py::arg("op"), py::arg("value"), "Construct a new unary expression.")
        .def("getOperator", &ExpressionUnary::getOperator, "Returns the operator of the expression.")
        .def("setOperator", &ExpressionUnary::setOperator, py::arg("value"), "Sets the operator of the expression.")
        .def("getValue", &ExpressionUnary::getValue, "Returns the value.")
        .def("setValue", &ExpressionUnary::setValue, py::arg("value"), "Sets the value.");

    // ========================================================================
    py::class_<Identifier, Value>(m, "Identifier")
        .def(py::init<>(), "Construct a new identifier.")
        .def(py::init<const std::string &>(), py::arg("name"), "Construct a new identifier.");

    // ========================================================================
    py::class_<Number<unsigned>, Value>(m, "Unsigned")
        .def(py::init<unsigned, std::string>(), "Construct a new unsigned.")
        .def("getValue", &Number<unsigned>::getValue, "Returns the value.")
        .def("setValue", &Number<unsigned>::setValue, py::arg("value"), "Sets the value.")
        .def("getUnit", &Number<unsigned>::getUnit, "Returns the unit of the number.")
        .def("setUnit", &Number<unsigned>::setUnit, py::arg("unit"), "Sets the unit of the number.");

    // ========================================================================
    py::class_<Number<int>, Value>(m, "Int")
        .def(py::init<int, std::string>(), "Construct a new int.")
        .def("getValue", &Number<int>::getValue, "Returns the value.")
        .def("setValue", &Number<int>::setValue, py::arg("value"), "Sets the value.")
        .def("getUnit", &Number<int>::getUnit, "Returns the unit of the number.")
        .def("setUnit", &Number<int>::setUnit, py::arg("unit"), "Sets the unit of the number.");

    // ========================================================================
    py::class_<Number<double>, Value>(m, "Double")
        .def(py::init<double, std::string>(), "Construct a new double.")
        .def("getValue", &Number<double>::getValue, "Returns the value.")
        .def("setValue", &Number<double>::setValue, py::arg("value"), "Sets the value.")
        .def("getUnit", &Number<double>::getUnit, "Returns the unit of the number.")
        .def("setUnit", &Number<double>::setUnit, py::arg("unit"), "Sets the unit of the number.");

    // ========================================================================
    py::class_<ValueList, Value>(m, "ValueList")
        .def(py::init<>(), "Construct a new list of values.")
        .def(py::init<DelimiterType, const ObjectList<Value>::base_type &>(), py::arg("delimiter"), py::arg("values"), "Construct a new list of values.")
        .def_readonly("values", &ValueList::values)
        .def("getDelimiterType", &ValueList::getDelimiterType, "Returns the type of delimiter.")
        .def("setDelimiterType", &ValueList::setDelimiterType, py::arg("value"), "Sets the type of delimiter.");

    // ========================================================================
    py::class_<FunctionCall, Value>(m, "FunctionCall")
        .def(py::init<>(), "Construct a new function call.")
        .def(py::init<const std::string &, const ObjectList<Parameter>::base_type &>(), py::arg("name"), py::arg("parameters"), "Construct a new function call.")
        .def_readonly("parameters", &FunctionCall::parameters);

    // ========================================================================
    py::class_<Node, Object, NamedObject>(m, "Node")
        .def(py::init<const std::string &>(), py::arg("name"), "Construct a new node.", py::return_value_policy::reference);

    // ========================================================================
    py::class_<Component, Object, NamedObject>(m, "Component")
        .def(py::init<>(), "Construct a new component.")
        .def(py::init<const std::string &, const std::string &, const ObjectList<Node>::base_type &, const ObjectList<Parameter>::base_type &>(),
             py::arg("name"),
             py::arg("master"),
             py::arg("nodes"),
             py::arg("parameters"),
             "Construct a new component.")
        .def_readonly("nodes", &Component::nodes)
        .def_readonly("parameters", &Component::parameters)
        .def("getMaster", &Component::getMaster, "Returns the master.")
        .def("setMaster", &Component::setMaster, py::arg("master"), "Sets the master.")
        .def("matchMaster", &Component::matchMaster, py::arg("master"), "Checks whether given master is equals to this object master.");

    // ========================================================================
    py::class_<Model, Object, NamedObject>(m, "Model")
        .def(py::init<>(), "Construct a new model.")
        .def(py::init<const std::string &, const std::string &, const std::string &, const std::string &, const ObjectList<Parameter>::base_type &>(),
             py::arg("name"),
             py::arg("master"),
             py::arg("library"),
             py::arg("library_type"),
             py::arg("parameters"),
             "Construct a new model.")
        .def_readonly("parameters", &Model::parameters)
        .def("getMaster", &Model::getMaster, "Returns the master.")
        .def("setMaster", &Model::setMaster, py::arg("master"), "Sets the master.")
        .def("matchMaster", &Model::matchMaster, py::arg("master"), "Checks whether given master is equals to this object master.")
        .def("getLibrary", &Model::getLibrary, "Returns the library.")
        .def("setLibrary", &Model::setLibrary, py::arg("master"), "Sets the library.")
        .def("getLibraryType", &Model::getLibraryType, "Returns the library type.")
        .def("setLibraryType", &Model::setLibraryType, py::arg("master"), "Sets the library type.");

    // ========================================================================
    py::class_<Include, Object>(m, "Include")
        .def(py::init<>(), "Construct a new include.")
        .def(py::init<IncludeType, const std::string &, const ObjectList<Parameter>::base_type &>(),
             py::arg("include_type"),
             py::arg("path"),
             py::arg("params"),
             "Construct a new include.")
        .def_readonly("parameters", &Include::parameters)
        .def("getIncludeType", &Include::getIncludeType, "Returns the include type.")
        .def("setIncludeType", &Include::setIncludeType, py::arg("include_type"), "Sets the include type.")
        .def("getPath", &Include::getPath, "Returns the path.")
        .def("setPath", &Include::setPath, py::arg("path"), "Sets the path.");

    // ========================================================================
    py::class_<Library, Object>(m, "Library")
        .def(py::init<>(), "Construct a new library.")
        .def(py::init<const std::string &, const std::string &>(), py::arg("name"), py::arg("path"), "Construct a new library.")
        .def("getPath", &Library::getPath, "Returns the path.")
        .def("setPath", &Library::setPath, py::arg("path"), "Sets the path.");

    // ========================================================================
    py::class_<Control, Object, NamedObject>(m, "Control")
        .def(py::init<>(), "Construct a new control.")
        .def(py::init<const std::string &, ControlType, const ObjectList<Parameter>::base_type &>(), py::arg("name"), py::arg("type"), py::arg("parameters"), "Construct a new control.")
        .def_readonly("parameters", &Control::parameters)
        .def("getControlType", &Control::getControlType, "Returns the type of control.")
        .def("setControlType", &Control::setControlType, py::arg("value"), "Sets the type of control.");

    // ========================================================================
    py::class_<Analysis, Object, NamedObject>(m, "Analysis")
        .def(py::init<>(), "Construct a new analysis.")
        .def(py::init<const std::string &, const ObjectList<Parameter>::base_type &>(), py::arg("name"), py::arg("parameters"), "Construct a new analysis.")
        .def_readonly("parameters", &Analysis::parameters);

    // ========================================================================
    py::class_<LibraryDef, Object, NamedObject>(m, "LibraryDef")
        .def(py::init<>(), "Construct a new analysis.")
        .def(py::init<const std::string &, const ObjectList<Object>::base_type &>(), py::arg("name"), py::arg("content"), "Construct a new analysis.")
        .def_readonly("content", &LibraryDef::content);

    // ========================================================================
    py::class_<ControlScope, Control>(m, "ControlScope")
        .def(py::init<>(), "Construct a new control scope.")
        .def(py::init<const std::string &, ControlType, const ObjectList<Parameter>::base_type &, const ObjectList<Node>::base_type &, const ObjectList<Object>::base_type &>(), 
                 py::arg("name"), 
                 py::arg("type"),
                 py::arg("params"),
                 py::arg("nodes"),
                 py::arg("content"),
                "Construct a new control scope.")
        .def_readonly("nodes", &ControlScope::nodes)
        .def_readonly("content", &ControlScope::content);

    // ========================================================================
    py::class_<Subckt, Object, NamedObject>(m, "Subckt")
        .def(py::init<>(), "Construct a new subckt.")
        .def(py::init<const std::string &, const ObjectList<Node>::base_type &, const ObjectList<Parameter>::base_type &, const ObjectList<Object>::base_type &>(), 
                 py::arg("name"), 
                 py::arg("nodes"),
                 py::arg("params"),
                 py::arg("content"),
                "Construct a new subckt.")
        .def_readonly("nodes", &Subckt::nodes)
        .def_readonly("parameters", &Subckt::parameters)
        .def_readonly("content", &Subckt::content);

    // ========================================================================
    py::class_<Circuit, Object, NamedObject>(m, "Circuit")
        .def(py::init<>(), "Construct a new control scope.")
        .def(py::init<const std::string &, const std::string &, const ObjectList<Node>::base_type &, const ObjectList<Parameter>::base_type &, const ObjectList<Object>::base_type &>(), 
                 py::arg("name"), 
                 py::arg("title"), 
                 py::arg("nodes"),
                 py::arg("params"),
                 py::arg("content"),
                "Construct a new control scope.")
        .def_readonly("nodes", &Circuit::nodes)
        .def_readonly("parameters", &Circuit::parameters)
        .def_readonly("content", &Circuit::content)
        .def("getTitle", &Circuit::getTitle, "Returns the title.")
        .def("setTitle", &Circuit::setTitle, py::arg("title"), "Sets the title.");

    // ========================================================================
    py::class_<ObjectList<Object>>(m, "ObjectList")
        .def(py::init<Object *>())
        .def(py::init<Object *, std::vector<Object *>>())
        .def("getOwner", &ObjectList<Object>::getOwner, "Returns the owner of the list.")
        .def("setOwner", &ObjectList<Object>::setOwner, py::arg("owner"), "Sets the owner of the list.")
        .def("clear", &ObjectList<Object>::clear, "Clears the list and deletes the objects.")
        .def(
            "__len__", [](const ObjectList<Object> &self) { return self.size(); }, "Returns the size of the list.")
        .def("add", &ObjectList<Object>::push_back, py::arg("object"), "Adds a new object to the list.")
        .def("remove", static_cast<Object *(ObjectList<Object>::*)(Object *)>(&ObjectList<Object>::remove), py::arg("object"), "Removes the object from the list.")
        .def(
            "__getitem__", [](ObjectList<Object> &self, unsigned index) { return self[index]; }, "Returns the item at the given index.")
        .def(
            "__iter__", [](ObjectList<Object> &self) { return py::make_iterator(self.begin(), self.end()); }, py::keep_alive<0, 1>(), "Allows iterating the content of the dataset.");

    // ========================================================================
    py::class_<ObjectList<Node>>(m, "NodeList")
        .def(py::init<Node *>())
        .def(py::init<Node *, std::vector<Node *>>())
        .def("getOwner", &ObjectList<Node>::getOwner, "Returns the owner of the list.")
        .def("setOwner", &ObjectList<Node>::setOwner, py::arg("owner"), "Sets the owner of the list.")
        .def("clear", &ObjectList<Node>::clear, "Clears the list and deletes the objects.")
        .def(
            "__len__", [](const ObjectList<Node> &self) { return self.size(); }, "Returns the size of the list.")
        .def("add", &ObjectList<Node>::push_back, py::arg("node"), "Adds a new node to the list.")
        .def("remove", static_cast<Node *(ObjectList<Node>::*)(Node *)>(&ObjectList<Node>::remove), py::arg("node"), "Removes the node from the list.")
        .def(
            "__getitem__", [](ObjectList<Node> &self, unsigned index) { return self[index]; }, "Returns the item at the given index.")
        .def(
            "__iter__", [](ObjectList<Node> &self) { return py::make_iterator(self.begin(), self.end()); }, py::keep_alive<0, 1>(), "Allows iterating the content of the dataset.");

    // ========================================================================
    py::class_<ObjectList<Parameter>>(m, "ParameterList")
        .def(py::init<Parameter *>())
        .def(py::init<Parameter *, std::vector<Parameter *>>())
        .def("getOwner", &ObjectList<Parameter>::getOwner, "Returns the owner of the list.")
        .def("setOwner", &ObjectList<Parameter>::setOwner, py::arg("owner"), "Sets the owner of the list.")
        .def("clear", &ObjectList<Parameter>::clear, "Clears the list and deletes the objects.")
        .def(
            "__len__", [](const ObjectList<Parameter> &self) { return self.size(); }, "Returns the size of the list.")
        .def("add", &ObjectList<Parameter>::push_back, py::arg("parameter"), "Adds a new parameter to the list.")
        .def("remove", static_cast<Parameter *(ObjectList<Parameter>::*)(Parameter *)>(&ObjectList<Parameter>::remove), py::arg("parameter"), "Removes the parameter from the list.")
        .def(
            "__getitem__", [](ObjectList<Parameter> &self, unsigned index) { return self[index]; }, "Returns the item at the given index.")
        .def(
            "__iter__", [](ObjectList<Parameter> &self) { return py::make_iterator(self.begin(), self.end()); }, py::keep_alive<0, 1>(), "Allows iterating the content of the dataset.");
}
