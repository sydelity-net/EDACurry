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

int EldoBackend::visitCircuit(const std::shared_ptr<structure::Circuit> &e)
{
    if (!e->getTitle().empty()) {
        ss << e->getTitle() << "\n";
    }
    if (e->nodes) {
        ss << ".global";
        for (auto node : e->nodes) {
            ss << ' ';
            node->accept(this);
        }
        ss << '\n';
    }
    if (e->parameters) {
        ss << ".param";
        for (auto parameter : e->parameters) {
            ss << ' ';
            parameter->accept(this);
        }
        ss << '\n';
    }
    for (auto it : e->content) {
        it->accept(this);
    }
    return 0;
}

int EldoBackend::visitAnalysis(const std::shared_ptr<structure::Analysis> &e)
{
    if ((e->getName() == "ac_parameter_driven") || (e->getName() == "ac_data_driven") || (e->getName() == "ac_list_driven") || (e->getName() == "ac_adaptive")) {
        ss << ".ac";
    } else if ((e->getName() == "tran_point_driven") || (e->getName() == "tran_parameterized") || (e->getName() == "tran_data_driven")) {
        ss << ".tran";
    }
    for (const auto &parameter : e->parameters) {
        ss << ' ';
        parameter->accept(this);
    }
    ss << '\n';
    return 0;
}

int EldoBackend::visitComponent(const std::shared_ptr<structure::Component> &e)
{
    //r2 1 2 res1
    ss << e->getName();
    if (e->nodes) {
        for (const auto &node : e->nodes) {
            ss << ' ';
            node->accept(this);
        }
    }

    if (!e->getMaster().empty()) {
        {
            ss << ' ' << e->getMaster();
        }
    }

    if (e->parameters) {
        for (const auto &parameter : e->parameters) {
            ss << ' ';
            parameter->accept(this);
        }
    }
    ss << '\n';
    return 0;
}

int EldoBackend::visitControlScope(const std::shared_ptr<structure::ControlScope> &e)
{
    if (e->getControlType() == ctrl_altergroup) {
        ss << ".alter " << e->getName() << "\n";
        ss << ind_increase;
        for (const auto &parameter : e->parameters) {
            ss << ".param ";
            parameter->accept(this);
            ss << '\n';
        }
        for (auto it : e->content) {
            it->accept(this);
        }
        ss << ind_decrease;
        ss << ".end\n";
    }
    return 0;
}

int EldoBackend::visitControl(const std::shared_ptr<structure::Control> &e)
{
    if (e->getControlType() == ctrl_option) {
        ss << ".option";
    } else if (e->getControlType() == ctrl_save) {
        ss << ".save";
    } else if (e->getControlType() == ctrl_print) {
        ss << ".print";
    } else if (e->getControlType() == ctrl_plot) {
        ss << ".plot";
    } else if (e->getControlType() == ctrl_probe) {
        ss << ".probe";
    } else if (e->getControlType() == ctrl_temp) {
        ss << ".temp";
    } else if (e->getControlType() == ctrl_meas) {
        ss << ".meas";
    }

    if (!e->getName().empty()) {
        {
            ss << " " << e->getName();
        }
    }
    for (const auto &parameter : e->parameters) {
        ss << ' ';
        parameter->accept(this);
    }
    ss << '\n';
    return 0;
}

int EldoBackend::visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e)
{
    ss << operator_to_string(e->getOperator());
    if (e->getValue()) {
        e->getValue()->accept(this);
    }
    return 0;
}

int EldoBackend::visitExpression(const std::shared_ptr<structure::Expression> &e)
{
    if (e->getFirst()) {
        e->getFirst()->accept(this);
        ss << ' ';
    }
    ss << operator_to_string(e->getOperator());
    if (e->getSecond()) {
        ss << ' ';
        e->getSecond()->accept(this);
    }
    return 0;
}

int EldoBackend::visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e)
{
    ss << e->getName() << '(';
    if (e->parameters) {
        size_t size = e->parameters.size(), i = 0;
        for (const auto &parameter : e->parameters) {
            parameter->accept(this);
            if (i++ < (size - 1)) {
                ss << ", ";
            }
        }
    }
    ss << ')';
    return 0;
}

int EldoBackend::visitIdentifier(const std::shared_ptr<structure::Identifier> &e)
{
    if (!e->getName().empty()) {
        ss << e->getName();
    }
    return 0;
}

int EldoBackend::visitInclude(const std::shared_ptr<structure::Include> &e)
{
    return features::BaseVisitor::visitInclude(e);
}

int EldoBackend::visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e)
{
    return features::BaseVisitor::visitLibraryDef(e);
}

