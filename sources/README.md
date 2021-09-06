# Sources of the EDACurry library

## Project Structure and Files

    .
    ├── cmake/                  # Cmake additional files.
    ├── doc/                    # Project documentation.
    ├── include/                # Include files.
    ├── src/                    # Source files.
    ├── third_party/            # Third party software.
    |   └── pybind11_stubgen/   # Pybind11_stubgen.
    ├── test                    # Test folder.   
    ├── CMakeLists              # CMakeLists to manages the build process.
    └── README.md               

## Pre-requisites

Library tested on Ubuntu 20.04.2 LTS with Python 3.8.

From the terminal install the following packets:

```
sudo apt-get install antlr4 libantlr4-runtime4.8 libantlr4-runtime-dev
```

## Compile the project

To compile the project:

```
	$ mkdir build
	$ cd build
	$ cmake ..
	$ make
```

This will, generate the C++ parsers and will compile all the manipulation tools
implemented under `include` and `src`.

## Python Interface with the C++ library

### Import the EDACurry library into Python

Once the library is compiled (example: edacurry.cpython-38-x86_64-linux-gnu.so),
from `build` folder import the library into Python. Make sure the `build` is 
included in the search path.

```
    $ python
    >>> import sys
    >>> sys.path.insert(0, '<path-to-build-folder>')
    >>> import edacurry
```

### Library usage example

```
    $ cd test
    $ python
    >>> import sys
    >>> sys.path.insert(0, '<path-to-build-folder>')
    >>> import edacurry
    >>> edacurry.parse("eldo/components.cir")
```
