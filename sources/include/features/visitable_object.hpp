/// @file visitable_object.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)



#pragma once

namespace edacurry
{
namespace structure
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
} // namespace structure

namespace features
{
    class Visitor {
    public:
        virtual void visit(const structure::Circuit *e) = 0;
        virtual void visit(const structure::Analysis *e) = 0;
        virtual void visit(const structure::Component *e) = 0;
        virtual void visit(const structure::ControlScope *e) = 0;
        virtual void visit(const structure::Control *e) = 0;
        virtual void visit(const structure::ExpressionUnary *e) = 0;
        virtual void visit(const structure::Expression *e) = 0;
        virtual void visit(const structure::FunctionCall *e) = 0;
        virtual void visit(const structure::Identifier *e) = 0;
        virtual void visit(const structure::Include *e) = 0;
        virtual void visit(const structure::LibraryDef *e) = 0;
        virtual void visit(const structure::Library *e) = 0;
        virtual void visit(const structure::Model *e) = 0;
        virtual void visit(const structure::Node *e) = 0;
        virtual void visit(const structure::Number<unsigned> *e) = 0;
        virtual void visit(const structure::Number<int> *e) = 0;
        virtual void visit(const structure::Number<double> *e) = 0;
        virtual void visit(const structure::Parameter *e) = 0;
        virtual void visit(const structure::Subckt *e) = 0;
        virtual void visit(const structure::String *e) = 0;
        virtual void visit(const structure::ValuePair *e) = 0;
        virtual void visit(const structure::ValueList *e) = 0;
    };

    class Visitable {
    public:
        /// @brief Accepts a visitor.
        /// @param visitor the visitor.
        virtual void accept(Visitor *visitor) const = 0;
    };
} // namespace features
} // namespace edacurry
