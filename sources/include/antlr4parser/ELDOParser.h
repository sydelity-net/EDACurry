
// Generated from g4files/ELDOParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace edacurry {


class  ELDOParser : public antlr4::Parser {
public:
  enum {
    COMMENT = 1, INCLUDE = 2, DSPF_INCLUDE = 3, LIB = 4, LIB_END = 5, SUBCKT = 6, 
    SUBCKT_END = 7, NETLIST_END = 8, GLOBAL = 9, MODEL_DEF = 10, VERILOG = 11, 
    GLOBAL_PARAM = 12, ALTER = 13, SAVE = 14, OPTION = 15, OPT = 16, NODESET = 17, 
    CALL_TCL = 18, CHRENT = 19, CONNECT = 20, DEFMAC = 21, DEFWAVE = 22, 
    FFILE = 23, IC = 24, MEAS = 25, PLOT = 26, PRINT = 27, PROBE = 28, TEMP_SET = 29, 
    USE_TCL = 30, PARAM = 31, TEMP = 32, KEY = 33, NONOISE = 34, TABLE = 35, 
    PWL = 36, SIN = 37, SFFM = 38, PULSE = 39, INTERP = 40, MOD = 41, MODEL = 42, 
    WHEN = 43, START = 44, START_OF_RUN = 45, END_OF_RUN = 46, END = 47, 
    FIND = 48, PP = 49, TRIG = 50, TARG = 51, PARAM_LIST_START = 52, PIN_LIST_START = 53, 
    NET_LIST_START = 54, PORT_LIST_START = 55, COUPLING_LIST_START = 56, 
    GENERIC_LIST_START = 57, AC = 58, AGE = 59, CHECKSOA = 60, DC = 61, 
    DCHIZ = 62, DCMISMATCH = 63, DEX = 64, DSP = 65, DSPMOD = 66, FOUR = 67, 
    LSTB = 68, MC = 69, NOISE = 70, NOISETRAN = 71, OP = 72, OPTFOUR = 73, 
    OPTIMIZE = 74, OPTNOISE = 75, PZ = 76, RAMP = 77, SENS = 78, SENSAC = 79, 
    SENSPARAM = 80, SNF = 81, SOLVE = 82, TF = 83, TRAN = 84, WCASE = 85, 
    EXTRACT = 86, RESISTOR = 87, CAPACITOR = 88, INDUCTOR = 89, COUPLED_INDUCTOR = 90, 
    DIFFUSION_RESISTOR = 91, TRANSMISSION_LINE = 92, LOSSY_TRANSMISSION_LINE = 93, 
    LTL_W_MODEL = 94, LTL_U_MODEL = 95, JUNCTION_DIODE = 96, BJT = 97, JFET = 98, 
    MOSFET = 99, S_DOMAIN_FILTER = 100, Z_DOMAIN_FILTER = 101, SUBCK_INSTANCE = 102, 
    IVSOURCE = 103, ICSOURCE = 104, VCVS = 105, CCCS = 106, VCCS = 107, 
    CCVS = 108, OPA = 109, SW = 110, NOISE_FUNCTION = 111, DIG_NAND = 112, 
    DIG_AND = 113, DIG_NOR = 114, DIG_OR = 115, DIG_XOR = 116, EQUAL = 117, 
    EXCLAMATION_MARK = 118, LESS_THAN = 119, GREATER_THAN = 120, LESS_THAN_EQUAL = 121, 
    GREATER_THAN_EQUAL = 122, LOGIC_EQUAL = 123, LOGIC_NOT_EQUAL = 124, 
    LOGIC_AND = 125, LOGIC_OR = 126, LOGIC_BITWISE_AND = 127, LOGIC_BITWISE_OR = 128, 
    LOGIC_XOR = 129, BITWISE_SHIFT_LEFT = 130, BITWISE_SHIFT_RIGHT = 131, 
    POWER_OPERATOR = 132, AND = 133, OR = 134, COLON = 135, SEMICOLON = 136, 
    PLUS = 137, MINUS = 138, STAR = 139, OPEN_ROUND = 140, CLOSE_ROUND = 141, 
    OPEN_SQUARE = 142, CLOSE_SQUARE = 143, OPEN_CURLY = 144, CLOSE_CURLY = 145, 
    QUESTION_MARK = 146, COMMA = 147, DOLLAR = 148, AMPERSAND = 149, DOT = 150, 
    UNDERSCORE = 151, AT_SIGN = 152, POUND_SIGN = 153, BACKSLASH = 154, 
    SLASH = 155, APEX = 156, QUOTES = 157, PIPE = 158, PERCENT = 159, CARET = 160, 
    TILDE = 161, ARROW = 162, PERCENTAGE = 163, COMPLEX = 164, NUMBER = 165, 
    ID = 166, STRING = 167, NL = 168, WS = 169, CNL = 170
  };

