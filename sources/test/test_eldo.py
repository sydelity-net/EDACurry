# == SET-UP LOGGER ============================================================
# Import the logging library.
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
# Import the EDACurry library.
import edacurry
from io import TextIOWrapper
from colorama import Fore, Back, Style
import difflib
import sys
import os
import re
from enum import Enum

class Changes(Enum):
    NONE = 0
    EXTRA = 1
    MISSING = 2
    ANNOTATION = 3


def must_skip_line(line:str) -> bool:
    return line.startswith('#') or line.startswith('//') or line.startswith('*')


def parse_lines(file: TextIOWrapper) -> str:
    lines = []
    for line in file:
        if not must_skip_line(line):
            if re.match(r'^ +\+', line):
                previous_line :str= lines.pop()
                previous_line = previous_line.replace('\n', ' ').replace('  ', ' ')
                line = previous_line + re.sub(r'^ +\+', '', line)
            lines.append(line.rstrip())
    return lines

def handle_print(line : str, line_number : int, line_type : Changes, previous_type : Changes) -> Changes:
    # If this line is only in b, print the line number and the text on the line
    if line_type == Changes.EXTRA:
        print(Fore.YELLOW, "%3d" % line_number, line, Fore.RESET)
        previous_type = line_type
    elif line_type == Changes.MISSING:
        print(Fore.RED, "%3d" % line_number, line, Fore.RESET)
        previous_type = line_type
    else:
        if line_type == Changes.ANNOTATION:
            if previous_type == Changes.EXTRA:
                print(Fore.YELLOW, "%3d" % line_number, line, Fore.RESET)
            elif previous_type == Changes.MISSING:
                print(Fore.RED, "%3d" % line_number, line, Fore.RESET)
        else:
            print(Fore.GREEN, "%3d" % line_number, line, Fore.RESET)
        previous_type = Changes.NONE
    return previous_type

def compare(filepath1:str, filepath2:str):
    # Compare the two files.
    print("Comparing `{}` and `{}`...".format(filepath1, filepath2))
    with open(filepath1) as f1, open(filepath2) as f2:
        # Get the content.
        content_f1 = parse_lines(f1)
        content_f2 = parse_lines(f2)
        # Compute the differences.
        differences = difflib.Differ().compare(content_f1, content_f2)
        # Store the line number.
        line_number = 0
        # Store the type of the previous entry.
        previous_type : Changes = 0
        # Print the differences.
        for line in differences:
            # Strip the end of the line.
            line = line.rstrip()
            # Split off the tag.
            tag = line[:2]
            remaining = line[2:]
            # Skip empty lines.
            if not tag or not remaining:
                continue
            # Set the tag.
            if tag == "? ":
                line_type = Changes.ANNOTATION
            elif tag == "+ ":
                line_type = Changes.EXTRA
            elif tag == "- ":
                line_type = Changes.MISSING
            else:
                line_type = Changes.NONE
            # If the line is in both files or just b, increment the line number.
            if line_type in (Changes.NONE, Changes.MISSING):
                line_number += 1
            # Print the line.
            previous_type = handle_print(line, line_number, line_type, previous_type)
            

def test_xml(inp:str, outp:str):
    # Get the content.
    print("Parsing `{}`".format(inp))
    content = edacurry.parse_to_xml(inp)
    # If required generate the output file.
    print("Writing `{}`".format(outp))
    with open(outp, 'w') as outf:
        outf.write(content)

def test_eldo(inp:str, outp:str):
    # Get the content.
    print("Parsing `{}`".format(inp))
    content = edacurry.parse_to_eldo(inp)
    # If required generate the output file.
    print("Writing `{}`".format(outp))
    with open(outp, 'w') as outf:
        outf.write(content)
    # Compare the two files.
    compare(inp, outp)

if not os.path.exists("eldo_result"):
    os.mkdir("eldo_result")

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
            # Parse to ELDO.
            test_eldo(inp, os.path.join("eldo_result/", "{}.cir".format(name)))
            # Parse to XML.
            test_xml(inp, os.path.join("eldo_result/", "{}.xml".format(name)))
    elif os.path.isfile(argument):
        # Get the basename.
        basename = os.path.basename(argument)
        # Get just the name.
        name, _ = os.path.splitext(basename)
        # Parse to ELDO.
        test_eldo(argument, os.path.join("eldo_result/", "{}.cir".format(name)))
        # Parse to XML.
        test_xml(argument, os.path.join("eldo_result/", "{}.xml".format(name)))
    else:
        print("The argument `{}` is not valid!".format(argument))