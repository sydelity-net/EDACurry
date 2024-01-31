/// @file xml_backend.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/backend/xml_backend.hpp"
#include "edacurry/classes.hpp"

#include <iostream>

namespace edacurry::backend
{
XmlBackend::XmlBackend()
    : ss(4, ' ')
{
    // Nothing to do.
}

int XmlBackend::visitCircuit(const std::shared_ptr<structure::Circuit> &e)
{
    ss << "<circuit name='" << e->getName() << "'>\n"
       << ind_increase;
    if (!e->nodes.empty()) {
        ss << "<nodes>\n"
           << ind_increase;
        for (auto it : e->nodes) it->accept(this);
        ss << ind_decrease << "</nodes>\n";
    }
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    if (!e->content.empty()) {
        ss << "<content>\n"
           << ind_increase;
        for (auto it : e->content) it->accept(this);
        ss << ind_decrease << "</content>\n";
    }
    ss << ind_decrease << "</circuit>\n";
    return 0;
}

int XmlBackend::visitAnalysis(const std::shared_ptr<structure::Analysis> &e)
{
    ss << "<analysis name='" << e->getName() << "'>\n"
       << ind_increase;
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    ss << ind_decrease << "</analysis>\n";
    return 0;
}

int XmlBackend::visitComponent(const std::shared_ptr<structure::Component> &e)
{
    ss << "<component name='" << e->getName() << "' master='" << e->getMaster() << "'>\n"
       << ind_increase;
    if (!e->nodes.empty()) {
        ss << "<nodes>\n"
           << ind_increase;
        for (auto it : e->nodes) it->accept(this);
        ss << ind_decrease << "</nodes>\n";
    }
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    ss << ind_decrease << "</component>\n";
    return 0;
}

int XmlBackend::visitControlScope(const std::shared_ptr<structure::ControlScope> &e)
{
    ss << "<control_scope name='" << e->getName() << "' type='"
       << control_type_to_plain_string(e->getControlType()) << "'>\n"
       << ind_increase;

    if (!e->nodes.empty()) {
        ss << "<nodes>\n"
           << ind_increase;
        for (auto it : e->nodes) it->accept(this);
        ss << ind_decrease << "</nodes>\n";
    }
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    if (!e->content.empty()) {
        ss << "<content>\n"
           << ind_increase;
        for (auto it : e->content) it->accept(this);
        ss << ind_decrease << "</content>\n";
    }
    ss << ind_decrease << "</control_scope>\n";
    return 0;
}

int XmlBackend::visitControl(const std::shared_ptr<structure::Control> &e)
{
    ss << "<control name='" << e->getName() << "' type='" << control_type_to_plain_string(e->getControlType())
       << "'>\n"
       << ind_increase;
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    ss << ind_decrease << "</control>\n";
    return 0;
}

int XmlBackend::visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e)
{
    ss << "<expression_unary type='" << operator_to_plain_string(e->getOperator()) << "'>\n"
       << ind_increase;

    if (e->getValue())
        e->getValue()->accept(this);
    else
        ss << "NULL\n";

    ss << ind_decrease << "</expression_unary>\n";
    return 0;
}

int XmlBackend::visitExpression(const std::shared_ptr<structure::Expression> &e)
{
    ss << "<expression type='" << operator_to_plain_string(e->getOperator()) << "'>\n"
       << ind_increase;

    ss << "<value1>\n"
       << ind_increase;
    if (e->getFirst())
        e->getFirst()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</value1>\n";

    ss << "<value2>\n"
       << ind_increase;
    if (e->getSecond())
        e->getSecond()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</value2>\n";

    ss << ind_decrease << "</expression>\n";
    return 0;
}

int XmlBackend::visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e)
{
    ss << "<function_call name='" << e->getName() << "'>\n"
       << ind_increase;
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    ss << ind_decrease << "</function_call>\n";
    return 0;
}

int XmlBackend::visitIdentifier(const std::shared_ptr<structure::Identifier> &e)
{
    ss << "<identifier name='" << e->getName() << "'/>\n";
    return 0;
}

int XmlBackend::visitInclude(const std::shared_ptr<structure::Include> &e)
{
    ss << "<include path='" << e->getPath() << "' type='" << include_type_to_plain_string(e->getIncludeType())
       << "'>\n"
       << ind_increase;
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    ss << ind_decrease << "</include>\n";
    return 0;
}

