# ANTLR4_FOUND            : true iff the package was found;
# ANTLR4_INCLUDE_DIRS     : a list of directories containing the package's include files 
# ANTLR4_LIBRARIES        : a list of the package's libraries
# ANTLR4_LINK_DIRECTORIES : a list of directories containing the package's libraries

include(FindPackageHandleStandardArgs)

# Checks an environment variable.
if(DEFINED ENV{ANTLR4_DIR})
  set(ANTLR4_DIR "$ENV{ANTLR4_DIR}")
endif()

# Find the include directory.
find_path(
  ANTLR4_INCLUDE_DIR
  NAMES antlr4-runtime.h
  HINTS ${ANTLR4_DIR} /usr/include /usr/local/include
  PATH_SUFFIXES antlr4-runtime antlr4-runtime/include)

# Find the library.
find_library(
  ANTLR4_LIBRARY
  NAMES antlr4-runtime
  HINTS ${ANTLR4_DIR} /usr/lib /usr/lib/x86_64-linux-gnu
  PATH_SUFFIXES antlr4-runtime antlr4-runtime/lib)

# Find the package.
find_package_handle_standard_args(
  ANTLR4 DEFAULT_MSG 
  ANTLR4_INCLUDE_DIR
  ANTLR4_LIBRARY)

# Mark the search variables as advanced.
mark_as_advanced(ANTLR4_LIBRARY ANTLR4_INCLUDE_DIR)

# Set the variables if found.
if(ANTLR4_FOUND)
  message(STATUS "Found ANTLR4 library: ${ANTLR4_LIBRARY}")
  set(ANTLR4_INCLUDE_DIRS ${ANTLR4_INCLUDE_DIR})
  set(ANTLR4_LIBRARIES ${ANTLR4_LIBRARY})
endif(ANTLR4_FOUND)
