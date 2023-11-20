# -----------------------------------------------------------------------------
# @brief  : CmakeFile for building the edacurry library.
# @author : Enrico Fraccaroli, Nicola Dall'Ora
# @create : 02/02/2018
# @update : 20/08/2019
# -----------------------------------------------------------------------------

# Set the minimum CMake version, the project name and default build type.
cmake_minimum_required(VERSION 3.1...3.18)

# Set the project name.
project(edacurry CXX)

# Set the default build type to Debug.
if(NOT CMAKE_BUILD_TYPE)
    message(STATUS "Setting build type to 'Debug' as none was specified.")
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# -----------------------------------------------------------------------------
# ENABLE FETCH CONTENT
# -----------------------------------------------------------------------------

# We need this in order to import external projects.
include(FetchContent)
# Hide fetchcontent variables.
mark_as_advanced(FORCE
    FETCHCONTENT_QUIET
    FETCHCONTENT_BASE_DIR
    FETCHCONTENT_FULLY_DISCONNECTED
    FETCHCONTENT_UPDATES_DISCONNECTED
)

# -----------------------------------------------------------------------------
# OPTIONS
# -----------------------------------------------------------------------------

option(STRICT_WARNINGS "Enable strict compiler warnings" ON)
option(WARNINGS_AS_ERRORS "Treat all warnings as errors" OFF)
option(BUILD_EXAMPLES "Build examples" OFF)
option(BUILD_TESTS "Build tests" OFF)

# -----------------------------------------------------------------------------
# DEPENDENCY
# -----------------------------------------------------------------------------

find_package (Python COMPONENTS Interpreter Development)
find_package(Doxygen)
find_package(ANTLR4 REQUIRED)

# =====================================
# PYBIND11
# =====================================
# Retrieve the pybind11.
FetchContent_Declare(pybind11
    GIT_REPOSITORY "https://github.com/pybind/pybind11.git"
    GIT_TAG master
    GIT_SHALLOW TRUE
    GIT_PROGRESS TRUE
)
# Get the properties of pybind11.
FetchContent_GetProperties(pybind11)
# If we did not made the pybind11 properties available yet, do it now.
if(NOT pybind11_POPULATED)
    message(STATUS "Retrieving `pybind11`...")
    # Ensures the named dependencies have been populated.
    FetchContent_MakeAvailable(pybind11)
    # Hide fetchcontent variables, otherwise with ccmake it's a mess.
    mark_as_advanced(FORCE
        FETCHCONTENT_UPDATES_DISCONNECTED_pybind11
        FETCHCONTENT_SOURCE_DIR_pybind11
    )
endif(NOT pybind11_POPULATED)
# =====================================

# =====================================
# PYBIND11-STUBGEN
# =====================================
# Retrieve the stubgen.
FetchContent_Declare(stubgen
    GIT_REPOSITORY "https://github.com/sizmailov/pybind11-stubgen.git"
    GIT_TAG master
    GIT_SHALLOW TRUE
    GIT_PROGRESS TRUE
)
# Get the properties of stubgen.
FetchContent_GetProperties(stubgen)
# If we did not made the stubgen properties available yet, do it now.
if(NOT stubgen_POPULATED)
    message(STATUS "Retrieving `stubgen`...")
    # Ensures the named dependencies have been populated.
    FetchContent_MakeAvailable(stubgen)
    # Hide fetchcontent variables, otherwise with ccmake it's a mess.
    mark_as_advanced(FORCE
        FETCHCONTENT_UPDATES_DISCONNECTED_stubgen
        FETCHCONTENT_SOURCE_DIR_stubgen
    )
endif(NOT stubgen_POPULATED)
# =====================================

# =====================================
# JSON
# =====================================
# Retrieve the json.
FetchContent_Declare(json
    GIT_REPOSITORY "https://github.com/Galfurian/json.git"
    GIT_TAG main
    GIT_SHALLOW TRUE
    GIT_PROGRESS TRUE
)
# Get the properties of json.
FetchContent_GetProperties(json)
# If we did not made the json properties available yet, do it now.
if(NOT json_POPULATED)
    message(STATUS "Retrieving `json`...")
    # Ensures the named dependencies have been populated.
    FetchContent_MakeAvailable(json)
    # Hide fetchcontent variables, otherwise with ccmake it's a mess.
    mark_as_advanced(FORCE
        FETCHCONTENT_UPDATES_DISCONNECTED_json
        FETCHCONTENT_SOURCE_DIR_json
    )
endif(NOT json_POPULATED)
# =====================================

# -----------------------------------------------------------------------------
# C++ Library with Python wrapping.
# -----------------------------------------------------------------------------
# Add the python wrapped library.
pybind11_add_module(
    ${PROJECT_NAME}
    ./src/edacurry.cpp
    ./src/enums.cpp
    ./src/factory.cpp
    #./src/json_parser.cpp
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
    ./src/frontend/spectre_frontend.cpp
    ./src/backend/xml_backend.cpp
    ./src/backend/eldo_backend.cpp
    ./src/features/named_object.cpp
    ./src/features/visitable_object.cpp
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

# Inlcude header directories from pybind11.
target_include_directories(${PROJECT_NAME} PRIVATE ${pybind11_SOURCE_DIR}/include)

# Inlcude header directories from json.
target_include_directories(${PROJECT_NAME} PRIVATE ${json_SOURCE_DIR}/include)
# Inlcude header directories from json.
target_link_libraries(${PROJECT_NAME} PRIVATE json)

# -----------------------------------------------------------------------------
# COMPILATION FLAGS
# -----------------------------------------------------------------------------

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    # Disable warnings that suggest using MSVC-specific safe functions
    target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_SECURE_NO_WARNINGS)
    if(WARNINGS_AS_ERRORS)
        target_compile_options(${PROJECT_NAME} PRIVATE /WX)
    endif()
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    if(WARNINGS_AS_ERRORS)
        target_compile_options(${PROJECT_NAME} PRIVATE -Werror)
    endif()
