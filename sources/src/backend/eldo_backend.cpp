/// @file eldo_backend.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "backend/eldo_backend.hpp"
#include "classes.hpp"
#include <iostream>

namespace edacurry::backend
{
EldoBackend::EldoBackend()
    : ss(4, ' ')
{
    // Nothing to do.
}

void EldoBackend::visit(const structure::Circuit *e)
{
    if (e->nodes) {
        ss << "global";
        for (auto node : e->nodes) {
            ss << ' ';
            node->accept(this);
        }
        ss << '\n';
    }
    if (e->parameters) {
        ss << "param";
        for (auto parameter : e->parameters) {
            ss << ' ';
            parameter->accept(this);
        }
        ss << '\n';
    }
    for (auto it : e->content) it->accept(this);
}

void EldoBackend::visit(const structure::Analysis *e)
{
}

void EldoBackend::visit(const structure::Component *e)
{
    //r2 1 2 res1
    ss << e->getName();
    if (e->nodes) {
        for (const auto &node : e->nodes) {
            ss << ' ';
            node->accept(this);
        }
    }

    if (!e->getMaster().empty())
        ss << ' ' << e->getMaster();

    if (e->parameters) {
        for (const auto &parameter : e->parameters) {
            ss << ' ';
            parameter->accept(this);
        }
    }
    ss << '\n';
}

void EldoBackend::visit(const structure::ControlScope *e)
{
}

void EldoBackend::visit(const structure::Control *e)
{
}

void EldoBackend::visit(const structure::ExpressionUnary *e)
{
    ss << operator_to_string(e->getOperator());
    if (e->getValue()) {
        e->getValue()->accept(this);
    }
}

void EldoBackend::visit(const structure::Expression *e)
{
    if (e->getValue1()) {
        e->getValue1()->accept(this);
        ss << ' ';
    }
    ss << operator_to_string(e->getOperator());
    if (e->getValue2()) {
        ss << ' ';
        e->getValue2()->accept(this);
    }
}

void EldoBackend::visit(const structure::FunctionCall *e)
{
    ss << e->getName() << '(';
    if (e->parameters) {
        size_t size = e->parameters.size(), i = 0;
        for (const auto &parameter : e->parameters) {
            parameter->accept(this);
            if (i++ < (size - 1))
                ss << ", ";
        }
    }
    ss << ')';
}

void EldoBackend::visit(const structure::Identifier *e)
{
    if (!e->getName().empty())
        ss << e->getName();
}

void EldoBackend::visit(const structure::Include *e)
{
}

void EldoBackend::visit(const structure::LibraryDef *e)
{
}

void EldoBackend::visit(const structure::Library *e)
{
}

void EldoBackend::visit(const structure::Model *e)
{
}

void EldoBackend::visit(const structure::Node *e)
{
    ss << e->getName();
}

void EldoBackend::visit(const structure::Number<unsigned> *e)
{
    ss << e->getValue();
    if (!e->getUnit().empty())
        ss << e->getUnit();
}

void EldoBackend::visit(const structure::Number<int> *e)
{
    ss << e->getValue();
    if (!e->getUnit().empty())
        ss << e->getUnit();
}

void EldoBackend::visit(const structure::Number<double> *e)
{
    ss << e->getValue();
    if (!e->getUnit().empty())
        ss << e->getUnit();
}

void EldoBackend::visit(const structure::Parameter *e)
{
    if ((e->getType() == param_assign) || (e->getType() == param_arithmetic)) {
        if (!e->getName().empty() && !e->getHideName())
            ss << e->getName();
        if (e->getValue()) {
            if (!e->getName().empty() && !e->getHideName()) {
                ss << '=';
            }
            if (e->getType() == param_arithmetic)
                ss << '{';
            e->getValue()->accept(this);
            if (e->getType() == param_arithmetic)
                ss << '}';
        }
    } else if (e->getType() == param_tabular) {
        ss << "table ";
        auto table = dynamic_cast<const structure::ValueList *>(e->getValue());
        if (table && (table->values.size() >= 2)) {
            for (size_t i = 0; i < table->values.size(); ++i) {
                table->values[i]->accept(this);
                if (i == 0)
                    ss << '=';
                else
                    ss << ' ';
            }
        }
    }
}

void EldoBackend::visit(const structure::Subckt *e)
{
}

void EldoBackend::visit(const structure::String *e)
{
    ss << e->getString();
}

void EldoBackend::visit(const structure::ValuePair *e)
{
    if (e->getFirst()) {
        e->getFirst()->accept(this);
    }
    ss << ',';
    if (e->getSecond()) {
        e->getSecond()->accept(this);
    }
}

void EldoBackend::visit(const structure::ValueList *e)
{
    ss << delimiter_type_open_char(e->getDelimiterType());
    if (e->values) {
        size_t size = e->values.size(), i = 0;
        for (const auto &value : e->values) {
            value->accept(this);
            if (i++ < (size - 1))
                ss << ", ";
        }
    }
    ss << delimiter_type_close_char(e->getDelimiterType());
}

} // namespace edacurry::backend
