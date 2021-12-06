
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
    END = 48, FIND = 49, PP = 50, TRIG = 51, TARG = 52, AT = 53, DERIVATIVE = 54, 
    VECT = 55, CATVECT = 56, PARAM_LIST_START = 57, PIN_LIST_START = 58, 
    NET_LIST_START = 59, PORT_LIST_START = 60, COUPLING_LIST_START = 61, 
    GENERIC_LIST_START = 62, AC = 63, AGE = 64, CHECKSOA = 65, DC = 66, 
    DCHIZ = 67, DCMISMATCH = 68, DEX = 69, DSP = 70, DSPMOD = 71, FOUR = 72, 
    LSTB = 73, MC = 74, NOISE = 75, NOISETRAN = 76, OP = 77, OPTFOUR = 78, 
    OPTIMIZE = 79, OPTNOISE = 80, PZ = 81, RAMP = 82, SENS = 83, SENSAC = 84, 
    SENSPARAM = 85, SNF = 86, SOLVE = 87, TF = 88, TRAN = 89, WCASE = 90, 
    EXTRACT = 91, RESISTOR = 92, CAPACITOR = 93, INDUCTOR = 94, COUPLED_INDUCTOR = 95, 
    DIFFUSION_RESISTOR = 96, TRANSMISSION_LINE = 97, LOSSY_TRANSMISSION_LINE = 98, 
    LTL_W_MODEL = 99, LTL_U_MODEL = 100, JUNCTION_DIODE = 101, BJT = 102, 
    JFET = 103, MOSFET = 104, S_DOMAIN_FILTER = 105, Z_DOMAIN_FILTER = 106, 
    SUBCK_INSTANCE = 107, IVSOURCE = 108, ICSOURCE = 109, VCVS = 110, CCCS = 111, 
    VCCS = 112, CCVS = 113, OPA = 114, SW = 115, NOISE_FUNCTION = 116, DIG_NAND = 117, 
    DIG_AND = 118, DIG_NOR = 119, DIG_OR = 120, DIG_XOR = 121, EQUAL = 122, 
    EXCLAMATION_MARK = 123, LESS_THAN = 124, GREATER_THAN = 125, LESS_THAN_EQUAL = 126, 
    GREATER_THAN_EQUAL = 127, LOGIC_EQUAL = 128, LOGIC_NOT_EQUAL = 129, 
    LOGIC_AND = 130, LOGIC_OR = 131, LOGIC_BITWISE_AND = 132, LOGIC_BITWISE_OR = 133, 
    LOGIC_XOR = 134, BITWISE_SHIFT_LEFT = 135, BITWISE_SHIFT_RIGHT = 136, 
    POWER_OPERATOR = 137, AND = 138, OR = 139, COLON = 140, SEMICOLON = 141, 
    PLUS = 142, MINUS = 143, STAR = 144, OPEN_ROUND = 145, CLOSE_ROUND = 146, 
    OPEN_SQUARE = 147, CLOSE_SQUARE = 148, OPEN_CURLY = 149, CLOSE_CURLY = 150, 
    QUESTION_MARK = 151, COMMA = 152, DOLLAR = 153, AMPERSAND = 154, DOT = 155, 
    UNDERSCORE = 156, AT_SIGN = 157, POUND_SIGN = 158, BACKSLASH = 159, 
    SLASH = 160, APEX = 161, QUOTES = 162, PIPE = 163, PERCENT = 164, CARET = 165, 
    TILDE = 166, ARROW = 167, PERCENTAGE = 168, COMPLEX = 169, NUMBER = 170, 
    ID = 171, STRING = 172, NL = 173, WS = 174, CNL = 175
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
