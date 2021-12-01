/// @file eldo_backend.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "features/visitable_object.hpp"
#include "indented_stream.hpp"

namespace edacurry::backend
{
class EldoBackend : public features::Visitor {
public:
    EldoBackend();

    void visit(const structure::Circuit *e) override;
    void visit(const structure::Analysis *e) override;
    void visit(const structure::Component *e) override;
    void visit(const structure::ControlScope *e) override;
    void visit(const structure::Control *e) override;
    void visit(const structure::ExpressionUnary *e) override;
    void visit(const structure::Expression *e) override;
    void visit(const structure::FunctionCall *e) override;
    void visit(const structure::Identifier *e) override;
    void visit(const structure::Include *e) override;
    void visit(const structure::LibraryDef *e) override;
    void visit(const structure::Library *e) override;
    void visit(const structure::Model *e) override;
    void visit(const structure::Node *e) override;
    void visit(const structure::Number<unsigned> *e) override;
    void visit(const structure::Number<int> *e) override;
    void visit(const structure::Number<double> *e) override;
    void visit(const structure::Parameter *e) override;
    void visit(const structure::Subckt *e) override;
    void visit(const structure::String *e) override;
    void visit(const structure::ValuePair *e) override;
    void visit(const structure::ValueList *e) override;

    inline auto str() const
    {
        return ss.str();
    }

private:
    IndentedStream ss;
};

} // namespace edacurry::backend
