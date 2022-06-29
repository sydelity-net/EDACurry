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
class EldoBackend : public features::BaseVisitor {
public:
    EldoBackend();

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

    inline auto str() const
    {
        return ss.str();
    }

private:
    IndentedStream ss;
};

} // namespace edacurry::backend
