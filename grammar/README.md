# ANTLR v4 parser for SPECTRE and ELDO languages 

This directory contains code for spectre and eldo parser. For each language, the associated grammar is specified. From these grammars located in the [g4files](g4files/) folder it is possible to generate a native JAVA or C++ parser.

## Project Structure and Files

    .
    ├── g4files/                 # Spectre and Eldo grammar.
    ├── antlr-4.7.1-complete.jar # Antlr v4 library 
    └── README.md

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Requirements

* Java JDK (version 1.6 or higher)

### Generate and compile the parser

Generates and compiles the Java parser.

```
	$ make generate
```

Generates the C++ parser (automatically copies the source files to the source folder).

```
	$ make generate_cpp
```

## How to parse a specific netlist?

For a SPECTRE netlist with the JAVA parser:

```
	$ java -cp ${CLASSPATH}:parser_java/ org.antlr.v4.gui.TestRig SPECTRE netlist <path-to-file>
```

For a ELDO netlist with the JAVA parser:

```
	$ java -cp ${CLASSPATH}:parser_java/ org.antlr.v4.gui.TestRig ELDO netlist <path-to-file>
```

Command options:

```
	$ -tokens		// shows all recognized tokens.
	$ -gui			// shows the Abstract Syntax Tree (AST) of parserized netlist.
```

### Cleaning project compiled files

```
	$ make clean
```