int XmlBackend::visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e)
{
    ss << "<library_def name='" << e->getName() << "'>\n"
       << ind_increase;
    if (!e->content.empty()) {
        ss << "<content>\n"
           << ind_increase;
        for (auto it : e->content) it->accept(this);
        ss << ind_decrease << "</content>\n";
    }
    ss << ind_decrease << "</library_def>\n";
    return 0;
}

int XmlBackend::visitLibrary(const std::shared_ptr<structure::Library> &e)
{
    ss << "<library name='" << e->getName() << "' path='" << e->getPath() << "'/>\n";
    return 0;
}

int XmlBackend::visitModel(const std::shared_ptr<structure::Model> &e)
{
    ss << "<model"
       << " name='" << e->getName() << "'"
       << " master='" << e->getMaster() << "'"
       << " library='" << e->getLibrary() << "'"
       << " library_type='" << e->getLibraryType() << "'"
       << ">\n"
       << ind_increase;
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    ss << ind_decrease << "</model>\n";
    return 0;
}

int XmlBackend::visitNode(const std::shared_ptr<structure::Node> &e)
{
    ss << "<node name='" << e->getName() << "'/>\n";
    return 0;
}

int XmlBackend::visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &e)
{
    ss << "<number type='unsigned' value='" << e->getValue() << "' ";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
    return 0;
}

int XmlBackend::visitInt(const std::shared_ptr<structure::Number<int>> &e)
{
    ss << "<number type='int' value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
    return 0;
}

int XmlBackend::visitDouble(const std::shared_ptr<structure::Number<double>> &e)
{
    ss << "<number type='double' value='" << e->getValue() << "' ";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
    return 0;
}

int XmlBackend::visitParameter(const std::shared_ptr<structure::Parameter> &e)
{
    ss << "<parameter"
       << " type='" << parameter_type_to_plain_string(e->getType()) << "'"
       << " hide_name='" << (e->getHideName() ? "true" : "false") << "'>\n"
       << ind_increase;
    ss << "<left>\n"
       << ind_increase;
    if (e->getLeft())
        e->getLeft()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</left>\n";
    ss << "<right>\n"
       << ind_increase;
    if (e->getRight())
        e->getRight()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</right>\n";
    ss << ind_decrease << "</parameter>\n";
    return 0;
}

int XmlBackend::visitSubckt(const std::shared_ptr<structure::Subckt> &e)
{
    ss << "<subckt name='" << e->getName() << "'>\n"
       << ind_increase;
    if (!e->nodes.empty()) {
        ss << "<nodes>\n"
           << ind_increase;
        for (auto it : e->nodes) it->accept(this);
        ss << ind_decrease << "</nodes>\n";
    }
    if (!e->parameters.empty()) {
        ss << "<parameters>\n"
           << ind_increase;
        for (auto it : e->parameters) it->accept(this);
        ss << ind_decrease << "</parameters>\n";
    }
    if (!e->content.empty()) {
        ss << "<content>\n"
           << ind_increase;
        for (auto it : e->content) it->accept(this);
        ss << ind_decrease << "</content>\n";
    }
    ss << ind_decrease << "</subckt>\n";
    return 0;
}

int XmlBackend::visitString(const std::shared_ptr<structure::String> &e)
{
    ss << "<string value='" << e->getString() << "'/>\n";
    return 0;
}

int XmlBackend::visitValuePair(const std::shared_ptr<structure::ValuePair> &e)
{
    ss << "<pair>\n"
       << ind_increase;

    ss << "<first>\n"
       << ind_increase;
    if (e->getFirst())
        e->getFirst()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</first>\n";

    ss << "<second>\n"
       << ind_increase;
    if (e->getSecond())
        e->getSecond()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</second>\n";

    ss << ind_decrease << "</pair>\n";
    return 0;
}

int XmlBackend::visitValueList(const std::shared_ptr<structure::ValueList> &e)
{
    ss << "<list delimiter='" << delimiter_type_to_plain_string(e->getDelimiterType()) << "'>\n"
       << ind_increase;
    if (!e->values.empty()) {
        for (auto it : e->values) {
            ss << "<value>\n"
               << ind_increase;
            it->accept(this);
            ss << ind_decrease << "</value>\n";
        }
    }
    ss << ind_decrease << "</list>\n";
    return 0;
}

std::string write_xml(const std::shared_ptr<structure::Object> &object)
{
    edacurry::backend::XmlBackend backend;
    object->accept(&backend);
    return backend.str();
}

} // namespace edacurry::backend
