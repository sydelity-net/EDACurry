
// Generated from g4files/SPECTREParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace edacurry {


class  SPECTREParser : public antlr4::Parser {
public:
  enum {
    COMMENT = 1, GLOBAL = 2, INCLUDE = 3, CPP_INCLUDE = 4, AHDL_INCLUDE = 5, 
    LIBRARY = 6, LIBRARY_END = 7, SECTION = 8, SECTION_END = 9, SUBCKT = 10, 
    INLINE_SUBCKT = 11, SUBCKT_END = 12, SIMULATOR = 13, GLOBAL_PARAMETERS = 14, 
    MODEL = 15, EXPORT = 16, SAVE = 17, ALTER = 18, ALTERGROUP = 19, OPTIONS = 20, 
    SET = 21, SHELL = 22, INFO = 23, NODESET = 24, IC = 25, ASSERT = 26, 
    CHECK = 27, LANGUAGE = 28, PORTS = 29, WAVE = 30, PWL = 31, SIN = 32, 
    SFFM = 33, PULSE = 34, COEFFS = 35, INSENSITIVE = 36, IF = 37, ELSE = 38, 
    PARAMETERS = 39, ANALOGMODEL = 40, CHECKPOINT = 41, SPECTRE = 42, SPICE = 43, 
    STATISTICS = 44, PROCESS = 45, CORRELATE = 46, TRUNCATE = 47, MISMATCH = 48, 
    VARY = 49, RELIABILITY = 50, AC = 51, ACMATCH = 52, DC = 53, DCMATCH = 54, 
    ENVLP = 55, SP = 56, STB = 57, SWEEP = 58, TDR = 59, TRAN = 60, XF = 61, 
    PAC = 62, PDISTO = 63, PNOISE = 64, PSP = 65, PSS = 66, PXF = 67, PZ = 68, 
    QPAC = 69, QPNOISE = 70, QPSP = 71, QPSS = 72, QPXF = 73, SENS = 74, 
    MONTECARLO = 75, NOISE = 76, CHECKLIMIT = 77, A2D = 78, B3SOIPD = 79, 
    BJT = 80, BJT301 = 81, BJT500 = 82, BJT503 = 83, BJT504 = 84, BJT504T = 85, 
    BSIM1 = 86, BSIM2 = 87, BSIM3 = 88, BSIM3V3 = 89, BSIM4 = 90, BSIMSOI = 91, 
    BTASOI = 92, CAPACITOR = 93, CCCS = 94, CCVS = 95, CKTROM = 96, CORE = 97, 
    D2A = 98, DELAY = 99, DIO500 = 100, DIODE = 101, EKV = 102, FOURIER = 103, 
    GAAS = 104, HBT = 105, HISIM = 106, HVMOS = 107, INDUCTOR = 108, INTCAP = 109, 
    IPROBE = 110, ISOURCE = 111, JFET = 112, JUNCAP = 113, MISNAN = 114, 
    MOS0 = 115, MOS1 = 116, MOS1000 = 117, MOS1100 = 118, MOS11010 = 119, 
    MOS11011 = 120, MOS15 = 121, MOS2 = 122, MOS3 = 123, MOS30 = 124, MOS3002 = 125, 
    MOS3100 = 126, MOS40 = 127, MOS705 = 128, MOS902 = 129, MOS903 = 130, 
    MSLINE = 131, MTLINE = 132, MUTUAL_INDUCTOR = 133, NODCAP = 134, NODE = 135, 
    NPORT = 136, PARAMTEST = 137, PCCCS = 138, PCCVS = 139, PHY_RES = 140, 
    PORT = 141, PSITFT = 142, PVCCS = 143, PVCVS = 144, QUANTITY = 145, 
    RDIFF = 146, RELAY = 147, RESISTOR = 148, SCCCS = 149, SCCVS = 150, 
    SVCCS = 151, SVCVS = 152, SWITCH = 153, TLINE = 154, TOM2 = 155, TOM3 = 156, 
    TRANSFORMER = 157, VBIC = 158, VCCS = 159, VCVS = 160, VSOURCE = 161, 
    WINDING = 162, ZCCCS = 163, ZCCVS = 164, ZVCCS = 165, ZVCVS = 166, BSOURCE = 167, 
    EQUAL = 168, EXCLAMATION_MARK = 169, LESS_THAN = 170, GREATER_THAN = 171, 
    LESS_THAN_EQUAL = 172, GREATER_THAN_EQUAL = 173, LOGIC_EQUAL = 174, 
    LOGIC_NOT_EQUAL = 175, LOGIC_AND = 176, LOGIC_OR = 177, LOGIC_BITWISE_AND = 178, 
    LOGIC_BITWISE_OR = 179, LOGIC_XOR = 180, BITWISE_SHIFT_LEFT = 181, BITWISE_SHIFT_RIGHT = 182, 
    POWER_OPERATOR = 183, AND = 184, OR = 185, COLON = 186, SEMICOLON = 187, 
    PLUS = 188, MINUS = 189, STAR = 190, OPEN_ROUND = 191, CLOSE_ROUND = 192, 
    OPEN_SQUARE = 193, CLOSE_SQUARE = 194, OPEN_CURLY = 195, CLOSE_CURLY = 196, 
    QUESTION_MARK = 197, COMMA = 198, DOLLAR = 199, AMPERSAND = 200, DOT = 201, 
    UNDERSCORE = 202, AT_SIGN = 203, POUND_SIGN = 204, BACKSLASH = 205, 
    SLASH = 206, APEX = 207, QUOTES = 208, PIPE = 209, PERCENT = 210, CARET = 211, 
    TILDE = 212, ARROW = 213, PERCENTAGE = 214, COMPLEX = 215, NUMBER = 216, 
    ID = 217, STRING = 218, NL = 219, WS = 220, CNL = 221
  };

