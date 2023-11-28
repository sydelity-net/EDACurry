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

# -----------------------------------------------------------------------------
# C++ Library with Python wrapping.
# -----------------------------------------------------------------------------
# Add the python wrapped library.
pybind11_add_module(
    ${PROJECT_NAME}
    ${PROJECT_SOURCE_DIR}/src/edacurry.cpp
    ${PROJECT_SOURCE_DIR}/src/enums.cpp
    ${PROJECT_SOURCE_DIR}/src/factory.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/analysis.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/circuit.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/control.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/control_scope.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/node.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/object.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/parameter.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/subckt.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/include.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/library.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/library_def.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/component.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/model.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/identifier.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/function_call.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/expression.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/value_list.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/expression_unary.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/value.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/value_list.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/value_pair.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/number.cpp
    ${PROJECT_SOURCE_DIR}/src/structure/string.cpp
    ${PROJECT_SOURCE_DIR}/src/utility/logging.cpp
    ${PROJECT_SOURCE_DIR}/src/utility/utility.cpp
    ${PROJECT_SOURCE_DIR}/src/frontend/eldo_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/frontend/json_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/frontend/spectre_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/backend/xml_backend.cpp
    ${PROJECT_SOURCE_DIR}/src/backend/json_backend.cpp
    ${PROJECT_SOURCE_DIR}/src/backend/eldo_backend.cpp
    ${PROJECT_SOURCE_DIR}/src/features/named_object.cpp
    ${PROJECT_SOURCE_DIR}/src/features/visitable_object.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/ELDOLexer.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/ELDOParser.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/ELDOParserBaseListener.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/ELDOParserBaseVisitor.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/ELDOParserListener.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/ELDOParserVisitor.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/SPECTRELexer.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/SPECTREParser.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/SPECTREParserBaseListener.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/SPECTREParserBaseVisitor.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/SPECTREParserListener.cpp
    ${PROJECT_SOURCE_DIR}/src/antlr4parser/SPECTREParserVisitor.cpp
)

# Add a macro inside the C++, so that we can de-activate the python wrapping code.
target_compile_definitions(
    ${PROJECT_NAME} PRIVATE
    PYTHON_INTERFACE_ENABLED
)

# Include the python directories.
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Include the python directories.
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${ANTLR4_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include/antlr4parser)

# Add the libraries for linking (python wrapped).
target_link_directories(${PROJECT_NAME} PRIVATE ${ANTLR4_LINK_DIRECTORIES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${ANTLR4_LIBRARIES})

# Inlcude header directories from pybind11.
target_include_directories(${PROJECT_NAME} PRIVATE ${pybind11_SOURCE_DIR}/include)

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
# Inlcude header directories from json.
target_include_directories(${PROJECT_NAME} PRIVATE ${json_SOURCE_DIR}/include)
# Inlcude header directories from json.
target_link_libraries(${PROJECT_NAME} PRIVATE json)
# =====================================

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
    COMMAND PYTHONPATH=${stubgen_SOURCE_DIR} ${Python_EXECUTABLE} -c \"import pybind11_stubgen \; pybind11_stubgen.main() \;\" ${PROJECT_NAME}
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
        ${PROJECT_SOURCE_DIR}/include/backend/eldo_backend.hpp
        ${PROJECT_SOURCE_DIR}/include/backend/indented_stream.hpp
        ${PROJECT_SOURCE_DIR}/include/backend/json_backend.hpp
        ${PROJECT_SOURCE_DIR}/include/backend/xml_backend.hpp
        ${PROJECT_SOURCE_DIR}/include/classes.hpp
        ${PROJECT_SOURCE_DIR}/include/enums.hpp
        ${PROJECT_SOURCE_DIR}/include/factory.hpp
        ${PROJECT_SOURCE_DIR}/include/features/named_object.hpp
        ${PROJECT_SOURCE_DIR}/include/features/owned_list.hpp
        ${PROJECT_SOURCE_DIR}/include/features/object_reference.hpp
        ${PROJECT_SOURCE_DIR}/include/features/visitable_object.hpp
        ${PROJECT_SOURCE_DIR}/include/frontend/eldo_frontend.hpp
        ${PROJECT_SOURCE_DIR}/include/frontend/json_frontend.hpp
        ${PROJECT_SOURCE_DIR}/include/frontend/spectre_frontend.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/analysis.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/circuit.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/component.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/control.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/control_scope.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/expression.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/expression_unary.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/function_call.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/identifier.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/include.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/library.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/library_def.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/model.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/node.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/number.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/object.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/parameter.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/string.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/subckt.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/value.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/value_list.hpp
        ${PROJECT_SOURCE_DIR}/include/structure/value_pair.hpp
        ${PROJECT_SOURCE_DIR}/include/utility/logging.hpp
        ${PROJECT_SOURCE_DIR}/include/utility/typename.hpp
        ${PROJECT_SOURCE_DIR}/include/utility/utility.hpp
        README.md
    )
endif()
