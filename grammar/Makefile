# -----------------------------------------------------------------------------
# @brief  : Makefile for testing the grammars in JAVA and CP
# @author : Enrico Fraccaroli
# @date   : 01/02/2018
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# Default target generating help
# -----------------------------------------------------------------------------
all:
	@echo "Targets:"
	@echo "    generate     : Generates and compiles Java parser."
	@echo "    generate_cpp : Generates and compiles Java parser."
	@echo "    clean        : Cleans the generated files."
	@echo ""

# -----------------------------------------------------------------------------
# Targets for generating parsers
# -----------------------------------------------------------------------------
generate:
	@echo "[1/4] Create parser folder (Java) ..."
	@mkdir -p parser_java
	@echo "[2/4] Generate parser (Java) ..."
	@java -cp antlr-4.7.1-complete.jar -Xmx500M org.antlr.v4.Tool g4files/*.g4 -long-messages -listener -visitor
	@echo "[3/4] Moving generated files (Java) ..."
	@mv g4files/*.tokens parser_java/
	@mv g4files/*.interp parser_java/
	@mv g4files/*.java parser_java/
	@echo "[4/4] Compile parser (Java) ..."
	@javac -cp antlr-4.7.1-complete.jar parser_java/*.java
	@echo "Done"

generate_cpp:
	@echo "[1/3] Generate parser (C++) ..."
	@java -cp antlr-4.7.1-complete.jar -Xmx500M org.antlr.v4.Tool g4files/*.g4 -long-messages -Werror -Dlanguage=Cpp -listener -visitor -package edacurry
	@echo "[2/3] Create parser folders (C++) ..."
	@mkdir -p ../sources/include/antlr4parser/
	@mkdir -p ../sources/src/antlr4parser/
	@echo "[3/3] Moving parser sources (C++) ..."
	@rm -vf g4files/*.tokens
	@rm -vf g4files/*.interp
	@mv -vf g4files/*.h   ../sources/include/antlr4parser/
	@mv -vf g4files/*.cpp ../sources/src/antlr4parser/

# -----------------------------------------------------------------------------
# Cleaning routines.
# -----------------------------------------------------------------------------
clean:
	@echo "Cleaning..."
	@rm -rvf parser_java
	@rm -vf g4files/*.tokens
	@rm -vf g4files/*.interp
	@rm -vf g4files/*.java

.PHONY: all clean generate generate_cpp