/// @file   enums.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "enums.hpp"

#include "enums.hpp"

namespace edacurry
{
std::string netlist_type_to_plain_string(NetlistType e)
{
    if (e == net_spice) {
        return "net_spice";
    }
    if (e == net_spectre) {
        return "net_spectre";
    }
    if (e == net_eldo) {
        return "net_eldo";
    }
    return "net_none";
}

NetlistType plain_string_to_netlist_type(const std::string &s)
{
    if (s == "net_spice") {
        return net_spice;
    }
    if (s == "net_spectre") {
        return net_spectre;
    }
    if (s == "net_eldo") {
        return net_eldo;
    }
    return net_none;
}

std::string include_type_to_plain_string(IncludeType e)
{
    if (e == inc_standard) {
        return "inc_standard";
    }
    if (e == inc_hdl) {
        return "inc_hdl";
    }
    if (e == inc_ahdl) {
        return "inc_ahdl";
    }
    if (e == inc_cpp) {
        return "inc_cpp";
    }
    return "inc_none";
}

IncludeType plain_string_to_include_type(const std::string &s)
{
    if (s == "inc_standard") {
        return inc_standard;
    }
    if (s == "inc_hdl") {
        return inc_hdl;
    }
    if (s == "inc_ahdl") {
        return inc_ahdl;
    }
    if (s == "inc_cpp") {
        return inc_cpp;
    }
    return inc_none;
}

std::string operator_to_string(Operator e)
{
    switch (e) {
    case op_assign:
        return "=";
    case op_plus:
        return "+";
    case op_minus:
        return "-";
    case op_mult:
        return "*";
    case op_div:
        return "/";
    case op_or:
        return "||";
    case op_and:
        return "&&";
    case op_xor:
        return "^^";
    case op_not:
        return "!";
    case op_bor:
        return "|";
    case op_band:
        return "&";
    case op_bsl:
        return "<<";
    case op_bsr:
        return ">>";
    case op_eq:
        return "==";
    case op_neq:
        return "!=";
    case op_lt:
        return "<";
    case op_gt:
        return ">";
    case op_le:
        return "<=";
    case op_ge:
        return ">=";
    case op_mod:
        return "MOD";
    case op_pow:
        return "POW";
    case op_none:
    default:
        return "NONE";
    }
}

Operator string_to_operator(const std::string &s)
{
    if (s == "=") {
        return op_assign;
    }
    if (s == "+") {
        return op_plus;
    }
    if (s == "-") {
        return op_minus;
    }
    if (s == "*") {
        return op_mult;
    }
    if (s == "/") {
        return op_div;
    }
    if (s == "||") {
        return op_or;
    }
    if (s == "&&") {
        return op_and;
    }
    if (s == "^^") {
        return op_xor;
    }
    if (s == "!") {
        return op_not;
    }
    if (s == "|") {
        return op_bor;
    }
    if (s == "&") {
        return op_band;
    }
    if (s == "<<") {
        return op_bsl;
    }
    if (s == ">>") {
        return op_bsr;
    }
    if (s == "==") {
        return op_eq;
    }
    if (s == "!=") {
        return op_neq;
    }
    if (s == "<") {
        return op_lt;
    }
    if (s == ">") {
        return op_gt;
    }
    if (s == "<=") {
        return op_le;
    }
    if (s == ">=") {
        return op_ge;
    }
    if (s == "MOD") {
        return op_mod;
    }
    if (s == "POW") {
        return op_pow;
    }
    return op_none;
}

std::string operator_to_plain_string(Operator e)
{
    switch (e) {
    case op_assign:
        return "op_assign";
    case op_plus:
        return "op_plus";
    case op_minus:
        return "op_minus";
    case op_mult:
        return "op_mult";
    case op_div:
        return "op_div";
    case op_or:
        return "op_or";
    case op_and:
        return "op_and";
    case op_xor:
        return "op_xor";
    case op_not:
        return "op_not";
    case op_bor:
        return "op_bor";
    case op_band:
        return "op_band";
    case op_bsl:
        return "op_bsl";
    case op_bsr:
        return "op_bsr";
    case op_eq:
        return "op_eq";
    case op_neq:
        return "op_neq";
    case op_lt:
        return "op_lt";
    case op_gt:
        return "op_gt";
    case op_le:
        return "op_le";
    case op_ge:
        return "op_ge";
    case op_mod:
        return "op_mod";
    case op_pow:
        return "op_pow";
    case op_none:
    default:
        return "op_none";
    }
}

Operator plain_string_to_operator(const std::string &s)
{
    if (s == "op_assign") {
        return op_assign;
    }
    if (s == "op_plus") {
        return op_plus;
    }
    if (s == "op_minus") {
        return op_minus;
    }
    if (s == "op_mult") {
        return op_mult;
    }
    if (s == "op_div") {
        return op_div;
    }
    if (s == "op_or") {
        return op_or;
    }
    if (s == "op_and") {
        return op_and;
    }
    if (s == "op_xor") {
        return op_xor;
    }
    if (s == "op_not") {
        return op_not;
    }
    if (s == "op_bor") {
        return op_bor;
    }
    if (s == "op_band") {
        return op_band;
    }
    if (s == "op_bsl") {
        return op_bsl;
    }
    if (s == "op_bsr") {
        return op_bsr;
    }
    if (s == "op_eq") {
        return op_eq;
    }
    if (s == "op_neq") {
        return op_neq;
    }
    if (s == "op_lt") {
        return op_lt;
    }
    if (s == "op_gt") {
        return op_gt;
    }
    if (s == "op_le") {
        return op_le;
    }
    if (s == "op_ge") {
        return op_ge;
    }
    if (s == "op_mod") {
        return op_mod;
    }
    if (s == "op_pow") {
        return op_pow;
    }
    return op_none;
}

std::string delimiter_type_to_plain_string(DelimiterType e)
{
    switch (e) {
    case dlm_round:
        return "dlm_round";
    case dlm_square:
        return "dlm_square";
    case dlm_curly:
        return "dlm_curly";
    case dlm_apex:
        return "dlm_apex";
    case dlm_quotes:
        return "dlm_quotes";
    case dlm_none:
    default:
        return "dlm_none";
    }
}

DelimiterType plain_string_to_delimiter_type(const std::string &s)
{
    if (s == "dlm_round") {
        return dlm_round;
    }
    if (s == "dlm_square") {
        return dlm_square;
    }
    if (s == "dlm_curly") {
        return dlm_curly;
    }
    if (s == "dlm_apex") {
        return dlm_apex;
    }
    if (s == "dlm_quotes") {
        return dlm_quotes;
    }
    return dlm_none;
}

char delimiter_type_open_char(DelimiterType e)
{
    switch (e) {
    case dlm_round:
        return '(';
    case dlm_square:
        return '[';
    case dlm_curly:
        return '{';
    case dlm_apex:
        return '\'';
    case dlm_quotes:
        return '\"';
    case dlm_none:
    default:
        return ' ';
    }
}

char delimiter_type_close_char(DelimiterType e)
{
    switch (e) {
    case dlm_round:
        return ')';
    case dlm_square:
        return ']';
    case dlm_curly:
        return '}';
    case dlm_apex:
        return '\'';
    case dlm_quotes:
        return '\"';
    case dlm_none:
    default:
        return ' ';
    }
}

std::string siprefix_to_plain_string(SiPrefix e)
{
    switch (e) {
    case si_yotta:
        return "si_yotta";
    case si_zetta:
        return "si_zetta";
    case si_exa:
        return "si_exa";
    case si_peta:
        return "si_peta";
    case si_tera:
        return "si_tera";
    case si_giga:
        return "si_giga";
    case si_mega:
        return "si_mega";
    case si_chilo:
        return "si_chilo";
    case si_milli:
        return "si_milli";
    case si_micro:
        return "si_micro";
    case si_nano:
        return "si_nano";
    case si_pico:
        return "si_pico";
    case si_femto:
        return "si_femto";
    case si_atto:
        return "si_atto";
    case si_zepto:
        return "si_zepto";
    case si_yocto:
        return "si_yocto";
    case si_none:
    default:
        return "si_none";
    }
}

SiPrefix plain_string_to_siprefix(const std::string &s)
{
    if (s == "si_yotta") {
        return si_yotta;
    }
    if (s == "si_zetta") {
        return si_zetta;
    }
    if (s == "si_exa") {
        return si_exa;
    }
    if (s == "si_peta") {
        return si_peta;
    }
    if (s == "si_tera") {
        return si_tera;
    }
    if (s == "si_giga") {
        return si_giga;
    }
    if (s == "si_mega") {
        return si_mega;
    }
    if (s == "si_chilo") {
        return si_chilo;
    }
    if (s == "si_milli") {
        return si_milli;
    }
    if (s == "si_micro") {
        return si_micro;
    }
    if (s == "si_nano") {
        return si_nano;
    }
    if (s == "si_pico") {
        return si_pico;
    }
    if (s == "si_femto") {
        return si_femto;
    }
    if (s == "si_atto") {
        return si_atto;
    }
    if (s == "si_zepto") {
        return si_zepto;
    }
    if (s == "si_yocto") {
        return si_yocto;
    }
    return si_none;
}

SiPrefix letter_to_siprefix(char l)
{
    if (l == 'Y') {
        return si_yotta;
    }
    if (l == 'Z') {
        return si_zetta;
    }
    if (l == 'E') {
        return si_exa;
    }
    if (l == 'P') {
        return si_peta;
    }
    if (l == 'T') {
        return si_tera;
    }
    if (l == 'G') {
        return si_giga;
    }
    if (l == 'M') {
        return si_mega;
    }
    if (l == 'k') {
        return si_chilo;
    }
    if (l == 'm') {
        return si_milli;
    }
    if (l == 'u') {
        return si_micro;
    }
    if (l == 'n') {
        return si_nano;
    }
    if (l == 'p') {
        return si_pico;
    }
    if (l == 'f') {
        return si_femto;
    }
    if (l == 'a') {
        return si_atto;
    }
    if (l == 'z') {
        return si_zepto;
    }
    if (l == 'y') {
        return si_yocto;
    }
    return si_none;
}

char siprefix_to_letter(SiPrefix e)
{
    switch (e) {
    case si_yotta:
        return 'Y';
    case si_zetta:
        return 'Z';
    case si_exa:
        return 'E';
    case si_peta:
        return 'P';
    case si_tera:
        return 'T';
    case si_giga:
        return 'G';
    case si_mega:
        return 'M';
    case si_chilo:
        return 'k';
    case si_milli:
        return 'm';
    case si_micro:
        return 'u';
    case si_nano:
        return 'n';
    case si_pico:
        return 'p';
    case si_femto:
        return 'f';
    case si_atto:
        return 'a';
    case si_zepto:
        return 'z';
    case si_yocto:
        return 'y';
    case si_none:
    default:
        return ' ';
    }
}

double siprefix_to_scaling_factor(SiPrefix e)
{
    switch (e) {
    case si_yotta:
        return 1e+24;
    case si_zetta:
        return 1e+21;
    case si_exa:
        return 1e+18;
    case si_peta:
        return 1e+15;
    case si_tera:
        return 1e+12;
    case si_giga:
        return 1e+9;
    case si_mega:
        return 1e+6;
    case si_chilo:
        return 1e+3;
    case si_milli:
        return 1e-3;
    case si_micro:
        return 1e-6;
    case si_nano:
        return 1e-9;
    case si_pico:
        return 1e-12;
    case si_femto:
        return 1e-15;
    case si_atto:
        return 1e-18;
    case si_zepto:
        return 1e-21;
    case si_yocto:
        return 1e-24;
    case si_none:
    default:
        return 1;
    }
}

double letter_to_scaling_factor(char e)
{
    if (e == 'Y') {
        return 1e+24;
    }
    if (e == 'Z') {
        return 1e+21;
    }
    if (e == 'E') {
        return 1e+18;
    }
    if (e == 'P') {
        return 1e+15;
    }
    if (e == 'T') {
        return 1e+12;
    }
    if (e == 'G') {
        return 1e+9;
    }
    if (e == 'M') {
        return 1e+6;
    }
    if ((e == 'k') || (e == 'K')) {
        return 1e+3;
    }
    if (e == 'm') {
        return 1e-3;
    }
    if ((e == 'u') || (e == 'U')) {
        return 1e-6;
    }
    if ((e == 'n') || (e == 'N')) {
        return 1e-9;
    }
    if (e == 'p') {
        return 1e-12;
    }
    if ((e == 'f') || (e == 'F')) {
        return 1e-15;
    }
    if (e == 'a') {
        return 1e-18;
    }
    if (e == 'z') {
        return 1e-21;
    }
    if (e == 'y') {
        return 1e-24;
    }
    return 1;
}

std::string parameter_type_to_plain_string(ParameterType e)
{
    switch (e) {
    case param_assign:
        return "param_assign";
    case param_tabular:
        return "param_tabular";
    case param_list:
        return "param_list";
    case param_arithmetic:
        return "param_arithmetic";
    case param_no_equal:
        return "param_no_equal";
    case param_none:
    default:
        return "param_none";
    }
}

ParameterType plain_string_to_parameter_type(const std::string &s)
{
    if (s == "param_assign") {
        return param_assign;
    }
    if (s == "param_tabular") {
        return param_tabular;
    }
    if (s == "param_list") {
        return param_list;
    }
    if (s == "param_arithmetic") {
        return param_arithmetic;
    }
    if (s == "param_no_equal") {
        return param_no_equal;
    }
    return param_none;
}

std::string control_type_to_plain_string(ControlType e)
{
    switch (e) {
    case ctrl_alter:
        return "ctrl_alter";
    case ctrl_altergroup:
        return "ctrl_altergroup";
    case ctrl_save:
        return "ctrl_save";
    case ctrl_option:
        return "ctrl_option";
    case ctrl_nodeset:
        return "ctrl_nodeset";
    case ctrl_print:
        return "ctrl_print";
    case ctrl_plot:
        return "ctrl_plot";
    case ctrl_chrent:
        return "ctrl_chrent";
    case ctrl_defmac:
        return "ctrl_defmac";
    case ctrl_temp:
        return "ctrl_temp";
    case ctrl_meas:
        return "ctrl_meas";
    case ctrl_none:
    default:
        return "ctrl_none";
    }
}

ControlType plain_string_to_control_type(const std::string &s)
{
    if (s == "ctrl_alter") {
        return ctrl_alter;
    }
    if (s == "ctrl_altergroup") {
        return ctrl_altergroup;
    }
    if (s == "ctrl_save") {
        return ctrl_save;
    }
    if (s == "ctrl_option") {
        return ctrl_option;
    }
    if (s == "ctrl_nodeset") {
        return ctrl_nodeset;
    }
    if (s == "ctrl_print") {
        return ctrl_print;
    }
    if (s == "ctrl_plot") {
        return ctrl_plot;
    }
    if (s == "ctrl_chrent") {
        return ctrl_chrent;
    }
    if (s == "ctrl_defmac") {
        return ctrl_defmac;
    }
    if (s == "ctrl_temp") {
        return ctrl_temp;
    }
    if (s == "ctrl_meas") {
        return ctrl_meas;
    }
    return ctrl_none;
}
} // namespace edacurry