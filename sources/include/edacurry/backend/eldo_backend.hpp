/// @file eldo_backend.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include "edacurry/features/visitable_object.hpp"
#include "indented_stream.hpp"

namespace edacurry::backend
{
class EldoBackend : public features::BaseVisitor {
public:
    EldoBackend();

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

    inline auto str() const
    {
        return ss.str();
    }

private:
    IndentedStream ss;
};

std::string write_eldo(const std::shared_ptr<structure::Object> &object);

} // namespace edacurry::backend
