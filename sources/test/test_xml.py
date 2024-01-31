import os
import sys
import edacurry
import logging

# == SET-UP LOGGER ============================================================
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

def test_xml(inp: str, outp: str):
    # Get the content.
    print("Parsing `{}`".format(inp))
    root = edacurry.parse_xml(inp)

    print(root)
    
    # Write to XML.
    xml_content = edacurry.write_xml(root)
    # If required generate the output file.
    print("Writing `{}`".format(outp))
    with open(outp, "w") as outf:
        outf.write(xml_content)

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
            if filename.endswith(".xml"):
                # Set the input path.
                inp = os.path.join(argument, filename)
                # Set the output path.
                outp = os.path.join(argument, filename + ".out")
                # Test xml.
                test_xml(inp, outp)
    elif os.path.isfile(argument):
        realpath = os.path.realpath(argument)
        # Get just the name.
        filename, _ = os.path.splitext(os.path.basename(realpath))
        # Set the input path.
        inp = argument
        # Set the output path.
        outp = realpath + ".out"
        # Test xml.
        test_xml(inp, outp)
    else:
        print("The argument `{}` is not valid!".format(argument))
