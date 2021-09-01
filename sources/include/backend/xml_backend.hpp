/// @file xml_backend.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)



#pragma once

#include "features/visitable_object.hpp"
#include <sstream>

namespace edacurry::backend
{
class IntentedStream {
public:
    IntentedStream(int width = 4, char ch = ' ')
        : _width(width), _ch(ch), _level(0), _indent(), _ss()
    {
        // Nothing to do.
    }

    template <class T>
    inline IntentedStream &operator<<(T rhs)
    {
        _ss << rhs;
        return *this;
    }

    inline void increase_level()
    {
        ++_level;
        this->update_indent();
    }

    inline void decrease_level()
    {
        if (_level > 0) {
            --_level;
            this->update_indent();
        }
    }

    inline auto str() const
    {
        return _ss.str();
    }

private:
    void update_indent()
    {
        _indent.clear();
        for (int i = 0; i < _level; ++i) _indent += std::string(_width, _ch);
    }

    int _width;
    char _ch;
    int _level;
    std::string _indent;
    std::stringstream _ss;
};

class XmlBackend : public features::Visitor {
public:
    XmlBackend();

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
    IntentedStream ss;
};

} // namespace edacurry::backend
