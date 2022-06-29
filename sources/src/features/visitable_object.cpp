/// @file visitable_object.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "classes.hpp"

namespace edacurry::features
{
BaseVisitor::BaseVisitor()
{
}

int BaseVisitor::visitCircuit(const structure::Circuit *e)
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

int BaseVisitor::visitAnalysis(const structure::Analysis *e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitComponent(const structure::Component *e)
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

int BaseVisitor::visitControlScope(const structure::ControlScope *e)
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

int BaseVisitor::visitControl(const structure::Control *e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitExpressionUnary(const structure::ExpressionUnary *e)
{
    int ret;
    if (e->getValue())
        if ((ret = e->getValue()->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitExpression(const structure::Expression *e)
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

int BaseVisitor::visitFunctionCall(const structure::FunctionCall *e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitIdentifier(const structure::Identifier *e)
{
    return 0;
}

int BaseVisitor::visitInclude(const structure::Include *e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitLibraryDef(const structure::LibraryDef *e)
{
    int ret;
    for (auto it : e->content)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitLibrary(const structure::Library *e)
{
    return 0;
}

int BaseVisitor::visitModel(const structure::Model *e)
{
    int ret;
    for (auto it : e->parameters)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

int BaseVisitor::visitNode(const structure::Node *e)
{
    return 0;
}

int BaseVisitor::visitUnsigned(const structure::Number<unsigned> *e)
{
    return 0;
}

int BaseVisitor::visitInt(const structure::Number<int> *e)
{
    return 0;
}

int BaseVisitor::visitDouble(const structure::Number<double> *e)
{
    return 0;
}

int BaseVisitor::visitParameter(const structure::Parameter *e)
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

int BaseVisitor::visitSubckt(const structure::Subckt *e)
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

int BaseVisitor::visitString(const structure::String *e)
{
    return 0;
}

int BaseVisitor::visitValuePair(const structure::ValuePair *e)
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

int BaseVisitor::visitValueList(const structure::ValueList *e)
{
    int ret;
    for (auto it : e->values)
        if ((ret = it->accept(this)) != 0)
            return ret;
    return 0;
}

} // namespace edacurry::features