  enum {
    RuleNetlist = 0, RuleNetlist_title = 1, RuleNetlist_entity = 2, RuleInclude = 3, 
    RuleStandard_include = 4, RuleCpp_include = 5, RuleAhdl_include = 6, 
    RuleLang = 7, RuleLibrary = 8, RuleLibrary_header = 9, RuleLibrary_content = 10, 
    RuleLibrary_footer = 11, RuleSection = 12, RuleSection_header = 13, 
    RuleSection_content = 14, RuleSection_footer = 15, RuleAnalogmodel = 16, 
    RuleSubckt = 17, RuleSubckt_header = 18, RuleSubckt_content = 19, RuleSubckt_footer = 20, 
    RuleIf_statement = 21, RuleIf_alternative = 22, RuleIf_body = 23, RuleAnalysis = 24, 
    RuleAc = 25, RuleAcmatch = 26, RuleDc = 27, RuleDcmatch = 28, RuleEnvlp = 29, 
    RuleSp = 30, RuleStb = 31, RuleSweep = 32, RuleSweep_header = 33, RuleSweep_content = 34, 
    RuleSweep_footer = 35, RuleTdr = 36, RuleTran = 37, RuleXf = 38, RulePac = 39, 
    RulePdisto = 40, RulePnoise = 41, RulePsp = 42, RulePss = 43, RulePxf = 44, 
    RulePz = 45, RuleQpac = 46, RuleQpnoise = 47, RuleQpsp = 48, RuleQpss = 49, 
    RuleQpxf = 50, RuleSens = 51, RuleSens_output_variables_list = 52, RuleSens_design_parameters_list = 53, 
    RuleSens_analyses_list = 54, RuleMontecarlo = 55, RuleMontecarlo_header = 56, 
    RuleMontecarlo_content = 57, RuleMontecarlo_export = 58, RuleMontecarlo_footer = 59, 
    RuleNoise = 60, RuleChecklimit = 61, RuleGlobal = 62, RuleModel = 63, 
    RuleModel_name = 64, RuleModel_master = 65, RuleControl = 66, RuleAlter = 67, 
    RuleAltergroup = 68, RuleAltergroup_header = 69, RuleAltergroup_content = 70, 
    RuleAltergroup_footer = 71, RuleAssert_statement = 72, RuleCheck_statement = 73, 
    RuleSave = 74, RuleOption = 75, RuleSet = 76, RuleShell = 77, RuleInfo = 78, 
    RuleNodeset = 79, RuleIc = 80, RuleStatistics = 81, RuleStatistics_header = 82, 
    RuleStatistics_content = 83, RuleStatistics_footer = 84, RuleProcess = 85, 
    RuleMismatch = 86, RuleCorrelate = 87, RuleTruncate = 88, RuleVary = 89, 
    RuleReliability = 90, RuleReliability_header = 91, RuleReliability_content = 92, 
    RuleReliability_footer = 93, RuleReliability_control = 94, RuleGlobal_declarations = 95, 
    RuleComponent = 96, RuleComponent_id = 97, RuleComponent_master = 98, 
    RuleComponent_attribute = 99, RuleComponent_value = 100, RuleComponent_value_list = 101, 
    RuleComponent_analysis = 102, RuleNode_list = 103, RuleNode_list_item = 104, 
    RuleNode_mapping = 105, RuleNode_pair = 106, RuleNode_branch = 107, 
    RuleNode = 108, RuleExpression = 109, RuleExpression_unary = 110, RuleExpression_function_call = 111, 
    RuleExpression_pair = 112, RuleExpression_scope = 113, RuleExpression_operator = 114, 
    RuleExpression_atom = 115, RuleParameter_list = 116, RuleParameter_list_item = 117, 
    RuleParameter_assign = 118, RuleParameter_id = 119, RuleParameter_access = 120, 
    RuleValue_access = 121, RuleValue_access_assign = 122, RuleTime_pair = 123, 
    RuleTime_point = 124, RuleFilepath = 125, RuleFilepath_element = 126, 
    RuleKeyword = 127, RuleAnalysis_type = 128, RuleComponent_type = 129
  };

