/// @file   enums.hpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#pragma once

#include <string>

namespace edacurry
{
/// @brief All the supported languages.
enum NetlistType {
    net_none,    ///< No netlist type.
    net_spice,   ///< A SPICE netlist.
    net_spectre, ///< A Spectre netlist.
    net_eldo     ///< An ELDO netlist.
};

/// @brief Return the string representation of the given type of netlist enum name (e.g. net_spice returns "net_spice").
/// @param e the type of netlist.
/// @return The string representation of given type of netlist.
std::string netlist_type_to_plain_string(NetlistType e);

/// @brief Return the type of netlist for given string (e.g. "net_spice" returns net_spice).
/// @param s the plain string.
/// @return The type of netlist.
NetlistType plain_string_to_netlist_type(const std::string &s);

/// @brief All the supported types of include.
enum IncludeType {
    inc_none,     ///< No include type.
    inc_standard, ///< Standard include.
    inc_hdl,      ///< Include a Hardware Description Language (HDL).
    inc_ahdl,     ///< Include an Analog Hardware Description Language (AHDL).
    inc_cpp,      ///< Include a C or C++ code.
};

/// @brief Return the string representation of the given type of include enum name (e.g. inc_standard returns "inc_standard").
/// @param e the type of include.
/// @return The string representation of given type of include.
std::string include_type_to_plain_string(IncludeType e);

/// @brief Return the type of include for given string (e.g. "inc_standard" returns inc_standard).
/// @param s the plain string.
/// @return The type of include.
IncludeType plain_string_to_include_type(const std::string &s);

/// @brief All possible operators.
enum Operator {
    op_none,
    op_assign,
    op_plus,
    op_minus,
    op_mult,
    op_div,
    op_or,
    op_and,
    op_xor,
    op_not,
    op_bor,
    op_band,
    op_bsl,
    op_bsr,
    op_eq,
    op_neq,
    op_lt,
    op_gt,
    op_le,
    op_ge,
    op_mod,
    op_pow
};

/// @brief Return string representation of given operator.
/// @param e the operator.
/// @return The string representation of given operator.
std::string operator_to_string(Operator e);

/// @brief Return the operator represented by the string.
/// @param s the string.
/// @return The operator.
Operator string_to_operator(const std::string &s);

/// @brief Return the string representation of the given operator enum name (e.g. op_and returns "op_and").
/// @param e the operator.
/// @return The string representation of given operator.
std::string operator_to_plain_string(Operator e);

/// @brief Return the operator for given string (e.g. "op_and" returns op_and).
/// @param s the plain string.
/// @return The operator.
Operator plain_string_to_operator(const std::string &s);

/// @brief Content delimiters.
enum DelimiterType {
    dlm_none,   ///< No delimiter type.
    dlm_round,  ///< Round brackets ( )
    dlm_square, ///< Square brackets [ ]
    dlm_curly,  ///< Curly brackets { }
    dlm_apex,   ///< Apex ' '
    dlm_quotes  ///< Quotes " "
};

/// @brief Return the string representation of the given type of delimiter enum name (e.g. dlm_round returns "dlm_round").
/// @param e The type of delimiter.
/// @return The string representation of given type of delimiter.
std::string delimiter_type_to_plain_string(DelimiterType e);

/// @brief Return the type of delimiter for given string (e.g. "dlm_round" returns dlm_round).
/// @param s the plain string.
/// @return The type of delimiter.
DelimiterType plain_string_to_delimiter_type(const std::string &s);

/// @brief Return the opening character for the given type of delimiter (e.g. dlm_round returns '(').
/// @param e The type of delimiter.
/// @return The opening character for the delimiter.
char delimiter_type_open_char(DelimiterType e);

/// @brief Return the closing character for the given type of delimiter (e.g. dlm_round returns '(').
/// @param e The type of delimiter.
/// @return The closing character for the delimiter.
char delimiter_type_close_char(DelimiterType e);

/// @brief International System of Units (SI)
enum SiPrefix {
    si_yotta, ///< Y  10e24
    si_zetta, ///< Z  10e21
    si_exa,   ///< E  10e18
    si_peta,  ///< P  10e15
    si_tera,  ///< T  10e12
    si_giga,  ///< G  10e9
    si_mega,  ///< M  10e6
    si_chilo, ///< k  10e3
    si_none,  ///< -  1
    si_milli, ///< m  10e-3
    si_micro, ///< u  10e-6
    si_nano,  ///< n  10e-9
    si_pico,  ///< p  10e-12
    si_femto, ///< f  10e-15
    si_atto,  ///< a  10e-18
    si_zepto, ///< z  10e-21
    si_yocto, ///< y  10e-24
};

/// @brief Return the string representation of the given type of SI unit (e.g. si_chilo returns "si_chilo").
/// @param e the type of SI unit.
/// @return The string representation of given type of SI unit.
std::string siprefix_to_plain_string(SiPrefix e);

/// @brief Return the type of SI unit for given string (e.g. "si_chilo" returns si_chilo).
/// @param s the plain string.
/// @return The type of SI unit.
SiPrefix plain_string_to_siprefix(const std::string &s);

/// @brief Return the type of SI unit for given letter (e.g. 'k' returns si_chilo).
/// @param e the letter representing the SI unit.
/// @return The type of SI unit.
SiPrefix letter_to_siprefix(char l);

/// @brief Return the letter representation of the given type of SI unit (e.g. si_chilo returns 'k').
/// @param e the type of SI unit.
/// @return The letter representation of given type of SI unit.
char siprefix_to_letter(SiPrefix e);

/// @brief Return the scaling factor of the given type of SI unit (e.g. si_chilo returns 1e03).
/// @param e the type of SI unit.
/// @return The scaling factor of given type of SI unit.
double siprefix_to_scaling_factor(SiPrefix e);

/// @brief Return the scaling factor of the given type of SI unit expressed as a letter (e.g. 'k' returns 1e03).
/// @param e the SI unit letter.
/// @return The scaling factor of given type of SI unit letter.
double letter_to_scaling_factor(char l);

/// @brief The type of control statement.
enum ParameterType {
    param_none,       ///< No type of parameter.
    param_assign,     ///< Normal parameter assign.
    param_tabular,    ///< A tabular parameter.
    param_list,       ///< A list of values.
    param_arithmetic, ///< An arithmetic expression.
    param_no_equal,   ///< A label followed by its value, without the equal sign.
};

/// @brief Return the string representation of the given type of parameter (e.g. param_assign returns "param_assign").
/// @param e The type of parameter.
/// @return The string representation of given type of parameter.
std::string parameter_type_to_plain_string(ParameterType e);

/// @brief Return the type of parameter for given string (e.g. "ctrl_alter" returns ctrl_alter).
/// @param s the plain string.
/// @return The type of parameter.
ParameterType plain_string_to_parameter_type(const std::string &s);

/// @brief The type of control statement.
enum ControlType {
    ctrl_none,       ///< No control statement.
    ctrl_alter,      ///< A single alter statement.
    ctrl_altergroup, ///< A group of alter statements.
    ctrl_save,       ///< Save statement.
    ctrl_option,     ///< Set compilers option.
    ctrl_nodeset,    ///< DC Analysis Conditions.
    // ctrl_call_tcl, ///<
    // ctrl_use_tcl, ///<
    ctrl_defmac, ///< Macro Definition
    ctrl_chrent, ///< Piece Wise Linear Source
    // ctrl_ic, ///<
    ctrl_print, ///< Print contents of a tabular listing.
    ctrl_plot,  ///< Plotting of Simulation Results
    // ctrl_ffile, ///<
    ctrl_probe, ///<
    // ctrl_defwave, ///<
    ctrl_temp, ///<
    ctrl_meas, ///<
    // ctrl_connect, ///<
    // ctrl_value_access, ///<
};

/// @brief Return the string representation of the given type of control statement (e.g. ctrl_alter returns "ctrl_alter").
/// @param e The type of control statement.
/// @return The string representation of given type of control statement.
std::string control_type_to_plain_string(ControlType e);

/// @brief Return the type of control statement for given string (e.g. "ctrl_alter" returns ctrl_alter).
/// @param s the plain string.
/// @return The type of control statement.
ControlType plain_string_to_control_type(const std::string &s);

} // namespace edacurry