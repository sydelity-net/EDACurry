/// @file   enums.cpp
/// @author Enrico Fraccaroli (enrico.fraccaroli@gmail.com)
/// @copyright Copyright (c) 2021 sydelity.net (info@sydelity.com)
/// Distributed under the MIT License (MIT) (See accompanying LICENSE file or
///  copy at http://opensource.org/licenses/MIT)

#include "enums.hpp"

#include "enums.hpp"

namespace edacurry
{
std::string netlist_type_to_plain_string(NetlistType netlist_type)
{
    if (netlist_type == net_spice)
        return "net_spice";
    if (netlist_type == net_spectre)
        return "net_spectre";
    if (netlist_type == net_eldo)
        return "net_eldo";
    return "net_none";
}

NetlistType plain_string_to_netlist_type(const std::string &s)
{
    if (s == "net_spice")
        return net_spice;
    if (s == "net_spectre")
        return net_spectre;
    if (s == "net_eldo")
        return net_eldo;
    return net_none;
}

std::string include_type_to_plain_string(IncludeType include_type)
{
    if (include_type == inc_standard)
        return "inc_standard";
    if (include_type == inc_hdl)
        return "inc_hdl";
    if (include_type == inc_ahdl)
        return "inc_ahdl";
    if (include_type == inc_cpp)
        return "inc_cpp";
    return "inc_none";
}

IncludeType plain_string_to_include_type(const std::string &s)
{
    if (s == "inc_standard")
        return inc_standard;
    if (s == "inc_hdl")
        return inc_hdl;
    if (s == "inc_ahdl")
        return inc_ahdl;
    if (s == "inc_cpp")
        return inc_cpp;
    return inc_none;
}

std::string operator_to_string(Operator op)
{
    switch (op) {
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
    if (s == "=")
        return op_assign;
    if (s == "+")
        return op_plus;
    if (s == "-")
        return op_minus;
    if (s == "*")
        return op_mult;
    if (s == "/")
        return op_div;
    if (s == "||")
        return op_or;
    if (s == "&&")
        return op_and;
    if (s == "^^")
        return op_xor;
    if (s == "!")
        return op_not;
    if (s == "|")
        return op_bor;
    if (s == "&")
        return op_band;
    if (s == "<<")
        return op_bsl;
    if (s == ">>")
        return op_bsr;
    if (s == "==")
        return op_eq;
    if (s == "!=")
        return op_neq;
    if (s == "<")
        return op_lt;
    if (s == ">")
        return op_gt;
    if (s == "<=")
        return op_le;
    if (s == ">=")
        return op_ge;
    if (s == "MOD")
        return op_mod;
    if (s == "POW")
        return op_pow;
    return op_none;
}

std::string operator_to_plain_string(Operator op)
{
    if (op == op_assign)
        return "op_assign";
    if (op == op_plus)
        return "op_plus";
    if (op == op_minus)
        return "op_minus";
    if (op == op_mult)
        return "op_mult";
    if (op == op_div)
        return "op_div";
    if (op == op_or)
        return "op_or";
    if (op == op_and)
        return "op_and";
    if (op == op_xor)
        return "op_xor";
    if (op == op_not)
        return "op_not";
    if (op == op_bor)
        return "op_bor";
    if (op == op_band)
        return "op_band";
    if (op == op_bsl)
        return "op_bsl";
    if (op == op_bsr)
        return "op_bsr";
    if (op == op_eq)
        return "op_eq";
    if (op == op_neq)
        return "op_neq";
    if (op == op_lt)
        return "op_lt";
    if (op == op_gt)
        return "op_gt";
    if (op == op_le)
        return "op_le";
    if (op == op_ge)
        return "op_ge";
    if (op == op_mod)
        return "op_mod";
    if (op == op_pow)
        return "op_pow";
    return "op_none";
}

Operator plain_string_to_operator(const std::string &s)
{
    if (s == "op_assign")
        return op_assign;
    if (s == "op_plus")
        return op_plus;
    if (s == "op_minus")
        return op_minus;
    if (s == "op_mult")
        return op_mult;
    if (s == "op_div")
        return op_div;
    if (s == "op_or")
        return op_or;
    if (s == "op_and")
        return op_and;
    if (s == "op_xor")
        return op_xor;
    if (s == "op_not")
        return op_not;
    if (s == "op_bor")
        return op_bor;
    if (s == "op_band")
        return op_band;
    if (s == "op_bsl")
        return op_bsl;
    if (s == "op_bsr")
        return op_bsr;
    if (s == "op_eq")
        return op_eq;
    if (s == "op_neq")
        return op_neq;
    if (s == "op_lt")
        return op_lt;
    if (s == "op_gt")
        return op_gt;
    if (s == "op_le")
        return op_le;
    if (s == "op_ge")
        return op_ge;
    if (s == "op_mod")
        return op_mod;
    if (s == "op_pow")
        return op_pow;
    return op_none;
}

std::string delimitertype_to_plain_string(DelimiterType scp)
{
    if (scp == dlm_round)
        return "dlm_round";
    if (scp == dlm_square)
        return "dlm_square";
    if (scp == dlm_curly)
        return "dlm_curly";
    if (scp == dlm_apex)
        return "dlm_apex";
    if (scp == dlm_quotes)
        return "dlm_quotes";
    return "dlm_none";
}

DelimiterType plain_string_to_delimitertype(const std::string &s)
{
    if (s == "dlm_round")
        return dlm_round;
    if (s == "dlm_square")
        return dlm_square;
    if (s == "dlm_curly")
        return dlm_curly;
    if (s == "dlm_apex")
        return dlm_apex;
    if (s == "dlm_quotes")
        return dlm_quotes;
    return dlm_none;
}

std::string siprefix_to_plain_string(SiPrefix op)
{
    if (op == si_yotta)
        return "si_yotta";
    if (op == si_zetta)
        return "si_zetta";
    if (op == si_exa)
        return "si_exa";
    if (op == si_peta)
        return "si_peta";
    if (op == si_tera)
        return "si_tera";
    if (op == si_giga)
        return "si_giga";
    if (op == si_mega)
        return "si_mega";
    if (op == si_chilo)
        return "si_chilo";
    if (op == si_milli)
        return "si_milli";
    if (op == si_micro)
        return "si_micro";
    if (op == si_nano)
        return "si_nano";
    if (op == si_pico)
        return "si_pico";
    if (op == si_femto)
        return "si_femto";
    if (op == si_atto)
        return "si_atto";
    if (op == si_zepto)
        return "si_zepto";
    if (op == si_yocto)
        return "si_yocto";
    return "si_none";
}

SiPrefix plain_string_to_siprefix(const std::string &s)
{
    if (s == "si_yotta")
        return si_yotta;
    if (s == "si_zetta")
        return si_zetta;
    if (s == "si_exa")
        return si_exa;
    if (s == "si_peta")
        return si_peta;
    if (s == "si_tera")
        return si_tera;
    if (s == "si_giga")
        return si_giga;
    if (s == "si_mega")
        return si_mega;
    if (s == "si_chilo")
        return si_chilo;
    if (s == "si_milli")
        return si_milli;
    if (s == "si_micro")
        return si_micro;
    if (s == "si_nano")
        return si_nano;
    if (s == "si_pico")
        return si_pico;
    if (s == "si_femto")
        return si_femto;
    if (s == "si_atto")
        return si_atto;
    if (s == "si_zepto")
        return si_zepto;
    if (s == "si_yocto")
        return si_yocto;
    return si_none;
}

SiPrefix letter_to_siprefix(char l)
{
    if (l == 'Y')
        return si_yotta;
    if (l == 'Z')
        return si_zetta;
    if (l == 'E')
        return si_exa;
    if (l == 'P')
        return si_peta;
    if (l == 'T')
        return si_tera;
    if (l == 'G')
        return si_giga;
    if (l == 'M')
        return si_mega;
    if (l == 'k')
        return si_chilo;
    if (l == 'm')
        return si_milli;
    if (l == 'u')
        return si_micro;
    if (l == 'n')
        return si_nano;
    if (l == 'p')
        return si_pico;
    if (l == 'f')
        return si_femto;
    if (l == 'a')
        return si_atto;
    if (l == 'z')
        return si_zepto;
    if (l == 'y')
        return si_yocto;
    return si_none;
}

char siprefix_to_letter(SiPrefix op)
{
    if (op == si_yotta)
        return 'Y';
    if (op == si_zetta)
        return 'Z';
    if (op == si_exa)
        return 'E';
    if (op == si_peta)
        return 'P';
    if (op == si_tera)
        return 'T';
    if (op == si_giga)
        return 'G';
    if (op == si_mega)
        return 'M';
    if (op == si_chilo)
        return 'k';
    if (op == si_milli)
        return 'm';
    if (op == si_micro)
        return 'u';
    if (op == si_nano)
        return 'n';
    if (op == si_pico)
        return 'p';
    if (op == si_femto)
        return 'f';
    if (op == si_atto)
        return 'a';
    if (op == si_zepto)
        return 'z';
    if (op == si_yocto)
        return 'y';
    return ' ';
}

double siprefix_to_scaling_factor(SiPrefix op)
{
    if (op == si_yotta)
        return 1e+24;
    if (op == si_zetta)
        return 1e+21;
    if (op == si_exa)
        return 1e+18;
    if (op == si_peta)
        return 1e+15;
    if (op == si_tera)
        return 1e+12;
    if (op == si_giga)
        return 1e+9;
    if (op == si_mega)
        return 1e+6;
    if (op == si_chilo)
        return 1e+3;
    if (op == si_milli)
        return 1e-3;
    if (op == si_micro)
        return 1e-6;
    if (op == si_nano)
        return 1e-9;
    if (op == si_pico)
        return 1e-12;
    if (op == si_femto)
        return 1e-15;
    if (op == si_atto)
        return 1e-18;
    if (op == si_zepto)
        return 1e-21;
    if (op == si_yocto)
        return 1e-24;
    return 1;
}

double letter_to_scaling_factor(char e)
{
    if (e == 'Y')
        return 1e+24;
    if (e == 'Z')
        return 1e+21;
    if (e == 'E')
        return 1e+18;
    if (e == 'P')
        return 1e+15;
    if (e == 'T')
        return 1e+12;
    if (e == 'G')
        return 1e+9;
    if (e == 'M')
        return 1e+6;
    if (e == 'k')
        return 1e+3;
    if (e == 'm')
        return 1e-3;
    if (e == 'u')
        return 1e-6;
    if (e == 'n')
        return 1e-9;
    if (e == 'p')
        return 1e-12;
    if (e == 'f')
        return 1e-15;
    if (e == 'a')
        return 1e-18;
    if (e == 'z')
        return 1e-21;
    if (e == 'y')
        return 1e-24;
    return 1;
}

std::string controltype_to_plain_string(ControlType ctrl)
{
    if (ctrl == ctrl_alter)
        return "ctrl_alter";
    if (ctrl == ctrl_altergroup)
        return "ctrl_altergroup";
    if (ctrl == ctrl_save)
        return "ctrl_save";
    if (ctrl == ctrl_option)
        return "ctrl_option";
    if (ctrl == ctrl_nodeset)
        return "ctrl_nodeset";
    if (ctrl == ctrl_plot)
        return "ctrl_plot";
    if (ctrl == ctrl_chrent)
        return "ctrl_chrent";
    if (ctrl == ctrl_defmac)
        return "ctrl_defmac";
    return "ctrl_none";
}

ControlType plain_string_to_controltype(const std::string &s)
{
    if (s == "ctrl_alter")
        return ctrl_alter;
    if (s == "ctrl_altergroup")
        return ctrl_altergroup;
    if (s == "ctrl_save")
        return ctrl_save;
    if (s == "ctrl_option")
        return ctrl_option;
    if (s == "ctrl_nodeset")
        return ctrl_nodeset;
    if (s == "ctrl_plot")
        return ctrl_plot;
    if (s == "ctrl_chrent")
        return ctrl_chrent;
    if (s == "ctrl_defmac")
        return ctrl_defmac;
    return ctrl_none;
}
} // namespace edacurry