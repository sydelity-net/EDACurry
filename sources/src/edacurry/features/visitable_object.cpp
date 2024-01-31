/// @file visitable_object.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "edacurry/classes.hpp"

#include<iostream>

namespace edacurry::features
{
BaseVisitor::BaseVisitor()
{
}

int BaseVisitor::visitCircuit(const std::shared_ptr<structure::Circuit> &e)
{
    int ret;
    for (auto it : e->nodes)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->content)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitAnalysis(const std::shared_ptr<structure::Analysis> &e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitComponent(const std::shared_ptr<structure::Component> &e)
{
    int ret;
    for (auto it : e->nodes)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitControlScope(const std::shared_ptr<structure::ControlScope> &e)
{
    int ret;
    for (auto it : e->nodes)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->content)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitControl(const std::shared_ptr<structure::Control> &e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e)
{
    int ret;
    if (e->getValue())
        if ((ret = e->getValue()->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitExpression(const std::shared_ptr<structure::Expression> &e)
{
    int ret;
    if (e->getFirst())
        if ((ret = e->getFirst()->accept(this)) != 0)
            return ret;
    if (e->getSecond())
        if ((ret = e->getSecond()->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitIdentifier(const std::shared_ptr<structure::Identifier> &)
{
    return 0;
}

int BaseVisitor::visitInclude(const std::shared_ptr<structure::Include> &e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e)
{
    int ret;
    for (auto it : e->content)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitLibrary(const std::shared_ptr<structure::Library> &)
{
    return 0;
}

int BaseVisitor::visitModel(const std::shared_ptr<structure::Model> &e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitNode(const std::shared_ptr<structure::Node> &)
{
    return 0;
}

int BaseVisitor::visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &)
{
    return 0;
}

int BaseVisitor::visitInt(const std::shared_ptr<structure::Number<int>> &)
{
    return 0;
}

int BaseVisitor::visitDouble(const std::shared_ptr<structure::Number<double>> &)
{
    return 0;
}

int BaseVisitor::visitParameter(const std::shared_ptr<structure::Parameter> &e)
{
    int ret;
    if (e->getLeft())
        if ((ret = e->getLeft()->accept(this)) != 0)
            return ret;
    if (e->getRight())
        if ((ret = e->getRight()->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitSubckt(const std::shared_ptr<structure::Subckt> &e)
{
    int ret;
    for (auto it : e->nodes)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    for (auto it : e->content)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitString(const std::shared_ptr<structure::String> &)
{
    return 0;
}

int BaseVisitor::visitValuePair(const std::shared_ptr<structure::ValuePair> &e)
{
    int ret;
    if (e->getFirst())
        if ((ret = e->getFirst()->accept(this)) != 0)
            return ret;
    if (e->getSecond())
        if ((ret = e->getSecond()->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitValueList(const std::shared_ptr<structure::ValueList> &e)
{
    int ret;
    for (auto it : e->values)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

} // namespace edacurry::features