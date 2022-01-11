/// @file   edacurry.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "factory.hpp"

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "utility/logging.hpp"
#include "utility/json.hpp"

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
#include "backend/eldo_backend.hpp"

#include "factory.hpp"

std::string parse_to_xml(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
#if 0
    for (size_t index = 0; index < tokens.size(); ++index) {
        antlr4::Token *token = tokens.get(index);
        std::cout << "Channel: " << token->getChannel() << "\n";
        std::cout << " Type: " << token->getType() << "\n";
        std::cout << " Hidden: ";
        for (auto const &hidden : tokens.getHiddenTokensToLeft(index)) {
            std::cout << "\n\tChannel: " << hidden->getChannel() << ", Type: " << hidden->getType() << "\n";
        }
        std::cout << token->getText() << "\n";
    }
#endif

    edacurry::ELDOParser parser(&tokens);
    edacurry::frontend::ELDOFrontend frontend(tokens);

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    edacurry::backend::XmlBackend backend;
    frontend.getRoot()->accept(&backend);
    return backend.str();
}

std::string parse_to_eldo(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
#if 0
    for (size_t index = 0; index < tokens.size(); ++index) {
        antlr4::Token *token = tokens.get(index);
        std::cout << "Channel: " << token->getChannel() << "\n";
        std::cout << " Type: " << token->getType() << "\n";
        std::cout << " Hidden: ";
        for (auto const &hidden : tokens.getHiddenTokensToLeft(index)) {
            std::cout << "\n\tChannel: " << hidden->getChannel() << ", Type: " << hidden->getType() << "\n";
        }
        std::cout << token->getText() << "\n";
    }
#endif

    edacurry::ELDOParser parser(&tokens);
    edacurry::frontend::ELDOFrontend frontend(tokens);

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    edacurry::backend::EldoBackend backend;
    frontend.getRoot()->accept(&backend);
    return backend.str();
}

void test_json(const std::string &path)
{
    std::ifstream fileStream(path);
    antlr4::ANTLRInputStream input(fileStream);
    edacurry::ELDOLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();

    edacurry::ELDOParser parser(&tokens);

    edacurry::frontend::ELDOFrontend frontend(tokens);

    // Parse the circuit.
    parser.netlist()->accept(&frontend);

    edacurry::structure::Object *output_root = frontend.getRoot(), *input_root = nullptr;

    json::jnode_t json_0;

    json_0 << output_root;

    json::parser::write_file("output.json", json_0, false);

    json::jnode_t json_1 = json::parser::parse_file("output.json");

    json_1 << input_root;

    std::cout << std::string(80, '=') << "\n";
    std::cout << json_0.to_string() << "\n";
    std::cout << std::string(80, '=') << "\n";
    std::cout << json_1.to_string() << "\n";
    std::cout << std::string(80, '=') << "\n";

    delete input_root;
    delete output_root;
}

PYBIND11_MODULE(edacurry, m)
{
    logging::initialize();
    m.def("parse_to_xml", &parse_to_xml);
    m.def("parse_to_eldo", &parse_to_eldo);
    m.def("test_json", &test_json);
}