  enum {
    RuleNetlist = 0, RuleNetlist_title = 1, RuleNetlist_entity = 2, RuleInclude = 3, 
    RuleStandard_include = 4, RuleVerilog_include = 5, RuleDspf_include = 6, 
    RuleLibrary = 7, RuleLibrary_key = 8, RuleLibrary_path = 9, RuleLibrary_name = 10, 
    RuleLibrary_def = 11, RuleLibrary_def_header = 12, RuleLibrary_def_content = 13, 
    RuleLibrary_def_footer = 14, RuleSubckt = 15, RuleSubckt_header = 16, 
    RuleSubckt_content = 17, RuleSubckt_footer = 18, RuleAnalysis = 19, 
    RuleAc = 20, RuleAc_parameter_driven = 21, RuleAc_data_driven = 22, 
    RuleAc_list_driven = 23, RuleAc_adaptive = 24, RuleAge = 25, RuleChecksoa = 26, 
    RuleDc = 27, RuleDc_component_analysis = 28, RuleDc_source_analysis = 29, 
    RuleDc_temperature_analysis = 30, RuleDc_parameter_analysis = 31, RuleDc_data_driven_analysis = 32, 
    RuleDchiz = 33, RuleDcmismatch = 34, RuleDex = 35, RuleDsp = 36, RuleDspmod = 37, 
    RuleFour = 38, RuleLstb = 39, RuleMc = 40, RuleNoise = 41, RuleNoisetran = 42, 
    RuleOp = 43, RuleOp_selective = 44, RuleOp_time_based = 45, RuleOp_dc_based = 46, 
    RuleOptfour = 47, RuleOptimize = 48, RuleOptnoise = 49, RulePz = 50, 
    RuleRamp = 51, RuleSens = 52, RuleSensac = 53, RuleSensparam = 54, RuleSnf = 55, 
    RuleSolve = 56, RuleSolve_parameter = 57, RuleSolve_object = 58, RuleSolve_component = 59, 
    RuleTf = 60, RuleTran = 61, RuleTran_point_driven = 62, RuleTran_parameterized = 63, 
    RuleTran_data_driven = 64, RuleWcase = 65, RuleExtract = 66, RuleGlobal = 67, 
    RuleModel = 68, RuleModel_lib = 69, RuleModel_name = 70, RuleModel_master = 71, 
    RuleModel_lib_type = 72, RuleControl = 73, RuleAlter = 74, RuleAlter_header = 75, 
    RuleAlter_content = 76, RuleAlter_footer = 77, RuleSave = 78, RuleSave_file = 79, 
    RuleSave_when = 80, RuleOption = 81, RuleNodeset = 82, RuleCall_tcl = 83, 
    RuleCall_tcl_when = 84, RuleUse_tcl = 85, RuleDefmac = 86, RuleChrent = 87, 
    RuleChrent_behaviour = 88, RuleChrent_point = 89, RuleChrent_pair = 90, 
    RuleIc = 91, RuleIc_content = 92, RuleIc_subckt = 93, RulePrint = 94, 
    RulePlot = 95, RuleFfile = 96, RuleFfile_tabulation = 97, RuleFfile_singleline = 98, 
    RuleFfile_unit = 99, RuleFfile_storage_format = 100, RuleProbe = 101, 
    RuleDefwave = 102, RuleTemp = 103, RuleMeas = 104, RuleMeas_info = 105, 
    RuleMeas_vect = 106, RuleMeas_catvect = 107, RuleMeas_targ = 108, RuleConnect = 109, 
    RuleGlobal_declarations = 110, RuleComponent = 111, RuleComponent_type = 112, 
    RuleComponent_attribute = 113, RuleComponent_value = 114, RuleComponent_parameter_list = 115, 
    RuleComponent_analysis = 116, RuleComponent_positional_keywork = 117, 
    RuleComponent_pin_list = 118, RuleComponent_port_list = 119, RuleComponent_net_list = 120, 
    RuleComponent_coupling_list = 121, RuleComponent_table = 122, RuleComponent_value_list = 123, 
    RuleInterp_type = 124, RuleResistor = 125, RuleCapacitor = 126, RuleInductor = 127, 
    RuleCoupled_inductor = 128, RuleDiffusion_resistor = 129, RuleTransmission_line = 130, 
    RuleLossy_transmission_line = 131, RuleLtl_w_model = 132, RuleLtl_u_model = 133, 
    RuleJunction_diode = 134, RuleBjt = 135, RuleJfet = 136, RuleMosfet = 137, 
    RuleSubckt_instance = 138, RuleIvsource = 139, RuleIcsource = 140, RuleVcvs = 141, 
    RuleCccs = 142, RuleVccs = 143, RuleCcvs = 144, RuleNoise_function = 145, 
    RuleSw = 146, RuleOperational_amplifier = 147, RuleTwo_input_gate = 148, 
    RuleEnd = 149, RuleExpression = 150, RuleExpression_unary = 151, RuleExpression_function_call = 152, 
    RuleExpression_list = 153, RuleExpression_operator = 154, RuleExpression_atom = 155, 
    RuleNode_list = 156, RuleNode_list_item = 157, RuleNode_mapping = 158, 
    RuleNode = 159, RuleParameter_list = 160, RuleParameter_list_item = 161, 
    RuleParameter = 162, RuleParameter_id = 163, RuleParameter_id_access = 164, 
    RuleFilepath = 165, RuleFilepath_element = 166, RuleEnd_of_line = 167
  };

