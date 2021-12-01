# -----------------------------------------------------------------------------
# @brief  : CmakeFile for building the edacurry library.
# @author : Enrico Fraccaroli, Nicola Dall'Ora
# @create : 02/02/2018
# @update : 20/08/2019
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# Set the minimum CMake version.
# -----------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.1...3.18)

# -----------------------------------------------------------------------------
# Set the project name.
# -----------------------------------------------------------------------------
project(edacurry CXX)

# Set the default build type to Debug.
if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "Setting build type to 'Debug' as none was specified.")
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# -----------------------------------------------------------------------------
# Documentation target.
# -----------------------------------------------------------------------------
add_subdirectory(doc)

# -----------------------------------------------------------------------------
# Find ANTLR4
# -----------------------------------------------------------------------------
find_package(ANTLR4 REQUIRED)

# -----------------------------------------------------------------------------
# External projects.
# -----------------------------------------------------------------------------
# We need this in order to import external projects.
include(FetchContent)

set(PYBIND11 "pybind11")
message(STATUS "Retrieving ${PYBIND11}...")
FetchContent_Declare(
        ${PYBIND11}
        GIT_REPOSITORY "https://github.com/pybind/pybind11.git"
        GIT_SHALLOW    TRUE
        GIT_PROGRESS   TRUE
)
FetchContent_GetProperties(${PYBIND11})
if(NOT ${PYBIND11}_POPULATED)
        FetchContent_MakeAvailable(${PYBIND11})
endif(NOT ${PYBIND11}_POPULATED)

# -----------------------------------------------------------------------------
# Set the compilation flags.
# -----------------------------------------------------------------------------
# Set C++ Standard.
set(CMAKE_CXX_STANDARD 17)

# Set the other flags.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wfloat-equal")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic-errors")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-attributes")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-parameter")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-variable")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-local-typedefs")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-but-set-variable")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-local-typedefs")

if (CMAKE_BUILD_TYPE STREQUAL "Debug")

    message(STATUS "Disabling optimizations.")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g3")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

elseif (CMAKE_BUILD_TYPE STREQUAL "Release")

    message(STATUS "Enabling optimizations.")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

endif (CMAKE_BUILD_TYPE STREQUAL "Debug")

# -----------------------------------------------------------------------------
# C++ Library with Python wrapping.
# -----------------------------------------------------------------------------
# Add the python wrapped library.
pybind11_add_module(
    ${PROJECT_NAME}
    ./src/edacurry.cpp
    ./src/enums.cpp
    ./src/factory.cpp
    
    ./src/structure/analysis.cpp
    ./src/structure/circuit.cpp
    ./src/structure/control.cpp
    ./src/structure/control_scope.cpp
    ./src/structure/node.cpp
    ./src/structure/object.cpp
    ./src/structure/parameter.cpp
    ./src/structure/subckt.cpp
    ./src/structure/include.cpp
    ./src/structure/library.cpp
    ./src/structure/library_def.cpp
    ./src/structure/component.cpp
    ./src/structure/model.cpp
    ./src/structure/identifier.cpp
    ./src/structure/function_call.cpp
    ./src/structure/expression.cpp
    ./src/structure/value_list.cpp
    ./src/structure/expression_unary.cpp
    ./src/structure/value.cpp
    ./src/structure/value_list.cpp
    ./src/structure/value_pair.cpp
    ./src/structure/number.cpp
    ./src/structure/string.cpp
    
    ./src/utility/logging.cpp
    ./src/utility/utility.cpp

    ./src/frontend/eldo_frontend.cpp

    ./src/backend/xml_backend.cpp
    ./src/backend/eldo_backend.cpp
    
    ./src/features/named_object.cpp

    ./src/antlr4parser/ELDOLexer.cpp
    ./src/antlr4parser/ELDOParser.cpp
    ./src/antlr4parser/ELDOParserBaseListener.cpp
    ./src/antlr4parser/ELDOParserBaseVisitor.cpp
    ./src/antlr4parser/ELDOParserListener.cpp
    ./src/antlr4parser/ELDOParserVisitor.cpp
    ./src/antlr4parser/SPECTRELexer.cpp
    ./src/antlr4parser/SPECTREParser.cpp
    ./src/antlr4parser/SPECTREParserBaseListener.cpp
    ./src/antlr4parser/SPECTREParserBaseVisitor.cpp
    ./src/antlr4parser/SPECTREParserListener.cpp
    ./src/antlr4parser/SPECTREParserVisitor.cpp
)

# Add a macro inside the C++, so that we can de-activate the python wrapping code.
target_compile_definitions(
    ${PROJECT_NAME} PRIVATE
    PYTHON_INTERFACE_ENABLED
)

# Include the python directories.
target_include_directories(
    ${PROJECT_NAME} PRIVATE
    ./include
    SYSTEM ${ANTLR4_INCLUDE_DIRS}
    SYSTEM ./include/antlr4parser
)

# Add the libraries for linking (python wrapped).
target_link_directories(
    ${PROJECT_NAME} PRIVATE
    ${ANTLR4_LINK_DIRECTORIES}
)
target_link_libraries(
    ${PROJECT_NAME} PRIVATE
    ${ANTLR4_LIBRARIES}
)

# -----------------------------------------------------------------------------
# Add the target for generating the python interface.
# -----------------------------------------------------------------------------
set(STUBGEN ${PROJECT_SOURCE_DIR}/third_party/pybind11_stubgen/pybind11-stubgen.py)
add_custom_target(
        stubs
        DEPENDS ${STUBGEN}
        DEPENDS ${PROJECT_NAME}
)
add_custom_command(
        TARGET stubs
        COMMAND echo "Generating python stubs..."
        COMMAND cp ${STUBGEN} ${PROJECT_BINARY_DIR}
        COMMAND ${PYTHON_EXECUTABLE} pybind11-stubgen.py ${PROJECT_NAME} --output-dir="." --root-module-suffix="" --no-setup-py --log-level=DEBUG
        COMMAND cp -rv ${PROJECT_BINARY_DIR}/${PROJECT_NAME}* ${PROJECT_SOURCE_DIR}/notebooks
        COMMAND echo "Generating python stubs... done!"
        DEPENDS ${STUBGEN}
        DEPENDS ${PROJECT_NAME}
)
