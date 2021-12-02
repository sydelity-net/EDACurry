
// Generated from g4files/ELDOLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace edacurry {


class  ELDOLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, INCLUDE = 2, DSPF_INCLUDE = 3, LIB = 4, LIB_END = 5, SUBCKT = 6, 
    SUBCKT_END = 7, NETLIST_END = 8, GLOBAL = 9, MODEL_DEF = 10, VERILOG = 11, 
    GLOBAL_PARAM = 12, ALTER = 13, SAVE = 14, OPTION = 15, OPT = 16, NODESET = 17, 
    CALL_TCL = 18, CHRENT = 19, CONNECT = 20, DEFMAC = 21, DEFWAVE = 22, 
    FFILE = 23, IC = 24, MEAS = 25, PLOT = 26, PRINT = 27, PROBE = 28, TEMP_SET = 29, 
    USE_TCL = 30, PARAM = 31, TEMP = 32, KEY = 33, NONOISE = 34, TABLE = 35, 
    PWL = 36, EXP = 37, SIN = 38, SFFM = 39, PULSE = 40, INTERP = 41, MOD = 42, 
    MODEL = 43, WHEN = 44, START = 45, START_OF_RUN = 46, END_OF_RUN = 47, 
    END = 48, FIND = 49, PP = 50, TRIG = 51, TARG = 52, PARAM_LIST_START = 53, 
    PIN_LIST_START = 54, NET_LIST_START = 55, PORT_LIST_START = 56, COUPLING_LIST_START = 57, 
    GENERIC_LIST_START = 58, AC = 59, AGE = 60, CHECKSOA = 61, DC = 62, 
    DCHIZ = 63, DCMISMATCH = 64, DEX = 65, DSP = 66, DSPMOD = 67, FOUR = 68, 
    LSTB = 69, MC = 70, NOISE = 71, NOISETRAN = 72, OP = 73, OPTFOUR = 74, 
    OPTIMIZE = 75, OPTNOISE = 76, PZ = 77, RAMP = 78, SENS = 79, SENSAC = 80, 
    SENSPARAM = 81, SNF = 82, SOLVE = 83, TF = 84, TRAN = 85, WCASE = 86, 
    EXTRACT = 87, RESISTOR = 88, CAPACITOR = 89, INDUCTOR = 90, COUPLED_INDUCTOR = 91, 
    DIFFUSION_RESISTOR = 92, TRANSMISSION_LINE = 93, LOSSY_TRANSMISSION_LINE = 94, 
    LTL_W_MODEL = 95, LTL_U_MODEL = 96, JUNCTION_DIODE = 97, BJT = 98, JFET = 99, 
    MOSFET = 100, S_DOMAIN_FILTER = 101, Z_DOMAIN_FILTER = 102, SUBCK_INSTANCE = 103, 
    IVSOURCE = 104, ICSOURCE = 105, VCVS = 106, CCCS = 107, VCCS = 108, 
    CCVS = 109, OPA = 110, SW = 111, NOISE_FUNCTION = 112, DIG_NAND = 113, 
    DIG_AND = 114, DIG_NOR = 115, DIG_OR = 116, DIG_XOR = 117, EQUAL = 118, 
    EXCLAMATION_MARK = 119, LESS_THAN = 120, GREATER_THAN = 121, LESS_THAN_EQUAL = 122, 
    GREATER_THAN_EQUAL = 123, LOGIC_EQUAL = 124, LOGIC_NOT_EQUAL = 125, 
    LOGIC_AND = 126, LOGIC_OR = 127, LOGIC_BITWISE_AND = 128, LOGIC_BITWISE_OR = 129, 
    LOGIC_XOR = 130, BITWISE_SHIFT_LEFT = 131, BITWISE_SHIFT_RIGHT = 132, 
    POWER_OPERATOR = 133, AND = 134, OR = 135, COLON = 136, SEMICOLON = 137, 
    PLUS = 138, MINUS = 139, STAR = 140, OPEN_ROUND = 141, CLOSE_ROUND = 142, 
    OPEN_SQUARE = 143, CLOSE_SQUARE = 144, OPEN_CURLY = 145, CLOSE_CURLY = 146, 
    QUESTION_MARK = 147, COMMA = 148, DOLLAR = 149, AMPERSAND = 150, DOT = 151, 
    UNDERSCORE = 152, AT_SIGN = 153, POUND_SIGN = 154, BACKSLASH = 155, 
    SLASH = 156, APEX = 157, QUOTES = 158, PIPE = 159, PERCENT = 160, CARET = 161, 
    TILDE = 162, ARROW = 163, PERCENTAGE = 164, COMPLEX = 165, NUMBER = 166, 
    ID = 167, STRING = 168, NL = 169, WS = 170, CNL = 171
  };

  enum {
    COMMENTS = 2
  };

  ELDOLexer(antlr4::CharStream *input);
  ~ELDOLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
  bool BOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace edacurry