  ELDOParser(antlr4::TokenStream *input);
  ~ELDOParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class NetlistContext;
  class Netlist_titleContext;
  class Netlist_entityContext;
  class IncludeContext;
  class Standard_includeContext;
  class Verilog_includeContext;
  class Dspf_includeContext;
  class LibraryContext;
  class Library_keyContext;
  class Library_pathContext;
  class Library_nameContext;
  class Library_defContext;
  class Library_def_headerContext;
  class Library_def_contentContext;
  class Library_def_footerContext;
  class SubcktContext;
  class Subckt_headerContext;
  class Subckt_contentContext;
  class Subckt_footerContext;
  class AnalysisContext;
  class AcContext;
  class Ac_parameter_drivenContext;
  class Ac_data_drivenContext;
  class Ac_list_drivenContext;
  class Ac_adaptiveContext;
  class AgeContext;
  class ChecksoaContext;
  class DcContext;
  class Dc_component_analysisContext;
  class Dc_source_analysisContext;
  class Dc_temperature_analysisContext;
  class Dc_parameter_analysisContext;
  class Dc_data_driven_analysisContext;
  class DchizContext;
  class DcmismatchContext;
  class DexContext;
  class DspContext;
  class DspmodContext;
  class FourContext;
  class LstbContext;
  class McContext;
  class NoiseContext;
  class NoisetranContext;
  class OpContext;
  class Op_selectiveContext;
  class Op_time_basedContext;
  class Op_dc_basedContext;
  class OptfourContext;
  class OptimizeContext;
  class OptnoiseContext;
  class PzContext;
  class RampContext;
  class SensContext;
  class SensacContext;
  class SensparamContext;
  class SnfContext;
  class SolveContext;
  class Solve_parameterContext;
  class Solve_objectContext;
  class Solve_componentContext;
  class TfContext;
  class TranContext;
  class Tran_point_drivenContext;
  class Tran_parameterizedContext;
  class Tran_data_drivenContext;
  class WcaseContext;
  class ExtractContext;
  class GlobalContext;
  class ModelContext;
  class Model_libContext;
  class Model_nameContext;
  class Model_masterContext;
  class Model_lib_typeContext;
  class ControlContext;
  class AlterContext;
  class Alter_headerContext;
  class Alter_contentContext;
  class Alter_footerContext;
  class SaveContext;
  class Save_fileContext;
  class Save_whenContext;
  class OptionContext;
  class NodesetContext;
  class Call_tclContext;
  class Call_tcl_whenContext;
  class Use_tclContext;
  class DefmacContext;
  class ChrentContext;
  class Chrent_behaviourContext;
  class Chrent_pointContext;
  class Chrent_pairContext;
  class IcContext;
  class Ic_contentContext;
  class Ic_subcktContext;
  class PrintContext;
  class PlotContext;
  class FfileContext;
  class Ffile_tabulationContext;
  class Ffile_singlelineContext;
  class Ffile_unitContext;
  class Ffile_storage_formatContext;
  class ProbeContext;
  class DefwaveContext;
  class TempContext;
  class MeasContext;
  class Meas_infoContext;
  class Meas_vectContext;
  class Meas_catvectContext;
  class Meas_targContext;
  class ConnectContext;
  class Global_declarationsContext;
  class ComponentContext;
  class Component_typeContext;
  class Component_attributeContext;
  class Component_valueContext;
  class Component_parameter_listContext;
  class Component_analysisContext;
  class Component_positional_keyworkContext;
  class Component_pin_listContext;
  class Component_port_listContext;
  class Component_net_listContext;
  class Component_coupling_listContext;
  class Component_tableContext;
  class Component_value_listContext;
  class Interp_typeContext;
  class ResistorContext;
  class CapacitorContext;
  class InductorContext;
  class Coupled_inductorContext;
  class Diffusion_resistorContext;
  class Transmission_lineContext;
  class Lossy_transmission_lineContext;
  class Ltl_w_modelContext;
  class Ltl_u_modelContext;
  class Junction_diodeContext;
  class BjtContext;
  class JfetContext;
  class MosfetContext;
  class Subckt_instanceContext;
  class IvsourceContext;
  class IcsourceContext;
  class VcvsContext;
  class CccsContext;
  class VccsContext;
  class CcvsContext;
  class Noise_functionContext;
  class SwContext;
  class Operational_amplifierContext;
  class Two_input_gateContext;
  class EndContext;
  class ExpressionContext;
  class Expression_unaryContext;
  class Expression_function_callContext;
  class Expression_listContext;
  class Expression_operatorContext;
  class Expression_atomContext;
  class Node_listContext;
  class Node_list_itemContext;
  class Node_mappingContext;
  class NodeContext;
  class Parameter_listContext;
  class Parameter_list_itemContext;
  class ParameterContext;
  class Parameter_idContext;
  class Parameter_id_accessContext;
  class FilepathContext;
  class Filepath_elementContext;
  class End_of_lineContext; 

