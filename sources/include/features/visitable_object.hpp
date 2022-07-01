/// @file visitable_object.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <memory>

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
    virtual int visitCircuit(const std::shared_ptr<structure::Circuit> &e)                 = 0;
    virtual int visitAnalysis(const std::shared_ptr<structure::Analysis> &e)               = 0;
    virtual int visitComponent(const std::shared_ptr<structure::Component> &e)             = 0;
    virtual int visitControlScope(const std::shared_ptr<structure::ControlScope> &e)       = 0;
    virtual int visitControl(const std::shared_ptr<structure::Control> &e)                 = 0;
    virtual int visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e) = 0;
    virtual int visitExpression(const std::shared_ptr<structure::Expression> &e)           = 0;
    virtual int visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e)       = 0;
    virtual int visitIdentifier(const std::shared_ptr<structure::Identifier> &e)           = 0;
    virtual int visitInclude(const std::shared_ptr<structure::Include> &e)                 = 0;
    virtual int visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e)           = 0;
    virtual int visitLibrary(const std::shared_ptr<structure::Library> &e)                 = 0;
    virtual int visitModel(const std::shared_ptr<structure::Model> &e)                     = 0;
    virtual int visitNode(const std::shared_ptr<structure::Node> &e)                       = 0;
    virtual int visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &e)       = 0;
    virtual int visitInt(const std::shared_ptr<structure::Number<int>> &e)                 = 0;
    virtual int visitDouble(const std::shared_ptr<structure::Number<double>> &e)           = 0;
    virtual int visitParameter(const std::shared_ptr<structure::Parameter> &e)             = 0;
    virtual int visitSubckt(const std::shared_ptr<structure::Subckt> &e)                   = 0;
    virtual int visitString(const std::shared_ptr<structure::String> &e)                   = 0;
    virtual int visitValuePair(const std::shared_ptr<structure::ValuePair> &e)             = 0;
    virtual int visitValueList(const std::shared_ptr<structure::ValueList> &e)             = 0;
};

class BaseVisitor : public Visitor {
public:
    BaseVisitor();
    int visitCircuit(const std::shared_ptr<structure::Circuit> &e) override;
    int visitAnalysis(const std::shared_ptr<structure::Analysis> &e) override;
    int visitComponent(const std::shared_ptr<structure::Component> &e) override;
    int visitControlScope(const std::shared_ptr<structure::ControlScope> &e) override;
    int visitControl(const std::shared_ptr<structure::Control> &e) override;
    int visitExpressionUnary(const std::shared_ptr<structure::ExpressionUnary> &e) override;
    int visitExpression(const std::shared_ptr<structure::Expression> &e) override;
    int visitFunctionCall(const std::shared_ptr<structure::FunctionCall> &e) override;
    int visitIdentifier(const std::shared_ptr<structure::Identifier> &e) override;
    int visitInclude(const std::shared_ptr<structure::Include> &e) override;
    int visitLibraryDef(const std::shared_ptr<structure::LibraryDef> &e) override;
    int visitLibrary(const std::shared_ptr<structure::Library> &e) override;
    int visitModel(const std::shared_ptr<structure::Model> &e) override;
    int visitNode(const std::shared_ptr<structure::Node> &e) override;
    int visitUnsigned(const std::shared_ptr<structure::Number<unsigned>> &e) override;
    int visitInt(const std::shared_ptr<structure::Number<int>> &e) override;
    int visitDouble(const std::shared_ptr<structure::Number<double>> &e) override;
    int visitParameter(const std::shared_ptr<structure::Parameter> &e) override;
    int visitSubckt(const std::shared_ptr<structure::Subckt> &e) override;
    int visitString(const std::shared_ptr<structure::String> &e) override;
    int visitValuePair(const std::shared_ptr<structure::ValuePair> &e) override;
    int visitValueList(const std::shared_ptr<structure::ValueList> &e) override;
};

class VisitableObject {
public:
    /// @brief Accepts a visitor.
    /// @param visitor the visitor.
    virtual int accept(Visitor *visitor) = 0;
};
} // namespace edacurry::features