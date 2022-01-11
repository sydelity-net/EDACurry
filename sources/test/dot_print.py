from __future__ import print_function
import json
import random
import sys

from typing import List

def op_to_string(op: int):
    if op == 1:
        return "="
    if op == 2:
        return "+"
    if op == 3:
        return "-"
    if op == 4:
        return "*"
    if op == 5:
        return "/"
    if op == 6:
        return "||"
    if op == 7:
        return "&&"
    if op == 8:
        return "^^"
    if op == 9:
        return "!"
    if op == 10:
        return "|"
    if op == 11:
        return "&"
    if op == 12:
        return "<<"
    if op == 13:
        return ">>"
    if op == 14:
        return "=="
    if op == 15:
        return "!="
    if op == 16:
        return "<"
    if op == 17:
        return ">"
    if op == 18:
        return "<="
    if op == 19:
        return ">="
    if op == 20:
        return "mod"
    if op == 21:
        return "pow"
    return ""


def get_edges(edges: List, jnode, parent: str = None, edgelabel:str="") -> str:

    name = ""

    if jnode["type"] == "Circuit":
        name = "circuit"
        print("    {} [shape=circle];".format(name))
        for item in jnode["nodes"]["objects"]:
            get_edges(edges, item, name)
        for item in jnode["parameters"]["objects"]:
            get_edges(edges, item, name)
        for item in jnode["content"]["objects"]:
            get_edges(edges, item, name)
        
    if jnode["type"] == "Node":
        name = jnode["name"]

        print("    {} -> {};".format(parent, name))

        print("    {} [shape=circle, style=filled, fillcolor=mediumpurple3];".format(name))
        
    if jnode["type"] == "Identifier":
        name = str(random.randint(0, 1000000))

        print("    {} -> {} [label=\"{}\"];".format(parent, name, edgelabel))

        print("    {} [label=\"{}\", shape=circle, style=filled, fontsize=12];".format(name, jnode["name"]))
        
    if (jnode["type"] == "Number<double>") or (jnode["type"] == "Number<unsigned>") or (jnode["type"] == "Number<int>"):
        name = str(random.randint(0, 1000000))

        print("    {} -> {} [label=\"{}\"];".format(parent, name, edgelabel))

        print("    {} [label=\"{}\", shape=circle, style=filled, fontsize=12];".format(name, jnode["value"]))

    elif jnode["type"] == "Expression":
        name = str(random.randint(0, 1000000))

        print("    {} -> {} [label=\"{}\"];".format(parent, name, edgelabel))

        print("    {} [label=\"{}\", shape=circle, style=filled, fillcolor=gray];".format(name, op_to_string(jnode["operator"])))

        get_edges(edges, jnode["value1"], name)
        get_edges(edges, jnode["value2"], name)

    elif jnode["type"] == "Component":
        name = jnode["name"]

        print("    {} -> {};".format(parent, name))

        print("    {} [shape=circle, style=filled, fillcolor=cadetblue4];".format(name))

    elif jnode["type"] == "Analysis":
        name = str(random.randint(0, 1000000))
        if jnode["name"] in ["ac_parameter_driven", "ac_data_driven", "ac_list_driven", "ac_adaptive"]:
            label = "ac"
        elif jnode["name"] in  ["tran_point_driven","tran_parameterized","tran_data_driven"]:
            label = "tran"

        print("    {} -> {};".format(parent, name))

        print("    {} [label=\"{}\", shape=circle, style=filled, fillcolor=lightgoldenrod];".format(name, label))

        for item in jnode["parameters"]["objects"]:
            get_edges(edges, item, name)

    elif jnode["type"] == "Subckt":
        name = jnode["name"]

        print("    {} -> {};".format(parent, name))

        print("    {} [shape=circle, style=filled, fillcolor=cornflowerblue];".format(name))

        for item in jnode["nodes"]["objects"]:
            get_edges(edges, item, name)
        for item in jnode["parameters"]["objects"]:
            get_edges(edges, item, name)
        for item in jnode["content"]["objects"]:
            get_edges(edges, item, name)

    elif jnode["type"] == "ControlScope":
        name = jnode["name"]

        print("    {} -> {};".format(parent, name))

        print("    {} [shape=circle, style=filled, fillcolor=lightyellow4];".format(name))

        for item in jnode["nodes"]["objects"]:
            get_edges(edges, item, name)
        for item in jnode["parameters"]["objects"]:
            get_edges(edges, item, name)
        for item in jnode["content"]["objects"]:
            get_edges(edges, item, name)

    elif jnode["type"] == "Parameter":

        if jnode["left"]:
            lhs = get_edges(edges, jnode["left"], parent)
            if lhs:
                rhs = get_edges(edges, jnode["right"], lhs, "=")
        
    return name

if len(sys.argv) <= 1:
    print("You must provide a json file.")
    exit(1)

with open(sys.argv[1], "r") as jfile:
    data = json.load(jfile)

    # Extract tree edges from the dict
    edges = []
    print("strict digraph tree {")
    get_edges(edges, data)
    print("}")

exit(0)