  class  NetlistContext : public antlr4::ParserRuleContext {
  public:
    NetlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<End_of_lineContext *> end_of_line();
    End_of_lineContext* end_of_line(size_t i);
    Netlist_titleContext *netlist_title();
    std::vector<Netlist_entityContext *> netlist_entity();
    Netlist_entityContext* netlist_entity(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NetlistContext* netlist();

  class  Netlist_titleContext : public antlr4::ParserRuleContext {
  public:
    Netlist_titleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Netlist_titleContext* netlist_title();

  class  Netlist_entityContext : public antlr4::ParserRuleContext {
  public:
    Netlist_entityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncludeContext *include();
    LibraryContext *library();
    Library_defContext *library_def();
    SubcktContext *subckt();
    AnalysisContext *analysis();
    GlobalContext *global();
    ModelContext *model();
    Global_declarationsContext *global_declarations();
    ControlContext *control();
    ComponentContext *component();
    EndContext *end();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Netlist_entityContext* netlist_entity();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Standard_includeContext *standard_include();
    Dspf_includeContext *dspf_include();
    Verilog_includeContext *verilog_include();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludeContext* include();

  class  Standard_includeContext : public antlr4::ParserRuleContext {
  public:
    Standard_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Standard_includeContext* standard_include();

  class  Verilog_includeContext : public antlr4::ParserRuleContext {
  public:
    Verilog_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERILOG();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Verilog_includeContext* verilog_include();

  class  Dspf_includeContext : public antlr4::ParserRuleContext {
  public:
    Dspf_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DSPF_INCLUDE();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dspf_includeContext* dspf_include();

  class  LibraryContext : public antlr4::ParserRuleContext {
  public:
    LibraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIB();
    Library_pathContext *library_path();
    End_of_lineContext *end_of_line();
    Library_keyContext *library_key();
    Library_nameContext *library_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LibraryContext* library();

  class  Library_keyContext : public antlr4::ParserRuleContext {
  public:
    Library_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_keyContext* library_key();

  class  Library_pathContext : public antlr4::ParserRuleContext {
  public:
    Library_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FilepathContext *filepath();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_pathContext* library_path();

  class  Library_nameContext : public antlr4::ParserRuleContext {
  public:
    Library_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_nameContext* library_name();

  class  Library_defContext : public antlr4::ParserRuleContext {
  public:
    Library_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_def_headerContext *library_def_header();
    Library_def_footerContext *library_def_footer();
    End_of_lineContext *end_of_line();
    std::vector<Library_def_contentContext *> library_def_content();
    Library_def_contentContext* library_def_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_defContext* library_def();

  class  Library_def_headerContext : public antlr4::ParserRuleContext {
  public:
    Library_def_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIB();
    Library_nameContext *library_name();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_def_headerContext* library_def_header();

  class  Library_def_contentContext : public antlr4::ParserRuleContext {
  public:
    Library_def_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_def_contentContext* library_def_content();

  class  Library_def_footerContext : public antlr4::ParserRuleContext {
  public:
    Library_def_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIB_END();
    Library_nameContext *library_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_def_footerContext* library_def_footer();

  class  SubcktContext : public antlr4::ParserRuleContext {
  public:
    SubcktContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subckt_headerContext *subckt_header();
    Subckt_footerContext *subckt_footer();
    std::vector<Subckt_contentContext *> subckt_content();
    Subckt_contentContext* subckt_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubcktContext* subckt();

  class  Subckt_headerContext : public antlr4::ParserRuleContext {
  public:
    Subckt_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBCKT();
    antlr4::tree::TerminalNode *ID();
    End_of_lineContext *end_of_line();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *PARAM_LIST_START();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subckt_headerContext* subckt_header();

  class  Subckt_contentContext : public antlr4::ParserRuleContext {
  public:
    Subckt_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subckt_contentContext* subckt_content();

  class  Subckt_footerContext : public antlr4::ParserRuleContext {
  public:
    Subckt_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBCKT_END();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subckt_footerContext* subckt_footer();

  class  AnalysisContext : public antlr4::ParserRuleContext {
  public:
    AnalysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AcContext *ac();
    AgeContext *age();
    ChecksoaContext *checksoa();
    DcContext *dc();
    DchizContext *dchiz();
    DcmismatchContext *dcmismatch();
    DexContext *dex();
    DspContext *dsp();
    DspmodContext *dspmod();
    FourContext *four();
    LstbContext *lstb();
    McContext *mc();
    NoiseContext *noise();
    NoisetranContext *noisetran();
    OpContext *op();
    OptfourContext *optfour();
    OptimizeContext *optimize();
    OptnoiseContext *optnoise();
    PzContext *pz();
    RampContext *ramp();
    SensContext *sens();
    SensacContext *sensac();
    SensparamContext *sensparam();
    SnfContext *snf();
    SolveContext *solve();
    TfContext *tf();
    TranContext *tran();
    WcaseContext *wcase();
    ExtractContext *extract();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnalysisContext* analysis();

  class  AcContext : public antlr4::ParserRuleContext {
  public:
    AcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AC();
    End_of_lineContext *end_of_line();
    Ac_parameter_drivenContext *ac_parameter_driven();
    Ac_data_drivenContext *ac_data_driven();
    Ac_list_drivenContext *ac_list_driven();
    Ac_adaptiveContext *ac_adaptive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcContext* ac();

  class  Ac_parameter_drivenContext : public antlr4::ParserRuleContext {
  public:
    Ac_parameter_drivenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ac_parameter_drivenContext* ac_parameter_driven();

  class  Ac_data_drivenContext : public antlr4::ParserRuleContext {
  public:
    Ac_data_drivenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ac_data_drivenContext* ac_data_driven();

  class  Ac_list_drivenContext : public antlr4::ParserRuleContext {
  public:
    Ac_list_drivenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ac_list_drivenContext* ac_list_driven();

  class  Ac_adaptiveContext : public antlr4::ParserRuleContext {
  public:
    Ac_adaptiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ac_adaptiveContext* ac_adaptive();

  class  AgeContext : public antlr4::ParserRuleContext {
  public:
    AgeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AGE();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AgeContext* age();

  class  ChecksoaContext : public antlr4::ParserRuleContext {
  public:
    ChecksoaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKSOA();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChecksoaContext* checksoa();

  class  DcContext : public antlr4::ParserRuleContext {
  public:
    DcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DC();
    End_of_lineContext *end_of_line();
    Dc_component_analysisContext *dc_component_analysis();
    Dc_source_analysisContext *dc_source_analysis();
    Dc_temperature_analysisContext *dc_temperature_analysis();
    Dc_parameter_analysisContext *dc_parameter_analysis();
    Dc_data_driven_analysisContext *dc_data_driven_analysis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DcContext* dc();

  class  Dc_component_analysisContext : public antlr4::ParserRuleContext {
  public:
    Dc_component_analysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dc_component_analysisContext* dc_component_analysis();

  class  Dc_source_analysisContext : public antlr4::ParserRuleContext {
  public:
    Dc_source_analysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dc_source_analysisContext* dc_source_analysis();

  class  Dc_temperature_analysisContext : public antlr4::ParserRuleContext {
  public:
    Dc_temperature_analysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEMP();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dc_temperature_analysisContext* dc_temperature_analysis();

  class  Dc_parameter_analysisContext : public antlr4::ParserRuleContext {
  public:
    Dc_parameter_analysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dc_parameter_analysisContext* dc_parameter_analysis();

  class  Dc_data_driven_analysisContext : public antlr4::ParserRuleContext {
  public:
    Dc_data_driven_analysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dc_data_driven_analysisContext* dc_data_driven_analysis();

  class  DchizContext : public antlr4::ParserRuleContext {
  public:
    DchizContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DCHIZ();
    ParameterContext *parameter();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DchizContext* dchiz();

  class  DcmismatchContext : public antlr4::ParserRuleContext {
  public:
    DcmismatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DCMISMATCH();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DcmismatchContext* dcmismatch();

  class  DexContext : public antlr4::ParserRuleContext {
  public:
    DexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEX();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DexContext* dex();

  class  DspContext : public antlr4::ParserRuleContext {
  public:
    DspContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DSP();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    antlr4::tree::TerminalNode *ID();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DspContext* dsp();

  class  DspmodContext : public antlr4::ParserRuleContext {
  public:
    DspmodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DSPMOD();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DspmodContext* dspmod();

  class  FourContext : public antlr4::ParserRuleContext {
  public:
    FourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOUR();
    ParameterContext *parameter();
    antlr4::tree::TerminalNode *ID();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FourContext* four();

  class  LstbContext : public antlr4::ParserRuleContext {
  public:
    LstbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSTB();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LstbContext* lstb();

  class  McContext : public antlr4::ParserRuleContext {
  public:
    McContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MC();
    antlr4::tree::TerminalNode *NUMBER();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  McContext* mc();

  class  NoiseContext : public antlr4::ParserRuleContext {
  public:
    NoiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOISE();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    antlr4::tree::TerminalNode *NUMBER();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoiseContext* noise();

  class  NoisetranContext : public antlr4::ParserRuleContext {
  public:
    NoisetranContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOISETRAN();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoisetranContext* noisetran();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP();
    End_of_lineContext *end_of_line();
    Op_selectiveContext *op_selective();
    Op_time_basedContext *op_time_based();
    Op_dc_basedContext *op_dc_based();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

  class  Op_selectiveContext : public antlr4::ParserRuleContext {
  public:
    Op_selectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_selectiveContext* op_selective();

  class  Op_time_basedContext : public antlr4::ParserRuleContext {
  public:
    Op_time_basedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_time_basedContext* op_time_based();

  class  Op_dc_basedContext : public antlr4::ParserRuleContext {
  public:
    Op_dc_basedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_dc_basedContext* op_dc_based();

  class  OptfourContext : public antlr4::ParserRuleContext {
  public:
    OptfourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTFOUR();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptfourContext* optfour();

  class  OptimizeContext : public antlr4::ParserRuleContext {
  public:
    OptimizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptimizeContext* optimize();

  class  OptnoiseContext : public antlr4::ParserRuleContext {
  public:
    OptnoiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTNOISE();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptnoiseContext* optnoise();

  class  PzContext : public antlr4::ParserRuleContext {
  public:
    PzContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PZ();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PzContext* pz();

  class  RampContext : public antlr4::ParserRuleContext {
  public:
    RampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAMP();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RampContext* ramp();

  class  SensContext : public antlr4::ParserRuleContext {
  public:
    SensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SENS();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SensContext* sens();

  class  SensacContext : public antlr4::ParserRuleContext {
  public:
    SensacContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SENSAC();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SensacContext* sensac();

  class  SensparamContext : public antlr4::ParserRuleContext {
  public:
    SensparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SENSPARAM();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SensparamContext* sensparam();

  class  SnfContext : public antlr4::ParserRuleContext {
  public:
    SnfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SNF();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SnfContext* snf();

  class  SolveContext : public antlr4::ParserRuleContext {
  public:
    SolveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOLVE();
    End_of_lineContext *end_of_line();
    Solve_parameterContext *solve_parameter();
    Solve_objectContext *solve_object();
    Solve_componentContext *solve_component();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SolveContext* solve();

  class  Solve_parameterContext : public antlr4::ParserRuleContext {
  public:
    Solve_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Solve_parameterContext* solve_parameter();

  class  Solve_objectContext : public antlr4::ParserRuleContext {
  public:
    Solve_objectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Solve_objectContext* solve_object();

  class  Solve_componentContext : public antlr4::ParserRuleContext {
  public:
    Solve_componentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Solve_componentContext* solve_component();

  class  TfContext : public antlr4::ParserRuleContext {
  public:
    TfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TF();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TfContext* tf();

  class  TranContext : public antlr4::ParserRuleContext {
  public:
    TranContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAN();
    End_of_lineContext *end_of_line();
    Tran_point_drivenContext *tran_point_driven();
    Tran_parameterizedContext *tran_parameterized();
    Tran_data_drivenContext *tran_data_driven();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranContext* tran();

  class  Tran_point_drivenContext : public antlr4::ParserRuleContext {
  public:
    Tran_point_drivenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tran_point_drivenContext* tran_point_driven();

  class  Tran_parameterizedContext : public antlr4::ParserRuleContext {
  public:
    Tran_parameterizedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tran_parameterizedContext* tran_parameterized();

  class  Tran_data_drivenContext : public antlr4::ParserRuleContext {
  public:
    Tran_data_drivenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tran_data_drivenContext* tran_data_driven();

  class  WcaseContext : public antlr4::ParserRuleContext {
  public:
    WcaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WCASE();
    antlr4::tree::TerminalNode *ID();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WcaseContext* wcase();

  class  ExtractContext : public antlr4::ParserRuleContext {
  public:
    ExtractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTRACT();
    End_of_lineContext *end_of_line();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtractContext* extract();

  class  GlobalContext : public antlr4::ParserRuleContext {
  public:
    GlobalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    End_of_lineContext *end_of_line();
    Node_listContext *node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalContext* global();

  class  ModelContext : public antlr4::ParserRuleContext {
  public:
    ModelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODEL_DEF();
    Model_nameContext *model_name();
    Model_masterContext *model_master();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *NONOISE();
    Parameter_listContext *parameter_list();
    Model_libContext *model_lib();
    FilepathContext *filepath();
    Model_lib_typeContext *model_lib_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModelContext* model();

  class  Model_libContext : public antlr4::ParserRuleContext {
  public:
    Model_libContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_libContext* model_lib();

  class  Model_nameContext : public antlr4::ParserRuleContext {
  public:
    Model_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_nameContext* model_name();

  class  Model_masterContext : public antlr4::ParserRuleContext {
  public:
    Model_masterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_masterContext* model_master();

  class  Model_lib_typeContext : public antlr4::ParserRuleContext {
  public:
    Model_lib_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_lib_typeContext* model_lib_type();

  class  ControlContext : public antlr4::ParserRuleContext {
  public:
    ControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterContext *alter();
    SaveContext *save();
    OptionContext *option();
    NodesetContext *nodeset();
    Call_tclContext *call_tcl();
    Use_tclContext *use_tcl();
    DefmacContext *defmac();
    ChrentContext *chrent();
    IcContext *ic();
    PrintContext *print();
    PlotContext *plot();
    FfileContext *ffile();
    ProbeContext *probe();
    DefwaveContext *defwave();
    TempContext *temp();
    MeasContext *meas();
    ConnectContext *connect();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlContext* control();

  class  AlterContext : public antlr4::ParserRuleContext {
  public:
    AlterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_headerContext *alter_header();
    Alter_footerContext *alter_footer();
    End_of_lineContext *end_of_line();
    std::vector<Alter_contentContext *> alter_content();
    Alter_contentContext* alter_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterContext* alter();

  class  Alter_headerContext : public antlr4::ParserRuleContext {
  public:
    Alter_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    End_of_lineContext *end_of_line();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_headerContext* alter_header();

  class  Alter_contentContext : public antlr4::ParserRuleContext {
  public:
    Alter_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_contentContext* alter_content();

  class  Alter_footerContext : public antlr4::ParserRuleContext {
  public:
    Alter_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_footerContext* alter_footer();

  class  SaveContext : public antlr4::ParserRuleContext {
  public:
    SaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVE();
    Save_whenContext *save_when();
    End_of_lineContext *end_of_line();
    Save_fileContext *save_file();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SaveContext* save();

  class  Save_fileContext : public antlr4::ParserRuleContext {
  public:
    Save_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FilepathContext *filepath();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Save_fileContext* save_file();

  class  Save_whenContext : public antlr4::ParserRuleContext {
  public:
    Save_whenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *END();
    ParameterContext *parameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Save_whenContext* save_when();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionContext* option();

  class  NodesetContext : public antlr4::ParserRuleContext {
  public:
    NodesetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NODESET();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NodesetContext* nodeset();

  class  Call_tclContext : public antlr4::ParserRuleContext {
  public:
    Call_tclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL_TCL();
    End_of_lineContext *end_of_line();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    Call_tcl_whenContext *call_tcl_when();
    Parameter_listContext *parameter_list();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_tclContext* call_tcl();

  class  Call_tcl_whenContext : public antlr4::ParserRuleContext {
  public:
    Call_tcl_whenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *START_OF_RUN();
    antlr4::tree::TerminalNode *END_OF_RUN();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_tcl_whenContext* call_tcl_when();

  class  Use_tclContext : public antlr4::ParserRuleContext {
  public:
    Use_tclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE_TCL();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_tclContext* use_tcl();

  class  DefmacContext : public antlr4::ParserRuleContext {
  public:
    DefmacContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFMAC();
    ParameterContext *parameter();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefmacContext* defmac();

  class  ChrentContext : public antlr4::ParserRuleContext {
  public:
    ChrentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHRENT();
    NodeContext *node();
    Chrent_behaviourContext *chrent_behaviour();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChrentContext* chrent();

  class  Chrent_behaviourContext : public antlr4::ParserRuleContext {
  public:
    Chrent_behaviourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Chrent_pointContext *> chrent_point();
    Chrent_pointContext* chrent_point(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chrent_behaviourContext* chrent_behaviour();

  class  Chrent_pointContext : public antlr4::ParserRuleContext {
  public:
    Chrent_pointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Chrent_pairContext *> chrent_pair();
    Chrent_pairContext* chrent_pair(size_t i);
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chrent_pointContext* chrent_point();

  class  Chrent_pairContext : public antlr4::ParserRuleContext {
  public:
    Chrent_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chrent_pairContext* chrent_pair();

  class  IcContext : public antlr4::ParserRuleContext {
  public:
    IcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IC();
    End_of_lineContext *end_of_line();
    std::vector<Ic_contentContext *> ic_content();
    Ic_contentContext* ic_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IcContext* ic();

  class  Ic_contentContext : public antlr4::ParserRuleContext {
  public:
    Ic_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    Ic_subcktContext *ic_subckt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ic_contentContext* ic_content();

  class  Ic_subcktContext : public antlr4::ParserRuleContext {
  public:
    Ic_subcktContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBCKT();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ic_subcktContext* ic_subckt();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  PlotContext : public antlr4::ParserRuleContext {
  public:
    PlotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLOT();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlotContext* plot();

  class  FfileContext : public antlr4::ParserRuleContext {
  public:
    FfileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FFILE();
    Ffile_tabulationContext *ffile_tabulation();
    FilepathContext *filepath();
    End_of_lineContext *end_of_line();
    Ffile_singlelineContext *ffile_singleline();
    Ffile_unitContext *ffile_unit();
    Ffile_storage_formatContext *ffile_storage_format();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FfileContext* ffile();

  class  Ffile_tabulationContext : public antlr4::ParserRuleContext {
  public:
    Ffile_tabulationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ffile_tabulationContext* ffile_tabulation();

  class  Ffile_singlelineContext : public antlr4::ParserRuleContext {
  public:
    Ffile_singlelineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ffile_singlelineContext* ffile_singleline();

  class  Ffile_unitContext : public antlr4::ParserRuleContext {
  public:
    Ffile_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ffile_unitContext* ffile_unit();

  class  Ffile_storage_formatContext : public antlr4::ParserRuleContext {
  public:
    Ffile_storage_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ffile_storage_formatContext* ffile_storage_format();

  class  ProbeContext : public antlr4::ParserRuleContext {
  public:
    ProbeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROBE();
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *ID();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProbeContext* probe();

  class  DefwaveContext : public antlr4::ParserRuleContext {
  public:
    DefwaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFWAVE();
    ParameterContext *parameter();
    End_of_lineContext *end_of_line();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefwaveContext* defwave();

  class  TempContext : public antlr4::ParserRuleContext {
  public:
    TempContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEMP_SET();
    End_of_lineContext *end_of_line();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TempContext* temp();

  class  MeasContext : public antlr4::ParserRuleContext {
  public:
    MeasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MEAS();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    End_of_lineContext *end_of_line();
    antlr4::tree::TerminalNode *PARAM();
    antlr4::tree::TerminalNode *FIND();
    antlr4::tree::TerminalNode *PP();
    antlr4::tree::TerminalNode *TRIG();
    Meas_infoContext *meas_info();
    Meas_vectContext *meas_vect();
    Meas_catvectContext *meas_catvect();
    antlr4::tree::TerminalNode *WHEN();
    Parameter_listContext *parameter_list();
    Meas_targContext *meas_targ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeasContext* meas();

  class  Meas_infoContext : public antlr4::ParserRuleContext {
  public:
    Meas_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Meas_infoContext* meas_info();

  class  Meas_vectContext : public antlr4::ParserRuleContext {
  public:
    Meas_vectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Meas_vectContext* meas_vect();

  class  Meas_catvectContext : public antlr4::ParserRuleContext {
  public:
    Meas_catvectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Meas_catvectContext* meas_catvect();

  class  Meas_targContext : public antlr4::ParserRuleContext {
  public:
    Meas_targContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARG();
    ExpressionContext *expression();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Meas_targContext* meas_targ();

  class  ConnectContext : public antlr4::ParserRuleContext {
  public:
    ConnectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectContext* connect();

  class  Global_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Global_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_PARAM();
    Parameter_listContext *parameter_list();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_declarationsContext* global_declarations();

  class  ComponentContext : public antlr4::ParserRuleContext {
  public:
    ComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_typeContext *component_type();
    End_of_lineContext *end_of_line();
    std::vector<Component_attributeContext *> component_attribute();
    Component_attributeContext* component_attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentContext* component();

  class  Component_typeContext : public antlr4::ParserRuleContext {
  public:
    Component_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResistorContext *resistor();
    CapacitorContext *capacitor();
    InductorContext *inductor();
    Coupled_inductorContext *coupled_inductor();
    Diffusion_resistorContext *diffusion_resistor();
    Transmission_lineContext *transmission_line();
    Lossy_transmission_lineContext *lossy_transmission_line();
    Ltl_w_modelContext *ltl_w_model();
    Ltl_u_modelContext *ltl_u_model();
    Junction_diodeContext *junction_diode();
    BjtContext *bjt();
    JfetContext *jfet();
    MosfetContext *mosfet();
    Subckt_instanceContext *subckt_instance();
    IvsourceContext *ivsource();
    IcsourceContext *icsource();
    VcvsContext *vcvs();
    CccsContext *cccs();
    VccsContext *vccs();
    CcvsContext *ccvs();
    Noise_functionContext *noise_function();
    SwContext *sw();
    Operational_amplifierContext *operational_amplifier();
    Two_input_gateContext *two_input_gate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_typeContext* component_type();

  class  Component_attributeContext : public antlr4::ParserRuleContext {
  public:
    Component_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_parameter_listContext *component_parameter_list();
    Component_valueContext *component_value();
    Component_analysisContext *component_analysis();
    Component_pin_listContext *component_pin_list();
    Component_port_listContext *component_port_list();
    Component_net_listContext *component_net_list();
    Component_coupling_listContext *component_coupling_list();
    Component_value_listContext *component_value_list();
    Component_tableContext *component_table();
    Component_positional_keyworkContext *component_positional_keywork();
    Interp_typeContext *interp_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_attributeContext* component_attribute();

  class  Component_valueContext : public antlr4::ParserRuleContext {
  public:
    Component_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *STRING();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_valueContext* component_value();

  class  Component_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Component_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM_LIST_START();
    antlr4::tree::TerminalNode *GENERIC_LIST_START();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_parameter_listContext* component_parameter_list();

  class  Component_analysisContext : public antlr4::ParserRuleContext {
  public:
    Component_analysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *AC();
    antlr4::tree::TerminalNode *DC();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_analysisContext* component_analysis();

  class  Component_positional_keyworkContext : public antlr4::ParserRuleContext {
  public:
    Component_positional_keyworkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOISE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_positional_keyworkContext* component_positional_keywork();

  class  Component_pin_listContext : public antlr4::ParserRuleContext {
  public:
    Component_pin_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIN_LIST_START();
    Node_listContext *node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_pin_listContext* component_pin_list();

  class  Component_port_listContext : public antlr4::ParserRuleContext {
  public:
    Component_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PORT_LIST_START();
    Node_listContext *node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_port_listContext* component_port_list();

  class  Component_net_listContext : public antlr4::ParserRuleContext {
  public:
    Component_net_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NET_LIST_START();
    Node_listContext *node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_net_listContext* component_net_list();

  class  Component_coupling_listContext : public antlr4::ParserRuleContext {
  public:
    Component_coupling_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COUPLING_LIST_START();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_coupling_listContext* component_coupling_list();

  class  Component_tableContext : public antlr4::ParserRuleContext {
  public:
    Component_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<Expression_listContext *> expression_list();
    Expression_listContext* expression_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_tableContext* component_table();

  class  Component_value_listContext : public antlr4::ParserRuleContext {
  public:
    Component_value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    antlr4::tree::TerminalNode *PWL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SFFM();
    antlr4::tree::TerminalNode *PULSE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_value_listContext* component_value_list();

  class  Interp_typeContext : public antlr4::ParserRuleContext {
  public:
    Interp_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interp_typeContext* interp_type();

  class  ResistorContext : public antlr4::ParserRuleContext {
  public:
    ResistorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESISTOR();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResistorContext* resistor();

  class  CapacitorContext : public antlr4::ParserRuleContext {
  public:
    CapacitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAPACITOR();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapacitorContext* capacitor();

  class  InductorContext : public antlr4::ParserRuleContext {
  public:
    InductorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDUCTOR();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InductorContext* inductor();

  class  Coupled_inductorContext : public antlr4::ParserRuleContext {
  public:
    Coupled_inductorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COUPLED_INDUCTOR();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coupled_inductorContext* coupled_inductor();

  class  Diffusion_resistorContext : public antlr4::ParserRuleContext {
  public:
    Diffusion_resistorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIFFUSION_RESISTOR();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Diffusion_resistorContext* diffusion_resistor();

  class  Transmission_lineContext : public antlr4::ParserRuleContext {
  public:
    Transmission_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSMISSION_LINE();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transmission_lineContext* transmission_line();

  class  Lossy_transmission_lineContext : public antlr4::ParserRuleContext {
  public:
    Lossy_transmission_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOSSY_TRANSMISSION_LINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lossy_transmission_lineContext* lossy_transmission_line();

  class  Ltl_w_modelContext : public antlr4::ParserRuleContext {
  public:
    Ltl_w_modelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTL_W_MODEL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ltl_w_modelContext* ltl_w_model();

  class  Ltl_u_modelContext : public antlr4::ParserRuleContext {
  public:
    Ltl_u_modelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTL_U_MODEL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ltl_u_modelContext* ltl_u_model();

  class  Junction_diodeContext : public antlr4::ParserRuleContext {
  public:
    Junction_diodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JUNCTION_DIODE();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Junction_diodeContext* junction_diode();

  class  BjtContext : public antlr4::ParserRuleContext {
  public:
    BjtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BJT();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BjtContext* bjt();

  class  JfetContext : public antlr4::ParserRuleContext {
  public:
    JfetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JFET();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JfetContext* jfet();

  class  MosfetContext : public antlr4::ParserRuleContext {
  public:
    MosfetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOSFET();
    Node_listContext *node_list();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *MODEL();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MosfetContext* mosfet();

  class  Subckt_instanceContext : public antlr4::ParserRuleContext {
  public:
    Subckt_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBCK_INSTANCE();
    Node_listContext *node_list();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MODEL();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subckt_instanceContext* subckt_instance();

  class  IvsourceContext : public antlr4::ParserRuleContext {
  public:
    IvsourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IVSOURCE();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IvsourceContext* ivsource();

  class  IcsourceContext : public antlr4::ParserRuleContext {
  public:
    IcsourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICSOURCE();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IcsourceContext* icsource();

  class  VcvsContext : public antlr4::ParserRuleContext {
  public:
    VcvsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCVS();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VcvsContext* vcvs();

  class  CccsContext : public antlr4::ParserRuleContext {
  public:
    CccsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CCCS();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CccsContext* cccs();

  class  VccsContext : public antlr4::ParserRuleContext {
  public:
    VccsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCCS();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VccsContext* vccs();

  class  CcvsContext : public antlr4::ParserRuleContext {
  public:
    CcvsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CCVS();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CcvsContext* ccvs();

  class  Noise_functionContext : public antlr4::ParserRuleContext {
  public:
    Noise_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOISE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Noise_functionContext* noise_function();

  class  SwContext : public antlr4::ParserRuleContext {
  public:
    SwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SW();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *ID();
    std::vector<Expression_atomContext *> expression_atom();
    Expression_atomContext* expression_atom(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwContext* sw();

  class  Operational_amplifierContext : public antlr4::ParserRuleContext {
  public:
    Operational_amplifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPA();
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operational_amplifierContext* operational_amplifier();

  class  Two_input_gateContext : public antlr4::ParserRuleContext {
  public:
    Two_input_gateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *DIG_NAND();
    antlr4::tree::TerminalNode *DIG_AND();
    antlr4::tree::TerminalNode *DIG_OR();
    antlr4::tree::TerminalNode *DIG_NOR();
    antlr4::tree::TerminalNode *DIG_XOR();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Two_input_gateContext* two_input_gate();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NETLIST_END();
    End_of_lineContext *end_of_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndContext* end();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_unaryContext *expression_unary();
    Expression_function_callContext *expression_function_call();
    Expression_listContext *expression_list();
    Expression_atomContext *expression_atom();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    Expression_operatorContext *expression_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Expression_unaryContext : public antlr4::ParserRuleContext {
  public:
    Expression_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_unaryContext* expression_unary();

  class  Expression_function_callContext : public antlr4::ParserRuleContext {
  public:
    Expression_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODEL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_function_callContext* expression_function_call();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *OPEN_SQUARE();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *CLOSE_SQUARE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  Expression_operatorContext : public antlr4::ParserRuleContext {
  public:
    Expression_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *LOGIC_AND();
    antlr4::tree::TerminalNode *LOGIC_BITWISE_AND();
    antlr4::tree::TerminalNode *LOGIC_OR();
    antlr4::tree::TerminalNode *LOGIC_BITWISE_OR();
    antlr4::tree::TerminalNode *LOGIC_EQUAL();
    antlr4::tree::TerminalNode *LOGIC_NOT_EQUAL();
    antlr4::tree::TerminalNode *LOGIC_XOR();
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *LESS_THAN_EQUAL();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN_EQUAL();
    antlr4::tree::TerminalNode *EXCLAMATION_MARK();
    antlr4::tree::TerminalNode *BITWISE_SHIFT_LEFT();
    antlr4::tree::TerminalNode *BITWISE_SHIFT_RIGHT();
    antlr4::tree::TerminalNode *POWER_OPERATOR();
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *PERCENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_operatorContext* expression_operator();

  class  Expression_atomContext : public antlr4::ParserRuleContext {
  public:
    Expression_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *PERCENTAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_atomContext* expression_atom();

  class  Node_listContext : public antlr4::ParserRuleContext {
  public:
    Node_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Node_list_itemContext *> node_list_item();
    Node_list_itemContext* node_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Node_listContext* node_list();

  class  Node_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Node_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NodeContext *node();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Node_list_itemContext* node_list_item();

  class  Node_mappingContext : public antlr4::ParserRuleContext {
  public:
    Node_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Node_mappingContext* node_mapping();

  class  NodeContext : public antlr4::ParserRuleContext {
  public:
    NodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DOT();
    NodeContext *node();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NodeContext* node();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM_LIST_START();
    antlr4::tree::TerminalNode *OPEN_ROUND();
    std::vector<Parameter_list_itemContext *> parameter_list_item();
    Parameter_list_itemContext* parameter_list_item(size_t i);
    antlr4::tree::TerminalNode *CLOSE_ROUND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Parameter_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Parameter_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_list_itemContext* parameter_list_item();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_idContext *parameter_id();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  Parameter_idContext : public antlr4::ParserRuleContext {
  public:
    Parameter_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODEL();
    Parameter_id_accessContext *parameter_id_access();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_idContext* parameter_id();

  class  Parameter_id_accessContext : public antlr4::ParserRuleContext {
  public:
    Parameter_id_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_id_accessContext* parameter_id_access();

  class  FilepathContext : public antlr4::ParserRuleContext {
  public:
    FilepathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Filepath_elementContext *filepath_element();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilepathContext* filepath();

  class  Filepath_elementContext : public antlr4::ParserRuleContext {
  public:
    Filepath_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING();
    Filepath_elementContext *filepath_element();
    std::vector<antlr4::tree::TerminalNode *> APEX();
    antlr4::tree::TerminalNode* APEX(size_t i);
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filepath_elementContext* filepath_element();

  class  End_of_lineContext : public antlr4::ParserRuleContext {
  public:
    End_of_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_of_lineContext* end_of_line();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace edacurry
