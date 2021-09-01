/// @file   edacurry.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "factory.hpp"

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "utility/logging.hpp"

#include "antlr4parser/ELDOParser.h"
#include "antlr4parser/ELDOLexer.h"
#include "antlr4-runtime.h"
#include "frontend/eldo_frontend.hpp"

#include "structure/identifier.hpp"
#include "structure/expression.hpp"
#include "structure/value_list.hpp"
#include "structure/function_call.hpp"
#include "structure/node.hpp"
#include "structure/parameter.hpp"
#include "structure/component.hpp"

#include "utility/utility.hpp"

#include "backend/xml_backend.hpp"

#include "factory.hpp"

std::string parse(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
#if 0
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}
#endif

    edacurry::ELDOParser parser(&tokens);
    edacurry::frontend::ELDOFrontend frontend;

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    edacurry::backend::XmlBackend backend;
    frontend.getRoot()->accept(&backend);
    return backend.str();
}

PYBIND11_MODULE(edacurry, m)
{
    logging::initialize();
    m.def("parse", &parse);
}