  SPECTREParser(antlr4::TokenStream *input);
  ~SPECTREParser();

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
  class Cpp_includeContext;
  class Ahdl_includeContext;
  class LangContext;
  class LibraryContext;
  class Library_headerContext;
  class Library_contentContext;
  class Library_footerContext;
  class SectionContext;
  class Section_headerContext;
  class Section_contentContext;
  class Section_footerContext;
  class AnalogmodelContext;
  class SubcktContext;
  class Subckt_headerContext;
  class Subckt_contentContext;
  class Subckt_footerContext;
  class If_statementContext;
  class If_alternativeContext;
  class If_bodyContext;
  class AnalysisContext;
  class AcContext;
  class AcmatchContext;
  class DcContext;
  class DcmatchContext;
  class EnvlpContext;
  class SpContext;
  class StbContext;
  class SweepContext;
  class Sweep_headerContext;
  class Sweep_contentContext;
  class Sweep_footerContext;
  class TdrContext;
  class TranContext;
  class XfContext;
  class PacContext;
  class PdistoContext;
  class PnoiseContext;
  class PspContext;
  class PssContext;
  class PxfContext;
  class PzContext;
  class QpacContext;
  class QpnoiseContext;
  class QpspContext;
  class QpssContext;
  class QpxfContext;
  class SensContext;
  class Sens_output_variables_listContext;
  class Sens_design_parameters_listContext;
  class Sens_analyses_listContext;
  class MontecarloContext;
  class Montecarlo_headerContext;
  class Montecarlo_contentContext;
  class Montecarlo_exportContext;
  class Montecarlo_footerContext;
  class NoiseContext;
  class ChecklimitContext;
  class GlobalContext;
  class ModelContext;
  class Model_nameContext;
  class Model_masterContext;
  class ControlContext;
  class AlterContext;
  class AltergroupContext;
  class Altergroup_headerContext;
  class Altergroup_contentContext;
  class Altergroup_footerContext;
  class Assert_statementContext;
  class Check_statementContext;
  class SaveContext;
  class OptionContext;
  class SetContext;
  class ShellContext;
  class InfoContext;
  class NodesetContext;
  class IcContext;
  class StatisticsContext;
  class Statistics_headerContext;
  class Statistics_contentContext;
  class Statistics_footerContext;
  class ProcessContext;
  class MismatchContext;
  class CorrelateContext;
  class TruncateContext;
  class VaryContext;
  class ReliabilityContext;
  class Reliability_headerContext;
  class Reliability_contentContext;
  class Reliability_footerContext;
  class Reliability_controlContext;
  class Global_declarationsContext;
  class ComponentContext;
  class Component_idContext;
  class Component_masterContext;
  class Component_attributeContext;
  class Component_valueContext;
  class Component_value_listContext;
  class Component_analysisContext;
  class Node_listContext;
  class Node_list_itemContext;
  class Node_mappingContext;
  class Node_pairContext;
  class Node_branchContext;
  class NodeContext;
  class ExpressionContext;
  class Expression_unaryContext;
  class Expression_function_callContext;
  class Expression_pairContext;
  class Expression_scopeContext;
  class Expression_operatorContext;
  class Expression_atomContext;
  class Parameter_listContext;
  class Parameter_list_itemContext;
  class Parameter_assignContext;
  class Parameter_idContext;
  class Parameter_accessContext;
  class Value_accessContext;
  class Value_access_assignContext;
  class Time_pairContext;
  class Time_pointContext;
  class FilepathContext;
  class Filepath_elementContext;
  class KeywordContext;
  class Analysis_typeContext;
  class Component_typeContext; 

