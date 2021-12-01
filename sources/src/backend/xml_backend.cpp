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

void XmlBackend::visit(const structure::Circuit *e)
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
}

void XmlBackend::visit(const structure::Analysis *e)
{
    ss << "<analysis name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</analysis>\n";
}

void XmlBackend::visit(const structure::Component *e)
{
    ss << "<component name='" << e->getName() << "'>\n"
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
}

void XmlBackend::visit(const structure::ControlScope *e)
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
}

void XmlBackend::visit(const structure::Control *e)
{
    ss << "<control name='" << e->getName() << "' type='" << control_type_to_plain_string(e->getControlType())
       << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</control>\n";
}

void XmlBackend::visit(const structure::ExpressionUnary *e)
{
    ss << "<expression_unary type='" << operator_to_plain_string(e->getOperator()) << "'>\n"
       << ind_increase;

    if (e->getValue())
        e->getValue()->accept(this);
    else
        ss << "NULL\n";

    ss << ind_decrease << "</expression_unary>\n";
}

void XmlBackend::visit(const structure::Expression *e)
{
    ss << "<expression type='" << operator_to_plain_string(e->getOperator()) << "'>\n"
       << ind_increase;

    ss << "<value1>\n"
       << ind_increase;
    if (e->getValue1())
        e->getValue1()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</value1>\n";

    ss << "<value2>\n"
       << ind_increase;
    if (e->getValue2())
        e->getValue2()->accept(this);
    else
        ss << "NULL\n";
    ss << ind_decrease << "</value2>\n";

    ss << ind_decrease << "</expression>\n";
}

void XmlBackend::visit(const structure::FunctionCall *e)
{
    ss << "<function_call name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</function_call>\n";
}

void XmlBackend::visit(const structure::Identifier *e)
{
    ss << "<identifier name='" << e->getName() << "'/>\n";
}

void XmlBackend::visit(const structure::Include *e)
{
    ss << "<include path='" << e->getPath() << "' type='" << include_type_to_plain_string(e->getIncludeType())
       << "'>\n"
       << ind_increase;

    ss << "<parameters>\n"
       << ind_increase;
    for (auto it : e->parameters) it->accept(this);
    ss << ind_decrease << "</parameters>\n";

    ss << ind_decrease << "</include>\n";
}

void XmlBackend::visit(const structure::LibraryDef *e)
{
    ss << "<library_def name='" << e->getName() << "'>\n"
       << ind_increase;

    ss << "<content>\n"
       << ind_increase;
    for (auto it : e->content) it->accept(this);
    ss << ind_decrease << "</content>\n";

    ss << ind_decrease << "</library_def>\n";
}

void XmlBackend::visit(const structure::Library *e)
{
    ss << "<library name='" << e->getName() << "' path='" << e->getPath() << "'/>\n";
}

void XmlBackend::visit(const structure::Model *e)
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
}

void XmlBackend::visit(const structure::Node *e)
{
    ss << "<node name='" << e->getName() << "' reference='"
       << ((e->getReference()) ? e->getReference()->toString() : "") << "'/>\n";
}

void XmlBackend::visit(const structure::Number<unsigned> *e)
{
    ss << "<number value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
}

void XmlBackend::visit(const structure::Number<int> *e)
{
    ss << "<number value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
}

void XmlBackend::visit(const structure::Number<double> *e)
{
    ss << "<number value='" << e->getValue() << "'";
    if (!e->getUnit().empty())
        ss << "unit = '" << e->getUnit() << "'";
    ss << "/>\n";
}

void XmlBackend::visit(const structure::Parameter *e)
{
    ss << "<parameter"
       << " name='" << e->getName() << "'"
       << " type='" << parameter_type_to_plain_string(e->getType()) << "'"
       << " reference='" << ((e->getReference()) ? e->getReference()->toString() : "") << "'"
       << " hide_name='" << (e->getHideName() ? "true" : "false") << "'>\n"
       << ind_increase;

    if (e->getValue())
        e->getValue()->accept(this);
    else
        ss << "NULL\n";

    ss << ind_decrease << "</parameter>\n";
}

void XmlBackend::visit(const structure::Subckt *e)
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
}

void XmlBackend::visit(const structure::String *e)
{
    ss << "<string value='" << e->getString() << "'/>\n";
}

void XmlBackend::visit(const structure::ValuePair *e)
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
}

void XmlBackend::visit(const structure::ValueList *e)
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
}

} // namespace edacurry::backend