int EldoBackend::visitLibrary(const std::shared_ptr<structure::Library> &e)
{
    return features::BaseVisitor::visitLibrary(e);
}

int EldoBackend::visitModel(const std::shared_ptr<structure::Model> &e)
{
    // .MODEL pfet PMOS ( LEVEL = 8
    ss << ".MODEL " << e->getName() << " " << e->getMaster() << "(";
    for (const auto &parameter : e->parameters) {
        ss << ' ';
        parameter->accept(this);
    }
    ss << ")\n";
    return 0;
}

int EldoBackend::visitNode(const std::shared_ptr<structure::Node> &e)
{
    ss << e->getName();
    return 0;
}

int EldoBackend::visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &e)
{
    ss << e->getValue();
    if (!e->getUnit().empty()) {
        ss << e->getUnit();
    }
    return 0;
}

int EldoBackend::visitInt(const std::shared_ptr<structure::Number<int>> &e)
{
    ss << e->getValue();
    if (!e->getUnit().empty()) {
        ss << e->getUnit();
    }
    return 0;
}

int EldoBackend::visitDouble(const std::shared_ptr<structure::Number<double>> &e)
{
    ss << e->getValue();
    if (!e->getUnit().empty()) {
        ss << e->getUnit();
    }
    return 0;
}

int EldoBackend::visitParameter(const std::shared_ptr<structure::Parameter> &e)
{
    if ((e->getType() == param_assign) || (e->getType() == param_arithmetic)) {
        if (e->getLeft() && !e->getHideName()) {
            e->getLeft()->accept(this);
        }
        if (e->getRight()) {
            if (e->getLeft() && !e->getHideName()) {
                ss << '=';
            }
            if (e->getType() == param_arithmetic) {
                ss << '{';
            }
            e->getRight()->accept(this);
            if (e->getType() == param_arithmetic) {
                ss << '}';
            }
        }
    } else if (e->getType() == param_tabular) {
        ss << "table ";
        auto table = std::dynamic_pointer_cast<const structure::ValueList>(e->getRight());
        if (table && (table->values.size() >= 2)) {
            for (size_t i = 0; i < table->values.size(); ++i) {
                table->values[i]->accept(this);
                if (i == 0) {
                    ss << '=';
                } else {
                    ss << ' ';
                }
            }
        }
    } else if (e->getType() == param_list) {
        if (e->getLeft()) {
            e->getLeft()->accept(this);
        }
        ss << "(";
        auto table = std::dynamic_pointer_cast<const structure::ValueList>(e->getRight());
        for (size_t i = 0; table && (i < table->values.size()); ++i) {
            table->values[i]->accept(this);
            if (i < (table->values.size() - 1)) {
                ss << ' ';
            }
        }
        ss << ')';
    } else if (e->getType() == param_no_equal) {
        if (e->getLeft()) {
            e->getLeft()->accept(this);
        }
        if (e->getRight()) {
            if (e->getLeft()) {
                ss << " ";
            }
            e->getRight()->accept(this);
        }
    }
    return 0;
}

int EldoBackend::visitSubckt(const std::shared_ptr<structure::Subckt> &e)
{
    ss << ".subckt " << e->getName();
    for (const auto &node : e->nodes) {
        ss << ' ';
        node->accept(this);
    }
    ss << '\n';
    ss << ind_increase;
    for (const auto &parameter : e->parameters) {
        ss << ".param ";
        parameter->accept(this);
        ss << '\n';
    }
    for (const auto &entry : e->content) {
        entry->accept(this);
    }
    ss << ind_decrease;
    ss << ".ends " << e->getName() << '\n';
    return 0;
}

int EldoBackend::visitString(const std::shared_ptr<structure::String> &e)
{
    ss << e->getString();
    return 0;
}

int EldoBackend::visitValuePair(const std::shared_ptr<structure::ValuePair> &e)
{
    if (e->getFirst()) {
        e->getFirst()->accept(this);
    }
    ss << ',';
    if (e->getSecond()) {
        e->getSecond()->accept(this);
    }
    return 0;
}

int EldoBackend::visitValueList(const std::shared_ptr<structure::ValueList> &e)
{
    ss << delimiter_type_open_char(e->getDelimiterType());
    if (e->values) {
        size_t size = e->values.size(), i = 0;
        for (const auto &value : e->values) {
            value->accept(this);
            if (i++ < (size - 1)) {
                ss << ", ";
            }
        }
    }
    ss << delimiter_type_close_char(e->getDelimiterType());
    return 0;
}

std::string write_eldo(const std::shared_ptr<structure::Object> &object)
{
    edacurry::backend::EldoBackend backend;
    object->accept(&backend);
    return backend.str();
}

} // namespace edacurry::backend
