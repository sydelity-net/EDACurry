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
class IncreaseIndent {
} Increase;
class DecreaseIndent {
} Decrease;
class PrintIndent {
} Indent;

template <>
inline IntentedStream &IntentedStream::operator<<(IncreaseIndent rhs)
{
    this->increase_level();
    return *this;
}

template <>
inline IntentedStream &IntentedStream::operator<<(DecreaseIndent rhs)
{
    this->decrease_level();
    return *this;
}

template <>
inline IntentedStream &IntentedStream::operator<<(PrintIndent rhs)
{
    _ss << _indent;
    return *this;
}

XmlBackend::XmlBackend()
    : ss(4, ' ')
{
    // Nothing to do.
}

void XmlBackend::visit(const structure::Circuit *e)
{
    ss << "<circuit name='" << e->getName() << "'>\n"
       << Increase;

    ss << Indent << "<nodes>\n"
       << Increase;
    for (auto it : e->nodes) it->accept(this);
    ss << Decrease << Indent << "</nodes>\n";

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Indent << "<content>\n"
       << Increase;
    for (auto it : e->content) it->accept(this);
    ss << Decrease << Indent << "</content>\n";

    ss << Decrease << Indent << "</circuit>\n";
}

void XmlBackend::visit(const structure::Analysis *e)
{
    ss << Indent << "<analysis name='" << e->getName() << "'>\n"
       << Increase;

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Decrease << Indent << "</analysis>\n";
}

void XmlBackend::visit(const structure::Component *e)
{
    ss << Indent << "<component name='" << e->getName() << "'>\n"
       << Increase;

    ss << Indent << "<nodes>\n"
       << Increase;
    for (auto it : e->nodes) it->accept(this);
    ss << Decrease << Indent << "</nodes>\n";

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Decrease << Indent << "</component>\n";
}

void XmlBackend::visit(const structure::ControlScope *e)
{
    ss << Indent << "<control_scope name='" << e->getName() << "' type='"
       << controltype_to_plain_string(e->getControlType()) << "'>\n"
       << Increase;

    ss << Indent << "<nodes>\n"
       << Increase;
    for (auto it : e->nodes) it->accept(this);
    ss << Decrease << Indent << "</nodes>\n";

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Indent << "<content>\n"
       << Increase;
    for (auto it : e->content) it->accept(this);
    ss << Decrease << Indent << "</content>\n";

    ss << Decrease << Indent << "</control_scope>\n";
}

void XmlBackend::visit(const structure::Control *e)
{
    ss << Indent << "<control name='" << e->getName() << "' type='" << controltype_to_plain_string(e->getControlType())
       << "'>\n"
       << Increase;

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Decrease << Indent << "</control>\n";
}

void XmlBackend::visit(const structure::ExpressionUnary *e)
{
    ss << Indent << "<expression_unary type='" << operator_to_plain_string(e->getOperator()) << "'>\n"
       << Increase;

    if (e->getValue())
        e->getValue()->accept(this);
    else
        ss << Indent << "NULL\n";

    ss << Decrease << Indent << "</expression_unary>\n";
}

void XmlBackend::visit(const structure::Expression *e)
{
    ss << Indent << "<expression type='" << operator_to_plain_string(e->getOperator()) << "'>\n"
       << Increase;

    ss << Indent << "<value1>\n"
       << Increase;
    if (e->getValue1())
        e->getValue1()->accept(this);
    else
        ss << Indent << "NULL\n";
    ss << Decrease << Indent << "</value1>\n";

    ss << Indent << "<value2>\n"
       << Increase;
    if (e->getValue2())
        e->getValue2()->accept(this);
    else
        ss << Indent << "NULL\n";
    ss << Decrease << Indent << "</value2>\n";

    ss << Decrease << Indent << "</expression>\n";
}

void XmlBackend::visit(const structure::FunctionCall *e)
{
    ss << Indent << "<function_call name='" << e->getName() << "'>\n"
       << Increase;

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Decrease << Indent << "</function_call>\n";
}

void XmlBackend::visit(const structure::Identifier *e)
{
    ss << Indent << "<identifier name='" << e->getName() << "'/>\n";
}

