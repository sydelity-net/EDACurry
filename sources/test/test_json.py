# == SET-UP LOGGER ============================================================
# Import the logging library.
from enum import Enum
import re
import os
import sys
import difflib
from io import TextIOWrapper
import edacurry
import logging

# Get the C++ declared logger.
logger = logging.getLogger("edacurry_logger")
# Set the level.
logger.setLevel(logging.DEBUG)
# create console handler and set level to debug
ch = logging.StreamHandler()
ch.setLevel(logging.DEBUG)
# create formatter
formatter = logging.Formatter('[%(asctime)s - %(levelname)s]%(message)s')
# add formatter to ch
ch.setFormatter(formatter)
# add ch to logger
logger.addHandler(ch)
# =============================================================================

def test_json(inp: str):
    # Get the content.
    print("Parsing `{}`".format(inp))
    edacurry.test_json(inp)

if len(sys.argv) == 1:
    print("You must provide either input files or folders.")
    print("Usage:")
    print("    {}".format(sys.argv[0]))
    exit(1)

for i in range(1, len(sys.argv)):
    argument = sys.argv[i]

    if os.path.isdir(argument):
        # Iterate the files inside the directory.
        for filename in os.listdir(argument):
            # Get just the name.
            name, _ = os.path.splitext(filename)
            # Set the input path.
            inp = os.path.join(argument, filename)
            # Test JSON.
            test_json(inp)
    elif os.path.isfile(argument):
        # Get the basename.
        basename = os.path.basename(argument)
        # Get just the name.
        name, _ = os.path.splitext(basename)
            # Test JSON.
        test_json(argument)
    else:
        print("The argument `{}` is not valid!".format(argument))