endif()

if(STRICT_WARNINGS)
    if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        # Mark system headers as external for MSVC explicitly
        # https://devblogs.microsoft.com/cppblog/broken-warnings-theory
        target_compile_options(${PROJECT_NAME} PRIVATE /experimental:external)
        target_compile_options(${PROJECT_NAME} PRIVATE /external:I ${CMAKE_BINARY_DIR})
        target_compile_options(${PROJECT_NAME} PRIVATE /external:anglebrackets)
        target_compile_options(${PROJECT_NAME} PRIVATE /external:W0)

        target_compile_options(${PROJECT_NAME} PRIVATE /W4)
    elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wconversion -pedantic)
    endif()
endif()

# -----------------------------------------------------------------------------
# Add the target for generating the python interface.
# -----------------------------------------------------------------------------

add_custom_target(
    stubs
    DEPENDS ${STUBGEN}
    DEPENDS ${PROJECT_NAME}
)
add_custom_command(
    TARGET stubs
    COMMAND echo "Generating python stubs..."
    COMMAND PYTHONPATH=${stubgen_SOURCE_DIR} ${Python_EXECUTABLE} -c \"import pybind11_stubgen\; pybind11_stubgen.main()\;\" ${PROJECT_NAME}
    COMMAND echo "Generating python stubs... done!"
    DEPENDS ${PROJECT_NAME}
)

# -----------------------------------------------------------------------------
# DOCUMENTATION
# -----------------------------------------------------------------------------

if(DOXYGEN_FOUND)

    # Record the options that describe how to populate the specified content.
    FetchContent_Declare(
        doxygenawesome
        GIT_REPOSITORY https://github.com/jothepro/doxygen-awesome-css
        GIT_TAG 4cd62308d825fe0396d2f66ffbab45d0e247724c # 2.0.3
    )
    # Retrieve the properties related to the content.
    FetchContent_GetProperties(doxygenawesome)
    # If not populated, make the content available.
    if(NOT doxygenawesome_POPULATED)
        message(STATUS "Retrieving `doxygen-awesome-css`...")
        # Ensures the named dependencies have been populated.
        FetchContent_MakeAvailable(doxygenawesome)
        # Hide fetchcontent variables, otherwise with ccmake it's a mess.
        mark_as_advanced(FORCE
            FETCHCONTENT_UPDATES_DISCONNECTED_DOXYGENAWESOME
            FETCHCONTENT_SOURCE_DIR_DOXYGENAWESOME
        )
    endif()

    # = CUSTOMIZATION =========================================================
    set(DOXYGEN_WARN_FORMAT "$file:$line: $text")
    set(DOXYGEN_PROJECT_NAME "Lumen et Umbra (LeU)")
    set(DOXYGEN_USE_MDFILE_AS_MAINPAGE ${PROJECT_SOURCE_DIR}/README.md)
    set(DOXYGEN_SHOW_INCLUDE_FILES NO)
    set(DOXYGEN_GENERATE_TREEVIEW YES)
    set(DOXYGEN_HTML_HEADER ${doxygenawesome_SOURCE_DIR}/doxygen-custom/header.html)
    set(DOXYGEN_HTML_EXTRA_STYLESHEET ${doxygenawesome_SOURCE_DIR}/doxygen-awesome.css)
    set(DOXYGEN_HTML_EXTRA_FILES
        ${doxygenawesome_SOURCE_DIR}/doxygen-awesome-fragment-copy-button.js
        ${doxygenawesome_SOURCE_DIR}/doxygen-awesome-paragraph-link.js
        ${doxygenawesome_SOURCE_DIR}/doxygen-awesome-darkmode-toggle.js
    )
    doxygen_add_docs(
        ${PROJECT_NAME}_documentation
        ./include/backend/eldo_backend.hpp
        ./include/backend/indented_stream.hpp
        ./include/backend/json_backend.hpp
        ./include/backend/xml_backend.hpp
        ./include/classes.hpp
        ./include/enums.hpp
        ./include/factory.hpp
        ./include/features/named_object.hpp
        ./include/features/owned_list.hpp
        ./include/features/object_reference.hpp
        ./include/features/visitable_object.hpp
        ./include/frontend/eldo_frontend.hpp
        ./include/frontend/json_frontend.hpp
        ./include/frontend/spectre_frontend.hpp
        ./include/structure/analysis.hpp
        ./include/structure/circuit.hpp
        ./include/structure/component.hpp
        ./include/structure/control.hpp
        ./include/structure/control_scope.hpp
        ./include/structure/expression.hpp
        ./include/structure/expression_unary.hpp
        ./include/structure/function_call.hpp
        ./include/structure/identifier.hpp
        ./include/structure/include.hpp
        ./include/structure/library.hpp
        ./include/structure/library_def.hpp
        ./include/structure/model.hpp
        ./include/structure/node.hpp
        ./include/structure/number.hpp
        ./include/structure/object.hpp
        ./include/structure/parameter.hpp
        ./include/structure/string.hpp
        ./include/structure/subckt.hpp
        ./include/structure/value.hpp
        ./include/structure/value_list.hpp
        ./include/structure/value_pair.hpp
        ./include/utility/json.hpp
        ./include/utility/logging.hpp
        ./include/utility/typename.hpp
        ./include/utility/utility.hpp
        README.md
    )
endif()