void XmlBackend::visit(const structure::Include *e)
{
    ss << Indent << "<include path='" << e->getPath() << "' type='" << include_type_to_plain_string(e->getIncludeType())
       << "'>\n"
       << Increase;

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Decrease << Indent << "</include>\n";
}

void XmlBackend::visit(const structure::LibraryDef *e)
{
    ss << Indent << "<library_def name='" << e->getName() << "'>\n"
       << Increase;

    ss << Indent << "<content>\n"
       << Increase;
    for (auto it : e->content) it->accept(this);
    ss << Decrease << Indent << "</content>\n";

    ss << Decrease << Indent << "</library_def>\n";
}

void XmlBackend::visit(const structure::Library *e)
{
    ss << Indent << "<library name='" << e->getName() << "' path='" << e->getPath() << "'/>\n";
}

void XmlBackend::visit(const structure::Model *e)
{
    ss << Indent << "<model"
       << " name='" << e->getName() << "'"
       << " master='" << e->getMaster() << "'"
       << " library='" << e->getLibrary() << "'"
       << " library_type='" << e->getLibraryType() << "'"
       << ">\n"
       << Increase;

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Decrease << Indent << "</model>\n";
}

void XmlBackend::visit(const structure::Node *e)
{
    ss << Indent << "<node name='" << e->getName() << "' reference='"
       << ((e->getReference()) ? e->getReference()->toString() : "") << "'/>\n";
}

void XmlBackend::visit(const structure::Number<unsigned> *e)
{
    ss << Indent << "<number value='" << e->getValue() << "'/>\n";
}

void XmlBackend::visit(const structure::Number<int> *e)
{
    ss << Indent << "<number value='" << e->getValue() << "'/>\n";
}

void XmlBackend::visit(const structure::Number<double> *e)
{
    ss << Indent << "<number value='" << e->getValue() << "'/>\n";
}

void XmlBackend::visit(const structure::Parameter *e)
{
    ss << Indent << "<parameter"
       << " name='" << e->getName() << "'"
       << " reference='" << ((e->getReference()) ? e->getReference()->toString() : "") << "'"
       << " hide_name='" << (e->getHideName() ? "true" : "false") << "'>\n"
       << Increase;

    if (e->getValue())
        e->getValue()->accept(this);
    else
        ss << Indent << "NULL\n";

    ss << Decrease << Indent << "</parameter>\n";
}

void XmlBackend::visit(const structure::Subckt *e)
{
    ss << Indent << "<subckt name='" << e->getName() << "'>\n"
       << Increase;

    ss << Indent << "<nodes>\n"
       << Increase;
    for (auto it : e->nodes) it->accept(this);
    ss << Decrease << Indent << "</nodes>\n";

    ss << Indent << "<parameters>\n"
       << Increase;
    for (auto it : e->parameters) it->accept(this);
    ss << Decrease << Indent << "</parameters>\n";

    ss << Indent << "<content>\n"
       << Increase;
    for (auto it : e->content) it->accept(this);
    ss << Decrease << Indent << "</content>\n";

    ss << Decrease << Indent << "</subckt>\n";
}

void XmlBackend::visit(const structure::String *e)
{
    ss << Indent << "<string value='" << e->getString() << "'/>\n";
}

void XmlBackend::visit(const structure::ValuePair *e)
{
    ss << Indent << "<pair>\n"
       << Increase;

    ss << Indent << "<first>\n"
       << Increase;
    if (e->getFirst())
        e->getFirst()->accept(this);
    else
        ss << Indent << "NULL\n";
    ss << Decrease << Indent << "</first>\n";

    ss << Indent << "<second>\n"
       << Increase;
    if (e->getSecond())
        e->getSecond()->accept(this);
    else
        ss << Indent << "NULL\n";
    ss << Decrease << Indent << "</second>\n";

    ss << Decrease << Indent << "</pair>\n";
}

void XmlBackend::visit(const structure::ValueList *e)
{
    ss << Indent << "<list delimiter='" << delimitertype_to_plain_string(e->getDelimiterType()) << "'>\n"
       << Increase;

    for (auto it : e->values) {
        ss << Indent << "<value>\n"
           << Increase;
        it->accept(this);
        ss << Decrease << Indent << "</value>\n";
    }

    ss << Decrease << Indent << "</list>\n";
}

} // namespace edacurry::backend
