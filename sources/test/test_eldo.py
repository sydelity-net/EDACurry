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
from colorama import Fore, Back, Style
import difflib
import sys
import os
import re

def compare(filepath1:str, filepath2:str):
    # Compare the two files.
    print("Comparing `{}` and `{}`...".format(filepath1, filepath2))
    with open(filepath1) as f1, open(filepath2) as f2:
        # Get the content.
        content_f1 = []
        for line in f1:
            if not line.startswith('#') and not line.startswith('//'):
                if re.match(r'^ +\+', line):
                    previous_line :str= content_f1.pop()
                    content_f1.append(previous_line.replace('\n', '') + re.sub(r'^ +\+', '', line))
                else:
                    content_f1.append(line)
        content_f2 = []
        for line in f2:
            if not line.startswith('#') and not line.startswith('//'):
                content_f2.append(line.replace(r'\+', 'AAAAAAAAAAAAAAAAAAAAAAAAAAAA'))
        # Compute the differences.
        differ = difflib.Differ()
        differences = differ.compare(content_f1, content_f2)
        line_num = 0
        # 
        previous = 0
        # Print the differences.
        for line in differences:
            # Split off the tag.
            line = line.rstrip()
            tag = line[:2]
            remaining = line[2:].strip()
            if not remaining:
                continue
            # If the line is in both files or just b, increment the line number.
            if tag in ("  ", "- "):
                line_num += 1
            ## If this line is only in b, print the line number and the text on the line
            if tag == "+ ":
                print(Fore.YELLOW, "%3d"%line_num, line, Fore.RESET)
                previous = 1
            elif tag == "- ":
                print(Fore.RED, "%3d"%line_num, line, Fore.RESET)
                previous = 2
            elif tag == "? ":
                if previous == 1:
                    print(Fore.YELLOW, "%3d"%line_num, line, Fore.RESET)
                elif previous == 2:
                    print(Fore.RED, "%3d"%line_num, line, Fore.RESET)
                previous = 0
            else:
                previous = 0

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