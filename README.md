# EDACurry - Home of the Unified Mixed-signal Netlist Parser Framework

There are plentiful successors of SPICE language for describing transistor-level designs. For most of them, the semantic matches those of SPICE, and only the syntax is changed. Others instead provide more default models or analysis tools.

The EDACurry library are based on a shared semantic for reading, writing, or manipulating transistor-level designs. The ultimate goal of the framework is: reading an input design written in a specific syntax and then allowing to write the same design in another syntax. First, the input description is parsed by a language-specific front-end which turns it into an in-memory abstract syntax tree that follows the common semantic. Then, the in-memory description can be subject to different user-defined manipulations built on top of a series of API or visitor/listener classes. Finally, the description goes through the desired back-end, transforming the in-memory description into the target transistor-level language.

## Project Structure and Files

    .
    ├── grammar/                # Spectre and Eldo grammar.
    ├── sources/                # Netlist manipulator (includes C++ parser).
    ├── LICENSE                       
    └── README.md
