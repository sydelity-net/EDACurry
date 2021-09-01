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
import os

files = os.listdir("../test/eldo")

if not os.path.exists("../test/eldo_result"):
    os.mkdir("../test/eldo_result")

for in_file in files:
    path = os.path.join("../test/eldo/", in_file)
    base = os.path.basename(in_file)
    split = os.path.splitext(base)
    print("Parsing `{}`".format(path))
    content = edacurry.parse(path)
    out_path = os.path.join("../test/eldo_result/", split[0] + ".xml")
    print("Writing `{}`".format(out_path))
    with open(out_path, 'w') as out_file:
        out_file.write(content)