  class  NetlistContext : public antlr4::ParserRuleContext {
  public:
    NetlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOF();
    antlr4::tree::TerminalNode* EOF(size_t i);
    Netlist_titleContext *netlist_title();
    std::vector<Netlist_entityContext *> netlist_entity();
    Netlist_entityContext* netlist_entity(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NetlistContext* netlist();

  class  Netlist_titleContext : public antlr4::ParserRuleContext {
  public:
    Netlist_titleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

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
    SubcktContext *subckt();
    AnalysisContext *analysis();
    GlobalContext *global();
    ModelContext *model();
    Global_declarationsContext *global_declarations();
    ControlContext *control();
    ComponentContext *component();
    LangContext *lang();
    SectionContext *section();
    AnalogmodelContext *analogmodel();
    StatisticsContext *statistics();

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
    Cpp_includeContext *cpp_include();
    Ahdl_includeContext *ahdl_include();

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
    antlr4::tree::TerminalNode *EOF();
    Parameter_assignContext *parameter_assign();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Standard_includeContext* standard_include();

  class  Cpp_includeContext : public antlr4::ParserRuleContext {
  public:
    Cpp_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CPP_INCLUDE();
    FilepathContext *filepath();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cpp_includeContext* cpp_include();

  class  Ahdl_includeContext : public antlr4::ParserRuleContext {
  public:
    Ahdl_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AHDL_INCLUDE();
    FilepathContext *filepath();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ahdl_includeContext* ahdl_include();

  class  LangContext : public antlr4::ParserRuleContext {
  public:
    LangContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMULATOR();
    antlr4::tree::TerminalNode *LANGUAGE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    antlr4::tree::TerminalNode *SPICE();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *SPECTRE();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LangContext* lang();

  class  LibraryContext : public antlr4::ParserRuleContext {
  public:
    LibraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_headerContext *library_header();
    Library_footerContext *library_footer();
    std::vector<Library_contentContext *> library_content();
    Library_contentContext* library_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LibraryContext* library();

  class  Library_headerContext : public antlr4::ParserRuleContext {
  public:
    Library_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_headerContext* library_header();

  class  Library_contentContext : public antlr4::ParserRuleContext {
  public:
    Library_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_contentContext* library_content();

  class  Library_footerContext : public antlr4::ParserRuleContext {
  public:
    Library_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY_END();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_footerContext* library_footer();

  class  SectionContext : public antlr4::ParserRuleContext {
  public:
    SectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Section_headerContext *section_header();
    Section_footerContext *section_footer();
    std::vector<Section_contentContext *> section_content();
    Section_contentContext* section_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SectionContext* section();

  class  Section_headerContext : public antlr4::ParserRuleContext {
  public:
    Section_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Section_headerContext* section_header();

  class  Section_contentContext : public antlr4::ParserRuleContext {
  public:
    Section_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Section_contentContext* section_content();

  class  Section_footerContext : public antlr4::ParserRuleContext {
  public:
    Section_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SECTION_END();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Section_footerContext* section_footer();

  class  AnalogmodelContext : public antlr4::ParserRuleContext {
  public:
    AnalogmodelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Node_listContext *node_list();
    antlr4::tree::TerminalNode *ANALOGMODEL();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnalogmodelContext* analogmodel();

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
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INLINE_SUBCKT();
    antlr4::tree::TerminalNode *SUBCKT();
    Node_listContext *node_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

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
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subckt_footerContext* subckt_footer();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    If_bodyContext *if_body();
    If_alternativeContext *if_alternative();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  If_alternativeContext : public antlr4::ParserRuleContext {
  public:
    If_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    If_bodyContext *if_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_alternativeContext* if_alternative();

  class  If_bodyContext : public antlr4::ParserRuleContext {
  public:
    If_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<ComponentContext *> component();
    ComponentContext* component(size_t i);
    std::vector<AnalysisContext *> analysis();
    AnalysisContext* analysis(size_t i);
    std::vector<ControlContext *> control();
    ControlContext* control(size_t i);
    std::vector<If_statementContext *> if_statement();
    If_statementContext* if_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_bodyContext* if_body();

  class  AnalysisContext : public antlr4::ParserRuleContext {
  public:
    AnalysisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AcContext *ac();
    AcmatchContext *acmatch();
    DcContext *dc();
    DcmatchContext *dcmatch();
    EnvlpContext *envlp();
    SpContext *sp();
    StbContext *stb();
    SweepContext *sweep();
    TdrContext *tdr();
    TranContext *tran();
    XfContext *xf();
    PacContext *pac();
    PdistoContext *pdisto();
    PnoiseContext *pnoise();
    PspContext *psp();
    PssContext *pss();
    PxfContext *pxf();
    PzContext *pz();
    QpacContext *qpac();
    QpnoiseContext *qpnoise();
    QpspContext *qpsp();
    QpssContext *qpss();
    QpxfContext *qpxf();
    SensContext *sens();
    MontecarloContext *montecarlo();
    NoiseContext *noise();
    ChecklimitContext *checklimit();
    ReliabilityContext *reliability();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnalysisContext* analysis();

  class  AcContext : public antlr4::ParserRuleContext {
  public:
    AcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *AC();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcContext* ac();

  class  AcmatchContext : public antlr4::ParserRuleContext {
  public:
    AcmatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ACMATCH();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcmatchContext* acmatch();

  class  DcContext : public antlr4::ParserRuleContext {
  public:
    DcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DC();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DcContext* dc();

  class  DcmatchContext : public antlr4::ParserRuleContext {
  public:
    DcmatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DCMATCH();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DcmatchContext* dcmatch();

  class  EnvlpContext : public antlr4::ParserRuleContext {
  public:
    EnvlpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ENVLP();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnvlpContext* envlp();

  class  SpContext : public antlr4::ParserRuleContext {
  public:
    SpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpContext* sp();

  class  StbContext : public antlr4::ParserRuleContext {
  public:
    StbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STB();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StbContext* stb();

  class  SweepContext : public antlr4::ParserRuleContext {
  public:
    SweepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sweep_headerContext *sweep_header();
    Sweep_footerContext *sweep_footer();
    std::vector<Sweep_contentContext *> sweep_content();
    Sweep_contentContext* sweep_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SweepContext* sweep();

  class  Sweep_headerContext : public antlr4::ParserRuleContext {
  public:
    Sweep_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SWEEP();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<Parameter_listContext *> parameter_list();
    Parameter_listContext* parameter_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sweep_headerContext* sweep_header();

  class  Sweep_contentContext : public antlr4::ParserRuleContext {
  public:
    Sweep_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sweep_contentContext* sweep_content();

  class  Sweep_footerContext : public antlr4::ParserRuleContext {
  public:
    Sweep_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sweep_footerContext* sweep_footer();

  class  TdrContext : public antlr4::ParserRuleContext {
  public:
    TdrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *TDR();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TdrContext* tdr();

  class  TranContext : public antlr4::ParserRuleContext {
  public:
    TranContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranContext* tran();

  class  XfContext : public antlr4::ParserRuleContext {
  public:
    XfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *XF();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XfContext* xf();

  class  PacContext : public antlr4::ParserRuleContext {
  public:
    PacContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PAC();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PacContext* pac();

  class  PdistoContext : public antlr4::ParserRuleContext {
  public:
    PdistoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PDISTO();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PdistoContext* pdisto();

  class  PnoiseContext : public antlr4::ParserRuleContext {
  public:
    PnoiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PNOISE();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PnoiseContext* pnoise();

  class  PspContext : public antlr4::ParserRuleContext {
  public:
    PspContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PSP();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PspContext* psp();

  class  PssContext : public antlr4::ParserRuleContext {
  public:
    PssContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PSS();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PssContext* pss();

  class  PxfContext : public antlr4::ParserRuleContext {
  public:
    PxfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PXF();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PxfContext* pxf();

  class  PzContext : public antlr4::ParserRuleContext {
  public:
    PzContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PZ();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PzContext* pz();

  class  QpacContext : public antlr4::ParserRuleContext {
  public:
    QpacContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *QPAC();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QpacContext* qpac();

  class  QpnoiseContext : public antlr4::ParserRuleContext {
  public:
    QpnoiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *QPNOISE();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QpnoiseContext* qpnoise();

  class  QpspContext : public antlr4::ParserRuleContext {
  public:
    QpspContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *QPSP();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QpspContext* qpsp();

  class  QpssContext : public antlr4::ParserRuleContext {
  public:
    QpssContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *QPSS();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QpssContext* qpss();

  class  QpxfContext : public antlr4::ParserRuleContext {
  public:
    QpxfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *QPXF();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QpxfContext* qpxf();

  class  SensContext : public antlr4::ParserRuleContext {
  public:
    SensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SENS();
    antlr4::tree::TerminalNode *EOF();
    Sens_output_variables_listContext *sens_output_variables_list();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<Sens_design_parameters_listContext *> sens_design_parameters_list();
    Sens_design_parameters_listContext* sens_design_parameters_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SensContext* sens();

  class  Sens_output_variables_listContext : public antlr4::ParserRuleContext {
  public:
    Sens_output_variables_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    std::vector<Node_listContext *> node_list();
    Node_listContext* node_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sens_output_variables_listContext* sens_output_variables_list();

  class  Sens_design_parameters_listContext : public antlr4::ParserRuleContext {
  public:
    Sens_design_parameters_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    std::vector<Node_listContext *> node_list();
    Node_listContext* node_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sens_design_parameters_listContext* sens_design_parameters_list();

  class  Sens_analyses_listContext : public antlr4::ParserRuleContext {
  public:
    Sens_analyses_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    std::vector<Node_listContext *> node_list();
    Node_listContext* node_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sens_analyses_listContext* sens_analyses_list();

  class  MontecarloContext : public antlr4::ParserRuleContext {
  public:
    MontecarloContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Montecarlo_headerContext *montecarlo_header();
    Montecarlo_exportContext *montecarlo_export();
    Montecarlo_footerContext *montecarlo_footer();
    std::vector<Montecarlo_contentContext *> montecarlo_content();
    Montecarlo_contentContext* montecarlo_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MontecarloContext* montecarlo();

  class  Montecarlo_headerContext : public antlr4::ParserRuleContext {
  public:
    Montecarlo_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MONTECARLO();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<Parameter_listContext *> parameter_list();
    Parameter_listContext* parameter_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Montecarlo_headerContext* montecarlo_header();

  class  Montecarlo_contentContext : public antlr4::ParserRuleContext {
  public:
    Montecarlo_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Montecarlo_contentContext* montecarlo_content();

  class  Montecarlo_exportContext : public antlr4::ParserRuleContext {
  public:
    Montecarlo_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORT();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Montecarlo_exportContext* montecarlo_export();

  class  Montecarlo_footerContext : public antlr4::ParserRuleContext {
  public:
    Montecarlo_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Montecarlo_footerContext* montecarlo_footer();

  class  NoiseContext : public antlr4::ParserRuleContext {
  public:
    NoiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NOISE();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoiseContext* noise();

  class  ChecklimitContext : public antlr4::ParserRuleContext {
  public:
    ChecklimitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *CHECKLIMIT();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChecklimitContext* checklimit();

  class  GlobalContext : public antlr4::ParserRuleContext {
  public:
    GlobalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    Node_listContext *node_list();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalContext* global();

  class  ModelContext : public antlr4::ParserRuleContext {
  public:
    ModelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODEL();
    Model_nameContext *model_name();
    Model_masterContext *model_master();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModelContext* model();

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
    Component_typeContext *component_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_masterContext* model_master();

  class  ControlContext : public antlr4::ParserRuleContext {
  public:
    ControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterContext *alter();
    AltergroupContext *altergroup();
    Assert_statementContext *assert_statement();
    Check_statementContext *check_statement();
    SaveContext *save();
    OptionContext *option();
    SetContext *set();
    ShellContext *shell();
    InfoContext *info();
    NodesetContext *nodeset();
    IcContext *ic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlContext* control();

  class  AlterContext : public antlr4::ParserRuleContext {
  public:
    AlterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterContext* alter();

  class  AltergroupContext : public antlr4::ParserRuleContext {
  public:
    AltergroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Altergroup_headerContext *altergroup_header();
    Global_declarationsContext *global_declarations();
    Altergroup_footerContext *altergroup_footer();
    std::vector<Altergroup_contentContext *> altergroup_content();
    Altergroup_contentContext* altergroup_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AltergroupContext* altergroup();

  class  Altergroup_headerContext : public antlr4::ParserRuleContext {
  public:
    Altergroup_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ALTERGROUP();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Altergroup_headerContext* altergroup_header();

  class  Altergroup_contentContext : public antlr4::ParserRuleContext {
  public:
    Altergroup_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Altergroup_contentContext* altergroup_content();

  class  Altergroup_footerContext : public antlr4::ParserRuleContext {
  public:
    Altergroup_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Altergroup_footerContext* altergroup_footer();

  class  Assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSERT();
    Parameter_assignContext *parameter_assign();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assert_statementContext* assert_statement();

  class  Check_statementContext : public antlr4::ParserRuleContext {
  public:
    Check_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *CHECK();
    Parameter_assignContext *parameter_assign();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_statementContext* check_statement();

  class  SaveContext : public antlr4::ParserRuleContext {
  public:
    SaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SaveContext* save();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionContext* option();

  class  SetContext : public antlr4::ParserRuleContext {
  public:
    SetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetContext* set();

  class  ShellContext : public antlr4::ParserRuleContext {
  public:
    ShellContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SHELL();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShellContext* shell();

  class  InfoContext : public antlr4::ParserRuleContext {
  public:
    InfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INFO();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InfoContext* info();

  class  NodesetContext : public antlr4::ParserRuleContext {
  public:
    NodesetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NODESET();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EOF();
    Parameter_accessContext *parameter_access();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NodesetContext* nodeset();

  class  IcContext : public antlr4::ParserRuleContext {
  public:
    IcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IC();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IcContext* ic();

  class  StatisticsContext : public antlr4::ParserRuleContext {
  public:
    StatisticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statistics_headerContext *statistics_header();
    Statistics_footerContext *statistics_footer();
    std::vector<Statistics_contentContext *> statistics_content();
    Statistics_contentContext* statistics_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatisticsContext* statistics();

  class  Statistics_headerContext : public antlr4::ParserRuleContext {
  public:
    Statistics_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statistics_headerContext* statistics_header();

  class  Statistics_contentContext : public antlr4::ParserRuleContext {
  public:
    Statistics_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcessContext *process();
    MismatchContext *mismatch();
    VaryContext *vary();
    CorrelateContext *correlate();
    TruncateContext *truncate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statistics_contentContext* statistics_content();

  class  Statistics_footerContext : public antlr4::ParserRuleContext {
  public:
    Statistics_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statistics_footerContext* statistics_footer();

  class  ProcessContext : public antlr4::ParserRuleContext {
  public:
    ProcessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<Statistics_contentContext *> statistics_content();
    Statistics_contentContext* statistics_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcessContext* process();

  class  MismatchContext : public antlr4::ParserRuleContext {
  public:
    MismatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MISMATCH();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<Statistics_contentContext *> statistics_content();
    Statistics_contentContext* statistics_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MismatchContext* mismatch();

  class  CorrelateContext : public antlr4::ParserRuleContext {
  public:
    CorrelateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CORRELATE();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_SQUARE();
    antlr4::tree::TerminalNode* OPEN_SQUARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_SQUARE();
    antlr4::tree::TerminalNode* CLOSE_SQUARE(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<Parameter_idContext *> parameter_id();
    Parameter_idContext* parameter_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    Parameter_assignContext *parameter_assign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CorrelateContext* correlate();

  class  TruncateContext : public antlr4::ParserRuleContext {
  public:
    TruncateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    Parameter_assignContext *parameter_assign();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TruncateContext* truncate();

  class  VaryContext : public antlr4::ParserRuleContext {
  public:
    VaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARY();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EOF();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VaryContext* vary();

  class  ReliabilityContext : public antlr4::ParserRuleContext {
  public:
    ReliabilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Reliability_headerContext *reliability_header();
    Reliability_footerContext *reliability_footer();
    std::vector<Reliability_contentContext *> reliability_content();
    Reliability_contentContext* reliability_content(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReliabilityContext* reliability();

  class  Reliability_headerContext : public antlr4::ParserRuleContext {
  public:
    Reliability_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *RELIABILITY();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Parameter_listContext *parameter_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reliability_headerContext* reliability_header();

  class  Reliability_contentContext : public antlr4::ParserRuleContext {
  public:
    Reliability_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Reliability_controlContext *reliability_control();
    Netlist_entityContext *netlist_entity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reliability_contentContext* reliability_content();

  class  Reliability_footerContext : public antlr4::ParserRuleContext {
  public:
    Reliability_footerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reliability_footerContext* reliability_footer();

  class  Reliability_controlContext : public antlr4::ParserRuleContext {
  public:
    Reliability_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reliability_controlContext* reliability_control();

  class  Global_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Global_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_PARAMETERS();
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    antlr4::tree::TerminalNode *EOF();
    std::vector<Parameter_list_itemContext *> parameter_list_item();
    Parameter_list_itemContext* parameter_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_declarationsContext* global_declarations();

  class  ComponentContext : public antlr4::ParserRuleContext {
  public:
    ComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_idContext *component_id();
    Component_masterContext *component_master();
    antlr4::tree::TerminalNode *EOF();
    Node_listContext *node_list();
    std::vector<Component_attributeContext *> component_attribute();
    Component_attributeContext* component_attribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentContext* component();

  class  Component_idContext : public antlr4::ParserRuleContext {
  public:
    Component_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_idContext* component_id();

  class  Component_masterContext : public antlr4::ParserRuleContext {
  public:
    Component_masterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Component_typeContext *component_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_masterContext* component_master();

  class  Component_attributeContext : public antlr4::ParserRuleContext {
  public:
    Component_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_valueContext *component_value();
    Component_value_listContext *component_value_list();
    Component_analysisContext *component_analysis();
    Parameter_assignContext *parameter_assign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_attributeContext* component_attribute();

  class  Component_valueContext : public antlr4::ParserRuleContext {
  public:
    Component_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_valueContext* component_value();

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
    antlr4::tree::TerminalNode *WAVE();
    antlr4::tree::TerminalNode *COEFFS();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<Time_pairContext *> time_pair();
    Time_pairContext* time_pair(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OPEN_SQUARE();
    antlr4::tree::TerminalNode *CLOSE_SQUARE();
    std::vector<antlr4::tree::TerminalNode *> OPEN_CURLY();
    antlr4::tree::TerminalNode* OPEN_CURLY(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_value_listContext* component_value_list();

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

  class  Node_listContext : public antlr4::ParserRuleContext {
  public:
    Node_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Node_list_itemContext *> node_list_item();
    Node_list_itemContext* node_list_item(size_t i);
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
    Node_mappingContext *node_mapping();
    Node_branchContext *node_branch();

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

  class  Node_pairContext : public antlr4::ParserRuleContext {
  public:
    Node_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Node_pairContext* node_pair();

  class  Node_branchContext : public antlr4::ParserRuleContext {
  public:
    Node_branchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NodeContext *> node();
    NodeContext* node(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Node_branchContext* node_branch();

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

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_unaryContext *expression_unary();
    Expression_function_callContext *expression_function_call();
    Expression_scopeContext *expression_scope();
    Expression_atomContext *expression_atom();
    Expression_pairContext *expression_pair();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *COLON();
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
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_function_callContext* expression_function_call();

  class  Expression_pairContext : public antlr4::ParserRuleContext {
  public:
    Expression_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_atomContext *> expression_atom();
    Expression_atomContext* expression_atom(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_pairContext* expression_pair();

  class  Expression_scopeContext : public antlr4::ParserRuleContext {
  public:
    Expression_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<antlr4::tree::TerminalNode *> APEX();
    antlr4::tree::TerminalNode* APEX(size_t i);
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

  Expression_scopeContext* expression_scope();

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
    KeywordContext *keyword();
    Analysis_typeContext *analysis_type();
    Component_typeContext *component_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_atomContext* expression_atom();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETERS();
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
    Parameter_assignContext *parameter_assign();
    Parameter_idContext *parameter_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_list_itemContext* parameter_list_item();

  class  Parameter_assignContext : public antlr4::ParserRuleContext {
  public:
    Parameter_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_idContext *parameter_id();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    FilepathContext *filepath();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_assignContext* parameter_assign();

  class  Parameter_idContext : public antlr4::ParserRuleContext {
  public:
    Parameter_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *DC();
    Expression_scopeContext *expression_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_idContext* parameter_id();

  class  Parameter_accessContext : public antlr4::ParserRuleContext {
  public:
    Parameter_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_accessContext* parameter_access();

  class  Value_accessContext : public antlr4::ParserRuleContext {
  public:
    Value_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND();
    antlr4::tree::TerminalNode *CLOSE_ROUND();
    ExpressionContext *expression();
    Node_pairContext *node_pair();
    NodeContext *node();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_accessContext* value_access();

  class  Value_access_assignContext : public antlr4::ParserRuleContext {
  public:
    Value_access_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_accessContext *value_access();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_access_assignContext* value_access_assign();

  class  Time_pairContext : public antlr4::ParserRuleContext {
  public:
    Time_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Time_pointContext *time_point();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_pairContext* time_pair();

  class  Time_pointContext : public antlr4::ParserRuleContext {
  public:
    Time_pointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_pointContext* time_point();

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

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALTERGROUP();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SHELL();
    antlr4::tree::TerminalNode *INFO();
    antlr4::tree::TerminalNode *NODESET();
    antlr4::tree::TerminalNode *IC();
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *PORTS();
    antlr4::tree::TerminalNode *WAVE();
    antlr4::tree::TerminalNode *PWL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SFFM();
    antlr4::tree::TerminalNode *PULSE();
    antlr4::tree::TerminalNode *COEFFS();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *PARAMETERS();
    antlr4::tree::TerminalNode *ANALOGMODEL();
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *SPECTRE();
    antlr4::tree::TerminalNode *SPICE();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *CORRELATE();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *MISMATCH();
    antlr4::tree::TerminalNode *VARY();
    antlr4::tree::TerminalNode *RELIABILITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  Analysis_typeContext : public antlr4::ParserRuleContext {
  public:
    Analysis_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AC();
    antlr4::tree::TerminalNode *ACMATCH();
    antlr4::tree::TerminalNode *DC();
    antlr4::tree::TerminalNode *DCMATCH();
    antlr4::tree::TerminalNode *ENVLP();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *STB();
    antlr4::tree::TerminalNode *SWEEP();
    antlr4::tree::TerminalNode *TDR();
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *XF();
    antlr4::tree::TerminalNode *PAC();
    antlr4::tree::TerminalNode *PDISTO();
    antlr4::tree::TerminalNode *PNOISE();
    antlr4::tree::TerminalNode *PSP();
    antlr4::tree::TerminalNode *PSS();
    antlr4::tree::TerminalNode *PXF();
    antlr4::tree::TerminalNode *PZ();
    antlr4::tree::TerminalNode *QPAC();
    antlr4::tree::TerminalNode *QPNOISE();
    antlr4::tree::TerminalNode *QPSP();
    antlr4::tree::TerminalNode *QPSS();
    antlr4::tree::TerminalNode *QPXF();
    antlr4::tree::TerminalNode *SENS();
    antlr4::tree::TerminalNode *MONTECARLO();
    antlr4::tree::TerminalNode *NOISE();
    antlr4::tree::TerminalNode *CHECKLIMIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analysis_typeContext* analysis_type();

  class  Component_typeContext : public antlr4::ParserRuleContext {
  public:
    Component_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A2D();
    antlr4::tree::TerminalNode *B3SOIPD();
    antlr4::tree::TerminalNode *BJT();
    antlr4::tree::TerminalNode *BJT301();
    antlr4::tree::TerminalNode *BJT500();
    antlr4::tree::TerminalNode *BJT503();
    antlr4::tree::TerminalNode *BJT504();
    antlr4::tree::TerminalNode *BJT504T();
    antlr4::tree::TerminalNode *BSIM1();
    antlr4::tree::TerminalNode *BSIM2();
    antlr4::tree::TerminalNode *BSIM3();
    antlr4::tree::TerminalNode *BSIM3V3();
    antlr4::tree::TerminalNode *BSIM4();
    antlr4::tree::TerminalNode *BSIMSOI();
    antlr4::tree::TerminalNode *BTASOI();
    antlr4::tree::TerminalNode *CAPACITOR();
    antlr4::tree::TerminalNode *CCCS();
    antlr4::tree::TerminalNode *CCVS();
    antlr4::tree::TerminalNode *CKTROM();
    antlr4::tree::TerminalNode *CORE();
    antlr4::tree::TerminalNode *D2A();
    antlr4::tree::TerminalNode *DELAY();
    antlr4::tree::TerminalNode *DIO500();
    antlr4::tree::TerminalNode *DIODE();
    antlr4::tree::TerminalNode *EKV();
    antlr4::tree::TerminalNode *FOURIER();
    antlr4::tree::TerminalNode *GAAS();
    antlr4::tree::TerminalNode *HBT();
    antlr4::tree::TerminalNode *HISIM();
    antlr4::tree::TerminalNode *HVMOS();
    antlr4::tree::TerminalNode *INDUCTOR();
    antlr4::tree::TerminalNode *INTCAP();
    antlr4::tree::TerminalNode *IPROBE();
    antlr4::tree::TerminalNode *ISOURCE();
    antlr4::tree::TerminalNode *JFET();
    antlr4::tree::TerminalNode *JUNCAP();
    antlr4::tree::TerminalNode *MISNAN();
    antlr4::tree::TerminalNode *MOS0();
    antlr4::tree::TerminalNode *MOS1();
    antlr4::tree::TerminalNode *MOS1000();
    antlr4::tree::TerminalNode *MOS1100();
    antlr4::tree::TerminalNode *MOS11010();
    antlr4::tree::TerminalNode *MOS11011();
    antlr4::tree::TerminalNode *MOS15();
    antlr4::tree::TerminalNode *MOS2();
    antlr4::tree::TerminalNode *MOS3();
    antlr4::tree::TerminalNode *MOS30();
    antlr4::tree::TerminalNode *MOS3002();
    antlr4::tree::TerminalNode *MOS3100();
    antlr4::tree::TerminalNode *MOS40();
    antlr4::tree::TerminalNode *MOS705();
    antlr4::tree::TerminalNode *MOS902();
    antlr4::tree::TerminalNode *MOS903();
    antlr4::tree::TerminalNode *MSLINE();
    antlr4::tree::TerminalNode *MTLINE();
    antlr4::tree::TerminalNode *MUTUAL_INDUCTOR();
    antlr4::tree::TerminalNode *NODCAP();
    antlr4::tree::TerminalNode *NODE();
    antlr4::tree::TerminalNode *NPORT();
    antlr4::tree::TerminalNode *PARAMTEST();
    antlr4::tree::TerminalNode *PCCCS();
    antlr4::tree::TerminalNode *PCCVS();
    antlr4::tree::TerminalNode *PHY_RES();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PSITFT();
    antlr4::tree::TerminalNode *PVCCS();
    antlr4::tree::TerminalNode *PVCVS();
    antlr4::tree::TerminalNode *QUANTITY();
    antlr4::tree::TerminalNode *RDIFF();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *RESISTOR();
    antlr4::tree::TerminalNode *SCCCS();
    antlr4::tree::TerminalNode *SCCVS();
    antlr4::tree::TerminalNode *SVCCS();
    antlr4::tree::TerminalNode *SVCVS();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *TLINE();
    antlr4::tree::TerminalNode *TOM2();
    antlr4::tree::TerminalNode *TOM3();
    antlr4::tree::TerminalNode *TRANSFORMER();
    antlr4::tree::TerminalNode *VBIC();
    antlr4::tree::TerminalNode *VCCS();
    antlr4::tree::TerminalNode *VCVS();
    antlr4::tree::TerminalNode *VSOURCE();
    antlr4::tree::TerminalNode *WINDING();
    antlr4::tree::TerminalNode *ZCCCS();
    antlr4::tree::TerminalNode *ZCCVS();
    antlr4::tree::TerminalNode *ZVCCS();
    antlr4::tree::TerminalNode *ZVCVS();
    antlr4::tree::TerminalNode *BSOURCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_typeContext* component_type();


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
