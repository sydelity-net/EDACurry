/// @file xml_backend.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "backend/xml_backend.hpp"
#include "classes.hpp"
#include <iostream>

namespace edacurry::backend
{
XmlBackend::XmlBackend()
    : ss(4, ' ')
{
    // Nothing to do.
}

int XmlBackend::visitCircuit(const structure::Circuit *e)
{
    ss << "<circuit name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<nodes>\n"
       << ind_increase;
    for (auto it : e->nodes) it->accept(this);
    ss << ind_decrease << "</nodes>\n";

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << "<content>\n"
       << ind_increase;
    for (auto it : e->content) it->accept(this);
    ss << ind_decrease << "</content>\n";

    ss << ind_decrease << "</circuit>\n";
    return 0;
}

int XmlBackend::visitAnalysis(const structure::Analysis *e)
{
    ss << "<analysis name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</analysis>\n";
    return 0;
}

int XmlBackend::visitComponent(const structure::Component *e)
{
    ss << "<component name='" << e->getName() << "' master='" << e->getMaster() << "'>\n"
       << ind_increase;

    ss << "<nodes>\n"
       << ind_increase;
    for (auto it : e->nodes) it->accept(this);
    ss << ind_decrease << "</nodes>\n";

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</component>\n";
    return 0;
}

int XmlBackend::visitControlScope(const structure::ControlScope *e)
{
    ss << "<control_scope name='" << e->getName() << "' type='"
       << control_type_to_plain_string(e->getControlType()) << "'>\n"
       << ind_increase;

    ss << "<nodes>\n"
       << ind_increase;
    for (auto it : e->nodes) it->accept(this);
    ss << ind_decrease << "</nodes>\n";

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << "<content>\n"
       << ind_increase;
    for (auto it : e->content) it->accept(this);
    ss << ind_decrease << "</content>\n";

    ss << ind_decrease << "</control_scope>\n";
    return 0;
}

int XmlBackend::visitControl(const structure::Control *e)
{
    ss << "<control name='" << e->getName() << "' type='" << control_type_to_plain_string(e->getControlType())
       << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</control>\n";
    return 0;
}

int XmlBackend::visitExpressionUnary(const structure::ExpressionUnary *e)
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

int XmlBackend::visitExpression(const structure::Expression *e)
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

int XmlBackend::visitFunctionCall(const structure::FunctionCall *e)
{
    ss << "<function_call name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</function_call>\n";
    return 0;
}

int XmlBackend::visitIdentifier(const structure::Identifier *e)
{
    ss << "<identifier name='" << e->getName() << "'/>\n";
    return 0;
}

int XmlBackend::visitInclude(const structure::Include *e)
{
    ss << "<include path='" << e->getPath() << "' type='" << include_type_to_plain_string(e->getIncludeType())
       << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</include>\n";
    return 0;
}

int XmlBackend::visitLibraryDef(const structure::LibraryDef *e)
{
    ss << "<library_def name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<content>\n"
       << ind_increase;
    for (auto it : e->content) it->accept(this);
    ss << ind_decrease << "</content>\n";

    ss << ind_decrease << "</library_def>\n";
    return 0;
}

int XmlBackend::visitLibrary(const structure::Library *e)
{
    ss << "<library name='" << e->getName() << "' path='" << e->getPath() << "'/>\n";
    return 0;
}

int XmlBackend::visitModel(const structure::Model *e)
{
    ss << "<model"
       << " name='" << e->getName() << "'"
       << " master='" << e->getMaster() << "'"
       << " library='" << e->getLibrary() << "'"
       << " library_type='" << e->getLibraryType() << "'"
       << ">\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</model>\n";
    return 0;
}

int XmlBackend::visitNode(const structure::Node *e)
{
    ss << "<node name='" << e->getName() << "'/>\n";
    return 0;
}

int XmlBackend::visitUnsigned(const structure::Number<unsigned> *e)
{
    ss << "<number value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
    return 0;
}

int XmlBackend::visitInt(const structure::Number<int> *e)
{
    ss << "<number value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
    return 0;
}

int XmlBackend::visitDouble(const structure::Number<double> *e)
{
    ss << "<number value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
    return 0;
}

int XmlBackend::visitParameter(const structure::Parameter *e)
{
    ss << "<parameter"
       << " type='" << parameter_type_to_plain_string(e->getType()) << "'"
       << " hide_left='" << (e->getHideLeft() ? "true" : "false") << "'>\n"
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

int XmlBackend::visitSubckt(const structure::Subckt *e)
{
    ss << "<subckt name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<nodes>\n"
       << ind_increase;
    for (auto it : e->nodes) it->accept(this);
    ss << ind_decrease << "</nodes>\n";

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << "<content>\n"
       << ind_increase;
    for (auto it : e->content) it->accept(this);
    ss << ind_decrease << "</content>\n";

    ss << ind_decrease << "</subckt>\n";
    return 0;
}

int XmlBackend::visitString(const structure::String *e)
{
    ss << "<string value='" << e->getString() << "'/>\n";
    return 0;
}

int XmlBackend::visitValuePair(const structure::ValuePair *e)
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

int XmlBackend::visitValueList(const structure::ValueList *e)
{
    ss << "<list delimiter='" << delimiter_type_to_plain_string(e->getDelimiterType()) << "'>\n"
       << ind_increase;

    for (auto it : e->values) {
        ss << "<value>\n"
           << ind_increase;
        it->accept(this);
        ss << ind_decrease << "</value>\n";
    }

    ss << ind_decrease << "</list>\n";
    return 0;
}

} // namespace edacurry::backend
