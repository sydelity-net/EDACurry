/// @file visitable_object.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

namespace edacurry::structure
{
class Analysis;
class Circuit;
class Component;
class ControlScope;
class Control;
class ExpressionUnary;
class Expression;
class FunctionCall;
class Identifier;
class Include;
class LibraryDef;
class Library;
class Model;
class Node;
template <typename T>
class Number;
class Object;
class Parameter;
class Subckt;
class String;
class ValuePair;
class ValueList;
} // namespace edacurry::structure

namespace edacurry::features
{
class Visitor {
public:
    Visitor() = default;
    virtual int visitCircuit(const structure::Circuit *e)                 = 0;
    virtual int visitAnalysis(const structure::Analysis *e)               = 0;
    virtual int visitComponent(const structure::Component *e)             = 0;
    virtual int visitControlScope(const structure::ControlScope *e)       = 0;
    virtual int visitControl(const structure::Control *e)                 = 0;
    virtual int visitExpressionUnary(const structure::ExpressionUnary *e) = 0;
    virtual int visitExpression(const structure::Expression *e)           = 0;
    virtual int visitFunctionCall(const structure::FunctionCall *e)       = 0;
    virtual int visitIdentifier(const structure::Identifier *e)           = 0;
    virtual int visitInclude(const structure::Include *e)                 = 0;
    virtual int visitLibraryDef(const structure::LibraryDef *e)           = 0;
    virtual int visitLibrary(const structure::Library *e)                 = 0;
    virtual int visitModel(const structure::Model *e)                     = 0;
    virtual int visitNode(const structure::Node *e)                       = 0;
    virtual int visitUnsigned(const structure::Number<unsigned> *e)       = 0;
    virtual int visitInt(const structure::Number<int> *e)                 = 0;
    virtual int visitDouble(const structure::Number<double> *e)           = 0;
    virtual int visitParameter(const structure::Parameter *e)             = 0;
    virtual int visitSubckt(const structure::Subckt *e)                   = 0;
    virtual int visitString(const structure::String *e)                   = 0;
    virtual int visitValuePair(const structure::ValuePair *e)             = 0;
    virtual int visitValueList(const structure::ValueList *e)             = 0;
};

class BaseVisitor : public Visitor {
public:
    BaseVisitor();
    int visitCircuit(const structure::Circuit *e) override;
    int visitAnalysis(const structure::Analysis *e) override;
    int visitComponent(const structure::Component *e) override;
    int visitControlScope(const structure::ControlScope *e) override;
    int visitControl(const structure::Control *e) override;
    int visitExpressionUnary(const structure::ExpressionUnary *e) override;
    int visitExpression(const structure::Expression *e) override;
    int visitFunctionCall(const structure::FunctionCall *e) override;
    int visitIdentifier(const structure::Identifier *e) override;
    int visitInclude(const structure::Include *e) override;
    int visitLibraryDef(const structure::LibraryDef *e) override;
    int visitLibrary(const structure::Library *e) override;
    int visitModel(const structure::Model *e) override;
    int visitNode(const structure::Node *e) override;
    int visitUnsigned(const structure::Number<unsigned> *e) override;
    int visitInt(const structure::Number<int> *e) override;
    int visitDouble(const structure::Number<double> *e) override;
    int visitParameter(const structure::Parameter *e) override;
    int visitSubckt(const structure::Subckt *e) override;
    int visitString(const structure::String *e) override;
    int visitValuePair(const structure::ValuePair *e) override;
    int visitValueList(const structure::ValueList *e) override;
};

class VisitableObject {
public:
    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    virtual int accept(Visitor *visitor) const = 0;
};
} // namespace edacurry::features