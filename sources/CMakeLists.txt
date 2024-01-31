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
# Add location of cmake modules.
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# -----------------------------------------------------------------------------
# OPTIONS
# -----------------------------------------------------------------------------

option(STRICT_WARNINGS "Enable strict compiler warnings" ON)
option(WARNINGS_AS_ERRORS "Treat all warnings as errors" OFF)
option(BUILD_EXAMPLES "Build examples" OFF)
option(BUILD_TESTS "Build tests" OFF)

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
# DEPENDENCY (SYSTEM LIBRARIES)
# -----------------------------------------------------------------------------

find_package(Python COMPONENTS Interpreter Development)
find_package(Doxygen)
find_package(ANTLR4 REQUIRED)

# -----------------------------------------------------------------------------
# DIPENDENCIES (REPOSITORIES)
# -----------------------------------------------------------------------------

# =====================================
# PYBIND11
# =====================================
# Retrieve the pybind11.
FetchContent_Declare(pybind11
    GIT_REPOSITORY "https://github.com/pybind/pybind11.git"
    GIT_TAG 0630807c3070287c716f6be3eacb00b8816b4215 # v2.11.1
)
# Retrieve the properties related to the content.
FetchContent_MakeAvailable(pybind11)
# Hide fetchcontent variables.
mark_as_advanced(FORCE
    FETCHCONTENT_UPDATES_DISCONNECTED_PYBIND11
    FETCHCONTENT_SOURCE_DIR_PYBIND11
)

# =====================================
# PYBIND11-STUBGEN
# =====================================
# Retrieve the stubgen.
FetchContent_Declare(stubgen
    GIT_REPOSITORY "https://github.com/sizmailov/pybind11-stubgen.git"
    GIT_TAG 99f14a1c8486d1ad6a0bdd9ceca81df1531b31c3 # v2.4.2
)
# Retrieve the properties related to the content.
FetchContent_MakeAvailable(stubgen)
# Hide fetchcontent variables.
mark_as_advanced(FORCE
    FETCHCONTENT_UPDATES_DISCONNECTED_STUBGEN
    FETCHCONTENT_SOURCE_DIR_STUBGEN
)

# =====================================
# JSON
# =====================================
# Retrieve the json.
FetchContent_Declare(json
    GIT_REPOSITORY "https://github.com/Galfurian/json.git"
    GIT_TAG d0888ac42fe967ba4a430f3fba860c2ae6140208 # v2.2.3
)
# Retrieve the properties related to the content.
FetchContent_MakeAvailable(json)
# Hide fetchcontent variables.
mark_as_advanced(FORCE
    FETCHCONTENT_UPDATES_DISCONNECTED_JSON
    FETCHCONTENT_SOURCE_DIR_JSON
)

# =====================================
# PUGIXML
# =====================================
# Retrieve the repository.
FetchContent_Declare(pugixml
    GIT_REPOSITORY "https://github.com/zeux/pugixml.git"
    GIT_TAG db78afc2b7d8f043b4bc6b185635d949ea2ed2a8 # v1.14
)
# Retrieve the properties related to the content.
FetchContent_MakeAvailable(pugixml)
# Hide fetchcontent variables.
mark_as_advanced(FORCE
    FETCHCONTENT_UPDATES_DISCONNECTED_PUGIXML
    FETCHCONTENT_SOURCE_DIR_PUGIXML
)

# =====================================
# DOXYGENAWESOME
# =====================================
if(DOXYGEN_FOUND)
    # Record the options that describe how to populate the specified content.
    FetchContent_Declare(doxygenawesome
        GIT_REPOSITORY https://github.com/jothepro/doxygen-awesome-css
        GIT_TAG df88fe4fdd97714fadfd3ef17de0b4401f804052
    )
    # Retrieve the properties related to the content.
    FetchContent_MakeAvailable(doxygenawesome)
    # Hide fetchcontent variables, otherwise with ccmake it's a mess.
    mark_as_advanced(FORCE
        FETCHCONTENT_UPDATES_DISCONNECTED_DOXYGENAWESOME
        FETCHCONTENT_SOURCE_DIR_DOXYGENAWESOME
    )
endif(DOXYGEN_FOUND)

# -----------------------------------------------------------------------------
# C++ Library with Python wrapping.
# -----------------------------------------------------------------------------
# Add the python wrapped library.
pybind11_add_module(
    ${PROJECT_NAME}
    ${PROJECT_SOURCE_DIR}/src/edacurry/edacurry.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/enums.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/factory.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/analysis.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/circuit.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/control.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/control_scope.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/node.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/object.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/parameter.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/subckt.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/include.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/library.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/component.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/model.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/identifier.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/function_call.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/expression.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/value_list.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/expression_unary.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/value.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/value_list.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/value_pair.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/number.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/structure/string.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/utility/logging.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/utility/utility.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/frontend/eldo_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/frontend/json_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/frontend/xml_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/frontend/spectre_frontend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/backend/xml_backend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/backend/json_backend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/backend/eldo_backend.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/features/named_object.cpp
    ${PROJECT_SOURCE_DIR}/src/edacurry/features/visitable_object.cpp
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
target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHON_INTERFACE_ENABLED)

# Add antlr4 lib directories.
target_link_directories(${PROJECT_NAME} PRIVATE ${ANTLR4_LINK_DIRECTORIES})

# Include the project headers.
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${pybind11_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${json_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include/antlr4parser)
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${ANTLR4_INCLUDE_DIRS})

# Link libraries.
target_link_libraries(${PROJECT_NAME} PRIVATE json)
target_link_libraries(${PROJECT_NAME} PRIVATE pugixml-static)
target_link_libraries(${PROJECT_NAME} PRIVATE ${ANTLR4_LIBRARIES})

target_compile_options(${PROJECT_NAME} PRIVATE -fPIC)

# -----------------------------------------------------------------------------
# COMPILATION FLAGS
# -----------------------------------------------------------------------------

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    # Disable warnings that suggest using MSVC-specific safe functions
    target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_SECURE_NO_WARNINGS)
    if(WARNINGS_AS_ERRORS)
        target_compile_options(${PROJECT_NAME} PRIVATE /WX)
    endif()
    if(STRICT_WARNINGS)
        # Mark system headers as external for MSVC explicitly
        # https://devblogs.microsoft.com/cppblog/broken-warnings-theory
        target_compile_options(${PROJECT_NAME} PRIVATE /experimental:external)
        target_compile_options(${PROJECT_NAME} PRIVATE /external:I ${CMAKE_BINARY_DIR})
        target_compile_options(${PROJECT_NAME} PRIVATE /external:anglebrackets)
        target_compile_options(${PROJECT_NAME} PRIVATE /external:W0)
        target_compile_options(${PROJECT_NAME} PRIVATE /W4)
    endif()
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    if(WARNINGS_AS_ERRORS)
        target_compile_options(${PROJECT_NAME} PRIVATE -Werror)
    endif()
    if(STRICT_WARNINGS)
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

endif(DOXYGEN_FOUND)
