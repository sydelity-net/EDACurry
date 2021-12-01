
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
