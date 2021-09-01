
// Generated from g4files/ELDOParser.g4 by ANTLR 4.7.1


#include "ELDOParserListener.h"
#include "ELDOParserVisitor.h"

#include "ELDOParser.h"


using namespace antlrcpp;
using namespace edacurry;
using namespace antlr4;

ELDOParser::ELDOParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ELDOParser::~ELDOParser() {
  delete _interpreter;
}

std::string ELDOParser::getGrammarFileName() const {
  return "ELDOParser.g4";
}

const std::vector<std::string>& ELDOParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ELDOParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- NetlistContext ------------------------------------------------------------------

ELDOParser::NetlistContext::NetlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::End_of_lineContext *> ELDOParser::NetlistContext::end_of_line() {
  return getRuleContexts<ELDOParser::End_of_lineContext>();
}

ELDOParser::End_of_lineContext* ELDOParser::NetlistContext::end_of_line(size_t i) {
  return getRuleContext<ELDOParser::End_of_lineContext>(i);
}

ELDOParser::Netlist_titleContext* ELDOParser::NetlistContext::netlist_title() {
  return getRuleContext<ELDOParser::Netlist_titleContext>(0);
}

std::vector<ELDOParser::Netlist_entityContext *> ELDOParser::NetlistContext::netlist_entity() {
  return getRuleContexts<ELDOParser::Netlist_entityContext>();
}

ELDOParser::Netlist_entityContext* ELDOParser::NetlistContext::netlist_entity(size_t i) {
  return getRuleContext<ELDOParser::Netlist_entityContext>(i);
}


size_t ELDOParser::NetlistContext::getRuleIndex() const {
  return ELDOParser::RuleNetlist;
}

void ELDOParser::NetlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNetlist(this);
}

void ELDOParser::NetlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNetlist(this);
}


antlrcpp::Any ELDOParser::NetlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNetlist(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::NetlistContext* ELDOParser::netlist() {
  NetlistContext *_localctx = _tracker.createInstance<NetlistContext>(_ctx, getState());
  enterRule(_localctx, 0, ELDOParser::RuleNetlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(336);
      netlist_title();
    }
    setState(339);
    end_of_line();
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::INCLUDE)
      | (1ULL << ELDOParser::DSPF_INCLUDE)
      | (1ULL << ELDOParser::LIB)
      | (1ULL << ELDOParser::SUBCKT)
      | (1ULL << ELDOParser::NETLIST_END)
      | (1ULL << ELDOParser::GLOBAL)
      | (1ULL << ELDOParser::MODEL_DEF)
      | (1ULL << ELDOParser::VERILOG)
      | (1ULL << ELDOParser::GLOBAL_PARAM)
      | (1ULL << ELDOParser::ALTER)
      | (1ULL << ELDOParser::SAVE)
      | (1ULL << ELDOParser::OPTION)
      | (1ULL << ELDOParser::OPT)
      | (1ULL << ELDOParser::NODESET)
      | (1ULL << ELDOParser::CALL_TCL)
      | (1ULL << ELDOParser::CHRENT)
      | (1ULL << ELDOParser::CONNECT)
      | (1ULL << ELDOParser::DEFMAC)
      | (1ULL << ELDOParser::DEFWAVE)
      | (1ULL << ELDOParser::FFILE)
      | (1ULL << ELDOParser::IC)
      | (1ULL << ELDOParser::MEAS)
      | (1ULL << ELDOParser::PLOT)
      | (1ULL << ELDOParser::PRINT)
      | (1ULL << ELDOParser::PROBE)
      | (1ULL << ELDOParser::TEMP_SET)
      | (1ULL << ELDOParser::USE_TCL)
      | (1ULL << ELDOParser::AC)
      | (1ULL << ELDOParser::AGE)
      | (1ULL << ELDOParser::CHECKSOA)
      | (1ULL << ELDOParser::DC)
      | (1ULL << ELDOParser::DCHIZ)
      | (1ULL << ELDOParser::DCMISMATCH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (ELDOParser::DEX - 64))
      | (1ULL << (ELDOParser::DSP - 64))
      | (1ULL << (ELDOParser::DSPMOD - 64))
      | (1ULL << (ELDOParser::FOUR - 64))
      | (1ULL << (ELDOParser::LSTB - 64))
      | (1ULL << (ELDOParser::MC - 64))
      | (1ULL << (ELDOParser::NOISE - 64))
      | (1ULL << (ELDOParser::NOISETRAN - 64))
      | (1ULL << (ELDOParser::OP - 64))
      | (1ULL << (ELDOParser::OPTFOUR - 64))
      | (1ULL << (ELDOParser::OPTIMIZE - 64))
      | (1ULL << (ELDOParser::OPTNOISE - 64))
      | (1ULL << (ELDOParser::PZ - 64))
      | (1ULL << (ELDOParser::RAMP - 64))
      | (1ULL << (ELDOParser::SENS - 64))
      | (1ULL << (ELDOParser::SENSAC - 64))
      | (1ULL << (ELDOParser::SENSPARAM - 64))
      | (1ULL << (ELDOParser::SNF - 64))
      | (1ULL << (ELDOParser::SOLVE - 64))
      | (1ULL << (ELDOParser::TF - 64))
      | (1ULL << (ELDOParser::TRAN - 64))
      | (1ULL << (ELDOParser::WCASE - 64))
      | (1ULL << (ELDOParser::EXTRACT - 64))
      | (1ULL << (ELDOParser::RESISTOR - 64))
      | (1ULL << (ELDOParser::CAPACITOR - 64))
      | (1ULL << (ELDOParser::INDUCTOR - 64))
      | (1ULL << (ELDOParser::COUPLED_INDUCTOR - 64))
      | (1ULL << (ELDOParser::DIFFUSION_RESISTOR - 64))
      | (1ULL << (ELDOParser::TRANSMISSION_LINE - 64))
      | (1ULL << (ELDOParser::LOSSY_TRANSMISSION_LINE - 64))
      | (1ULL << (ELDOParser::LTL_W_MODEL - 64))
      | (1ULL << (ELDOParser::LTL_U_MODEL - 64))
      | (1ULL << (ELDOParser::JUNCTION_DIODE - 64))
      | (1ULL << (ELDOParser::BJT - 64))
      | (1ULL << (ELDOParser::JFET - 64))
      | (1ULL << (ELDOParser::MOSFET - 64))
      | (1ULL << (ELDOParser::SUBCK_INSTANCE - 64))
      | (1ULL << (ELDOParser::IVSOURCE - 64))
      | (1ULL << (ELDOParser::ICSOURCE - 64))
      | (1ULL << (ELDOParser::VCVS - 64))
      | (1ULL << (ELDOParser::CCCS - 64))
      | (1ULL << (ELDOParser::VCCS - 64))
      | (1ULL << (ELDOParser::CCVS - 64))
      | (1ULL << (ELDOParser::OPA - 64))
      | (1ULL << (ELDOParser::SW - 64))
      | (1ULL << (ELDOParser::DIG_NAND - 64))
      | (1ULL << (ELDOParser::DIG_AND - 64))
      | (1ULL << (ELDOParser::DIG_NOR - 64))
      | (1ULL << (ELDOParser::DIG_OR - 64))
      | (1ULL << (ELDOParser::DIG_XOR - 64)))) != 0)) {
      setState(340);
      netlist_entity();
      setState(345);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(346);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Netlist_titleContext ------------------------------------------------------------------

ELDOParser::Netlist_titleContext::Netlist_titleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ELDOParser::Netlist_titleContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Netlist_titleContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}


size_t ELDOParser::Netlist_titleContext::getRuleIndex() const {
  return ELDOParser::RuleNetlist_title;
}

void ELDOParser::Netlist_titleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNetlist_title(this);
}

void ELDOParser::Netlist_titleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNetlist_title(this);
}


antlrcpp::Any ELDOParser::Netlist_titleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNetlist_title(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Netlist_titleContext* ELDOParser::netlist_title() {
  Netlist_titleContext *_localctx = _tracker.createInstance<Netlist_titleContext>(_ctx, getState());
  enterRule(_localctx, 2, ELDOParser::RuleNetlist_title);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(348);
      match(ELDOParser::ID);
      setState(351); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Netlist_entityContext ------------------------------------------------------------------

ELDOParser::Netlist_entityContext::Netlist_entityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::IncludeContext* ELDOParser::Netlist_entityContext::include() {
  return getRuleContext<ELDOParser::IncludeContext>(0);
}

ELDOParser::LibraryContext* ELDOParser::Netlist_entityContext::library() {
  return getRuleContext<ELDOParser::LibraryContext>(0);
}

ELDOParser::Library_defContext* ELDOParser::Netlist_entityContext::library_def() {
  return getRuleContext<ELDOParser::Library_defContext>(0);
}

ELDOParser::SubcktContext* ELDOParser::Netlist_entityContext::subckt() {
  return getRuleContext<ELDOParser::SubcktContext>(0);
}

ELDOParser::AnalysisContext* ELDOParser::Netlist_entityContext::analysis() {
  return getRuleContext<ELDOParser::AnalysisContext>(0);
}

ELDOParser::GlobalContext* ELDOParser::Netlist_entityContext::global() {
  return getRuleContext<ELDOParser::GlobalContext>(0);
}

ELDOParser::ModelContext* ELDOParser::Netlist_entityContext::model() {
  return getRuleContext<ELDOParser::ModelContext>(0);
}

ELDOParser::Global_declarationsContext* ELDOParser::Netlist_entityContext::global_declarations() {
  return getRuleContext<ELDOParser::Global_declarationsContext>(0);
}

ELDOParser::ControlContext* ELDOParser::Netlist_entityContext::control() {
  return getRuleContext<ELDOParser::ControlContext>(0);
}

ELDOParser::ComponentContext* ELDOParser::Netlist_entityContext::component() {
  return getRuleContext<ELDOParser::ComponentContext>(0);
}

ELDOParser::EndContext* ELDOParser::Netlist_entityContext::end() {
  return getRuleContext<ELDOParser::EndContext>(0);
}


size_t ELDOParser::Netlist_entityContext::getRuleIndex() const {
  return ELDOParser::RuleNetlist_entity;
}

void ELDOParser::Netlist_entityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNetlist_entity(this);
}

void ELDOParser::Netlist_entityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNetlist_entity(this);
}


antlrcpp::Any ELDOParser::Netlist_entityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNetlist_entity(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Netlist_entityContext* ELDOParser::netlist_entity() {
  Netlist_entityContext *_localctx = _tracker.createInstance<Netlist_entityContext>(_ctx, getState());
  enterRule(_localctx, 4, ELDOParser::RuleNetlist_entity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(353);
      include();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(354);
      library();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(355);
      library_def();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(356);
      subckt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(357);
      analysis();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(358);
      global();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(359);
      model();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(360);
      global_declarations();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(361);
      control();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(362);
      component();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(363);
      end();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeContext ------------------------------------------------------------------

ELDOParser::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Standard_includeContext* ELDOParser::IncludeContext::standard_include() {
  return getRuleContext<ELDOParser::Standard_includeContext>(0);
}

ELDOParser::Dspf_includeContext* ELDOParser::IncludeContext::dspf_include() {
  return getRuleContext<ELDOParser::Dspf_includeContext>(0);
}

ELDOParser::Verilog_includeContext* ELDOParser::IncludeContext::verilog_include() {
  return getRuleContext<ELDOParser::Verilog_includeContext>(0);
}


size_t ELDOParser::IncludeContext::getRuleIndex() const {
  return ELDOParser::RuleInclude;
}

void ELDOParser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void ELDOParser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}


antlrcpp::Any ELDOParser::IncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitInclude(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::IncludeContext* ELDOParser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 6, ELDOParser::RuleInclude);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ELDOParser::INCLUDE: {
        enterOuterAlt(_localctx, 1);
        setState(366);
        standard_include();
        break;
      }

      case ELDOParser::DSPF_INCLUDE: {
        enterOuterAlt(_localctx, 2);
        setState(367);
        dspf_include();
        break;
      }

      case ELDOParser::VERILOG: {
        enterOuterAlt(_localctx, 3);
        setState(368);
        verilog_include();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Standard_includeContext ------------------------------------------------------------------

ELDOParser::Standard_includeContext::Standard_includeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Standard_includeContext::INCLUDE() {
  return getToken(ELDOParser::INCLUDE, 0);
}

ELDOParser::FilepathContext* ELDOParser::Standard_includeContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Standard_includeContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Standard_includeContext::getRuleIndex() const {
  return ELDOParser::RuleStandard_include;
}

void ELDOParser::Standard_includeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStandard_include(this);
}

void ELDOParser::Standard_includeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStandard_include(this);
}


antlrcpp::Any ELDOParser::Standard_includeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitStandard_include(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Standard_includeContext* ELDOParser::standard_include() {
  Standard_includeContext *_localctx = _tracker.createInstance<Standard_includeContext>(_ctx, getState());
  enterRule(_localctx, 8, ELDOParser::RuleStandard_include);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(ELDOParser::INCLUDE);
    setState(372);
    filepath();
    setState(373);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Verilog_includeContext ------------------------------------------------------------------

ELDOParser::Verilog_includeContext::Verilog_includeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Verilog_includeContext::VERILOG() {
  return getToken(ELDOParser::VERILOG, 0);
}

ELDOParser::FilepathContext* ELDOParser::Verilog_includeContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Verilog_includeContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Verilog_includeContext::getRuleIndex() const {
  return ELDOParser::RuleVerilog_include;
}

void ELDOParser::Verilog_includeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVerilog_include(this);
}

void ELDOParser::Verilog_includeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVerilog_include(this);
}


antlrcpp::Any ELDOParser::Verilog_includeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitVerilog_include(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Verilog_includeContext* ELDOParser::verilog_include() {
  Verilog_includeContext *_localctx = _tracker.createInstance<Verilog_includeContext>(_ctx, getState());
  enterRule(_localctx, 10, ELDOParser::RuleVerilog_include);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(ELDOParser::VERILOG);
    setState(376);
    filepath();
    setState(377);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dspf_includeContext ------------------------------------------------------------------

ELDOParser::Dspf_includeContext::Dspf_includeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Dspf_includeContext::DSPF_INCLUDE() {
  return getToken(ELDOParser::DSPF_INCLUDE, 0);
}

ELDOParser::FilepathContext* ELDOParser::Dspf_includeContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Dspf_includeContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::Dspf_includeContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Dspf_includeContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::Dspf_includeContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Dspf_includeContext::getRuleIndex() const {
  return ELDOParser::RuleDspf_include;
}

void ELDOParser::Dspf_includeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDspf_include(this);
}

void ELDOParser::Dspf_includeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDspf_include(this);
}


antlrcpp::Any ELDOParser::Dspf_includeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDspf_include(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Dspf_includeContext* ELDOParser::dspf_include() {
  Dspf_includeContext *_localctx = _tracker.createInstance<Dspf_includeContext>(_ctx, getState());
  enterRule(_localctx, 12, ELDOParser::RuleDspf_include);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    match(ELDOParser::DSPF_INCLUDE);
    setState(382);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(380);
      match(ELDOParser::ID);
      setState(381);
      match(ELDOParser::EQUAL);
      break;
    }

    }
    setState(384);
    filepath();
    setState(386);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(385);
      parameter_list();
    }
    setState(388);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibraryContext ------------------------------------------------------------------

ELDOParser::LibraryContext::LibraryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::LibraryContext::LIB() {
  return getToken(ELDOParser::LIB, 0);
}

ELDOParser::Library_pathContext* ELDOParser::LibraryContext::library_path() {
  return getRuleContext<ELDOParser::Library_pathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::LibraryContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Library_keyContext* ELDOParser::LibraryContext::library_key() {
  return getRuleContext<ELDOParser::Library_keyContext>(0);
}

ELDOParser::Library_nameContext* ELDOParser::LibraryContext::library_name() {
  return getRuleContext<ELDOParser::Library_nameContext>(0);
}


size_t ELDOParser::LibraryContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary;
}

void ELDOParser::LibraryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary(this);
}

void ELDOParser::LibraryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary(this);
}


antlrcpp::Any ELDOParser::LibraryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::LibraryContext* ELDOParser::library() {
  LibraryContext *_localctx = _tracker.createInstance<LibraryContext>(_ctx, getState());
  enterRule(_localctx, 14, ELDOParser::RuleLibrary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(ELDOParser::LIB);
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::KEY) {
      setState(391);
      library_key();
    }
    setState(394);
    library_path();
    setState(396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(395);
      library_name();
    }
    setState(398);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_keyContext ------------------------------------------------------------------

ELDOParser::Library_keyContext::Library_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Library_keyContext::KEY() {
  return getToken(ELDOParser::KEY, 0);
}

tree::TerminalNode* ELDOParser::Library_keyContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Library_keyContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Library_keyContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_key;
}

void ELDOParser::Library_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_key(this);
}

void ELDOParser::Library_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_key(this);
}


antlrcpp::Any ELDOParser::Library_keyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_key(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_keyContext* ELDOParser::library_key() {
  Library_keyContext *_localctx = _tracker.createInstance<Library_keyContext>(_ctx, getState());
  enterRule(_localctx, 16, ELDOParser::RuleLibrary_key);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    match(ELDOParser::KEY);
    setState(401);
    match(ELDOParser::EQUAL);
    setState(402);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_pathContext ------------------------------------------------------------------

ELDOParser::Library_pathContext::Library_pathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::FilepathContext* ELDOParser::Library_pathContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}


size_t ELDOParser::Library_pathContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_path;
}

void ELDOParser::Library_pathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_path(this);
}

void ELDOParser::Library_pathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_path(this);
}


antlrcpp::Any ELDOParser::Library_pathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_path(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_pathContext* ELDOParser::library_path() {
  Library_pathContext *_localctx = _tracker.createInstance<Library_pathContext>(_ctx, getState());
  enterRule(_localctx, 18, ELDOParser::RuleLibrary_path);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    filepath();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_nameContext ------------------------------------------------------------------

ELDOParser::Library_nameContext::Library_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Library_nameContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Library_nameContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_name;
}

void ELDOParser::Library_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_name(this);
}

void ELDOParser::Library_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_name(this);
}


antlrcpp::Any ELDOParser::Library_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_name(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_nameContext* ELDOParser::library_name() {
  Library_nameContext *_localctx = _tracker.createInstance<Library_nameContext>(_ctx, getState());
  enterRule(_localctx, 20, ELDOParser::RuleLibrary_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_defContext ------------------------------------------------------------------

ELDOParser::Library_defContext::Library_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Library_def_headerContext* ELDOParser::Library_defContext::library_def_header() {
  return getRuleContext<ELDOParser::Library_def_headerContext>(0);
}

ELDOParser::Library_def_footerContext* ELDOParser::Library_defContext::library_def_footer() {
  return getRuleContext<ELDOParser::Library_def_footerContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Library_defContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<ELDOParser::Library_def_contentContext *> ELDOParser::Library_defContext::library_def_content() {
  return getRuleContexts<ELDOParser::Library_def_contentContext>();
}

ELDOParser::Library_def_contentContext* ELDOParser::Library_defContext::library_def_content(size_t i) {
  return getRuleContext<ELDOParser::Library_def_contentContext>(i);
}


size_t ELDOParser::Library_defContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_def;
}

void ELDOParser::Library_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_def(this);
}

void ELDOParser::Library_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_def(this);
}


antlrcpp::Any ELDOParser::Library_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_def(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_defContext* ELDOParser::library_def() {
  Library_defContext *_localctx = _tracker.createInstance<Library_defContext>(_ctx, getState());
  enterRule(_localctx, 22, ELDOParser::RuleLibrary_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    library_def_header();
    setState(410); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(409);
      library_def_content();
      setState(412); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::INCLUDE)
      | (1ULL << ELDOParser::DSPF_INCLUDE)
      | (1ULL << ELDOParser::LIB)
      | (1ULL << ELDOParser::SUBCKT)
      | (1ULL << ELDOParser::NETLIST_END)
      | (1ULL << ELDOParser::GLOBAL)
      | (1ULL << ELDOParser::MODEL_DEF)
      | (1ULL << ELDOParser::VERILOG)
      | (1ULL << ELDOParser::GLOBAL_PARAM)
      | (1ULL << ELDOParser::ALTER)
      | (1ULL << ELDOParser::SAVE)
      | (1ULL << ELDOParser::OPTION)
      | (1ULL << ELDOParser::OPT)
      | (1ULL << ELDOParser::NODESET)
      | (1ULL << ELDOParser::CALL_TCL)
      | (1ULL << ELDOParser::CHRENT)
      | (1ULL << ELDOParser::CONNECT)
      | (1ULL << ELDOParser::DEFMAC)
      | (1ULL << ELDOParser::DEFWAVE)
      | (1ULL << ELDOParser::FFILE)
      | (1ULL << ELDOParser::IC)
      | (1ULL << ELDOParser::MEAS)
      | (1ULL << ELDOParser::PLOT)
      | (1ULL << ELDOParser::PRINT)
      | (1ULL << ELDOParser::PROBE)
      | (1ULL << ELDOParser::TEMP_SET)
      | (1ULL << ELDOParser::USE_TCL)
      | (1ULL << ELDOParser::AC)
      | (1ULL << ELDOParser::AGE)
      | (1ULL << ELDOParser::CHECKSOA)
      | (1ULL << ELDOParser::DC)
      | (1ULL << ELDOParser::DCHIZ)
      | (1ULL << ELDOParser::DCMISMATCH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (ELDOParser::DEX - 64))
      | (1ULL << (ELDOParser::DSP - 64))
      | (1ULL << (ELDOParser::DSPMOD - 64))
      | (1ULL << (ELDOParser::FOUR - 64))
      | (1ULL << (ELDOParser::LSTB - 64))
      | (1ULL << (ELDOParser::MC - 64))
      | (1ULL << (ELDOParser::NOISE - 64))
      | (1ULL << (ELDOParser::NOISETRAN - 64))
      | (1ULL << (ELDOParser::OP - 64))
      | (1ULL << (ELDOParser::OPTFOUR - 64))
      | (1ULL << (ELDOParser::OPTIMIZE - 64))
      | (1ULL << (ELDOParser::OPTNOISE - 64))
      | (1ULL << (ELDOParser::PZ - 64))
      | (1ULL << (ELDOParser::RAMP - 64))
      | (1ULL << (ELDOParser::SENS - 64))
      | (1ULL << (ELDOParser::SENSAC - 64))
      | (1ULL << (ELDOParser::SENSPARAM - 64))
      | (1ULL << (ELDOParser::SNF - 64))
      | (1ULL << (ELDOParser::SOLVE - 64))
      | (1ULL << (ELDOParser::TF - 64))
      | (1ULL << (ELDOParser::TRAN - 64))
      | (1ULL << (ELDOParser::WCASE - 64))
      | (1ULL << (ELDOParser::EXTRACT - 64))
      | (1ULL << (ELDOParser::RESISTOR - 64))
      | (1ULL << (ELDOParser::CAPACITOR - 64))
      | (1ULL << (ELDOParser::INDUCTOR - 64))
      | (1ULL << (ELDOParser::COUPLED_INDUCTOR - 64))
      | (1ULL << (ELDOParser::DIFFUSION_RESISTOR - 64))
      | (1ULL << (ELDOParser::TRANSMISSION_LINE - 64))
      | (1ULL << (ELDOParser::LOSSY_TRANSMISSION_LINE - 64))
      | (1ULL << (ELDOParser::LTL_W_MODEL - 64))
      | (1ULL << (ELDOParser::LTL_U_MODEL - 64))
      | (1ULL << (ELDOParser::JUNCTION_DIODE - 64))
      | (1ULL << (ELDOParser::BJT - 64))
      | (1ULL << (ELDOParser::JFET - 64))
      | (1ULL << (ELDOParser::MOSFET - 64))
      | (1ULL << (ELDOParser::SUBCK_INSTANCE - 64))
      | (1ULL << (ELDOParser::IVSOURCE - 64))
      | (1ULL << (ELDOParser::ICSOURCE - 64))
      | (1ULL << (ELDOParser::VCVS - 64))
      | (1ULL << (ELDOParser::CCCS - 64))
      | (1ULL << (ELDOParser::VCCS - 64))
      | (1ULL << (ELDOParser::CCVS - 64))
      | (1ULL << (ELDOParser::OPA - 64))
      | (1ULL << (ELDOParser::SW - 64))
      | (1ULL << (ELDOParser::DIG_NAND - 64))
      | (1ULL << (ELDOParser::DIG_AND - 64))
      | (1ULL << (ELDOParser::DIG_NOR - 64))
      | (1ULL << (ELDOParser::DIG_OR - 64))
      | (1ULL << (ELDOParser::DIG_XOR - 64)))) != 0));
    setState(414);
    library_def_footer();
    setState(415);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_def_headerContext ------------------------------------------------------------------

ELDOParser::Library_def_headerContext::Library_def_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Library_def_headerContext::LIB() {
  return getToken(ELDOParser::LIB, 0);
}

ELDOParser::Library_nameContext* ELDOParser::Library_def_headerContext::library_name() {
  return getRuleContext<ELDOParser::Library_nameContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Library_def_headerContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Library_def_headerContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_def_header;
}

void ELDOParser::Library_def_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_def_header(this);
}

void ELDOParser::Library_def_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_def_header(this);
}


antlrcpp::Any ELDOParser::Library_def_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_def_header(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_def_headerContext* ELDOParser::library_def_header() {
  Library_def_headerContext *_localctx = _tracker.createInstance<Library_def_headerContext>(_ctx, getState());
  enterRule(_localctx, 24, ELDOParser::RuleLibrary_def_header);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    match(ELDOParser::LIB);
    setState(418);
    library_name();
    setState(419);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_def_contentContext ------------------------------------------------------------------

ELDOParser::Library_def_contentContext::Library_def_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Netlist_entityContext* ELDOParser::Library_def_contentContext::netlist_entity() {
  return getRuleContext<ELDOParser::Netlist_entityContext>(0);
}


size_t ELDOParser::Library_def_contentContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_def_content;
}

void ELDOParser::Library_def_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_def_content(this);
}

void ELDOParser::Library_def_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_def_content(this);
}


antlrcpp::Any ELDOParser::Library_def_contentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_def_content(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_def_contentContext* ELDOParser::library_def_content() {
  Library_def_contentContext *_localctx = _tracker.createInstance<Library_def_contentContext>(_ctx, getState());
  enterRule(_localctx, 26, ELDOParser::RuleLibrary_def_content);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    netlist_entity();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Library_def_footerContext ------------------------------------------------------------------

ELDOParser::Library_def_footerContext::Library_def_footerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Library_def_footerContext::LIB_END() {
  return getToken(ELDOParser::LIB_END, 0);
}

ELDOParser::Library_nameContext* ELDOParser::Library_def_footerContext::library_name() {
  return getRuleContext<ELDOParser::Library_nameContext>(0);
}


size_t ELDOParser::Library_def_footerContext::getRuleIndex() const {
  return ELDOParser::RuleLibrary_def_footer;
}

void ELDOParser::Library_def_footerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrary_def_footer(this);
}

void ELDOParser::Library_def_footerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrary_def_footer(this);
}


antlrcpp::Any ELDOParser::Library_def_footerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLibrary_def_footer(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Library_def_footerContext* ELDOParser::library_def_footer() {
  Library_def_footerContext *_localctx = _tracker.createInstance<Library_def_footerContext>(_ctx, getState());
  enterRule(_localctx, 28, ELDOParser::RuleLibrary_def_footer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(ELDOParser::LIB_END);
    setState(425);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(424);
      library_name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubcktContext ------------------------------------------------------------------

ELDOParser::SubcktContext::SubcktContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Subckt_headerContext* ELDOParser::SubcktContext::subckt_header() {
  return getRuleContext<ELDOParser::Subckt_headerContext>(0);
}

ELDOParser::Subckt_footerContext* ELDOParser::SubcktContext::subckt_footer() {
  return getRuleContext<ELDOParser::Subckt_footerContext>(0);
}

std::vector<ELDOParser::Subckt_contentContext *> ELDOParser::SubcktContext::subckt_content() {
  return getRuleContexts<ELDOParser::Subckt_contentContext>();
}

ELDOParser::Subckt_contentContext* ELDOParser::SubcktContext::subckt_content(size_t i) {
  return getRuleContext<ELDOParser::Subckt_contentContext>(i);
}


size_t ELDOParser::SubcktContext::getRuleIndex() const {
  return ELDOParser::RuleSubckt;
}

void ELDOParser::SubcktContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubckt(this);
}

void ELDOParser::SubcktContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubckt(this);
}


antlrcpp::Any ELDOParser::SubcktContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSubckt(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SubcktContext* ELDOParser::subckt() {
  SubcktContext *_localctx = _tracker.createInstance<SubcktContext>(_ctx, getState());
  enterRule(_localctx, 30, ELDOParser::RuleSubckt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    subckt_header();
    setState(429); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(428);
      subckt_content();
      setState(431); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::INCLUDE)
      | (1ULL << ELDOParser::DSPF_INCLUDE)
      | (1ULL << ELDOParser::LIB)
      | (1ULL << ELDOParser::SUBCKT)
      | (1ULL << ELDOParser::NETLIST_END)
      | (1ULL << ELDOParser::GLOBAL)
      | (1ULL << ELDOParser::MODEL_DEF)
      | (1ULL << ELDOParser::VERILOG)
      | (1ULL << ELDOParser::GLOBAL_PARAM)
      | (1ULL << ELDOParser::ALTER)
      | (1ULL << ELDOParser::SAVE)
      | (1ULL << ELDOParser::OPTION)
      | (1ULL << ELDOParser::OPT)
      | (1ULL << ELDOParser::NODESET)
      | (1ULL << ELDOParser::CALL_TCL)
      | (1ULL << ELDOParser::CHRENT)
      | (1ULL << ELDOParser::CONNECT)
      | (1ULL << ELDOParser::DEFMAC)
      | (1ULL << ELDOParser::DEFWAVE)
      | (1ULL << ELDOParser::FFILE)
      | (1ULL << ELDOParser::IC)
      | (1ULL << ELDOParser::MEAS)
      | (1ULL << ELDOParser::PLOT)
      | (1ULL << ELDOParser::PRINT)
      | (1ULL << ELDOParser::PROBE)
      | (1ULL << ELDOParser::TEMP_SET)
      | (1ULL << ELDOParser::USE_TCL)
      | (1ULL << ELDOParser::AC)
      | (1ULL << ELDOParser::AGE)
      | (1ULL << ELDOParser::CHECKSOA)
      | (1ULL << ELDOParser::DC)
      | (1ULL << ELDOParser::DCHIZ)
      | (1ULL << ELDOParser::DCMISMATCH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (ELDOParser::DEX - 64))
      | (1ULL << (ELDOParser::DSP - 64))
      | (1ULL << (ELDOParser::DSPMOD - 64))
      | (1ULL << (ELDOParser::FOUR - 64))
      | (1ULL << (ELDOParser::LSTB - 64))
      | (1ULL << (ELDOParser::MC - 64))
      | (1ULL << (ELDOParser::NOISE - 64))
      | (1ULL << (ELDOParser::NOISETRAN - 64))
      | (1ULL << (ELDOParser::OP - 64))
      | (1ULL << (ELDOParser::OPTFOUR - 64))
      | (1ULL << (ELDOParser::OPTIMIZE - 64))
      | (1ULL << (ELDOParser::OPTNOISE - 64))
      | (1ULL << (ELDOParser::PZ - 64))
      | (1ULL << (ELDOParser::RAMP - 64))
      | (1ULL << (ELDOParser::SENS - 64))
      | (1ULL << (ELDOParser::SENSAC - 64))
      | (1ULL << (ELDOParser::SENSPARAM - 64))
      | (1ULL << (ELDOParser::SNF - 64))
      | (1ULL << (ELDOParser::SOLVE - 64))
      | (1ULL << (ELDOParser::TF - 64))
      | (1ULL << (ELDOParser::TRAN - 64))
      | (1ULL << (ELDOParser::WCASE - 64))
      | (1ULL << (ELDOParser::EXTRACT - 64))
      | (1ULL << (ELDOParser::RESISTOR - 64))
      | (1ULL << (ELDOParser::CAPACITOR - 64))
      | (1ULL << (ELDOParser::INDUCTOR - 64))
      | (1ULL << (ELDOParser::COUPLED_INDUCTOR - 64))
      | (1ULL << (ELDOParser::DIFFUSION_RESISTOR - 64))
      | (1ULL << (ELDOParser::TRANSMISSION_LINE - 64))
      | (1ULL << (ELDOParser::LOSSY_TRANSMISSION_LINE - 64))
      | (1ULL << (ELDOParser::LTL_W_MODEL - 64))
      | (1ULL << (ELDOParser::LTL_U_MODEL - 64))
      | (1ULL << (ELDOParser::JUNCTION_DIODE - 64))
      | (1ULL << (ELDOParser::BJT - 64))
      | (1ULL << (ELDOParser::JFET - 64))
      | (1ULL << (ELDOParser::MOSFET - 64))
      | (1ULL << (ELDOParser::SUBCK_INSTANCE - 64))
      | (1ULL << (ELDOParser::IVSOURCE - 64))
      | (1ULL << (ELDOParser::ICSOURCE - 64))
      | (1ULL << (ELDOParser::VCVS - 64))
      | (1ULL << (ELDOParser::CCCS - 64))
      | (1ULL << (ELDOParser::VCCS - 64))
      | (1ULL << (ELDOParser::CCVS - 64))
      | (1ULL << (ELDOParser::OPA - 64))
      | (1ULL << (ELDOParser::SW - 64))
      | (1ULL << (ELDOParser::DIG_NAND - 64))
      | (1ULL << (ELDOParser::DIG_AND - 64))
      | (1ULL << (ELDOParser::DIG_NOR - 64))
      | (1ULL << (ELDOParser::DIG_OR - 64))
      | (1ULL << (ELDOParser::DIG_XOR - 64)))) != 0));
    setState(433);
    subckt_footer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subckt_headerContext ------------------------------------------------------------------

ELDOParser::Subckt_headerContext::Subckt_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Subckt_headerContext::SUBCKT() {
  return getToken(ELDOParser::SUBCKT, 0);
}

tree::TerminalNode* ELDOParser::Subckt_headerContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::Subckt_headerContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Node_listContext* ELDOParser::Subckt_headerContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::Subckt_headerContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

tree::TerminalNode* ELDOParser::Subckt_headerContext::PARAM_LIST_START() {
  return getToken(ELDOParser::PARAM_LIST_START, 0);
}


size_t ELDOParser::Subckt_headerContext::getRuleIndex() const {
  return ELDOParser::RuleSubckt_header;
}

void ELDOParser::Subckt_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubckt_header(this);
}

void ELDOParser::Subckt_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubckt_header(this);
}


antlrcpp::Any ELDOParser::Subckt_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSubckt_header(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Subckt_headerContext* ELDOParser::subckt_header() {
  Subckt_headerContext *_localctx = _tracker.createInstance<Subckt_headerContext>(_ctx, getState());
  enterRule(_localctx, 32, ELDOParser::RuleSubckt_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(ELDOParser::SUBCKT);
    setState(436);
    match(ELDOParser::ID);
    setState(438);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(437);
      node_list();
      break;
    }

    }
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(441);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(440);
        match(ELDOParser::PARAM_LIST_START);
        break;
      }

      }
      setState(443);
      parameter_list();
    }
    setState(446);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subckt_contentContext ------------------------------------------------------------------

ELDOParser::Subckt_contentContext::Subckt_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Netlist_entityContext* ELDOParser::Subckt_contentContext::netlist_entity() {
  return getRuleContext<ELDOParser::Netlist_entityContext>(0);
}


size_t ELDOParser::Subckt_contentContext::getRuleIndex() const {
  return ELDOParser::RuleSubckt_content;
}

void ELDOParser::Subckt_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubckt_content(this);
}

void ELDOParser::Subckt_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubckt_content(this);
}


antlrcpp::Any ELDOParser::Subckt_contentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSubckt_content(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Subckt_contentContext* ELDOParser::subckt_content() {
  Subckt_contentContext *_localctx = _tracker.createInstance<Subckt_contentContext>(_ctx, getState());
  enterRule(_localctx, 34, ELDOParser::RuleSubckt_content);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    netlist_entity();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subckt_footerContext ------------------------------------------------------------------

ELDOParser::Subckt_footerContext::Subckt_footerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Subckt_footerContext::SUBCKT_END() {
  return getToken(ELDOParser::SUBCKT_END, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::Subckt_footerContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::Subckt_footerContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Subckt_footerContext::getRuleIndex() const {
  return ELDOParser::RuleSubckt_footer;
}

void ELDOParser::Subckt_footerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubckt_footer(this);
}

void ELDOParser::Subckt_footerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubckt_footer(this);
}


antlrcpp::Any ELDOParser::Subckt_footerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSubckt_footer(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Subckt_footerContext* ELDOParser::subckt_footer() {
  Subckt_footerContext *_localctx = _tracker.createInstance<Subckt_footerContext>(_ctx, getState());
  enterRule(_localctx, 36, ELDOParser::RuleSubckt_footer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    match(ELDOParser::SUBCKT_END);
    setState(452);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(451);
      match(ELDOParser::ID);
    }
    setState(454);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnalysisContext ------------------------------------------------------------------

ELDOParser::AnalysisContext::AnalysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::AcContext* ELDOParser::AnalysisContext::ac() {
  return getRuleContext<ELDOParser::AcContext>(0);
}

ELDOParser::AgeContext* ELDOParser::AnalysisContext::age() {
  return getRuleContext<ELDOParser::AgeContext>(0);
}

ELDOParser::ChecksoaContext* ELDOParser::AnalysisContext::checksoa() {
  return getRuleContext<ELDOParser::ChecksoaContext>(0);
}

ELDOParser::DcContext* ELDOParser::AnalysisContext::dc() {
  return getRuleContext<ELDOParser::DcContext>(0);
}

ELDOParser::DchizContext* ELDOParser::AnalysisContext::dchiz() {
  return getRuleContext<ELDOParser::DchizContext>(0);
}

ELDOParser::DcmismatchContext* ELDOParser::AnalysisContext::dcmismatch() {
  return getRuleContext<ELDOParser::DcmismatchContext>(0);
}

ELDOParser::DexContext* ELDOParser::AnalysisContext::dex() {
  return getRuleContext<ELDOParser::DexContext>(0);
}

ELDOParser::DspContext* ELDOParser::AnalysisContext::dsp() {
  return getRuleContext<ELDOParser::DspContext>(0);
}

ELDOParser::DspmodContext* ELDOParser::AnalysisContext::dspmod() {
  return getRuleContext<ELDOParser::DspmodContext>(0);
}

ELDOParser::FourContext* ELDOParser::AnalysisContext::four() {
  return getRuleContext<ELDOParser::FourContext>(0);
}

ELDOParser::LstbContext* ELDOParser::AnalysisContext::lstb() {
  return getRuleContext<ELDOParser::LstbContext>(0);
}

ELDOParser::McContext* ELDOParser::AnalysisContext::mc() {
  return getRuleContext<ELDOParser::McContext>(0);
}

ELDOParser::NoiseContext* ELDOParser::AnalysisContext::noise() {
  return getRuleContext<ELDOParser::NoiseContext>(0);
}

ELDOParser::NoisetranContext* ELDOParser::AnalysisContext::noisetran() {
  return getRuleContext<ELDOParser::NoisetranContext>(0);
}

ELDOParser::OpContext* ELDOParser::AnalysisContext::op() {
  return getRuleContext<ELDOParser::OpContext>(0);
}

ELDOParser::OptfourContext* ELDOParser::AnalysisContext::optfour() {
  return getRuleContext<ELDOParser::OptfourContext>(0);
}

ELDOParser::OptimizeContext* ELDOParser::AnalysisContext::optimize() {
  return getRuleContext<ELDOParser::OptimizeContext>(0);
}

ELDOParser::OptnoiseContext* ELDOParser::AnalysisContext::optnoise() {
  return getRuleContext<ELDOParser::OptnoiseContext>(0);
}

ELDOParser::PzContext* ELDOParser::AnalysisContext::pz() {
  return getRuleContext<ELDOParser::PzContext>(0);
}

ELDOParser::RampContext* ELDOParser::AnalysisContext::ramp() {
  return getRuleContext<ELDOParser::RampContext>(0);
}

ELDOParser::SensContext* ELDOParser::AnalysisContext::sens() {
  return getRuleContext<ELDOParser::SensContext>(0);
}

ELDOParser::SensacContext* ELDOParser::AnalysisContext::sensac() {
  return getRuleContext<ELDOParser::SensacContext>(0);
}

ELDOParser::SensparamContext* ELDOParser::AnalysisContext::sensparam() {
  return getRuleContext<ELDOParser::SensparamContext>(0);
}

ELDOParser::SnfContext* ELDOParser::AnalysisContext::snf() {
  return getRuleContext<ELDOParser::SnfContext>(0);
}

ELDOParser::SolveContext* ELDOParser::AnalysisContext::solve() {
  return getRuleContext<ELDOParser::SolveContext>(0);
}

ELDOParser::TfContext* ELDOParser::AnalysisContext::tf() {
  return getRuleContext<ELDOParser::TfContext>(0);
}

ELDOParser::TranContext* ELDOParser::AnalysisContext::tran() {
  return getRuleContext<ELDOParser::TranContext>(0);
}

ELDOParser::WcaseContext* ELDOParser::AnalysisContext::wcase() {
  return getRuleContext<ELDOParser::WcaseContext>(0);
}

ELDOParser::ExtractContext* ELDOParser::AnalysisContext::extract() {
  return getRuleContext<ELDOParser::ExtractContext>(0);
}


size_t ELDOParser::AnalysisContext::getRuleIndex() const {
  return ELDOParser::RuleAnalysis;
}

void ELDOParser::AnalysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnalysis(this);
}

void ELDOParser::AnalysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnalysis(this);
}


antlrcpp::Any ELDOParser::AnalysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAnalysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::AnalysisContext* ELDOParser::analysis() {
  AnalysisContext *_localctx = _tracker.createInstance<AnalysisContext>(_ctx, getState());
  enterRule(_localctx, 38, ELDOParser::RuleAnalysis);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(485);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ELDOParser::AC: {
        enterOuterAlt(_localctx, 1);
        setState(456);
        ac();
        break;
      }

      case ELDOParser::AGE: {
        enterOuterAlt(_localctx, 2);
        setState(457);
        age();
        break;
      }

      case ELDOParser::CHECKSOA: {
        enterOuterAlt(_localctx, 3);
        setState(458);
        checksoa();
        break;
      }

      case ELDOParser::DC: {
        enterOuterAlt(_localctx, 4);
        setState(459);
        dc();
        break;
      }

      case ELDOParser::DCHIZ: {
        enterOuterAlt(_localctx, 5);
        setState(460);
        dchiz();
        break;
      }

      case ELDOParser::DCMISMATCH: {
        enterOuterAlt(_localctx, 6);
        setState(461);
        dcmismatch();
        break;
      }

      case ELDOParser::DEX: {
        enterOuterAlt(_localctx, 7);
        setState(462);
        dex();
        break;
      }

      case ELDOParser::DSP: {
        enterOuterAlt(_localctx, 8);
        setState(463);
        dsp();
        break;
      }

      case ELDOParser::DSPMOD: {
        enterOuterAlt(_localctx, 9);
        setState(464);
        dspmod();
        break;
      }

      case ELDOParser::FOUR: {
        enterOuterAlt(_localctx, 10);
        setState(465);
        four();
        break;
      }

      case ELDOParser::LSTB: {
        enterOuterAlt(_localctx, 11);
        setState(466);
        lstb();
        break;
      }

      case ELDOParser::MC: {
        enterOuterAlt(_localctx, 12);
        setState(467);
        mc();
        break;
      }

      case ELDOParser::NOISE: {
        enterOuterAlt(_localctx, 13);
        setState(468);
        noise();
        break;
      }

      case ELDOParser::NOISETRAN: {
        enterOuterAlt(_localctx, 14);
        setState(469);
        noisetran();
        break;
      }

      case ELDOParser::OP: {
        enterOuterAlt(_localctx, 15);
        setState(470);
        op();
        break;
      }

      case ELDOParser::OPTFOUR: {
        enterOuterAlt(_localctx, 16);
        setState(471);
        optfour();
        break;
      }

      case ELDOParser::OPTIMIZE: {
        enterOuterAlt(_localctx, 17);
        setState(472);
        optimize();
        break;
      }

      case ELDOParser::OPTNOISE: {
        enterOuterAlt(_localctx, 18);
        setState(473);
        optnoise();
        break;
      }

      case ELDOParser::PZ: {
        enterOuterAlt(_localctx, 19);
        setState(474);
        pz();
        break;
      }

      case ELDOParser::RAMP: {
        enterOuterAlt(_localctx, 20);
        setState(475);
        ramp();
        break;
      }

      case ELDOParser::SENS: {
        enterOuterAlt(_localctx, 21);
        setState(476);
        sens();
        break;
      }

      case ELDOParser::SENSAC: {
        enterOuterAlt(_localctx, 22);
        setState(477);
        sensac();
        break;
      }

      case ELDOParser::SENSPARAM: {
        enterOuterAlt(_localctx, 23);
        setState(478);
        sensparam();
        break;
      }

      case ELDOParser::SNF: {
        enterOuterAlt(_localctx, 24);
        setState(479);
        snf();
        break;
      }

      case ELDOParser::SOLVE: {
        enterOuterAlt(_localctx, 25);
        setState(480);
        solve();
        break;
      }

      case ELDOParser::TF: {
        enterOuterAlt(_localctx, 26);
        setState(481);
        tf();
        break;
      }

      case ELDOParser::TRAN: {
        enterOuterAlt(_localctx, 27);
        setState(482);
        tran();
        break;
      }

      case ELDOParser::WCASE: {
        enterOuterAlt(_localctx, 28);
        setState(483);
        wcase();
        break;
      }

      case ELDOParser::EXTRACT: {
        enterOuterAlt(_localctx, 29);
        setState(484);
        extract();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcContext ------------------------------------------------------------------

ELDOParser::AcContext::AcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::AcContext::AC() {
  return getToken(ELDOParser::AC, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::AcContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Ac_parameter_drivenContext* ELDOParser::AcContext::ac_parameter_driven() {
  return getRuleContext<ELDOParser::Ac_parameter_drivenContext>(0);
}

ELDOParser::Ac_data_drivenContext* ELDOParser::AcContext::ac_data_driven() {
  return getRuleContext<ELDOParser::Ac_data_drivenContext>(0);
}

ELDOParser::Ac_list_drivenContext* ELDOParser::AcContext::ac_list_driven() {
  return getRuleContext<ELDOParser::Ac_list_drivenContext>(0);
}

ELDOParser::Ac_adaptiveContext* ELDOParser::AcContext::ac_adaptive() {
  return getRuleContext<ELDOParser::Ac_adaptiveContext>(0);
}


size_t ELDOParser::AcContext::getRuleIndex() const {
  return ELDOParser::RuleAc;
}

void ELDOParser::AcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAc(this);
}

void ELDOParser::AcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAc(this);
}


antlrcpp::Any ELDOParser::AcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAc(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::AcContext* ELDOParser::ac() {
  AcContext *_localctx = _tracker.createInstance<AcContext>(_ctx, getState());
  enterRule(_localctx, 40, ELDOParser::RuleAc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(ELDOParser::AC);
    setState(492);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(488);
      ac_parameter_driven();
      break;
    }

    case 2: {
      setState(489);
      ac_data_driven();
      break;
    }

    case 3: {
      setState(490);
      ac_list_driven();
      break;
    }

    case 4: {
      setState(491);
      ac_adaptive();
      break;
    }

    }
    setState(494);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ac_parameter_drivenContext ------------------------------------------------------------------

ELDOParser::Ac_parameter_drivenContext::Ac_parameter_drivenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ac_parameter_drivenContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Ac_parameter_drivenContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Ac_parameter_drivenContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Ac_parameter_drivenContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Ac_parameter_drivenContext::getRuleIndex() const {
  return ELDOParser::RuleAc_parameter_driven;
}

void ELDOParser::Ac_parameter_drivenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAc_parameter_driven(this);
}

void ELDOParser::Ac_parameter_drivenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAc_parameter_driven(this);
}


antlrcpp::Any ELDOParser::Ac_parameter_drivenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAc_parameter_driven(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ac_parameter_drivenContext* ELDOParser::ac_parameter_driven() {
  Ac_parameter_drivenContext *_localctx = _tracker.createInstance<Ac_parameter_drivenContext>(_ctx, getState());
  enterRule(_localctx, 42, ELDOParser::RuleAc_parameter_driven);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(ELDOParser::ID);
    setState(497);
    match(ELDOParser::NUMBER);
    setState(498);
    match(ELDOParser::NUMBER);
    setState(499);
    match(ELDOParser::NUMBER);
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(500);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ac_data_drivenContext ------------------------------------------------------------------

ELDOParser::Ac_data_drivenContext::Ac_data_drivenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::ParameterContext* ELDOParser::Ac_data_drivenContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::Ac_data_drivenContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Ac_data_drivenContext::getRuleIndex() const {
  return ELDOParser::RuleAc_data_driven;
}

void ELDOParser::Ac_data_drivenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAc_data_driven(this);
}

void ELDOParser::Ac_data_drivenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAc_data_driven(this);
}


antlrcpp::Any ELDOParser::Ac_data_drivenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAc_data_driven(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ac_data_drivenContext* ELDOParser::ac_data_driven() {
  Ac_data_drivenContext *_localctx = _tracker.createInstance<Ac_data_drivenContext>(_ctx, getState());
  enterRule(_localctx, 44, ELDOParser::RuleAc_data_driven);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    parameter();
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(504);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ac_list_drivenContext ------------------------------------------------------------------

ELDOParser::Ac_list_drivenContext::Ac_list_drivenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ac_list_drivenContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::Ac_list_drivenContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Ac_list_drivenContext::getRuleIndex() const {
  return ELDOParser::RuleAc_list_driven;
}

void ELDOParser::Ac_list_drivenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAc_list_driven(this);
}

void ELDOParser::Ac_list_drivenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAc_list_driven(this);
}


antlrcpp::Any ELDOParser::Ac_list_drivenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAc_list_driven(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ac_list_drivenContext* ELDOParser::ac_list_driven() {
  Ac_list_drivenContext *_localctx = _tracker.createInstance<Ac_list_drivenContext>(_ctx, getState());
  enterRule(_localctx, 46, ELDOParser::RuleAc_list_driven);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(ELDOParser::ID);
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(508);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ac_adaptiveContext ------------------------------------------------------------------

ELDOParser::Ac_adaptiveContext::Ac_adaptiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ac_adaptiveContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Ac_adaptiveContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Ac_adaptiveContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}


size_t ELDOParser::Ac_adaptiveContext::getRuleIndex() const {
  return ELDOParser::RuleAc_adaptive;
}

void ELDOParser::Ac_adaptiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAc_adaptive(this);
}

void ELDOParser::Ac_adaptiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAc_adaptive(this);
}


antlrcpp::Any ELDOParser::Ac_adaptiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAc_adaptive(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ac_adaptiveContext* ELDOParser::ac_adaptive() {
  Ac_adaptiveContext *_localctx = _tracker.createInstance<Ac_adaptiveContext>(_ctx, getState());
  enterRule(_localctx, 48, ELDOParser::RuleAc_adaptive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    match(ELDOParser::ID);
    setState(512);
    match(ELDOParser::NUMBER);
    setState(513);
    match(ELDOParser::NUMBER);
    setState(514);
    match(ELDOParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AgeContext ------------------------------------------------------------------

ELDOParser::AgeContext::AgeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::AgeContext::AGE() {
  return getToken(ELDOParser::AGE, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::AgeContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::AgeContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::AgeContext::getRuleIndex() const {
  return ELDOParser::RuleAge;
}

void ELDOParser::AgeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAge(this);
}

void ELDOParser::AgeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAge(this);
}


antlrcpp::Any ELDOParser::AgeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAge(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::AgeContext* ELDOParser::age() {
  AgeContext *_localctx = _tracker.createInstance<AgeContext>(_ctx, getState());
  enterRule(_localctx, 50, ELDOParser::RuleAge);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    match(ELDOParser::AGE);
    setState(517);
    parameter_list();
    setState(518);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChecksoaContext ------------------------------------------------------------------

ELDOParser::ChecksoaContext::ChecksoaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ChecksoaContext::CHECKSOA() {
  return getToken(ELDOParser::CHECKSOA, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::ChecksoaContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::ChecksoaContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::ChecksoaContext::getRuleIndex() const {
  return ELDOParser::RuleChecksoa;
}

void ELDOParser::ChecksoaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChecksoa(this);
}

void ELDOParser::ChecksoaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChecksoa(this);
}


antlrcpp::Any ELDOParser::ChecksoaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitChecksoa(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ChecksoaContext* ELDOParser::checksoa() {
  ChecksoaContext *_localctx = _tracker.createInstance<ChecksoaContext>(_ctx, getState());
  enterRule(_localctx, 52, ELDOParser::RuleChecksoa);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    match(ELDOParser::CHECKSOA);
    setState(521);
    parameter_list();
    setState(522);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DcContext ------------------------------------------------------------------

ELDOParser::DcContext::DcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DcContext::DC() {
  return getToken(ELDOParser::DC, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::DcContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Dc_component_analysisContext* ELDOParser::DcContext::dc_component_analysis() {
  return getRuleContext<ELDOParser::Dc_component_analysisContext>(0);
}

ELDOParser::Dc_source_analysisContext* ELDOParser::DcContext::dc_source_analysis() {
  return getRuleContext<ELDOParser::Dc_source_analysisContext>(0);
}

ELDOParser::Dc_temperature_analysisContext* ELDOParser::DcContext::dc_temperature_analysis() {
  return getRuleContext<ELDOParser::Dc_temperature_analysisContext>(0);
}

ELDOParser::Dc_parameter_analysisContext* ELDOParser::DcContext::dc_parameter_analysis() {
  return getRuleContext<ELDOParser::Dc_parameter_analysisContext>(0);
}

ELDOParser::Dc_data_driven_analysisContext* ELDOParser::DcContext::dc_data_driven_analysis() {
  return getRuleContext<ELDOParser::Dc_data_driven_analysisContext>(0);
}


size_t ELDOParser::DcContext::getRuleIndex() const {
  return ELDOParser::RuleDc;
}

void ELDOParser::DcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDc(this);
}

void ELDOParser::DcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDc(this);
}


antlrcpp::Any ELDOParser::DcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDc(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DcContext* ELDOParser::dc() {
  DcContext *_localctx = _tracker.createInstance<DcContext>(_ctx, getState());
  enterRule(_localctx, 54, ELDOParser::RuleDc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(524);
    match(ELDOParser::DC);
    setState(530);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(525);
      dc_component_analysis();
      break;
    }

    case 2: {
      setState(526);
      dc_source_analysis();
      break;
    }

    case 3: {
      setState(527);
      dc_temperature_analysis();
      break;
    }

    case 4: {
      setState(528);
      dc_parameter_analysis();
      break;
    }

    case 5: {
      setState(529);
      dc_data_driven_analysis();
      break;
    }

    }
    setState(532);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dc_component_analysisContext ------------------------------------------------------------------

ELDOParser::Dc_component_analysisContext::Dc_component_analysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_component_analysisContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Dc_component_analysisContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_component_analysisContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Dc_component_analysisContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Dc_component_analysisContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Dc_component_analysisContext::getRuleIndex() const {
  return ELDOParser::RuleDc_component_analysis;
}

void ELDOParser::Dc_component_analysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDc_component_analysis(this);
}

void ELDOParser::Dc_component_analysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDc_component_analysis(this);
}


antlrcpp::Any ELDOParser::Dc_component_analysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDc_component_analysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Dc_component_analysisContext* ELDOParser::dc_component_analysis() {
  Dc_component_analysisContext *_localctx = _tracker.createInstance<Dc_component_analysisContext>(_ctx, getState());
  enterRule(_localctx, 56, ELDOParser::RuleDc_component_analysis);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(ELDOParser::ID);
    setState(536);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(535);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(538);
      match(ELDOParser::ID);
    }
    setState(541);
    match(ELDOParser::NUMBER);
    setState(542);
    match(ELDOParser::NUMBER);
    setState(543);
    match(ELDOParser::NUMBER);
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(544);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dc_source_analysisContext ------------------------------------------------------------------

ELDOParser::Dc_source_analysisContext::Dc_source_analysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_source_analysisContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Dc_source_analysisContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_source_analysisContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Dc_source_analysisContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Dc_source_analysisContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Dc_source_analysisContext::getRuleIndex() const {
  return ELDOParser::RuleDc_source_analysis;
}

void ELDOParser::Dc_source_analysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDc_source_analysis(this);
}

void ELDOParser::Dc_source_analysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDc_source_analysis(this);
}


antlrcpp::Any ELDOParser::Dc_source_analysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDc_source_analysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Dc_source_analysisContext* ELDOParser::dc_source_analysis() {
  Dc_source_analysisContext *_localctx = _tracker.createInstance<Dc_source_analysisContext>(_ctx, getState());
  enterRule(_localctx, 58, ELDOParser::RuleDc_source_analysis);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    match(ELDOParser::ID);
    setState(549);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(548);
      match(ELDOParser::ID);
    }
    setState(551);
    match(ELDOParser::NUMBER);
    setState(552);
    match(ELDOParser::NUMBER);
    setState(553);
    match(ELDOParser::NUMBER);
    setState(558);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(554);
      match(ELDOParser::ID);
      setState(555);
      match(ELDOParser::NUMBER);
      setState(556);
      match(ELDOParser::NUMBER);
      setState(557);
      match(ELDOParser::NUMBER);
      break;
    }

    }
    setState(561);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(560);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dc_temperature_analysisContext ------------------------------------------------------------------

ELDOParser::Dc_temperature_analysisContext::Dc_temperature_analysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Dc_temperature_analysisContext::TEMP() {
  return getToken(ELDOParser::TEMP, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_temperature_analysisContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Dc_temperature_analysisContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Dc_temperature_analysisContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Dc_temperature_analysisContext::getRuleIndex() const {
  return ELDOParser::RuleDc_temperature_analysis;
}

void ELDOParser::Dc_temperature_analysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDc_temperature_analysis(this);
}

void ELDOParser::Dc_temperature_analysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDc_temperature_analysis(this);
}


antlrcpp::Any ELDOParser::Dc_temperature_analysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDc_temperature_analysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Dc_temperature_analysisContext* ELDOParser::dc_temperature_analysis() {
  Dc_temperature_analysisContext *_localctx = _tracker.createInstance<Dc_temperature_analysisContext>(_ctx, getState());
  enterRule(_localctx, 60, ELDOParser::RuleDc_temperature_analysis);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(ELDOParser::TEMP);
    setState(564);
    match(ELDOParser::NUMBER);
    setState(565);
    match(ELDOParser::NUMBER);
    setState(566);
    match(ELDOParser::NUMBER);
    setState(568);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(567);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dc_parameter_analysisContext ------------------------------------------------------------------

ELDOParser::Dc_parameter_analysisContext::Dc_parameter_analysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Dc_parameter_analysisContext::PARAM() {
  return getToken(ELDOParser::PARAM, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_parameter_analysisContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Dc_parameter_analysisContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::Dc_parameter_analysisContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Dc_parameter_analysisContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Dc_parameter_analysisContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Dc_parameter_analysisContext::getRuleIndex() const {
  return ELDOParser::RuleDc_parameter_analysis;
}

void ELDOParser::Dc_parameter_analysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDc_parameter_analysis(this);
}

void ELDOParser::Dc_parameter_analysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDc_parameter_analysis(this);
}


antlrcpp::Any ELDOParser::Dc_parameter_analysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDc_parameter_analysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Dc_parameter_analysisContext* ELDOParser::dc_parameter_analysis() {
  Dc_parameter_analysisContext *_localctx = _tracker.createInstance<Dc_parameter_analysisContext>(_ctx, getState());
  enterRule(_localctx, 62, ELDOParser::RuleDc_parameter_analysis);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    match(ELDOParser::PARAM);
    setState(571);
    match(ELDOParser::ID);
    setState(573);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(572);
      match(ELDOParser::ID);
    }
    setState(575);
    match(ELDOParser::NUMBER);
    setState(576);
    match(ELDOParser::NUMBER);
    setState(577);
    match(ELDOParser::NUMBER);
    setState(579);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(578);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dc_data_driven_analysisContext ------------------------------------------------------------------

ELDOParser::Dc_data_driven_analysisContext::Dc_data_driven_analysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::ParameterContext* ELDOParser::Dc_data_driven_analysisContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::Dc_data_driven_analysisContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Dc_data_driven_analysisContext::getRuleIndex() const {
  return ELDOParser::RuleDc_data_driven_analysis;
}

void ELDOParser::Dc_data_driven_analysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDc_data_driven_analysis(this);
}

void ELDOParser::Dc_data_driven_analysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDc_data_driven_analysis(this);
}


antlrcpp::Any ELDOParser::Dc_data_driven_analysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDc_data_driven_analysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Dc_data_driven_analysisContext* ELDOParser::dc_data_driven_analysis() {
  Dc_data_driven_analysisContext *_localctx = _tracker.createInstance<Dc_data_driven_analysisContext>(_ctx, getState());
  enterRule(_localctx, 64, ELDOParser::RuleDc_data_driven_analysis);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    parameter();
    setState(583);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(582);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DchizContext ------------------------------------------------------------------

ELDOParser::DchizContext::DchizContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DchizContext::DCHIZ() {
  return getToken(ELDOParser::DCHIZ, 0);
}

ELDOParser::ParameterContext* ELDOParser::DchizContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::DchizContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::DchizContext::getRuleIndex() const {
  return ELDOParser::RuleDchiz;
}

void ELDOParser::DchizContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDchiz(this);
}

void ELDOParser::DchizContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDchiz(this);
}


antlrcpp::Any ELDOParser::DchizContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDchiz(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DchizContext* ELDOParser::dchiz() {
  DchizContext *_localctx = _tracker.createInstance<DchizContext>(_ctx, getState());
  enterRule(_localctx, 66, ELDOParser::RuleDchiz);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(585);
    match(ELDOParser::DCHIZ);
    setState(586);
    parameter();
    setState(587);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DcmismatchContext ------------------------------------------------------------------

ELDOParser::DcmismatchContext::DcmismatchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DcmismatchContext::DCMISMATCH() {
  return getToken(ELDOParser::DCMISMATCH, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::DcmismatchContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::DcmismatchContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::DcmismatchContext::getRuleIndex() const {
  return ELDOParser::RuleDcmismatch;
}

void ELDOParser::DcmismatchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDcmismatch(this);
}

void ELDOParser::DcmismatchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDcmismatch(this);
}


antlrcpp::Any ELDOParser::DcmismatchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDcmismatch(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DcmismatchContext* ELDOParser::dcmismatch() {
  DcmismatchContext *_localctx = _tracker.createInstance<DcmismatchContext>(_ctx, getState());
  enterRule(_localctx, 68, ELDOParser::RuleDcmismatch);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    match(ELDOParser::DCMISMATCH);
    setState(591);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(590);
      parameter_list();
    }
    setState(593);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DexContext ------------------------------------------------------------------

ELDOParser::DexContext::DexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DexContext::DEX() {
  return getToken(ELDOParser::DEX, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::DexContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::DexContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::DexContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::DexContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::DexContext::getRuleIndex() const {
  return ELDOParser::RuleDex;
}

void ELDOParser::DexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDex(this);
}

void ELDOParser::DexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDex(this);
}


antlrcpp::Any ELDOParser::DexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDex(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DexContext* ELDOParser::dex() {
  DexContext *_localctx = _tracker.createInstance<DexContext>(_ctx, getState());
  enterRule(_localctx, 70, ELDOParser::RuleDex);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(595);
    match(ELDOParser::DEX);
    setState(596);
    parameter();
    setState(597);
    parameter();
    setState(599);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(598);
      parameter_list();
    }
    setState(601);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DspContext ------------------------------------------------------------------

ELDOParser::DspContext::DspContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DspContext::DSP() {
  return getToken(ELDOParser::DSP, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::DspContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::DspContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

tree::TerminalNode* ELDOParser::DspContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::DspContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::DspContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::DspContext::getRuleIndex() const {
  return ELDOParser::RuleDsp;
}

void ELDOParser::DspContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDsp(this);
}

void ELDOParser::DspContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDsp(this);
}


antlrcpp::Any ELDOParser::DspContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDsp(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DspContext* ELDOParser::dsp() {
  DspContext *_localctx = _tracker.createInstance<DspContext>(_ctx, getState());
  enterRule(_localctx, 72, ELDOParser::RuleDsp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(ELDOParser::DSP);
    setState(604);
    parameter();
    setState(606);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(605);
      parameter();
      break;
    }

    }
    setState(609);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(608);
      parameter();
      break;
    }

    }
    setState(611);
    match(ELDOParser::ID);
    setState(613);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(612);
      parameter_list();
    }
    setState(615);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DspmodContext ------------------------------------------------------------------

ELDOParser::DspmodContext::DspmodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DspmodContext::DSPMOD() {
  return getToken(ELDOParser::DSPMOD, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::DspmodContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::DspmodContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::DspmodContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::DspmodContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::DspmodContext::getRuleIndex() const {
  return ELDOParser::RuleDspmod;
}

void ELDOParser::DspmodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDspmod(this);
}

void ELDOParser::DspmodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDspmod(this);
}


antlrcpp::Any ELDOParser::DspmodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDspmod(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DspmodContext* ELDOParser::dspmod() {
  DspmodContext *_localctx = _tracker.createInstance<DspmodContext>(_ctx, getState());
  enterRule(_localctx, 74, ELDOParser::RuleDspmod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    match(ELDOParser::DSPMOD);
    setState(618);
    parameter();
    setState(619);
    parameter();
    setState(621);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(620);
      parameter_list();
    }
    setState(623);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FourContext ------------------------------------------------------------------

ELDOParser::FourContext::FourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::FourContext::FOUR() {
  return getToken(ELDOParser::FOUR, 0);
}

ELDOParser::ParameterContext* ELDOParser::FourContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

tree::TerminalNode* ELDOParser::FourContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::FourContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::FourContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::FourContext::getRuleIndex() const {
  return ELDOParser::RuleFour;
}

void ELDOParser::FourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFour(this);
}

void ELDOParser::FourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFour(this);
}


antlrcpp::Any ELDOParser::FourContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFour(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::FourContext* ELDOParser::four() {
  FourContext *_localctx = _tracker.createInstance<FourContext>(_ctx, getState());
  enterRule(_localctx, 76, ELDOParser::RuleFour);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(ELDOParser::FOUR);
    setState(626);
    parameter();
    setState(627);
    match(ELDOParser::ID);
    setState(629);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(628);
      parameter_list();
    }
    setState(631);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LstbContext ------------------------------------------------------------------

ELDOParser::LstbContext::LstbContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::LstbContext::LSTB() {
  return getToken(ELDOParser::LSTB, 0);
}

ELDOParser::FilepathContext* ELDOParser::LstbContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::LstbContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::LstbContext::getRuleIndex() const {
  return ELDOParser::RuleLstb;
}

void ELDOParser::LstbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLstb(this);
}

void ELDOParser::LstbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLstb(this);
}


antlrcpp::Any ELDOParser::LstbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLstb(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::LstbContext* ELDOParser::lstb() {
  LstbContext *_localctx = _tracker.createInstance<LstbContext>(_ctx, getState());
  enterRule(_localctx, 78, ELDOParser::RuleLstb);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    match(ELDOParser::LSTB);
    setState(634);
    filepath();
    setState(635);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- McContext ------------------------------------------------------------------

ELDOParser::McContext::McContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::McContext::MC() {
  return getToken(ELDOParser::MC, 0);
}

tree::TerminalNode* ELDOParser::McContext::NUMBER() {
  return getToken(ELDOParser::NUMBER, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::McContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::McContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::McContext::getRuleIndex() const {
  return ELDOParser::RuleMc;
}

void ELDOParser::McContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMc(this);
}

void ELDOParser::McContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMc(this);
}


antlrcpp::Any ELDOParser::McContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMc(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::McContext* ELDOParser::mc() {
  McContext *_localctx = _tracker.createInstance<McContext>(_ctx, getState());
  enterRule(_localctx, 80, ELDOParser::RuleMc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(ELDOParser::MC);
    setState(638);
    match(ELDOParser::NUMBER);
    setState(640);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(639);
      parameter_list();
    }
    setState(642);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoiseContext ------------------------------------------------------------------

ELDOParser::NoiseContext::NoiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::NoiseContext::NOISE() {
  return getToken(ELDOParser::NOISE, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::NoiseContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::NoiseContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

tree::TerminalNode* ELDOParser::NoiseContext::NUMBER() {
  return getToken(ELDOParser::NUMBER, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::NoiseContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::NoiseContext::getRuleIndex() const {
  return ELDOParser::RuleNoise;
}

void ELDOParser::NoiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoise(this);
}

void ELDOParser::NoiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoise(this);
}


antlrcpp::Any ELDOParser::NoiseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNoise(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::NoiseContext* ELDOParser::noise() {
  NoiseContext *_localctx = _tracker.createInstance<NoiseContext>(_ctx, getState());
  enterRule(_localctx, 82, ELDOParser::RuleNoise);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(ELDOParser::NOISE);
    setState(645);
    parameter();
    setState(646);
    parameter();
    setState(647);
    match(ELDOParser::NUMBER);
    setState(648);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoisetranContext ------------------------------------------------------------------

ELDOParser::NoisetranContext::NoisetranContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::NoisetranContext::NOISETRAN() {
  return getToken(ELDOParser::NOISETRAN, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::NoisetranContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::NoisetranContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::NoisetranContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::NoisetranContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::NoisetranContext::getRuleIndex() const {
  return ELDOParser::RuleNoisetran;
}

void ELDOParser::NoisetranContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoisetran(this);
}

void ELDOParser::NoisetranContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoisetran(this);
}


antlrcpp::Any ELDOParser::NoisetranContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNoisetran(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::NoisetranContext* ELDOParser::noisetran() {
  NoisetranContext *_localctx = _tracker.createInstance<NoisetranContext>(_ctx, getState());
  enterRule(_localctx, 84, ELDOParser::RuleNoisetran);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(650);
    match(ELDOParser::NOISETRAN);
    setState(651);
    parameter();
    setState(652);
    parameter();
    setState(653);
    parameter();
    setState(655);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(654);
      parameter_list();
    }
    setState(657);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

ELDOParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::OpContext::OP() {
  return getToken(ELDOParser::OP, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::OpContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Op_selectiveContext* ELDOParser::OpContext::op_selective() {
  return getRuleContext<ELDOParser::Op_selectiveContext>(0);
}

ELDOParser::Op_time_basedContext* ELDOParser::OpContext::op_time_based() {
  return getRuleContext<ELDOParser::Op_time_basedContext>(0);
}

ELDOParser::Op_dc_basedContext* ELDOParser::OpContext::op_dc_based() {
  return getRuleContext<ELDOParser::Op_dc_basedContext>(0);
}


size_t ELDOParser::OpContext::getRuleIndex() const {
  return ELDOParser::RuleOp;
}

void ELDOParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void ELDOParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}


antlrcpp::Any ELDOParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::OpContext* ELDOParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 86, ELDOParser::RuleOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    match(ELDOParser::OP);
    setState(663);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(660);
      op_selective();
      break;
    }

    case 2: {
      setState(661);
      op_time_based();
      break;
    }

    case 3: {
      setState(662);
      op_dc_based();
      break;
    }

    }
    setState(665);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_selectiveContext ------------------------------------------------------------------

ELDOParser::Op_selectiveContext::Op_selectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::Op_selectiveContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::Op_selectiveContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ELDOParser::Op_selectiveContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Op_selectiveContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}


size_t ELDOParser::Op_selectiveContext::getRuleIndex() const {
  return ELDOParser::RuleOp_selective;
}

void ELDOParser::Op_selectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_selective(this);
}

void ELDOParser::Op_selectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_selective(this);
}


antlrcpp::Any ELDOParser::Op_selectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOp_selective(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Op_selectiveContext* ELDOParser::op_selective() {
  Op_selectiveContext *_localctx = _tracker.createInstance<Op_selectiveContext>(_ctx, getState());
  enterRule(_localctx, 88, ELDOParser::RuleOp_selective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(673);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (ELDOParser::PLUS - 137))
      | (1ULL << (ELDOParser::MINUS - 137))
      | (1ULL << (ELDOParser::OPEN_ROUND - 137))
      | (1ULL << (ELDOParser::OPEN_SQUARE - 137))
      | (1ULL << (ELDOParser::OPEN_CURLY - 137))
      | (1ULL << (ELDOParser::PERCENTAGE - 137))
      | (1ULL << (ELDOParser::NUMBER - 137))
      | (1ULL << (ELDOParser::ID - 137))
      | (1ULL << (ELDOParser::STRING - 137)))) != 0)) {
      setState(668);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(667);
        match(ELDOParser::ID);
        break;
      }

      }
      setState(670);
      expression(0);
      setState(675);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_time_basedContext ------------------------------------------------------------------

ELDOParser::Op_time_basedContext::Op_time_basedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::Op_time_basedContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::Op_time_basedContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}


size_t ELDOParser::Op_time_basedContext::getRuleIndex() const {
  return ELDOParser::RuleOp_time_based;
}

void ELDOParser::Op_time_basedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_time_based(this);
}

void ELDOParser::Op_time_basedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_time_based(this);
}


antlrcpp::Any ELDOParser::Op_time_basedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOp_time_based(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Op_time_basedContext* ELDOParser::op_time_based() {
  Op_time_basedContext *_localctx = _tracker.createInstance<Op_time_basedContext>(_ctx, getState());
  enterRule(_localctx, 90, ELDOParser::RuleOp_time_based);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
    parameter();
    setState(678);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(677);
      parameter();
      break;
    }

    }
    setState(681);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || _la == ELDOParser::ID) {
      setState(680);
      parameter();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_dc_basedContext ------------------------------------------------------------------

ELDOParser::Op_dc_basedContext::Op_dc_basedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::Op_dc_basedContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::Op_dc_basedContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}


size_t ELDOParser::Op_dc_basedContext::getRuleIndex() const {
  return ELDOParser::RuleOp_dc_based;
}

void ELDOParser::Op_dc_basedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_dc_based(this);
}

void ELDOParser::Op_dc_basedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_dc_based(this);
}


antlrcpp::Any ELDOParser::Op_dc_basedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOp_dc_based(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Op_dc_basedContext* ELDOParser::op_dc_based() {
  Op_dc_basedContext *_localctx = _tracker.createInstance<Op_dc_basedContext>(_ctx, getState());
  enterRule(_localctx, 92, ELDOParser::RuleOp_dc_based);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
    parameter();
    setState(685);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(684);
      parameter();
      break;
    }

    }
    setState(688);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(687);
      parameter();
      break;
    }

    }
    setState(691);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || _la == ELDOParser::ID) {
      setState(690);
      parameter();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptfourContext ------------------------------------------------------------------

ELDOParser::OptfourContext::OptfourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::OptfourContext::OPTFOUR() {
  return getToken(ELDOParser::OPTFOUR, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::OptfourContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::OptfourContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::OptfourContext::getRuleIndex() const {
  return ELDOParser::RuleOptfour;
}

void ELDOParser::OptfourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptfour(this);
}

void ELDOParser::OptfourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptfour(this);
}


antlrcpp::Any ELDOParser::OptfourContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOptfour(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::OptfourContext* ELDOParser::optfour() {
  OptfourContext *_localctx = _tracker.createInstance<OptfourContext>(_ctx, getState());
  enterRule(_localctx, 94, ELDOParser::RuleOptfour);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    match(ELDOParser::OPTFOUR);
    setState(695);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(694);
      parameter_list();
    }
    setState(697);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptimizeContext ------------------------------------------------------------------

ELDOParser::OptimizeContext::OptimizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::OptimizeContext::OPTIMIZE() {
  return getToken(ELDOParser::OPTIMIZE, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::OptimizeContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::OptimizeContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::OptimizeContext::getRuleIndex() const {
  return ELDOParser::RuleOptimize;
}

void ELDOParser::OptimizeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptimize(this);
}

void ELDOParser::OptimizeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptimize(this);
}


antlrcpp::Any ELDOParser::OptimizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOptimize(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::OptimizeContext* ELDOParser::optimize() {
  OptimizeContext *_localctx = _tracker.createInstance<OptimizeContext>(_ctx, getState());
  enterRule(_localctx, 96, ELDOParser::RuleOptimize);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(699);
    match(ELDOParser::OPTIMIZE);
    setState(701);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(700);
      parameter_list();
    }
    setState(703);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptnoiseContext ------------------------------------------------------------------

ELDOParser::OptnoiseContext::OptnoiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::OptnoiseContext::OPTNOISE() {
  return getToken(ELDOParser::OPTNOISE, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::OptnoiseContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::OptnoiseContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::OptnoiseContext::getRuleIndex() const {
  return ELDOParser::RuleOptnoise;
}

void ELDOParser::OptnoiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptnoise(this);
}

void ELDOParser::OptnoiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptnoise(this);
}


antlrcpp::Any ELDOParser::OptnoiseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOptnoise(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::OptnoiseContext* ELDOParser::optnoise() {
  OptnoiseContext *_localctx = _tracker.createInstance<OptnoiseContext>(_ctx, getState());
  enterRule(_localctx, 98, ELDOParser::RuleOptnoise);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    match(ELDOParser::OPTNOISE);
    setState(707);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(706);
      parameter_list();
    }
    setState(709);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PzContext ------------------------------------------------------------------

ELDOParser::PzContext::PzContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::PzContext::PZ() {
  return getToken(ELDOParser::PZ, 0);
}

ELDOParser::FilepathContext* ELDOParser::PzContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::PzContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::PzContext::getRuleIndex() const {
  return ELDOParser::RulePz;
}

void ELDOParser::PzContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPz(this);
}

void ELDOParser::PzContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPz(this);
}


antlrcpp::Any ELDOParser::PzContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitPz(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::PzContext* ELDOParser::pz() {
  PzContext *_localctx = _tracker.createInstance<PzContext>(_ctx, getState());
  enterRule(_localctx, 100, ELDOParser::RulePz);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(711);
    match(ELDOParser::PZ);
    setState(712);
    filepath();
    setState(713);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RampContext ------------------------------------------------------------------

ELDOParser::RampContext::RampContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::RampContext::RAMP() {
  return getToken(ELDOParser::RAMP, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::RampContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::RampContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::RampContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::RampContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::End_of_lineContext* ELDOParser::RampContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::RampContext::getRuleIndex() const {
  return ELDOParser::RuleRamp;
}

void ELDOParser::RampContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRamp(this);
}

void ELDOParser::RampContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRamp(this);
}


antlrcpp::Any ELDOParser::RampContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitRamp(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::RampContext* ELDOParser::ramp() {
  RampContext *_localctx = _tracker.createInstance<RampContext>(_ctx, getState());
  enterRule(_localctx, 102, ELDOParser::RuleRamp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(715);
    match(ELDOParser::RAMP);
    setState(716);
    match(ELDOParser::ID);
    setState(717);
    match(ELDOParser::NUMBER);
    setState(719);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::NUMBER) {
      setState(718);
      match(ELDOParser::NUMBER);
    }
    setState(722);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(721);
      match(ELDOParser::ID);
    }
    setState(724);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SensContext ------------------------------------------------------------------

ELDOParser::SensContext::SensContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SensContext::SENS() {
  return getToken(ELDOParser::SENS, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::SensContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::SensContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::SensContext::getRuleIndex() const {
  return ELDOParser::RuleSens;
}

void ELDOParser::SensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSens(this);
}

void ELDOParser::SensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSens(this);
}


antlrcpp::Any ELDOParser::SensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSens(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SensContext* ELDOParser::sens() {
  SensContext *_localctx = _tracker.createInstance<SensContext>(_ctx, getState());
  enterRule(_localctx, 104, ELDOParser::RuleSens);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(726);
    match(ELDOParser::SENS);
    setState(727);
    parameter_list();
    setState(728);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SensacContext ------------------------------------------------------------------

ELDOParser::SensacContext::SensacContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SensacContext::SENSAC() {
  return getToken(ELDOParser::SENSAC, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::SensacContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::SensacContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::SensacContext::getRuleIndex() const {
  return ELDOParser::RuleSensac;
}

void ELDOParser::SensacContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSensac(this);
}

void ELDOParser::SensacContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSensac(this);
}


antlrcpp::Any ELDOParser::SensacContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSensac(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SensacContext* ELDOParser::sensac() {
  SensacContext *_localctx = _tracker.createInstance<SensacContext>(_ctx, getState());
  enterRule(_localctx, 106, ELDOParser::RuleSensac);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(730);
    match(ELDOParser::SENSAC);
    setState(731);
    parameter_list();
    setState(732);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SensparamContext ------------------------------------------------------------------

ELDOParser::SensparamContext::SensparamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SensparamContext::SENSPARAM() {
  return getToken(ELDOParser::SENSPARAM, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::SensparamContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::SensparamContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::SensparamContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::SensparamContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::SensparamContext::getRuleIndex() const {
  return ELDOParser::RuleSensparam;
}

void ELDOParser::SensparamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSensparam(this);
}

void ELDOParser::SensparamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSensparam(this);
}


antlrcpp::Any ELDOParser::SensparamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSensparam(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SensparamContext* ELDOParser::sensparam() {
  SensparamContext *_localctx = _tracker.createInstance<SensparamContext>(_ctx, getState());
  enterRule(_localctx, 108, ELDOParser::RuleSensparam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
    match(ELDOParser::SENSPARAM);
    setState(735);
    parameter();
    setState(736);
    parameter();
    setState(738);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(737);
      parameter_list();
    }
    setState(740);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SnfContext ------------------------------------------------------------------

ELDOParser::SnfContext::SnfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SnfContext::SNF() {
  return getToken(ELDOParser::SNF, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::SnfContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::SnfContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::SnfContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::SnfContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::SnfContext::getRuleIndex() const {
  return ELDOParser::RuleSnf;
}

void ELDOParser::SnfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSnf(this);
}

void ELDOParser::SnfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSnf(this);
}


antlrcpp::Any ELDOParser::SnfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSnf(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SnfContext* ELDOParser::snf() {
  SnfContext *_localctx = _tracker.createInstance<SnfContext>(_ctx, getState());
  enterRule(_localctx, 110, ELDOParser::RuleSnf);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(742);
    match(ELDOParser::SNF);
    setState(743);
    parameter();
    setState(744);
    parameter();
    setState(746);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(745);
      parameter_list();
    }
    setState(748);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SolveContext ------------------------------------------------------------------

ELDOParser::SolveContext::SolveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SolveContext::SOLVE() {
  return getToken(ELDOParser::SOLVE, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::SolveContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Solve_parameterContext* ELDOParser::SolveContext::solve_parameter() {
  return getRuleContext<ELDOParser::Solve_parameterContext>(0);
}

ELDOParser::Solve_objectContext* ELDOParser::SolveContext::solve_object() {
  return getRuleContext<ELDOParser::Solve_objectContext>(0);
}

ELDOParser::Solve_componentContext* ELDOParser::SolveContext::solve_component() {
  return getRuleContext<ELDOParser::Solve_componentContext>(0);
}


size_t ELDOParser::SolveContext::getRuleIndex() const {
  return ELDOParser::RuleSolve;
}

void ELDOParser::SolveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSolve(this);
}

void ELDOParser::SolveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSolve(this);
}


antlrcpp::Any ELDOParser::SolveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSolve(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SolveContext* ELDOParser::solve() {
  SolveContext *_localctx = _tracker.createInstance<SolveContext>(_ctx, getState());
  enterRule(_localctx, 112, ELDOParser::RuleSolve);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    match(ELDOParser::SOLVE);
    setState(754);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(751);
      solve_parameter();
      break;
    }

    case 2: {
      setState(752);
      solve_object();
      break;
    }

    case 3: {
      setState(753);
      solve_component();
      break;
    }

    }
    setState(756);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Solve_parameterContext ------------------------------------------------------------------

ELDOParser::Solve_parameterContext::Solve_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Solve_parameterContext::PARAM() {
  return getToken(ELDOParser::PARAM, 0);
}

tree::TerminalNode* ELDOParser::Solve_parameterContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Solve_parameterContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Solve_parameterContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Solve_parameterContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Solve_parameterContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Solve_parameterContext::getRuleIndex() const {
  return ELDOParser::RuleSolve_parameter;
}

void ELDOParser::Solve_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSolve_parameter(this);
}

void ELDOParser::Solve_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSolve_parameter(this);
}


antlrcpp::Any ELDOParser::Solve_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSolve_parameter(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Solve_parameterContext* ELDOParser::solve_parameter() {
  Solve_parameterContext *_localctx = _tracker.createInstance<Solve_parameterContext>(_ctx, getState());
  enterRule(_localctx, 114, ELDOParser::RuleSolve_parameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(758);
    match(ELDOParser::PARAM);
    setState(759);
    match(ELDOParser::ID);
    setState(760);
    match(ELDOParser::NUMBER);
    setState(761);
    match(ELDOParser::NUMBER);
    setState(762);
    parameter_list();
    setState(763);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Solve_objectContext ------------------------------------------------------------------

ELDOParser::Solve_objectContext::Solve_objectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Solve_objectContext::PARAM() {
  return getToken(ELDOParser::PARAM, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Solve_objectContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Solve_objectContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::Solve_objectContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Solve_objectContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Solve_objectContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Solve_objectContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Solve_objectContext::getRuleIndex() const {
  return ELDOParser::RuleSolve_object;
}

void ELDOParser::Solve_objectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSolve_object(this);
}

void ELDOParser::Solve_objectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSolve_object(this);
}


antlrcpp::Any ELDOParser::Solve_objectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSolve_object(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Solve_objectContext* ELDOParser::solve_object() {
  Solve_objectContext *_localctx = _tracker.createInstance<Solve_objectContext>(_ctx, getState());
  enterRule(_localctx, 116, ELDOParser::RuleSolve_object);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(765);
    match(ELDOParser::PARAM);
    setState(766);
    match(ELDOParser::ID);
    setState(768);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(767);
      match(ELDOParser::ID);
    }
    setState(770);
    match(ELDOParser::NUMBER);
    setState(771);
    match(ELDOParser::NUMBER);
    setState(772);
    parameter_list();
    setState(773);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Solve_componentContext ------------------------------------------------------------------

ELDOParser::Solve_componentContext::Solve_componentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Solve_componentContext::PARAM() {
  return getToken(ELDOParser::PARAM, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Solve_componentContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Solve_componentContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::Solve_componentContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Solve_componentContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Solve_componentContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Solve_componentContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Solve_componentContext::getRuleIndex() const {
  return ELDOParser::RuleSolve_component;
}

void ELDOParser::Solve_componentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSolve_component(this);
}

void ELDOParser::Solve_componentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSolve_component(this);
}


antlrcpp::Any ELDOParser::Solve_componentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSolve_component(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Solve_componentContext* ELDOParser::solve_component() {
  Solve_componentContext *_localctx = _tracker.createInstance<Solve_componentContext>(_ctx, getState());
  enterRule(_localctx, 118, ELDOParser::RuleSolve_component);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(775);
    match(ELDOParser::PARAM);
    setState(776);
    match(ELDOParser::ID);
    setState(778);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(777);
      match(ELDOParser::ID);
    }
    setState(780);
    match(ELDOParser::NUMBER);
    setState(781);
    match(ELDOParser::NUMBER);
    setState(782);
    parameter_list();
    setState(783);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TfContext ------------------------------------------------------------------

ELDOParser::TfContext::TfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::TfContext::TF() {
  return getToken(ELDOParser::TF, 0);
}

std::vector<ELDOParser::ParameterContext *> ELDOParser::TfContext::parameter() {
  return getRuleContexts<ELDOParser::ParameterContext>();
}

ELDOParser::ParameterContext* ELDOParser::TfContext::parameter(size_t i) {
  return getRuleContext<ELDOParser::ParameterContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::TfContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::TfContext::getRuleIndex() const {
  return ELDOParser::RuleTf;
}

void ELDOParser::TfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTf(this);
}

void ELDOParser::TfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTf(this);
}


antlrcpp::Any ELDOParser::TfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTf(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::TfContext* ELDOParser::tf() {
  TfContext *_localctx = _tracker.createInstance<TfContext>(_ctx, getState());
  enterRule(_localctx, 120, ELDOParser::RuleTf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(785);
    match(ELDOParser::TF);
    setState(786);
    parameter();
    setState(787);
    parameter();
    setState(788);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranContext ------------------------------------------------------------------

ELDOParser::TranContext::TranContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::TranContext::TRAN() {
  return getToken(ELDOParser::TRAN, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::TranContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Tran_point_drivenContext* ELDOParser::TranContext::tran_point_driven() {
  return getRuleContext<ELDOParser::Tran_point_drivenContext>(0);
}

ELDOParser::Tran_parameterizedContext* ELDOParser::TranContext::tran_parameterized() {
  return getRuleContext<ELDOParser::Tran_parameterizedContext>(0);
}

ELDOParser::Tran_data_drivenContext* ELDOParser::TranContext::tran_data_driven() {
  return getRuleContext<ELDOParser::Tran_data_drivenContext>(0);
}


size_t ELDOParser::TranContext::getRuleIndex() const {
  return ELDOParser::RuleTran;
}

void ELDOParser::TranContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTran(this);
}

void ELDOParser::TranContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTran(this);
}


antlrcpp::Any ELDOParser::TranContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTran(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::TranContext* ELDOParser::tran() {
  TranContext *_localctx = _tracker.createInstance<TranContext>(_ctx, getState());
  enterRule(_localctx, 122, ELDOParser::RuleTran);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    match(ELDOParser::TRAN);
    setState(794);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(791);
      tran_point_driven();
      break;
    }

    case 2: {
      setState(792);
      tran_parameterized();
      break;
    }

    case 3: {
      setState(793);
      tran_data_driven();
      break;
    }

    }
    setState(796);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tran_point_drivenContext ------------------------------------------------------------------

ELDOParser::Tran_point_drivenContext::Tran_point_drivenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ELDOParser::Tran_point_drivenContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Tran_point_drivenContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}

ELDOParser::Parameter_listContext* ELDOParser::Tran_point_drivenContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Tran_point_drivenContext::getRuleIndex() const {
  return ELDOParser::RuleTran_point_driven;
}

void ELDOParser::Tran_point_drivenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTran_point_driven(this);
}

void ELDOParser::Tran_point_drivenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTran_point_driven(this);
}


antlrcpp::Any ELDOParser::Tran_point_drivenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTran_point_driven(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Tran_point_drivenContext* ELDOParser::tran_point_driven() {
  Tran_point_drivenContext *_localctx = _tracker.createInstance<Tran_point_drivenContext>(_ctx, getState());
  enterRule(_localctx, 124, ELDOParser::RuleTran_point_driven);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    match(ELDOParser::NUMBER);
    setState(799);
    match(ELDOParser::NUMBER);
    setState(804);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::NUMBER) {
      setState(800);
      match(ELDOParser::NUMBER);
      setState(802);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::NUMBER) {
        setState(801);
        match(ELDOParser::NUMBER);
      }
    }
    setState(807);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(806);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tran_parameterizedContext ------------------------------------------------------------------

ELDOParser::Tran_parameterizedContext::Tran_parameterizedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::Tran_parameterizedContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::Tran_parameterizedContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}

ELDOParser::Parameter_listContext* ELDOParser::Tran_parameterizedContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Tran_parameterizedContext::getRuleIndex() const {
  return ELDOParser::RuleTran_parameterized;
}

void ELDOParser::Tran_parameterizedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTran_parameterized(this);
}

void ELDOParser::Tran_parameterizedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTran_parameterized(this);
}


antlrcpp::Any ELDOParser::Tran_parameterizedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTran_parameterized(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Tran_parameterizedContext* ELDOParser::tran_parameterized() {
  Tran_parameterizedContext *_localctx = _tracker.createInstance<Tran_parameterizedContext>(_ctx, getState());
  enterRule(_localctx, 126, ELDOParser::RuleTran_parameterized);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(812); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(809);
              expression(0);
              setState(810);
              expression(0);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(814); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(817);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(816);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tran_data_drivenContext ------------------------------------------------------------------

ELDOParser::Tran_data_drivenContext::Tran_data_drivenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Parameter_listContext* ELDOParser::Tran_data_drivenContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Tran_data_drivenContext::getRuleIndex() const {
  return ELDOParser::RuleTran_data_driven;
}

void ELDOParser::Tran_data_drivenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTran_data_driven(this);
}

void ELDOParser::Tran_data_drivenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTran_data_driven(this);
}


antlrcpp::Any ELDOParser::Tran_data_drivenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTran_data_driven(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Tran_data_drivenContext* ELDOParser::tran_data_driven() {
  Tran_data_drivenContext *_localctx = _tracker.createInstance<Tran_data_drivenContext>(_ctx, getState());
  enterRule(_localctx, 128, ELDOParser::RuleTran_data_driven);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(819);
    parameter_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WcaseContext ------------------------------------------------------------------

ELDOParser::WcaseContext::WcaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::WcaseContext::WCASE() {
  return getToken(ELDOParser::WCASE, 0);
}

tree::TerminalNode* ELDOParser::WcaseContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::WcaseContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::WcaseContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::WcaseContext::getRuleIndex() const {
  return ELDOParser::RuleWcase;
}

void ELDOParser::WcaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWcase(this);
}

void ELDOParser::WcaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWcase(this);
}


antlrcpp::Any ELDOParser::WcaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitWcase(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::WcaseContext* ELDOParser::wcase() {
  WcaseContext *_localctx = _tracker.createInstance<WcaseContext>(_ctx, getState());
  enterRule(_localctx, 130, ELDOParser::RuleWcase);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(ELDOParser::WCASE);
    setState(822);
    match(ELDOParser::ID);
    setState(824);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(823);
      parameter_list();
    }
    setState(826);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtractContext ------------------------------------------------------------------

ELDOParser::ExtractContext::ExtractContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ExtractContext::EXTRACT() {
  return getToken(ELDOParser::EXTRACT, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::ExtractContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::ExtractContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::ExtractContext::getRuleIndex() const {
  return ELDOParser::RuleExtract;
}

void ELDOParser::ExtractContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtract(this);
}

void ELDOParser::ExtractContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtract(this);
}


antlrcpp::Any ELDOParser::ExtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExtract(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ExtractContext* ELDOParser::extract() {
  ExtractContext *_localctx = _tracker.createInstance<ExtractContext>(_ctx, getState());
  enterRule(_localctx, 132, ELDOParser::RuleExtract);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(ELDOParser::EXTRACT);
    setState(830);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(829);
      parameter_list();
    }
    setState(832);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalContext ------------------------------------------------------------------

ELDOParser::GlobalContext::GlobalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::GlobalContext::GLOBAL() {
  return getToken(ELDOParser::GLOBAL, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::GlobalContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Node_listContext* ELDOParser::GlobalContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}


size_t ELDOParser::GlobalContext::getRuleIndex() const {
  return ELDOParser::RuleGlobal;
}

void ELDOParser::GlobalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal(this);
}

void ELDOParser::GlobalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal(this);
}


antlrcpp::Any ELDOParser::GlobalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitGlobal(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::GlobalContext* ELDOParser::global() {
  GlobalContext *_localctx = _tracker.createInstance<GlobalContext>(_ctx, getState());
  enterRule(_localctx, 134, ELDOParser::RuleGlobal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(834);
    match(ELDOParser::GLOBAL);
    setState(836);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 140) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 140)) & ((1ULL << (ELDOParser::OPEN_ROUND - 140))
      | (1ULL << (ELDOParser::NUMBER - 140))
      | (1ULL << (ELDOParser::ID - 140)))) != 0)) {
      setState(835);
      node_list();
    }
    setState(838);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModelContext ------------------------------------------------------------------

ELDOParser::ModelContext::ModelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ModelContext::MODEL_DEF() {
  return getToken(ELDOParser::MODEL_DEF, 0);
}

ELDOParser::Model_nameContext* ELDOParser::ModelContext::model_name() {
  return getRuleContext<ELDOParser::Model_nameContext>(0);
}

ELDOParser::Model_masterContext* ELDOParser::ModelContext::model_master() {
  return getRuleContext<ELDOParser::Model_masterContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::ModelContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::ModelContext::NONOISE() {
  return getToken(ELDOParser::NONOISE, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::ModelContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::Model_libContext* ELDOParser::ModelContext::model_lib() {
  return getRuleContext<ELDOParser::Model_libContext>(0);
}

ELDOParser::FilepathContext* ELDOParser::ModelContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::Model_lib_typeContext* ELDOParser::ModelContext::model_lib_type() {
  return getRuleContext<ELDOParser::Model_lib_typeContext>(0);
}


size_t ELDOParser::ModelContext::getRuleIndex() const {
  return ELDOParser::RuleModel;
}

void ELDOParser::ModelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel(this);
}

void ELDOParser::ModelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel(this);
}


antlrcpp::Any ELDOParser::ModelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitModel(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ModelContext* ELDOParser::model() {
  ModelContext *_localctx = _tracker.createInstance<ModelContext>(_ctx, getState());
  enterRule(_localctx, 136, ELDOParser::RuleModel);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(860);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(840);
      match(ELDOParser::MODEL_DEF);
      setState(841);
      model_name();
      setState(842);
      model_master();
      setState(844);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::NONOISE) {
        setState(843);
        match(ELDOParser::NONOISE);
      }
      setState(847);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
        | (1ULL << ELDOParser::MODEL)
        | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

      || _la == ELDOParser::ID) {
        setState(846);
        parameter_list();
      }
      setState(849);
      end_of_line();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(851);
      match(ELDOParser::MODEL_DEF);
      setState(852);
      model_lib();
      setState(853);
      filepath();
      setState(854);
      model_name();
      setState(856);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::ID) {
        setState(855);
        model_lib_type();
      }
      setState(858);
      end_of_line();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Model_libContext ------------------------------------------------------------------

ELDOParser::Model_libContext::Model_libContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Model_libContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Model_libContext::getRuleIndex() const {
  return ELDOParser::RuleModel_lib;
}

void ELDOParser::Model_libContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel_lib(this);
}

void ELDOParser::Model_libContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel_lib(this);
}


antlrcpp::Any ELDOParser::Model_libContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitModel_lib(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Model_libContext* ELDOParser::model_lib() {
  Model_libContext *_localctx = _tracker.createInstance<Model_libContext>(_ctx, getState());
  enterRule(_localctx, 138, ELDOParser::RuleModel_lib);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Model_nameContext ------------------------------------------------------------------

ELDOParser::Model_nameContext::Model_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Model_nameContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Model_nameContext::getRuleIndex() const {
  return ELDOParser::RuleModel_name;
}

void ELDOParser::Model_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel_name(this);
}

void ELDOParser::Model_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel_name(this);
}


antlrcpp::Any ELDOParser::Model_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitModel_name(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Model_nameContext* ELDOParser::model_name() {
  Model_nameContext *_localctx = _tracker.createInstance<Model_nameContext>(_ctx, getState());
  enterRule(_localctx, 140, ELDOParser::RuleModel_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(864);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Model_masterContext ------------------------------------------------------------------

ELDOParser::Model_masterContext::Model_masterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Model_masterContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Model_masterContext::getRuleIndex() const {
  return ELDOParser::RuleModel_master;
}

void ELDOParser::Model_masterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel_master(this);
}

void ELDOParser::Model_masterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel_master(this);
}


antlrcpp::Any ELDOParser::Model_masterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitModel_master(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Model_masterContext* ELDOParser::model_master() {
  Model_masterContext *_localctx = _tracker.createInstance<Model_masterContext>(_ctx, getState());
  enterRule(_localctx, 142, ELDOParser::RuleModel_master);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(866);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Model_lib_typeContext ------------------------------------------------------------------

ELDOParser::Model_lib_typeContext::Model_lib_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Model_lib_typeContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Model_lib_typeContext::getRuleIndex() const {
  return ELDOParser::RuleModel_lib_type;
}

void ELDOParser::Model_lib_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel_lib_type(this);
}

void ELDOParser::Model_lib_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel_lib_type(this);
}


antlrcpp::Any ELDOParser::Model_lib_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitModel_lib_type(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Model_lib_typeContext* ELDOParser::model_lib_type() {
  Model_lib_typeContext *_localctx = _tracker.createInstance<Model_lib_typeContext>(_ctx, getState());
  enterRule(_localctx, 144, ELDOParser::RuleModel_lib_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(868);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlContext ------------------------------------------------------------------

ELDOParser::ControlContext::ControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::AlterContext* ELDOParser::ControlContext::alter() {
  return getRuleContext<ELDOParser::AlterContext>(0);
}

ELDOParser::SaveContext* ELDOParser::ControlContext::save() {
  return getRuleContext<ELDOParser::SaveContext>(0);
}

ELDOParser::OptionContext* ELDOParser::ControlContext::option() {
  return getRuleContext<ELDOParser::OptionContext>(0);
}

ELDOParser::NodesetContext* ELDOParser::ControlContext::nodeset() {
  return getRuleContext<ELDOParser::NodesetContext>(0);
}

ELDOParser::Call_tclContext* ELDOParser::ControlContext::call_tcl() {
  return getRuleContext<ELDOParser::Call_tclContext>(0);
}

ELDOParser::Use_tclContext* ELDOParser::ControlContext::use_tcl() {
  return getRuleContext<ELDOParser::Use_tclContext>(0);
}

ELDOParser::DefmacContext* ELDOParser::ControlContext::defmac() {
  return getRuleContext<ELDOParser::DefmacContext>(0);
}

ELDOParser::ChrentContext* ELDOParser::ControlContext::chrent() {
  return getRuleContext<ELDOParser::ChrentContext>(0);
}

ELDOParser::IcContext* ELDOParser::ControlContext::ic() {
  return getRuleContext<ELDOParser::IcContext>(0);
}

ELDOParser::PrintContext* ELDOParser::ControlContext::print() {
  return getRuleContext<ELDOParser::PrintContext>(0);
}

ELDOParser::PlotContext* ELDOParser::ControlContext::plot() {
  return getRuleContext<ELDOParser::PlotContext>(0);
}

ELDOParser::FfileContext* ELDOParser::ControlContext::ffile() {
  return getRuleContext<ELDOParser::FfileContext>(0);
}

ELDOParser::ProbeContext* ELDOParser::ControlContext::probe() {
  return getRuleContext<ELDOParser::ProbeContext>(0);
}

ELDOParser::DefwaveContext* ELDOParser::ControlContext::defwave() {
  return getRuleContext<ELDOParser::DefwaveContext>(0);
}

ELDOParser::TempContext* ELDOParser::ControlContext::temp() {
  return getRuleContext<ELDOParser::TempContext>(0);
}

ELDOParser::MeasContext* ELDOParser::ControlContext::meas() {
  return getRuleContext<ELDOParser::MeasContext>(0);
}

ELDOParser::ConnectContext* ELDOParser::ControlContext::connect() {
  return getRuleContext<ELDOParser::ConnectContext>(0);
}


size_t ELDOParser::ControlContext::getRuleIndex() const {
  return ELDOParser::RuleControl;
}

void ELDOParser::ControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControl(this);
}

void ELDOParser::ControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControl(this);
}


antlrcpp::Any ELDOParser::ControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitControl(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ControlContext* ELDOParser::control() {
  ControlContext *_localctx = _tracker.createInstance<ControlContext>(_ctx, getState());
  enterRule(_localctx, 146, ELDOParser::RuleControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ELDOParser::ALTER: {
        enterOuterAlt(_localctx, 1);
        setState(870);
        alter();
        break;
      }

      case ELDOParser::SAVE: {
        enterOuterAlt(_localctx, 2);
        setState(871);
        save();
        break;
      }

      case ELDOParser::OPTION:
      case ELDOParser::OPT: {
        enterOuterAlt(_localctx, 3);
        setState(872);
        option();
        break;
      }

      case ELDOParser::NODESET: {
        enterOuterAlt(_localctx, 4);
        setState(873);
        nodeset();
        break;
      }

      case ELDOParser::CALL_TCL: {
        enterOuterAlt(_localctx, 5);
        setState(874);
        call_tcl();
        break;
      }

      case ELDOParser::USE_TCL: {
        enterOuterAlt(_localctx, 6);
        setState(875);
        use_tcl();
        break;
      }

      case ELDOParser::DEFMAC: {
        enterOuterAlt(_localctx, 7);
        setState(876);
        defmac();
        break;
      }

      case ELDOParser::CHRENT: {
        enterOuterAlt(_localctx, 8);
        setState(877);
        chrent();
        break;
      }

      case ELDOParser::IC: {
        enterOuterAlt(_localctx, 9);
        setState(878);
        ic();
        break;
      }

      case ELDOParser::PRINT: {
        enterOuterAlt(_localctx, 10);
        setState(879);
        print();
        break;
      }

      case ELDOParser::PLOT: {
        enterOuterAlt(_localctx, 11);
        setState(880);
        plot();
        break;
      }

      case ELDOParser::FFILE: {
        enterOuterAlt(_localctx, 12);
        setState(881);
        ffile();
        break;
      }

      case ELDOParser::PROBE: {
        enterOuterAlt(_localctx, 13);
        setState(882);
        probe();
        break;
      }

      case ELDOParser::DEFWAVE: {
        enterOuterAlt(_localctx, 14);
        setState(883);
        defwave();
        break;
      }

      case ELDOParser::TEMP_SET: {
        enterOuterAlt(_localctx, 15);
        setState(884);
        temp();
        break;
      }

      case ELDOParser::MEAS: {
        enterOuterAlt(_localctx, 16);
        setState(885);
        meas();
        break;
      }

      case ELDOParser::CONNECT: {
        enterOuterAlt(_localctx, 17);
        setState(886);
        connect();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlterContext ------------------------------------------------------------------

ELDOParser::AlterContext::AlterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Alter_headerContext* ELDOParser::AlterContext::alter_header() {
  return getRuleContext<ELDOParser::Alter_headerContext>(0);
}

ELDOParser::Alter_footerContext* ELDOParser::AlterContext::alter_footer() {
  return getRuleContext<ELDOParser::Alter_footerContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::AlterContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<ELDOParser::Alter_contentContext *> ELDOParser::AlterContext::alter_content() {
  return getRuleContexts<ELDOParser::Alter_contentContext>();
}

ELDOParser::Alter_contentContext* ELDOParser::AlterContext::alter_content(size_t i) {
  return getRuleContext<ELDOParser::Alter_contentContext>(i);
}


size_t ELDOParser::AlterContext::getRuleIndex() const {
  return ELDOParser::RuleAlter;
}

void ELDOParser::AlterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter(this);
}

void ELDOParser::AlterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter(this);
}


antlrcpp::Any ELDOParser::AlterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAlter(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::AlterContext* ELDOParser::alter() {
  AlterContext *_localctx = _tracker.createInstance<AlterContext>(_ctx, getState());
  enterRule(_localctx, 148, ELDOParser::RuleAlter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(889);
    alter_header();
    setState(891); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(890);
              alter_content();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(893); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(895);
    alter_footer();
    setState(896);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_headerContext ------------------------------------------------------------------

ELDOParser::Alter_headerContext::Alter_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Alter_headerContext::ALTER() {
  return getToken(ELDOParser::ALTER, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::Alter_headerContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<tree::TerminalNode *> ELDOParser::Alter_headerContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Alter_headerContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}


size_t ELDOParser::Alter_headerContext::getRuleIndex() const {
  return ELDOParser::RuleAlter_header;
}

void ELDOParser::Alter_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter_header(this);
}

void ELDOParser::Alter_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter_header(this);
}


antlrcpp::Any ELDOParser::Alter_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAlter_header(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Alter_headerContext* ELDOParser::alter_header() {
  Alter_headerContext *_localctx = _tracker.createInstance<Alter_headerContext>(_ctx, getState());
  enterRule(_localctx, 150, ELDOParser::RuleAlter_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(898);
    match(ELDOParser::ALTER);
    setState(902);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ELDOParser::ID) {
      setState(899);
      match(ELDOParser::ID);
      setState(904);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(905);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_contentContext ------------------------------------------------------------------

ELDOParser::Alter_contentContext::Alter_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Netlist_entityContext* ELDOParser::Alter_contentContext::netlist_entity() {
  return getRuleContext<ELDOParser::Netlist_entityContext>(0);
}


size_t ELDOParser::Alter_contentContext::getRuleIndex() const {
  return ELDOParser::RuleAlter_content;
}

void ELDOParser::Alter_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter_content(this);
}

void ELDOParser::Alter_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter_content(this);
}


antlrcpp::Any ELDOParser::Alter_contentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAlter_content(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Alter_contentContext* ELDOParser::alter_content() {
  Alter_contentContext *_localctx = _tracker.createInstance<Alter_contentContext>(_ctx, getState());
  enterRule(_localctx, 152, ELDOParser::RuleAlter_content);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(907);
    netlist_entity();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_footerContext ------------------------------------------------------------------

ELDOParser::Alter_footerContext::Alter_footerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Alter_footerContext::ALTER() {
  return getToken(ELDOParser::ALTER, 0);
}

tree::TerminalNode* ELDOParser::Alter_footerContext::END() {
  return getToken(ELDOParser::END, 0);
}


size_t ELDOParser::Alter_footerContext::getRuleIndex() const {
  return ELDOParser::RuleAlter_footer;
}

void ELDOParser::Alter_footerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter_footer(this);
}

void ELDOParser::Alter_footerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter_footer(this);
}


antlrcpp::Any ELDOParser::Alter_footerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitAlter_footer(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Alter_footerContext* ELDOParser::alter_footer() {
  Alter_footerContext *_localctx = _tracker.createInstance<Alter_footerContext>(_ctx, getState());
  enterRule(_localctx, 154, ELDOParser::RuleAlter_footer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(909);
    _la = _input->LA(1);
    if (!(_la == ELDOParser::ALTER

    || _la == ELDOParser::END)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SaveContext ------------------------------------------------------------------

ELDOParser::SaveContext::SaveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SaveContext::SAVE() {
  return getToken(ELDOParser::SAVE, 0);
}

ELDOParser::Save_whenContext* ELDOParser::SaveContext::save_when() {
  return getRuleContext<ELDOParser::Save_whenContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::SaveContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Save_fileContext* ELDOParser::SaveContext::save_file() {
  return getRuleContext<ELDOParser::Save_fileContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::SaveContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::SaveContext::getRuleIndex() const {
  return ELDOParser::RuleSave;
}

void ELDOParser::SaveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSave(this);
}

void ELDOParser::SaveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSave(this);
}


antlrcpp::Any ELDOParser::SaveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSave(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SaveContext* ELDOParser::save() {
  SaveContext *_localctx = _tracker.createInstance<SaveContext>(_ctx, getState());
  enterRule(_localctx, 156, ELDOParser::RuleSave);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(911);
    match(ELDOParser::SAVE);
    setState(913);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(912);
      save_file();
      break;
    }

    }
    setState(915);
    save_when();
    setState(917);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(916);
      parameter_list();
    }
    setState(919);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Save_fileContext ------------------------------------------------------------------

ELDOParser::Save_fileContext::Save_fileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::FilepathContext* ELDOParser::Save_fileContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

tree::TerminalNode* ELDOParser::Save_fileContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Save_fileContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}


size_t ELDOParser::Save_fileContext::getRuleIndex() const {
  return ELDOParser::RuleSave_file;
}

void ELDOParser::Save_fileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSave_file(this);
}

void ELDOParser::Save_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSave_file(this);
}


antlrcpp::Any ELDOParser::Save_fileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSave_file(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Save_fileContext* ELDOParser::save_file() {
  Save_fileContext *_localctx = _tracker.createInstance<Save_fileContext>(_ctx, getState());
  enterRule(_localctx, 158, ELDOParser::RuleSave_file);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(923);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(921);
      match(ELDOParser::ID);
      setState(922);
      match(ELDOParser::EQUAL);
      break;
    }

    }
    setState(925);
    filepath();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Save_whenContext ------------------------------------------------------------------

ELDOParser::Save_whenContext::Save_whenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Save_whenContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Save_whenContext::END() {
  return getToken(ELDOParser::END, 0);
}

ELDOParser::ParameterContext* ELDOParser::Save_whenContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}


size_t ELDOParser::Save_whenContext::getRuleIndex() const {
  return ELDOParser::RuleSave_when;
}

void ELDOParser::Save_whenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSave_when(this);
}

void ELDOParser::Save_whenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSave_when(this);
}


antlrcpp::Any ELDOParser::Save_whenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSave_when(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Save_whenContext* ELDOParser::save_when() {
  Save_whenContext *_localctx = _tracker.createInstance<Save_whenContext>(_ctx, getState());
  enterRule(_localctx, 160, ELDOParser::RuleSave_when);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(930);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(927);
      match(ELDOParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(928);
      match(ELDOParser::END);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(929);
      parameter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

ELDOParser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Parameter_listContext* ELDOParser::OptionContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::OptionContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::OptionContext::OPTION() {
  return getToken(ELDOParser::OPTION, 0);
}

tree::TerminalNode* ELDOParser::OptionContext::OPT() {
  return getToken(ELDOParser::OPT, 0);
}


size_t ELDOParser::OptionContext::getRuleIndex() const {
  return ELDOParser::RuleOption;
}

void ELDOParser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void ELDOParser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}


antlrcpp::Any ELDOParser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::OptionContext* ELDOParser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 162, ELDOParser::RuleOption);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
    _la = _input->LA(1);
    if (!(_la == ELDOParser::OPTION

    || _la == ELDOParser::OPT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(933);
    parameter_list();
    setState(934);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NodesetContext ------------------------------------------------------------------

ELDOParser::NodesetContext::NodesetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::NodesetContext::NODESET() {
  return getToken(ELDOParser::NODESET, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::NodesetContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::NodesetContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::NodesetContext::getRuleIndex() const {
  return ELDOParser::RuleNodeset;
}

void ELDOParser::NodesetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNodeset(this);
}

void ELDOParser::NodesetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNodeset(this);
}


antlrcpp::Any ELDOParser::NodesetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNodeset(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::NodesetContext* ELDOParser::nodeset() {
  NodesetContext *_localctx = _tracker.createInstance<NodesetContext>(_ctx, getState());
  enterRule(_localctx, 164, ELDOParser::RuleNodeset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(936);
    match(ELDOParser::NODESET);
    setState(937);
    parameter_list();
    setState(938);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_tclContext ------------------------------------------------------------------

ELDOParser::Call_tclContext::Call_tclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Call_tclContext::CALL_TCL() {
  return getToken(ELDOParser::CALL_TCL, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::Call_tclContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<tree::TerminalNode *> ELDOParser::Call_tclContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Call_tclContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

ELDOParser::Call_tcl_whenContext* ELDOParser::Call_tclContext::call_tcl_when() {
  return getRuleContext<ELDOParser::Call_tcl_whenContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::Call_tclContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::ExpressionContext* ELDOParser::Call_tclContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}


size_t ELDOParser::Call_tclContext::getRuleIndex() const {
  return ELDOParser::RuleCall_tcl;
}

void ELDOParser::Call_tclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_tcl(this);
}

void ELDOParser::Call_tclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_tcl(this);
}


antlrcpp::Any ELDOParser::Call_tclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitCall_tcl(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Call_tclContext* ELDOParser::call_tcl() {
  Call_tclContext *_localctx = _tracker.createInstance<Call_tclContext>(_ctx, getState());
  enterRule(_localctx, 166, ELDOParser::RuleCall_tcl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(940);
    match(ELDOParser::CALL_TCL);
    setState(942);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      setState(941);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(945);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::WHEN) {
      setState(944);
      call_tcl_when();
    }
    setState(948);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      setState(947);
      parameter_list();
      break;
    }

    }
    setState(951);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      setState(950);
      expression(0);
      break;
    }

    }
    setState(954);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(953);
      match(ELDOParser::ID);
    }
    setState(956);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_tcl_whenContext ------------------------------------------------------------------

ELDOParser::Call_tcl_whenContext::Call_tcl_whenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Call_tcl_whenContext::WHEN() {
  return getToken(ELDOParser::WHEN, 0);
}

tree::TerminalNode* ELDOParser::Call_tcl_whenContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Call_tcl_whenContext::START() {
  return getToken(ELDOParser::START, 0);
}

tree::TerminalNode* ELDOParser::Call_tcl_whenContext::START_OF_RUN() {
  return getToken(ELDOParser::START_OF_RUN, 0);
}

tree::TerminalNode* ELDOParser::Call_tcl_whenContext::END_OF_RUN() {
  return getToken(ELDOParser::END_OF_RUN, 0);
}

tree::TerminalNode* ELDOParser::Call_tcl_whenContext::END() {
  return getToken(ELDOParser::END, 0);
}


size_t ELDOParser::Call_tcl_whenContext::getRuleIndex() const {
  return ELDOParser::RuleCall_tcl_when;
}

void ELDOParser::Call_tcl_whenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_tcl_when(this);
}

void ELDOParser::Call_tcl_whenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_tcl_when(this);
}


antlrcpp::Any ELDOParser::Call_tcl_whenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitCall_tcl_when(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Call_tcl_whenContext* ELDOParser::call_tcl_when() {
  Call_tcl_whenContext *_localctx = _tracker.createInstance<Call_tcl_whenContext>(_ctx, getState());
  enterRule(_localctx, 168, ELDOParser::RuleCall_tcl_when);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(958);
    match(ELDOParser::WHEN);
    setState(959);
    match(ELDOParser::EQUAL);
    setState(960);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::START)
      | (1ULL << ELDOParser::START_OF_RUN)
      | (1ULL << ELDOParser::END_OF_RUN)
      | (1ULL << ELDOParser::END))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Use_tclContext ------------------------------------------------------------------

ELDOParser::Use_tclContext::Use_tclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Use_tclContext::USE_TCL() {
  return getToken(ELDOParser::USE_TCL, 0);
}

ELDOParser::FilepathContext* ELDOParser::Use_tclContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Use_tclContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Use_tclContext::getRuleIndex() const {
  return ELDOParser::RuleUse_tcl;
}

void ELDOParser::Use_tclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse_tcl(this);
}

void ELDOParser::Use_tclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse_tcl(this);
}


antlrcpp::Any ELDOParser::Use_tclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitUse_tcl(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Use_tclContext* ELDOParser::use_tcl() {
  Use_tclContext *_localctx = _tracker.createInstance<Use_tclContext>(_ctx, getState());
  enterRule(_localctx, 170, ELDOParser::RuleUse_tcl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(962);
    match(ELDOParser::USE_TCL);
    setState(963);
    filepath();
    setState(964);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefmacContext ------------------------------------------------------------------

ELDOParser::DefmacContext::DefmacContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DefmacContext::DEFMAC() {
  return getToken(ELDOParser::DEFMAC, 0);
}

ELDOParser::ParameterContext* ELDOParser::DefmacContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::DefmacContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::DefmacContext::getRuleIndex() const {
  return ELDOParser::RuleDefmac;
}

void ELDOParser::DefmacContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefmac(this);
}

void ELDOParser::DefmacContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefmac(this);
}


antlrcpp::Any ELDOParser::DefmacContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDefmac(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DefmacContext* ELDOParser::defmac() {
  DefmacContext *_localctx = _tracker.createInstance<DefmacContext>(_ctx, getState());
  enterRule(_localctx, 172, ELDOParser::RuleDefmac);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(966);
    match(ELDOParser::DEFMAC);
    setState(967);
    parameter();
    setState(968);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChrentContext ------------------------------------------------------------------

ELDOParser::ChrentContext::ChrentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ChrentContext::CHRENT() {
  return getToken(ELDOParser::CHRENT, 0);
}

ELDOParser::NodeContext* ELDOParser::ChrentContext::node() {
  return getRuleContext<ELDOParser::NodeContext>(0);
}

ELDOParser::Chrent_behaviourContext* ELDOParser::ChrentContext::chrent_behaviour() {
  return getRuleContext<ELDOParser::Chrent_behaviourContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::ChrentContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::ChrentContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::ChrentContext::getRuleIndex() const {
  return ELDOParser::RuleChrent;
}

void ELDOParser::ChrentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChrent(this);
}

void ELDOParser::ChrentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChrent(this);
}


antlrcpp::Any ELDOParser::ChrentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitChrent(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ChrentContext* ELDOParser::chrent() {
  ChrentContext *_localctx = _tracker.createInstance<ChrentContext>(_ctx, getState());
  enterRule(_localctx, 174, ELDOParser::RuleChrent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    match(ELDOParser::CHRENT);
    setState(971);
    node();
    setState(972);
    chrent_behaviour();
    setState(974);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(973);
      match(ELDOParser::ID);
    }
    setState(976);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chrent_behaviourContext ------------------------------------------------------------------

ELDOParser::Chrent_behaviourContext::Chrent_behaviourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::Chrent_pointContext *> ELDOParser::Chrent_behaviourContext::chrent_point() {
  return getRuleContexts<ELDOParser::Chrent_pointContext>();
}

ELDOParser::Chrent_pointContext* ELDOParser::Chrent_behaviourContext::chrent_point(size_t i) {
  return getRuleContext<ELDOParser::Chrent_pointContext>(i);
}


size_t ELDOParser::Chrent_behaviourContext::getRuleIndex() const {
  return ELDOParser::RuleChrent_behaviour;
}

void ELDOParser::Chrent_behaviourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChrent_behaviour(this);
}

void ELDOParser::Chrent_behaviourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChrent_behaviour(this);
}


antlrcpp::Any ELDOParser::Chrent_behaviourContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitChrent_behaviour(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Chrent_behaviourContext* ELDOParser::chrent_behaviour() {
  Chrent_behaviourContext *_localctx = _tracker.createInstance<Chrent_behaviourContext>(_ctx, getState());
  enterRule(_localctx, 176, ELDOParser::RuleChrent_behaviour);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(979); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(978);
      chrent_point();
      setState(981); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chrent_pointContext ------------------------------------------------------------------

ELDOParser::Chrent_pointContext::Chrent_pointContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::Chrent_pairContext *> ELDOParser::Chrent_pointContext::chrent_pair() {
  return getRuleContexts<ELDOParser::Chrent_pairContext>();
}

ELDOParser::Chrent_pairContext* ELDOParser::Chrent_pointContext::chrent_pair(size_t i) {
  return getRuleContext<ELDOParser::Chrent_pairContext>(i);
}

tree::TerminalNode* ELDOParser::Chrent_pointContext::NUMBER() {
  return getToken(ELDOParser::NUMBER, 0);
}


size_t ELDOParser::Chrent_pointContext::getRuleIndex() const {
  return ELDOParser::RuleChrent_point;
}

void ELDOParser::Chrent_pointContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChrent_point(this);
}

void ELDOParser::Chrent_pointContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChrent_point(this);
}


antlrcpp::Any ELDOParser::Chrent_pointContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitChrent_point(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Chrent_pointContext* ELDOParser::chrent_point() {
  Chrent_pointContext *_localctx = _tracker.createInstance<Chrent_pointContext>(_ctx, getState());
  enterRule(_localctx, 178, ELDOParser::RuleChrent_point);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(984); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(983);
              chrent_pair();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(986); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(989);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      setState(988);
      match(ELDOParser::NUMBER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chrent_pairContext ------------------------------------------------------------------

ELDOParser::Chrent_pairContext::Chrent_pairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ELDOParser::Chrent_pairContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::Chrent_pairContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}


size_t ELDOParser::Chrent_pairContext::getRuleIndex() const {
  return ELDOParser::RuleChrent_pair;
}

void ELDOParser::Chrent_pairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChrent_pair(this);
}

void ELDOParser::Chrent_pairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChrent_pair(this);
}


antlrcpp::Any ELDOParser::Chrent_pairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitChrent_pair(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Chrent_pairContext* ELDOParser::chrent_pair() {
  Chrent_pairContext *_localctx = _tracker.createInstance<Chrent_pairContext>(_ctx, getState());
  enterRule(_localctx, 180, ELDOParser::RuleChrent_pair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(991);
    match(ELDOParser::NUMBER);
    setState(992);
    match(ELDOParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IcContext ------------------------------------------------------------------

ELDOParser::IcContext::IcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::IcContext::IC() {
  return getToken(ELDOParser::IC, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::IcContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<ELDOParser::Ic_contentContext *> ELDOParser::IcContext::ic_content() {
  return getRuleContexts<ELDOParser::Ic_contentContext>();
}

ELDOParser::Ic_contentContext* ELDOParser::IcContext::ic_content(size_t i) {
  return getRuleContext<ELDOParser::Ic_contentContext>(i);
}


size_t ELDOParser::IcContext::getRuleIndex() const {
  return ELDOParser::RuleIc;
}

void ELDOParser::IcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIc(this);
}

void ELDOParser::IcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIc(this);
}


antlrcpp::Any ELDOParser::IcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitIc(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::IcContext* ELDOParser::ic() {
  IcContext *_localctx = _tracker.createInstance<IcContext>(_ctx, getState());
  enterRule(_localctx, 182, ELDOParser::RuleIc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(994);
    match(ELDOParser::IC);
    setState(996); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(995);
      ic_content();
      setState(998); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || _la == ELDOParser::ID);
    setState(1000);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ic_contentContext ------------------------------------------------------------------

ELDOParser::Ic_contentContext::Ic_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::ParameterContext* ELDOParser::Ic_contentContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

ELDOParser::Ic_subcktContext* ELDOParser::Ic_contentContext::ic_subckt() {
  return getRuleContext<ELDOParser::Ic_subcktContext>(0);
}


size_t ELDOParser::Ic_contentContext::getRuleIndex() const {
  return ELDOParser::RuleIc_content;
}

void ELDOParser::Ic_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIc_content(this);
}

void ELDOParser::Ic_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIc_content(this);
}


antlrcpp::Any ELDOParser::Ic_contentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitIc_content(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ic_contentContext* ELDOParser::ic_content() {
  Ic_contentContext *_localctx = _tracker.createInstance<Ic_contentContext>(_ctx, getState());
  enterRule(_localctx, 184, ELDOParser::RuleIc_content);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1002);
    parameter();
    setState(1004);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      setState(1003);
      ic_subckt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ic_subcktContext ------------------------------------------------------------------

ELDOParser::Ic_subcktContext::Ic_subcktContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ic_subcktContext::SUBCKT() {
  return getToken(ELDOParser::SUBCKT, 0);
}

tree::TerminalNode* ELDOParser::Ic_subcktContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Ic_subcktContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Ic_subcktContext::getRuleIndex() const {
  return ELDOParser::RuleIc_subckt;
}

void ELDOParser::Ic_subcktContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIc_subckt(this);
}

void ELDOParser::Ic_subcktContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIc_subckt(this);
}


antlrcpp::Any ELDOParser::Ic_subcktContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitIc_subckt(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ic_subcktContext* ELDOParser::ic_subckt() {
  Ic_subcktContext *_localctx = _tracker.createInstance<Ic_subcktContext>(_ctx, getState());
  enterRule(_localctx, 186, ELDOParser::RuleIc_subckt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1006);
    match(ELDOParser::SUBCKT);
    setState(1007);
    match(ELDOParser::EQUAL);
    setState(1008);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

ELDOParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::PrintContext::PRINT() {
  return getToken(ELDOParser::PRINT, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::PrintContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::PrintContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::PrintContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::PrintContext::getRuleIndex() const {
  return ELDOParser::RulePrint;
}

void ELDOParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void ELDOParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


antlrcpp::Any ELDOParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::PrintContext* ELDOParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 188, ELDOParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1010);
    match(ELDOParser::PRINT);
    setState(1012);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      setState(1011);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1014);
    parameter_list();
    setState(1015);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlotContext ------------------------------------------------------------------

ELDOParser::PlotContext::PlotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::PlotContext::PLOT() {
  return getToken(ELDOParser::PLOT, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::PlotContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::PlotContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::PlotContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::PlotContext::getRuleIndex() const {
  return ELDOParser::RulePlot;
}

void ELDOParser::PlotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlot(this);
}

void ELDOParser::PlotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlot(this);
}


antlrcpp::Any ELDOParser::PlotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitPlot(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::PlotContext* ELDOParser::plot() {
  PlotContext *_localctx = _tracker.createInstance<PlotContext>(_ctx, getState());
  enterRule(_localctx, 190, ELDOParser::RulePlot);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1017);
    match(ELDOParser::PLOT);
    setState(1019);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      setState(1018);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1021);
    parameter_list();
    setState(1022);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FfileContext ------------------------------------------------------------------

ELDOParser::FfileContext::FfileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::FfileContext::FFILE() {
  return getToken(ELDOParser::FFILE, 0);
}

ELDOParser::Ffile_tabulationContext* ELDOParser::FfileContext::ffile_tabulation() {
  return getRuleContext<ELDOParser::Ffile_tabulationContext>(0);
}

ELDOParser::FilepathContext* ELDOParser::FfileContext::filepath() {
  return getRuleContext<ELDOParser::FilepathContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::FfileContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

ELDOParser::Ffile_singlelineContext* ELDOParser::FfileContext::ffile_singleline() {
  return getRuleContext<ELDOParser::Ffile_singlelineContext>(0);
}

ELDOParser::Ffile_unitContext* ELDOParser::FfileContext::ffile_unit() {
  return getRuleContext<ELDOParser::Ffile_unitContext>(0);
}

ELDOParser::Ffile_storage_formatContext* ELDOParser::FfileContext::ffile_storage_format() {
  return getRuleContext<ELDOParser::Ffile_storage_formatContext>(0);
}


size_t ELDOParser::FfileContext::getRuleIndex() const {
  return ELDOParser::RuleFfile;
}

void ELDOParser::FfileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFfile(this);
}

void ELDOParser::FfileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFfile(this);
}


antlrcpp::Any ELDOParser::FfileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFfile(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::FfileContext* ELDOParser::ffile() {
  FfileContext *_localctx = _tracker.createInstance<FfileContext>(_ctx, getState());
  enterRule(_localctx, 192, ELDOParser::RuleFfile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1024);
    match(ELDOParser::FFILE);
    setState(1025);
    ffile_tabulation();
    setState(1027);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      setState(1026);
      ffile_singleline();
      break;
    }

    }
    setState(1029);
    filepath();
    setState(1031);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(1030);
      ffile_unit();
      break;
    }

    }
    setState(1034);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::ID) {
      setState(1033);
      ffile_storage_format();
    }
    setState(1036);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ffile_tabulationContext ------------------------------------------------------------------

ELDOParser::Ffile_tabulationContext::Ffile_tabulationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ffile_tabulationContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Ffile_tabulationContext::getRuleIndex() const {
  return ELDOParser::RuleFfile_tabulation;
}

void ELDOParser::Ffile_tabulationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFfile_tabulation(this);
}

void ELDOParser::Ffile_tabulationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFfile_tabulation(this);
}


antlrcpp::Any ELDOParser::Ffile_tabulationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFfile_tabulation(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ffile_tabulationContext* ELDOParser::ffile_tabulation() {
  Ffile_tabulationContext *_localctx = _tracker.createInstance<Ffile_tabulationContext>(_ctx, getState());
  enterRule(_localctx, 194, ELDOParser::RuleFfile_tabulation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1038);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ffile_singlelineContext ------------------------------------------------------------------

ELDOParser::Ffile_singlelineContext::Ffile_singlelineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ffile_singlelineContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Ffile_singlelineContext::getRuleIndex() const {
  return ELDOParser::RuleFfile_singleline;
}

void ELDOParser::Ffile_singlelineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFfile_singleline(this);
}

void ELDOParser::Ffile_singlelineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFfile_singleline(this);
}


antlrcpp::Any ELDOParser::Ffile_singlelineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFfile_singleline(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ffile_singlelineContext* ELDOParser::ffile_singleline() {
  Ffile_singlelineContext *_localctx = _tracker.createInstance<Ffile_singlelineContext>(_ctx, getState());
  enterRule(_localctx, 196, ELDOParser::RuleFfile_singleline);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1040);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ffile_unitContext ------------------------------------------------------------------

ELDOParser::Ffile_unitContext::Ffile_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ffile_unitContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Ffile_unitContext::getRuleIndex() const {
  return ELDOParser::RuleFfile_unit;
}

void ELDOParser::Ffile_unitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFfile_unit(this);
}

void ELDOParser::Ffile_unitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFfile_unit(this);
}


antlrcpp::Any ELDOParser::Ffile_unitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFfile_unit(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ffile_unitContext* ELDOParser::ffile_unit() {
  Ffile_unitContext *_localctx = _tracker.createInstance<Ffile_unitContext>(_ctx, getState());
  enterRule(_localctx, 198, ELDOParser::RuleFfile_unit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1042);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ffile_storage_formatContext ------------------------------------------------------------------

ELDOParser::Ffile_storage_formatContext::Ffile_storage_formatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ffile_storage_formatContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Ffile_storage_formatContext::getRuleIndex() const {
  return ELDOParser::RuleFfile_storage_format;
}

void ELDOParser::Ffile_storage_formatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFfile_storage_format(this);
}

void ELDOParser::Ffile_storage_formatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFfile_storage_format(this);
}


antlrcpp::Any ELDOParser::Ffile_storage_formatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFfile_storage_format(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ffile_storage_formatContext* ELDOParser::ffile_storage_format() {
  Ffile_storage_formatContext *_localctx = _tracker.createInstance<Ffile_storage_formatContext>(_ctx, getState());
  enterRule(_localctx, 200, ELDOParser::RuleFfile_storage_format);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1044);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProbeContext ------------------------------------------------------------------

ELDOParser::ProbeContext::ProbeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ProbeContext::PROBE() {
  return getToken(ELDOParser::PROBE, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::ProbeContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::ProbeContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::ProbeContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::ProbeContext::getRuleIndex() const {
  return ELDOParser::RuleProbe;
}

void ELDOParser::ProbeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProbe(this);
}

void ELDOParser::ProbeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProbe(this);
}


antlrcpp::Any ELDOParser::ProbeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitProbe(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ProbeContext* ELDOParser::probe() {
  ProbeContext *_localctx = _tracker.createInstance<ProbeContext>(_ctx, getState());
  enterRule(_localctx, 202, ELDOParser::RuleProbe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1046);
    match(ELDOParser::PROBE);
    setState(1048);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      setState(1047);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1051);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(1050);
      parameter_list();
    }
    setState(1053);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefwaveContext ------------------------------------------------------------------

ELDOParser::DefwaveContext::DefwaveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::DefwaveContext::DEFWAVE() {
  return getToken(ELDOParser::DEFWAVE, 0);
}

ELDOParser::ParameterContext* ELDOParser::DefwaveContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::DefwaveContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<tree::TerminalNode *> ELDOParser::DefwaveContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::DefwaveContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}


size_t ELDOParser::DefwaveContext::getRuleIndex() const {
  return ELDOParser::RuleDefwave;
}

void ELDOParser::DefwaveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefwave(this);
}

void ELDOParser::DefwaveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefwave(this);
}


antlrcpp::Any ELDOParser::DefwaveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDefwave(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::DefwaveContext* ELDOParser::defwave() {
  DefwaveContext *_localctx = _tracker.createInstance<DefwaveContext>(_ctx, getState());
  enterRule(_localctx, 204, ELDOParser::RuleDefwave);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1055);
    match(ELDOParser::DEFWAVE);
    setState(1057);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      setState(1056);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1060);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      setState(1059);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1062);
    parameter();
    setState(1063);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TempContext ------------------------------------------------------------------

ELDOParser::TempContext::TempContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::TempContext::TEMP_SET() {
  return getToken(ELDOParser::TEMP_SET, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::TempContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<tree::TerminalNode *> ELDOParser::TempContext::NUMBER() {
  return getTokens(ELDOParser::NUMBER);
}

tree::TerminalNode* ELDOParser::TempContext::NUMBER(size_t i) {
  return getToken(ELDOParser::NUMBER, i);
}


size_t ELDOParser::TempContext::getRuleIndex() const {
  return ELDOParser::RuleTemp;
}

void ELDOParser::TempContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemp(this);
}

void ELDOParser::TempContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemp(this);
}


antlrcpp::Any ELDOParser::TempContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTemp(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::TempContext* ELDOParser::temp() {
  TempContext *_localctx = _tracker.createInstance<TempContext>(_ctx, getState());
  enterRule(_localctx, 206, ELDOParser::RuleTemp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1065);
    match(ELDOParser::TEMP_SET);
    setState(1067); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1066);
      match(ELDOParser::NUMBER);
      setState(1069); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::NUMBER);
    setState(1071);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeasContext ------------------------------------------------------------------

ELDOParser::MeasContext::MeasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::MeasContext::MEAS() {
  return getToken(ELDOParser::MEAS, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::MeasContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::MeasContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::MeasContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::MeasContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::MeasContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

tree::TerminalNode* ELDOParser::MeasContext::PARAM() {
  return getToken(ELDOParser::PARAM, 0);
}

tree::TerminalNode* ELDOParser::MeasContext::FIND() {
  return getToken(ELDOParser::FIND, 0);
}

tree::TerminalNode* ELDOParser::MeasContext::PP() {
  return getToken(ELDOParser::PP, 0);
}

tree::TerminalNode* ELDOParser::MeasContext::TRIG() {
  return getToken(ELDOParser::TRIG, 0);
}

ELDOParser::Meas_infoContext* ELDOParser::MeasContext::meas_info() {
  return getRuleContext<ELDOParser::Meas_infoContext>(0);
}

ELDOParser::Meas_vectContext* ELDOParser::MeasContext::meas_vect() {
  return getRuleContext<ELDOParser::Meas_vectContext>(0);
}

ELDOParser::Meas_catvectContext* ELDOParser::MeasContext::meas_catvect() {
  return getRuleContext<ELDOParser::Meas_catvectContext>(0);
}

tree::TerminalNode* ELDOParser::MeasContext::WHEN() {
  return getToken(ELDOParser::WHEN, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::MeasContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::Meas_targContext* ELDOParser::MeasContext::meas_targ() {
  return getRuleContext<ELDOParser::Meas_targContext>(0);
}


size_t ELDOParser::MeasContext::getRuleIndex() const {
  return ELDOParser::RuleMeas;
}

void ELDOParser::MeasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeas(this);
}

void ELDOParser::MeasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeas(this);
}


antlrcpp::Any ELDOParser::MeasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMeas(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::MeasContext* ELDOParser::meas() {
  MeasContext *_localctx = _tracker.createInstance<MeasContext>(_ctx, getState());
  enterRule(_localctx, 208, ELDOParser::RuleMeas);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1073);
    match(ELDOParser::MEAS);
    setState(1075);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      setState(1074);
      meas_info();
      break;
    }

    }
    setState(1078);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      setState(1077);
      meas_vect();
      break;
    }

    }
    setState(1081);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(1080);
      meas_catvect();
      break;
    }

    }
    setState(1083);
    match(ELDOParser::ID);
    setState(1084);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::PARAM)
      | (1ULL << ELDOParser::FIND)
      | (1ULL << ELDOParser::PP)
      | (1ULL << ELDOParser::TRIG))) != 0) || _la == ELDOParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1085);
    expression(0);
    setState(1087);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::WHEN) {
      setState(1086);
      match(ELDOParser::WHEN);
    }
    setState(1090);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      setState(1089);
      expression(0);
      break;
    }

    }
    setState(1093);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::MOD)
      | (1ULL << ELDOParser::MODEL)
      | (1ULL << ELDOParser::PARAM_LIST_START))) != 0) || _la == ELDOParser::OPEN_ROUND

    || _la == ELDOParser::ID) {
      setState(1092);
      parameter_list();
    }
    setState(1096);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::TARG) {
      setState(1095);
      meas_targ();
    }
    setState(1098);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Meas_infoContext ------------------------------------------------------------------

ELDOParser::Meas_infoContext::Meas_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Meas_infoContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Meas_infoContext::getRuleIndex() const {
  return ELDOParser::RuleMeas_info;
}

void ELDOParser::Meas_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeas_info(this);
}

void ELDOParser::Meas_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeas_info(this);
}


antlrcpp::Any ELDOParser::Meas_infoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMeas_info(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Meas_infoContext* ELDOParser::meas_info() {
  Meas_infoContext *_localctx = _tracker.createInstance<Meas_infoContext>(_ctx, getState());
  enterRule(_localctx, 210, ELDOParser::RuleMeas_info);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1100);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Meas_vectContext ------------------------------------------------------------------

ELDOParser::Meas_vectContext::Meas_vectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Meas_vectContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Meas_vectContext::getRuleIndex() const {
  return ELDOParser::RuleMeas_vect;
}

void ELDOParser::Meas_vectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeas_vect(this);
}

void ELDOParser::Meas_vectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeas_vect(this);
}


antlrcpp::Any ELDOParser::Meas_vectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMeas_vect(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Meas_vectContext* ELDOParser::meas_vect() {
  Meas_vectContext *_localctx = _tracker.createInstance<Meas_vectContext>(_ctx, getState());
  enterRule(_localctx, 212, ELDOParser::RuleMeas_vect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1102);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Meas_catvectContext ------------------------------------------------------------------

ELDOParser::Meas_catvectContext::Meas_catvectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Meas_catvectContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Meas_catvectContext::getRuleIndex() const {
  return ELDOParser::RuleMeas_catvect;
}

void ELDOParser::Meas_catvectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeas_catvect(this);
}

void ELDOParser::Meas_catvectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeas_catvect(this);
}


antlrcpp::Any ELDOParser::Meas_catvectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMeas_catvect(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Meas_catvectContext* ELDOParser::meas_catvect() {
  Meas_catvectContext *_localctx = _tracker.createInstance<Meas_catvectContext>(_ctx, getState());
  enterRule(_localctx, 214, ELDOParser::RuleMeas_catvect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1104);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Meas_targContext ------------------------------------------------------------------

ELDOParser::Meas_targContext::Meas_targContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Meas_targContext::TARG() {
  return getToken(ELDOParser::TARG, 0);
}

ELDOParser::ExpressionContext* ELDOParser::Meas_targContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}

ELDOParser::Parameter_listContext* ELDOParser::Meas_targContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Meas_targContext::getRuleIndex() const {
  return ELDOParser::RuleMeas_targ;
}

void ELDOParser::Meas_targContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeas_targ(this);
}

void ELDOParser::Meas_targContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeas_targ(this);
}


antlrcpp::Any ELDOParser::Meas_targContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMeas_targ(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Meas_targContext* ELDOParser::meas_targ() {
  Meas_targContext *_localctx = _tracker.createInstance<Meas_targContext>(_ctx, getState());
  enterRule(_localctx, 216, ELDOParser::RuleMeas_targ);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1106);
    match(ELDOParser::TARG);
    setState(1107);
    expression(0);
    setState(1108);
    parameter_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnectContext ------------------------------------------------------------------

ELDOParser::ConnectContext::ConnectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ConnectContext::CONNECT() {
  return getToken(ELDOParser::CONNECT, 0);
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::ConnectContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::ConnectContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}

ELDOParser::End_of_lineContext* ELDOParser::ConnectContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::ConnectContext::getRuleIndex() const {
  return ELDOParser::RuleConnect;
}

void ELDOParser::ConnectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConnect(this);
}

void ELDOParser::ConnectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConnect(this);
}


antlrcpp::Any ELDOParser::ConnectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitConnect(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ConnectContext* ELDOParser::connect() {
  ConnectContext *_localctx = _tracker.createInstance<ConnectContext>(_ctx, getState());
  enterRule(_localctx, 218, ELDOParser::RuleConnect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1110);
    match(ELDOParser::CONNECT);
    setState(1111);
    expression(0);
    setState(1112);
    expression(0);
    setState(1113);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_declarationsContext ------------------------------------------------------------------

ELDOParser::Global_declarationsContext::Global_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Global_declarationsContext::GLOBAL_PARAM() {
  return getToken(ELDOParser::GLOBAL_PARAM, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::Global_declarationsContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::Global_declarationsContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::Global_declarationsContext::getRuleIndex() const {
  return ELDOParser::RuleGlobal_declarations;
}

void ELDOParser::Global_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_declarations(this);
}

void ELDOParser::Global_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_declarations(this);
}


antlrcpp::Any ELDOParser::Global_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitGlobal_declarations(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Global_declarationsContext* ELDOParser::global_declarations() {
  Global_declarationsContext *_localctx = _tracker.createInstance<Global_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 220, ELDOParser::RuleGlobal_declarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1115);
    match(ELDOParser::GLOBAL_PARAM);
    setState(1116);
    parameter_list();
    setState(1117);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentContext ------------------------------------------------------------------

ELDOParser::ComponentContext::ComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Component_typeContext* ELDOParser::ComponentContext::component_type() {
  return getRuleContext<ELDOParser::Component_typeContext>(0);
}

ELDOParser::End_of_lineContext* ELDOParser::ComponentContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}

std::vector<ELDOParser::Component_attributeContext *> ELDOParser::ComponentContext::component_attribute() {
  return getRuleContexts<ELDOParser::Component_attributeContext>();
}

ELDOParser::Component_attributeContext* ELDOParser::ComponentContext::component_attribute(size_t i) {
  return getRuleContext<ELDOParser::Component_attributeContext>(i);
}


size_t ELDOParser::ComponentContext::getRuleIndex() const {
  return ELDOParser::RuleComponent;
}

void ELDOParser::ComponentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent(this);
}

void ELDOParser::ComponentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent(this);
}


antlrcpp::Any ELDOParser::ComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ComponentContext* ELDOParser::component() {
  ComponentContext *_localctx = _tracker.createInstance<ComponentContext>(_ctx, getState());
  enterRule(_localctx, 222, ELDOParser::RuleComponent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1119);
    component_type();
    setState(1123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1120);
        component_attribute(); 
      }
      setState(1125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx);
    }
    setState(1126);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_typeContext ------------------------------------------------------------------

ELDOParser::Component_typeContext::Component_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::ResistorContext* ELDOParser::Component_typeContext::resistor() {
  return getRuleContext<ELDOParser::ResistorContext>(0);
}

ELDOParser::CapacitorContext* ELDOParser::Component_typeContext::capacitor() {
  return getRuleContext<ELDOParser::CapacitorContext>(0);
}

ELDOParser::InductorContext* ELDOParser::Component_typeContext::inductor() {
  return getRuleContext<ELDOParser::InductorContext>(0);
}

ELDOParser::Coupled_inductorContext* ELDOParser::Component_typeContext::coupled_inductor() {
  return getRuleContext<ELDOParser::Coupled_inductorContext>(0);
}

ELDOParser::Diffusion_resistorContext* ELDOParser::Component_typeContext::diffusion_resistor() {
  return getRuleContext<ELDOParser::Diffusion_resistorContext>(0);
}

ELDOParser::Transmission_lineContext* ELDOParser::Component_typeContext::transmission_line() {
  return getRuleContext<ELDOParser::Transmission_lineContext>(0);
}

ELDOParser::Lossy_transmission_lineContext* ELDOParser::Component_typeContext::lossy_transmission_line() {
  return getRuleContext<ELDOParser::Lossy_transmission_lineContext>(0);
}

ELDOParser::Ltl_w_modelContext* ELDOParser::Component_typeContext::ltl_w_model() {
  return getRuleContext<ELDOParser::Ltl_w_modelContext>(0);
}

ELDOParser::Ltl_u_modelContext* ELDOParser::Component_typeContext::ltl_u_model() {
  return getRuleContext<ELDOParser::Ltl_u_modelContext>(0);
}

ELDOParser::Junction_diodeContext* ELDOParser::Component_typeContext::junction_diode() {
  return getRuleContext<ELDOParser::Junction_diodeContext>(0);
}

ELDOParser::BjtContext* ELDOParser::Component_typeContext::bjt() {
  return getRuleContext<ELDOParser::BjtContext>(0);
}

ELDOParser::JfetContext* ELDOParser::Component_typeContext::jfet() {
  return getRuleContext<ELDOParser::JfetContext>(0);
}

ELDOParser::MosfetContext* ELDOParser::Component_typeContext::mosfet() {
  return getRuleContext<ELDOParser::MosfetContext>(0);
}

ELDOParser::Subckt_instanceContext* ELDOParser::Component_typeContext::subckt_instance() {
  return getRuleContext<ELDOParser::Subckt_instanceContext>(0);
}

ELDOParser::IvsourceContext* ELDOParser::Component_typeContext::ivsource() {
  return getRuleContext<ELDOParser::IvsourceContext>(0);
}

ELDOParser::IcsourceContext* ELDOParser::Component_typeContext::icsource() {
  return getRuleContext<ELDOParser::IcsourceContext>(0);
}

ELDOParser::VcvsContext* ELDOParser::Component_typeContext::vcvs() {
  return getRuleContext<ELDOParser::VcvsContext>(0);
}

ELDOParser::CccsContext* ELDOParser::Component_typeContext::cccs() {
  return getRuleContext<ELDOParser::CccsContext>(0);
}

ELDOParser::VccsContext* ELDOParser::Component_typeContext::vccs() {
  return getRuleContext<ELDOParser::VccsContext>(0);
}

ELDOParser::CcvsContext* ELDOParser::Component_typeContext::ccvs() {
  return getRuleContext<ELDOParser::CcvsContext>(0);
}

ELDOParser::Noise_functionContext* ELDOParser::Component_typeContext::noise_function() {
  return getRuleContext<ELDOParser::Noise_functionContext>(0);
}

ELDOParser::SwContext* ELDOParser::Component_typeContext::sw() {
  return getRuleContext<ELDOParser::SwContext>(0);
}

ELDOParser::Operational_amplifierContext* ELDOParser::Component_typeContext::operational_amplifier() {
  return getRuleContext<ELDOParser::Operational_amplifierContext>(0);
}

ELDOParser::Two_input_gateContext* ELDOParser::Component_typeContext::two_input_gate() {
  return getRuleContext<ELDOParser::Two_input_gateContext>(0);
}


size_t ELDOParser::Component_typeContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_type;
}

void ELDOParser::Component_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_type(this);
}

void ELDOParser::Component_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_type(this);
}


antlrcpp::Any ELDOParser::Component_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_type(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_typeContext* ELDOParser::component_type() {
  Component_typeContext *_localctx = _tracker.createInstance<Component_typeContext>(_ctx, getState());
  enterRule(_localctx, 224, ELDOParser::RuleComponent_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ELDOParser::RESISTOR: {
        enterOuterAlt(_localctx, 1);
        setState(1128);
        resistor();
        break;
      }

      case ELDOParser::CAPACITOR: {
        enterOuterAlt(_localctx, 2);
        setState(1129);
        capacitor();
        break;
      }

      case ELDOParser::INDUCTOR: {
        enterOuterAlt(_localctx, 3);
        setState(1130);
        inductor();
        break;
      }

      case ELDOParser::COUPLED_INDUCTOR: {
        enterOuterAlt(_localctx, 4);
        setState(1131);
        coupled_inductor();
        break;
      }

      case ELDOParser::DIFFUSION_RESISTOR: {
        enterOuterAlt(_localctx, 5);
        setState(1132);
        diffusion_resistor();
        break;
      }

      case ELDOParser::TRANSMISSION_LINE: {
        enterOuterAlt(_localctx, 6);
        setState(1133);
        transmission_line();
        break;
      }

      case ELDOParser::LOSSY_TRANSMISSION_LINE: {
        enterOuterAlt(_localctx, 7);
        setState(1134);
        lossy_transmission_line();
        break;
      }

      case ELDOParser::LTL_W_MODEL: {
        enterOuterAlt(_localctx, 8);
        setState(1135);
        ltl_w_model();
        break;
      }

      case ELDOParser::LTL_U_MODEL: {
        enterOuterAlt(_localctx, 9);
        setState(1136);
        ltl_u_model();
        break;
      }

      case ELDOParser::JUNCTION_DIODE: {
        enterOuterAlt(_localctx, 10);
        setState(1137);
        junction_diode();
        break;
      }

      case ELDOParser::BJT: {
        enterOuterAlt(_localctx, 11);
        setState(1138);
        bjt();
        break;
      }

      case ELDOParser::JFET: {
        enterOuterAlt(_localctx, 12);
        setState(1139);
        jfet();
        break;
      }

      case ELDOParser::MOSFET: {
        enterOuterAlt(_localctx, 13);
        setState(1140);
        mosfet();
        break;
      }

      case ELDOParser::SUBCK_INSTANCE: {
        enterOuterAlt(_localctx, 14);
        setState(1141);
        subckt_instance();
        break;
      }

      case ELDOParser::IVSOURCE: {
        enterOuterAlt(_localctx, 15);
        setState(1142);
        ivsource();
        break;
      }

      case ELDOParser::ICSOURCE: {
        enterOuterAlt(_localctx, 16);
        setState(1143);
        icsource();
        break;
      }

      case ELDOParser::VCVS: {
        enterOuterAlt(_localctx, 17);
        setState(1144);
        vcvs();
        break;
      }

      case ELDOParser::CCCS: {
        enterOuterAlt(_localctx, 18);
        setState(1145);
        cccs();
        break;
      }

      case ELDOParser::VCCS: {
        enterOuterAlt(_localctx, 19);
        setState(1146);
        vccs();
        break;
      }

      case ELDOParser::CCVS: {
        enterOuterAlt(_localctx, 20);
        setState(1147);
        ccvs();
        break;
      }

      case ELDOParser::NOISE: {
        enterOuterAlt(_localctx, 21);
        setState(1148);
        noise_function();
        break;
      }

      case ELDOParser::SW: {
        enterOuterAlt(_localctx, 22);
        setState(1149);
        sw();
        break;
      }

      case ELDOParser::OPA: {
        enterOuterAlt(_localctx, 23);
        setState(1150);
        operational_amplifier();
        break;
      }

      case ELDOParser::DIG_NAND:
      case ELDOParser::DIG_AND:
      case ELDOParser::DIG_NOR:
      case ELDOParser::DIG_OR:
      case ELDOParser::DIG_XOR: {
        enterOuterAlt(_localctx, 24);
        setState(1151);
        two_input_gate();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_attributeContext ------------------------------------------------------------------

ELDOParser::Component_attributeContext::Component_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Component_parameter_listContext* ELDOParser::Component_attributeContext::component_parameter_list() {
  return getRuleContext<ELDOParser::Component_parameter_listContext>(0);
}

ELDOParser::Component_valueContext* ELDOParser::Component_attributeContext::component_value() {
  return getRuleContext<ELDOParser::Component_valueContext>(0);
}

ELDOParser::Component_analysisContext* ELDOParser::Component_attributeContext::component_analysis() {
  return getRuleContext<ELDOParser::Component_analysisContext>(0);
}

ELDOParser::Component_pin_listContext* ELDOParser::Component_attributeContext::component_pin_list() {
  return getRuleContext<ELDOParser::Component_pin_listContext>(0);
}

ELDOParser::Component_port_listContext* ELDOParser::Component_attributeContext::component_port_list() {
  return getRuleContext<ELDOParser::Component_port_listContext>(0);
}

ELDOParser::Component_net_listContext* ELDOParser::Component_attributeContext::component_net_list() {
  return getRuleContext<ELDOParser::Component_net_listContext>(0);
}

ELDOParser::Component_coupling_listContext* ELDOParser::Component_attributeContext::component_coupling_list() {
  return getRuleContext<ELDOParser::Component_coupling_listContext>(0);
}

ELDOParser::Component_value_listContext* ELDOParser::Component_attributeContext::component_value_list() {
  return getRuleContext<ELDOParser::Component_value_listContext>(0);
}

ELDOParser::Component_tableContext* ELDOParser::Component_attributeContext::component_table() {
  return getRuleContext<ELDOParser::Component_tableContext>(0);
}

ELDOParser::Component_positional_keyworkContext* ELDOParser::Component_attributeContext::component_positional_keywork() {
  return getRuleContext<ELDOParser::Component_positional_keyworkContext>(0);
}

ELDOParser::Interp_typeContext* ELDOParser::Component_attributeContext::interp_type() {
  return getRuleContext<ELDOParser::Interp_typeContext>(0);
}


size_t ELDOParser::Component_attributeContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_attribute;
}

void ELDOParser::Component_attributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_attribute(this);
}

void ELDOParser::Component_attributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_attribute(this);
}


antlrcpp::Any ELDOParser::Component_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_attribute(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_attributeContext* ELDOParser::component_attribute() {
  Component_attributeContext *_localctx = _tracker.createInstance<Component_attributeContext>(_ctx, getState());
  enterRule(_localctx, 226, ELDOParser::RuleComponent_attribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1154);
      component_parameter_list();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1155);
      component_value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1156);
      component_analysis();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1157);
      component_pin_list();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1158);
      component_port_list();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1159);
      component_net_list();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1160);
      component_coupling_list();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1161);
      component_value_list();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1162);
      component_table();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1163);
      component_positional_keywork();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1164);
      interp_type();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_valueContext ------------------------------------------------------------------

ELDOParser::Component_valueContext::Component_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_valueContext::OPEN_CURLY() {
  return getToken(ELDOParser::OPEN_CURLY, 0);
}

tree::TerminalNode* ELDOParser::Component_valueContext::CLOSE_CURLY() {
  return getToken(ELDOParser::CLOSE_CURLY, 0);
}

tree::TerminalNode* ELDOParser::Component_valueContext::STRING() {
  return getToken(ELDOParser::STRING, 0);
}

ELDOParser::ExpressionContext* ELDOParser::Component_valueContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}


size_t ELDOParser::Component_valueContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_value;
}

void ELDOParser::Component_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_value(this);
}

void ELDOParser::Component_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_value(this);
}


antlrcpp::Any ELDOParser::Component_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_value(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_valueContext* ELDOParser::component_value() {
  Component_valueContext *_localctx = _tracker.createInstance<Component_valueContext>(_ctx, getState());
  enterRule(_localctx, 228, ELDOParser::RuleComponent_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1177);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1167);
      match(ELDOParser::OPEN_CURLY);
      setState(1170);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
      case 1: {
        setState(1168);
        match(ELDOParser::STRING);
        break;
      }

      case 2: {
        setState(1169);
        expression(0);
        break;
      }

      }
      setState(1172);
      match(ELDOParser::CLOSE_CURLY);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1175);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
      case 1: {
        setState(1173);
        match(ELDOParser::STRING);
        break;
      }

      case 2: {
        setState(1174);
        expression(0);
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_parameter_listContext ------------------------------------------------------------------

ELDOParser::Component_parameter_listContext::Component_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_parameter_listContext::PARAM_LIST_START() {
  return getToken(ELDOParser::PARAM_LIST_START, 0);
}

tree::TerminalNode* ELDOParser::Component_parameter_listContext::GENERIC_LIST_START() {
  return getToken(ELDOParser::GENERIC_LIST_START, 0);
}

ELDOParser::Parameter_listContext* ELDOParser::Component_parameter_listContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}


size_t ELDOParser::Component_parameter_listContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_parameter_list;
}

void ELDOParser::Component_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_parameter_list(this);
}

void ELDOParser::Component_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_parameter_list(this);
}


antlrcpp::Any ELDOParser::Component_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_parameter_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_parameter_listContext* ELDOParser::component_parameter_list() {
  Component_parameter_listContext *_localctx = _tracker.createInstance<Component_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 230, ELDOParser::RuleComponent_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1179);
      match(ELDOParser::PARAM_LIST_START);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1180);
      match(ELDOParser::GENERIC_LIST_START);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1182);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
      case 1: {
        setState(1181);
        _la = _input->LA(1);
        if (!(_la == ELDOParser::PARAM_LIST_START

        || _la == ELDOParser::GENERIC_LIST_START)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      }
      setState(1184);
      parameter_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_analysisContext ------------------------------------------------------------------

ELDOParser::Component_analysisContext::Component_analysisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_analysisContext::OPEN_CURLY() {
  return getToken(ELDOParser::OPEN_CURLY, 0);
}

tree::TerminalNode* ELDOParser::Component_analysisContext::CLOSE_CURLY() {
  return getToken(ELDOParser::CLOSE_CURLY, 0);
}

tree::TerminalNode* ELDOParser::Component_analysisContext::AC() {
  return getToken(ELDOParser::AC, 0);
}

tree::TerminalNode* ELDOParser::Component_analysisContext::DC() {
  return getToken(ELDOParser::DC, 0);
}

ELDOParser::ExpressionContext* ELDOParser::Component_analysisContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}


size_t ELDOParser::Component_analysisContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_analysis;
}

void ELDOParser::Component_analysisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_analysis(this);
}

void ELDOParser::Component_analysisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_analysis(this);
}


antlrcpp::Any ELDOParser::Component_analysisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_analysis(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_analysisContext* ELDOParser::component_analysis() {
  Component_analysisContext *_localctx = _tracker.createInstance<Component_analysisContext>(_ctx, getState());
  enterRule(_localctx, 232, ELDOParser::RuleComponent_analysis);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1187);
      _la = _input->LA(1);
      if (!(_la == ELDOParser::AC

      || _la == ELDOParser::DC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1188);
      match(ELDOParser::OPEN_CURLY);
      setState(1190);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::MOD

      || _la == ELDOParser::MODEL || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (ELDOParser::PLUS - 137))
        | (1ULL << (ELDOParser::MINUS - 137))
        | (1ULL << (ELDOParser::OPEN_ROUND - 137))
        | (1ULL << (ELDOParser::OPEN_SQUARE - 137))
        | (1ULL << (ELDOParser::OPEN_CURLY - 137))
        | (1ULL << (ELDOParser::PERCENTAGE - 137))
        | (1ULL << (ELDOParser::NUMBER - 137))
        | (1ULL << (ELDOParser::ID - 137))
        | (1ULL << (ELDOParser::STRING - 137)))) != 0)) {
        setState(1189);
        expression(0);
      }
      setState(1192);
      match(ELDOParser::CLOSE_CURLY);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1193);
      _la = _input->LA(1);
      if (!(_la == ELDOParser::AC

      || _la == ELDOParser::DC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1195);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
      case 1: {
        setState(1194);
        expression(0);
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_positional_keyworkContext ------------------------------------------------------------------

ELDOParser::Component_positional_keyworkContext::Component_positional_keyworkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_positional_keyworkContext::NOISE() {
  return getToken(ELDOParser::NOISE, 0);
}


size_t ELDOParser::Component_positional_keyworkContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_positional_keywork;
}

void ELDOParser::Component_positional_keyworkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_positional_keywork(this);
}

void ELDOParser::Component_positional_keyworkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_positional_keywork(this);
}


antlrcpp::Any ELDOParser::Component_positional_keyworkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_positional_keywork(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_positional_keyworkContext* ELDOParser::component_positional_keywork() {
  Component_positional_keyworkContext *_localctx = _tracker.createInstance<Component_positional_keyworkContext>(_ctx, getState());
  enterRule(_localctx, 234, ELDOParser::RuleComponent_positional_keywork);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1199);
    match(ELDOParser::NOISE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_pin_listContext ------------------------------------------------------------------

ELDOParser::Component_pin_listContext::Component_pin_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_pin_listContext::PIN_LIST_START() {
  return getToken(ELDOParser::PIN_LIST_START, 0);
}

ELDOParser::Node_listContext* ELDOParser::Component_pin_listContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}


size_t ELDOParser::Component_pin_listContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_pin_list;
}

void ELDOParser::Component_pin_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_pin_list(this);
}

void ELDOParser::Component_pin_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_pin_list(this);
}


antlrcpp::Any ELDOParser::Component_pin_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_pin_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_pin_listContext* ELDOParser::component_pin_list() {
  Component_pin_listContext *_localctx = _tracker.createInstance<Component_pin_listContext>(_ctx, getState());
  enterRule(_localctx, 236, ELDOParser::RuleComponent_pin_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1201);
    match(ELDOParser::PIN_LIST_START);
    setState(1202);
    node_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_port_listContext ------------------------------------------------------------------

ELDOParser::Component_port_listContext::Component_port_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_port_listContext::PORT_LIST_START() {
  return getToken(ELDOParser::PORT_LIST_START, 0);
}

ELDOParser::Node_listContext* ELDOParser::Component_port_listContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}


size_t ELDOParser::Component_port_listContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_port_list;
}

void ELDOParser::Component_port_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_port_list(this);
}

void ELDOParser::Component_port_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_port_list(this);
}


antlrcpp::Any ELDOParser::Component_port_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_port_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_port_listContext* ELDOParser::component_port_list() {
  Component_port_listContext *_localctx = _tracker.createInstance<Component_port_listContext>(_ctx, getState());
  enterRule(_localctx, 238, ELDOParser::RuleComponent_port_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1204);
    match(ELDOParser::PORT_LIST_START);
    setState(1205);
    node_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_net_listContext ------------------------------------------------------------------

ELDOParser::Component_net_listContext::Component_net_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_net_listContext::NET_LIST_START() {
  return getToken(ELDOParser::NET_LIST_START, 0);
}

ELDOParser::Node_listContext* ELDOParser::Component_net_listContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}


size_t ELDOParser::Component_net_listContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_net_list;
}

void ELDOParser::Component_net_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_net_list(this);
}

void ELDOParser::Component_net_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_net_list(this);
}


antlrcpp::Any ELDOParser::Component_net_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_net_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_net_listContext* ELDOParser::component_net_list() {
  Component_net_listContext *_localctx = _tracker.createInstance<Component_net_listContext>(_ctx, getState());
  enterRule(_localctx, 240, ELDOParser::RuleComponent_net_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1207);
    match(ELDOParser::NET_LIST_START);
    setState(1208);
    node_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_coupling_listContext ------------------------------------------------------------------

ELDOParser::Component_coupling_listContext::Component_coupling_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_coupling_listContext::COUPLING_LIST_START() {
  return getToken(ELDOParser::COUPLING_LIST_START, 0);
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::Component_coupling_listContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::Component_coupling_listContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}


size_t ELDOParser::Component_coupling_listContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_coupling_list;
}

void ELDOParser::Component_coupling_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_coupling_list(this);
}

void ELDOParser::Component_coupling_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_coupling_list(this);
}


antlrcpp::Any ELDOParser::Component_coupling_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_coupling_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_coupling_listContext* ELDOParser::component_coupling_list() {
  Component_coupling_listContext *_localctx = _tracker.createInstance<Component_coupling_listContext>(_ctx, getState());
  enterRule(_localctx, 242, ELDOParser::RuleComponent_coupling_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1210);
    match(ELDOParser::COUPLING_LIST_START);
    setState(1212); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1211);
              expression(0);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1214); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_tableContext ------------------------------------------------------------------

ELDOParser::Component_tableContext::Component_tableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_tableContext::TABLE() {
  return getToken(ELDOParser::TABLE, 0);
}

ELDOParser::ExpressionContext* ELDOParser::Component_tableContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}

tree::TerminalNode* ELDOParser::Component_tableContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

std::vector<ELDOParser::Expression_listContext *> ELDOParser::Component_tableContext::expression_list() {
  return getRuleContexts<ELDOParser::Expression_listContext>();
}

ELDOParser::Expression_listContext* ELDOParser::Component_tableContext::expression_list(size_t i) {
  return getRuleContext<ELDOParser::Expression_listContext>(i);
}


size_t ELDOParser::Component_tableContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_table;
}

void ELDOParser::Component_tableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_table(this);
}

void ELDOParser::Component_tableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_table(this);
}


antlrcpp::Any ELDOParser::Component_tableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_table(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_tableContext* ELDOParser::component_table() {
  Component_tableContext *_localctx = _tracker.createInstance<Component_tableContext>(_ctx, getState());
  enterRule(_localctx, 244, ELDOParser::RuleComponent_table);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1216);
    match(ELDOParser::TABLE);
    setState(1217);
    expression(0);
    setState(1218);
    match(ELDOParser::EQUAL);
    setState(1220); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1219);
              expression_list();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1222); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_value_listContext ------------------------------------------------------------------

ELDOParser::Component_value_listContext::Component_value_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Component_value_listContext::OPEN_ROUND() {
  return getToken(ELDOParser::OPEN_ROUND, 0);
}

tree::TerminalNode* ELDOParser::Component_value_listContext::CLOSE_ROUND() {
  return getToken(ELDOParser::CLOSE_ROUND, 0);
}

tree::TerminalNode* ELDOParser::Component_value_listContext::PWL() {
  return getToken(ELDOParser::PWL, 0);
}

tree::TerminalNode* ELDOParser::Component_value_listContext::SIN() {
  return getToken(ELDOParser::SIN, 0);
}

tree::TerminalNode* ELDOParser::Component_value_listContext::SFFM() {
  return getToken(ELDOParser::SFFM, 0);
}

tree::TerminalNode* ELDOParser::Component_value_listContext::PULSE() {
  return getToken(ELDOParser::PULSE, 0);
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::Component_value_listContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::Component_value_listContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}


size_t ELDOParser::Component_value_listContext::getRuleIndex() const {
  return ELDOParser::RuleComponent_value_list;
}

void ELDOParser::Component_value_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent_value_list(this);
}

void ELDOParser::Component_value_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent_value_list(this);
}


antlrcpp::Any ELDOParser::Component_value_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitComponent_value_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Component_value_listContext* ELDOParser::component_value_list() {
  Component_value_listContext *_localctx = _tracker.createInstance<Component_value_listContext>(_ctx, getState());
  enterRule(_localctx, 246, ELDOParser::RuleComponent_value_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1224);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ELDOParser::PWL)
      | (1ULL << ELDOParser::SIN)
      | (1ULL << ELDOParser::SFFM)
      | (1ULL << ELDOParser::PULSE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1225);
    match(ELDOParser::OPEN_ROUND);
    setState(1227); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1226);
      expression(0);
      setState(1229); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (ELDOParser::PLUS - 137))
      | (1ULL << (ELDOParser::MINUS - 137))
      | (1ULL << (ELDOParser::OPEN_ROUND - 137))
      | (1ULL << (ELDOParser::OPEN_SQUARE - 137))
      | (1ULL << (ELDOParser::OPEN_CURLY - 137))
      | (1ULL << (ELDOParser::PERCENTAGE - 137))
      | (1ULL << (ELDOParser::NUMBER - 137))
      | (1ULL << (ELDOParser::ID - 137))
      | (1ULL << (ELDOParser::STRING - 137)))) != 0));
    setState(1231);
    match(ELDOParser::CLOSE_ROUND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interp_typeContext ------------------------------------------------------------------

ELDOParser::Interp_typeContext::Interp_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Interp_typeContext::INTERP() {
  return getToken(ELDOParser::INTERP, 0);
}

tree::TerminalNode* ELDOParser::Interp_typeContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Interp_typeContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Interp_typeContext::getRuleIndex() const {
  return ELDOParser::RuleInterp_type;
}

void ELDOParser::Interp_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterp_type(this);
}

void ELDOParser::Interp_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterp_type(this);
}


antlrcpp::Any ELDOParser::Interp_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitInterp_type(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Interp_typeContext* ELDOParser::interp_type() {
  Interp_typeContext *_localctx = _tracker.createInstance<Interp_typeContext>(_ctx, getState());
  enterRule(_localctx, 248, ELDOParser::RuleInterp_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1233);
    match(ELDOParser::INTERP);
    setState(1234);
    match(ELDOParser::EQUAL);
    setState(1235);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResistorContext ------------------------------------------------------------------

ELDOParser::ResistorContext::ResistorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::ResistorContext::RESISTOR() {
  return getToken(ELDOParser::RESISTOR, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::ResistorContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::ResistorContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::ResistorContext::getRuleIndex() const {
  return ELDOParser::RuleResistor;
}

void ELDOParser::ResistorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResistor(this);
}

void ELDOParser::ResistorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResistor(this);
}


antlrcpp::Any ELDOParser::ResistorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitResistor(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ResistorContext* ELDOParser::resistor() {
  ResistorContext *_localctx = _tracker.createInstance<ResistorContext>(_ctx, getState());
  enterRule(_localctx, 250, ELDOParser::RuleResistor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1237);
    match(ELDOParser::RESISTOR);
    setState(1238);
    node();
    setState(1239);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapacitorContext ------------------------------------------------------------------

ELDOParser::CapacitorContext::CapacitorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::CapacitorContext::CAPACITOR() {
  return getToken(ELDOParser::CAPACITOR, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::CapacitorContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::CapacitorContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::CapacitorContext::getRuleIndex() const {
  return ELDOParser::RuleCapacitor;
}

void ELDOParser::CapacitorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapacitor(this);
}

void ELDOParser::CapacitorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapacitor(this);
}


antlrcpp::Any ELDOParser::CapacitorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitCapacitor(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::CapacitorContext* ELDOParser::capacitor() {
  CapacitorContext *_localctx = _tracker.createInstance<CapacitorContext>(_ctx, getState());
  enterRule(_localctx, 252, ELDOParser::RuleCapacitor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1241);
    match(ELDOParser::CAPACITOR);
    setState(1242);
    node();
    setState(1243);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InductorContext ------------------------------------------------------------------

ELDOParser::InductorContext::InductorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::InductorContext::INDUCTOR() {
  return getToken(ELDOParser::INDUCTOR, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::InductorContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::InductorContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::InductorContext::getRuleIndex() const {
  return ELDOParser::RuleInductor;
}

void ELDOParser::InductorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInductor(this);
}

void ELDOParser::InductorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInductor(this);
}


antlrcpp::Any ELDOParser::InductorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitInductor(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::InductorContext* ELDOParser::inductor() {
  InductorContext *_localctx = _tracker.createInstance<InductorContext>(_ctx, getState());
  enterRule(_localctx, 254, ELDOParser::RuleInductor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1245);
    match(ELDOParser::INDUCTOR);
    setState(1246);
    node();
    setState(1247);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Coupled_inductorContext ------------------------------------------------------------------

ELDOParser::Coupled_inductorContext::Coupled_inductorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Coupled_inductorContext::COUPLED_INDUCTOR() {
  return getToken(ELDOParser::COUPLED_INDUCTOR, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Coupled_inductorContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Coupled_inductorContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}


size_t ELDOParser::Coupled_inductorContext::getRuleIndex() const {
  return ELDOParser::RuleCoupled_inductor;
}

void ELDOParser::Coupled_inductorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoupled_inductor(this);
}

void ELDOParser::Coupled_inductorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoupled_inductor(this);
}


antlrcpp::Any ELDOParser::Coupled_inductorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitCoupled_inductor(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Coupled_inductorContext* ELDOParser::coupled_inductor() {
  Coupled_inductorContext *_localctx = _tracker.createInstance<Coupled_inductorContext>(_ctx, getState());
  enterRule(_localctx, 256, ELDOParser::RuleCoupled_inductor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1249);
    match(ELDOParser::COUPLED_INDUCTOR);
    setState(1250);
    match(ELDOParser::ID);
    setState(1251);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Diffusion_resistorContext ------------------------------------------------------------------

ELDOParser::Diffusion_resistorContext::Diffusion_resistorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Diffusion_resistorContext::DIFFUSION_RESISTOR() {
  return getToken(ELDOParser::DIFFUSION_RESISTOR, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::Diffusion_resistorContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::Diffusion_resistorContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

tree::TerminalNode* ELDOParser::Diffusion_resistorContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Diffusion_resistorContext::getRuleIndex() const {
  return ELDOParser::RuleDiffusion_resistor;
}

void ELDOParser::Diffusion_resistorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiffusion_resistor(this);
}

void ELDOParser::Diffusion_resistorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiffusion_resistor(this);
}


antlrcpp::Any ELDOParser::Diffusion_resistorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitDiffusion_resistor(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Diffusion_resistorContext* ELDOParser::diffusion_resistor() {
  Diffusion_resistorContext *_localctx = _tracker.createInstance<Diffusion_resistorContext>(_ctx, getState());
  enterRule(_localctx, 258, ELDOParser::RuleDiffusion_resistor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1253);
    match(ELDOParser::DIFFUSION_RESISTOR);
    setState(1254);
    node();
    setState(1255);
    node();
    setState(1257);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      setState(1256);
      node();
      break;
    }

    }
    setState(1259);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transmission_lineContext ------------------------------------------------------------------

ELDOParser::Transmission_lineContext::Transmission_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Transmission_lineContext::TRANSMISSION_LINE() {
  return getToken(ELDOParser::TRANSMISSION_LINE, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::Transmission_lineContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::Transmission_lineContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::Transmission_lineContext::getRuleIndex() const {
  return ELDOParser::RuleTransmission_line;
}

void ELDOParser::Transmission_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransmission_line(this);
}

void ELDOParser::Transmission_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransmission_line(this);
}


antlrcpp::Any ELDOParser::Transmission_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTransmission_line(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Transmission_lineContext* ELDOParser::transmission_line() {
  Transmission_lineContext *_localctx = _tracker.createInstance<Transmission_lineContext>(_ctx, getState());
  enterRule(_localctx, 260, ELDOParser::RuleTransmission_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1261);
    match(ELDOParser::TRANSMISSION_LINE);
    setState(1262);
    node();
    setState(1263);
    node();
    setState(1264);
    node();
    setState(1265);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lossy_transmission_lineContext ------------------------------------------------------------------

ELDOParser::Lossy_transmission_lineContext::Lossy_transmission_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Lossy_transmission_lineContext::LOSSY_TRANSMISSION_LINE() {
  return getToken(ELDOParser::LOSSY_TRANSMISSION_LINE, 0);
}


size_t ELDOParser::Lossy_transmission_lineContext::getRuleIndex() const {
  return ELDOParser::RuleLossy_transmission_line;
}

void ELDOParser::Lossy_transmission_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLossy_transmission_line(this);
}

void ELDOParser::Lossy_transmission_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLossy_transmission_line(this);
}


antlrcpp::Any ELDOParser::Lossy_transmission_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLossy_transmission_line(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Lossy_transmission_lineContext* ELDOParser::lossy_transmission_line() {
  Lossy_transmission_lineContext *_localctx = _tracker.createInstance<Lossy_transmission_lineContext>(_ctx, getState());
  enterRule(_localctx, 262, ELDOParser::RuleLossy_transmission_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1267);
    match(ELDOParser::LOSSY_TRANSMISSION_LINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ltl_w_modelContext ------------------------------------------------------------------

ELDOParser::Ltl_w_modelContext::Ltl_w_modelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ltl_w_modelContext::LTL_W_MODEL() {
  return getToken(ELDOParser::LTL_W_MODEL, 0);
}


size_t ELDOParser::Ltl_w_modelContext::getRuleIndex() const {
  return ELDOParser::RuleLtl_w_model;
}

void ELDOParser::Ltl_w_modelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLtl_w_model(this);
}

void ELDOParser::Ltl_w_modelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLtl_w_model(this);
}


antlrcpp::Any ELDOParser::Ltl_w_modelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLtl_w_model(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ltl_w_modelContext* ELDOParser::ltl_w_model() {
  Ltl_w_modelContext *_localctx = _tracker.createInstance<Ltl_w_modelContext>(_ctx, getState());
  enterRule(_localctx, 264, ELDOParser::RuleLtl_w_model);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1269);
    match(ELDOParser::LTL_W_MODEL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ltl_u_modelContext ------------------------------------------------------------------

ELDOParser::Ltl_u_modelContext::Ltl_u_modelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Ltl_u_modelContext::LTL_U_MODEL() {
  return getToken(ELDOParser::LTL_U_MODEL, 0);
}


size_t ELDOParser::Ltl_u_modelContext::getRuleIndex() const {
  return ELDOParser::RuleLtl_u_model;
}

void ELDOParser::Ltl_u_modelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLtl_u_model(this);
}

void ELDOParser::Ltl_u_modelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLtl_u_model(this);
}


antlrcpp::Any ELDOParser::Ltl_u_modelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitLtl_u_model(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Ltl_u_modelContext* ELDOParser::ltl_u_model() {
  Ltl_u_modelContext *_localctx = _tracker.createInstance<Ltl_u_modelContext>(_ctx, getState());
  enterRule(_localctx, 266, ELDOParser::RuleLtl_u_model);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1271);
    match(ELDOParser::LTL_U_MODEL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Junction_diodeContext ------------------------------------------------------------------

ELDOParser::Junction_diodeContext::Junction_diodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Junction_diodeContext::JUNCTION_DIODE() {
  return getToken(ELDOParser::JUNCTION_DIODE, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::Junction_diodeContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::Junction_diodeContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::Junction_diodeContext::getRuleIndex() const {
  return ELDOParser::RuleJunction_diode;
}

void ELDOParser::Junction_diodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJunction_diode(this);
}

void ELDOParser::Junction_diodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJunction_diode(this);
}


antlrcpp::Any ELDOParser::Junction_diodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitJunction_diode(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Junction_diodeContext* ELDOParser::junction_diode() {
  Junction_diodeContext *_localctx = _tracker.createInstance<Junction_diodeContext>(_ctx, getState());
  enterRule(_localctx, 268, ELDOParser::RuleJunction_diode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1273);
    match(ELDOParser::JUNCTION_DIODE);
    setState(1274);
    node();
    setState(1275);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BjtContext ------------------------------------------------------------------

ELDOParser::BjtContext::BjtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::BjtContext::BJT() {
  return getToken(ELDOParser::BJT, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::BjtContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::BjtContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

tree::TerminalNode* ELDOParser::BjtContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::BjtContext::getRuleIndex() const {
  return ELDOParser::RuleBjt;
}

void ELDOParser::BjtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBjt(this);
}

void ELDOParser::BjtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBjt(this);
}


antlrcpp::Any ELDOParser::BjtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitBjt(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::BjtContext* ELDOParser::bjt() {
  BjtContext *_localctx = _tracker.createInstance<BjtContext>(_ctx, getState());
  enterRule(_localctx, 270, ELDOParser::RuleBjt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1298);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1277);
      match(ELDOParser::BJT);
      setState(1278);
      node();
      setState(1279);
      node();
      setState(1280);
      node();
      setState(1282);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
      case 1: {
        setState(1281);
        node();
        break;
      }

      }
      setState(1284);
      match(ELDOParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1286);
      match(ELDOParser::BJT);
      setState(1287);
      node();
      setState(1288);
      node();
      setState(1289);
      node();
      setState(1291);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
      case 1: {
        setState(1290);
        node();
        break;
      }

      }
      setState(1294);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
      case 1: {
        setState(1293);
        node();
        break;
      }

      }
      setState(1296);
      match(ELDOParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JfetContext ------------------------------------------------------------------

ELDOParser::JfetContext::JfetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::JfetContext::JFET() {
  return getToken(ELDOParser::JFET, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::JfetContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::JfetContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

tree::TerminalNode* ELDOParser::JfetContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::JfetContext::getRuleIndex() const {
  return ELDOParser::RuleJfet;
}

void ELDOParser::JfetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJfet(this);
}

void ELDOParser::JfetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJfet(this);
}


antlrcpp::Any ELDOParser::JfetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitJfet(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::JfetContext* ELDOParser::jfet() {
  JfetContext *_localctx = _tracker.createInstance<JfetContext>(_ctx, getState());
  enterRule(_localctx, 272, ELDOParser::RuleJfet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1300);
    match(ELDOParser::JFET);
    setState(1301);
    node();
    setState(1302);
    node();
    setState(1303);
    node();
    setState(1304);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MosfetContext ------------------------------------------------------------------

ELDOParser::MosfetContext::MosfetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::MosfetContext::MOSFET() {
  return getToken(ELDOParser::MOSFET, 0);
}

ELDOParser::Node_listContext* ELDOParser::MosfetContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}

tree::TerminalNode* ELDOParser::MosfetContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::MosfetContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

tree::TerminalNode* ELDOParser::MosfetContext::MODEL() {
  return getToken(ELDOParser::MODEL, 0);
}

tree::TerminalNode* ELDOParser::MosfetContext::MOD() {
  return getToken(ELDOParser::MOD, 0);
}


size_t ELDOParser::MosfetContext::getRuleIndex() const {
  return ELDOParser::RuleMosfet;
}

void ELDOParser::MosfetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMosfet(this);
}

void ELDOParser::MosfetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMosfet(this);
}


antlrcpp::Any ELDOParser::MosfetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitMosfet(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::MosfetContext* ELDOParser::mosfet() {
  MosfetContext *_localctx = _tracker.createInstance<MosfetContext>(_ctx, getState());
  enterRule(_localctx, 274, ELDOParser::RuleMosfet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1306);
    match(ELDOParser::MOSFET);
    setState(1307);
    node_list();
    setState(1310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL) {
      setState(1308);
      _la = _input->LA(1);
      if (!(_la == ELDOParser::MOD

      || _la == ELDOParser::MODEL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1309);
      match(ELDOParser::EQUAL);
    }
    setState(1312);
    match(ELDOParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subckt_instanceContext ------------------------------------------------------------------

ELDOParser::Subckt_instanceContext::Subckt_instanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Subckt_instanceContext::SUBCK_INSTANCE() {
  return getToken(ELDOParser::SUBCK_INSTANCE, 0);
}

ELDOParser::Node_listContext* ELDOParser::Subckt_instanceContext::node_list() {
  return getRuleContext<ELDOParser::Node_listContext>(0);
}

tree::TerminalNode* ELDOParser::Subckt_instanceContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Subckt_instanceContext::MODEL() {
  return getToken(ELDOParser::MODEL, 0);
}

tree::TerminalNode* ELDOParser::Subckt_instanceContext::COLON() {
  return getToken(ELDOParser::COLON, 0);
}


size_t ELDOParser::Subckt_instanceContext::getRuleIndex() const {
  return ELDOParser::RuleSubckt_instance;
}

void ELDOParser::Subckt_instanceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubckt_instance(this);
}

void ELDOParser::Subckt_instanceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubckt_instance(this);
}


antlrcpp::Any ELDOParser::Subckt_instanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSubckt_instance(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Subckt_instanceContext* ELDOParser::subckt_instance() {
  Subckt_instanceContext *_localctx = _tracker.createInstance<Subckt_instanceContext>(_ctx, getState());
  enterRule(_localctx, 276, ELDOParser::RuleSubckt_instance);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1314);
      match(ELDOParser::SUBCK_INSTANCE);
      setState(1315);
      node_list();
      setState(1316);
      match(ELDOParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1318);
      match(ELDOParser::SUBCK_INSTANCE);
      setState(1321);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::MODEL) {
        setState(1319);
        match(ELDOParser::MODEL);
        setState(1320);
        match(ELDOParser::COLON);
      }
      setState(1323);
      match(ELDOParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IvsourceContext ------------------------------------------------------------------

ELDOParser::IvsourceContext::IvsourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::IvsourceContext::IVSOURCE() {
  return getToken(ELDOParser::IVSOURCE, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::IvsourceContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::IvsourceContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::IvsourceContext::getRuleIndex() const {
  return ELDOParser::RuleIvsource;
}

void ELDOParser::IvsourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIvsource(this);
}

void ELDOParser::IvsourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIvsource(this);
}


antlrcpp::Any ELDOParser::IvsourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitIvsource(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::IvsourceContext* ELDOParser::ivsource() {
  IvsourceContext *_localctx = _tracker.createInstance<IvsourceContext>(_ctx, getState());
  enterRule(_localctx, 278, ELDOParser::RuleIvsource);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1326);
    match(ELDOParser::IVSOURCE);
    setState(1327);
    node();
    setState(1328);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IcsourceContext ------------------------------------------------------------------

ELDOParser::IcsourceContext::IcsourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::IcsourceContext::ICSOURCE() {
  return getToken(ELDOParser::ICSOURCE, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::IcsourceContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::IcsourceContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::IcsourceContext::getRuleIndex() const {
  return ELDOParser::RuleIcsource;
}

void ELDOParser::IcsourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIcsource(this);
}

void ELDOParser::IcsourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIcsource(this);
}


antlrcpp::Any ELDOParser::IcsourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitIcsource(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::IcsourceContext* ELDOParser::icsource() {
  IcsourceContext *_localctx = _tracker.createInstance<IcsourceContext>(_ctx, getState());
  enterRule(_localctx, 280, ELDOParser::RuleIcsource);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1330);
    match(ELDOParser::ICSOURCE);
    setState(1331);
    node();
    setState(1332);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VcvsContext ------------------------------------------------------------------

ELDOParser::VcvsContext::VcvsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::VcvsContext::VCVS() {
  return getToken(ELDOParser::VCVS, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::VcvsContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::VcvsContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::VcvsContext::getRuleIndex() const {
  return ELDOParser::RuleVcvs;
}

void ELDOParser::VcvsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVcvs(this);
}

void ELDOParser::VcvsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVcvs(this);
}


antlrcpp::Any ELDOParser::VcvsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitVcvs(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::VcvsContext* ELDOParser::vcvs() {
  VcvsContext *_localctx = _tracker.createInstance<VcvsContext>(_ctx, getState());
  enterRule(_localctx, 282, ELDOParser::RuleVcvs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1334);
    match(ELDOParser::VCVS);
    setState(1335);
    node();
    setState(1336);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CccsContext ------------------------------------------------------------------

ELDOParser::CccsContext::CccsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::CccsContext::CCCS() {
  return getToken(ELDOParser::CCCS, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::CccsContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::CccsContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::CccsContext::getRuleIndex() const {
  return ELDOParser::RuleCccs;
}

void ELDOParser::CccsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCccs(this);
}

void ELDOParser::CccsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCccs(this);
}


antlrcpp::Any ELDOParser::CccsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitCccs(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::CccsContext* ELDOParser::cccs() {
  CccsContext *_localctx = _tracker.createInstance<CccsContext>(_ctx, getState());
  enterRule(_localctx, 284, ELDOParser::RuleCccs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1338);
    match(ELDOParser::CCCS);
    setState(1339);
    node();
    setState(1340);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VccsContext ------------------------------------------------------------------

ELDOParser::VccsContext::VccsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::VccsContext::VCCS() {
  return getToken(ELDOParser::VCCS, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::VccsContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::VccsContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::VccsContext::getRuleIndex() const {
  return ELDOParser::RuleVccs;
}

void ELDOParser::VccsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVccs(this);
}

void ELDOParser::VccsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVccs(this);
}


antlrcpp::Any ELDOParser::VccsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitVccs(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::VccsContext* ELDOParser::vccs() {
  VccsContext *_localctx = _tracker.createInstance<VccsContext>(_ctx, getState());
  enterRule(_localctx, 286, ELDOParser::RuleVccs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1342);
    match(ELDOParser::VCCS);
    setState(1343);
    node();
    setState(1344);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcvsContext ------------------------------------------------------------------

ELDOParser::CcvsContext::CcvsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::CcvsContext::CCVS() {
  return getToken(ELDOParser::CCVS, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::CcvsContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::CcvsContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}


size_t ELDOParser::CcvsContext::getRuleIndex() const {
  return ELDOParser::RuleCcvs;
}

void ELDOParser::CcvsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCcvs(this);
}

void ELDOParser::CcvsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCcvs(this);
}


antlrcpp::Any ELDOParser::CcvsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitCcvs(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::CcvsContext* ELDOParser::ccvs() {
  CcvsContext *_localctx = _tracker.createInstance<CcvsContext>(_ctx, getState());
  enterRule(_localctx, 288, ELDOParser::RuleCcvs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1346);
    match(ELDOParser::CCVS);
    setState(1347);
    node();
    setState(1348);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Noise_functionContext ------------------------------------------------------------------

ELDOParser::Noise_functionContext::Noise_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Noise_functionContext::NOISE() {
  return getToken(ELDOParser::NOISE, 0);
}


size_t ELDOParser::Noise_functionContext::getRuleIndex() const {
  return ELDOParser::RuleNoise_function;
}

void ELDOParser::Noise_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoise_function(this);
}

void ELDOParser::Noise_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoise_function(this);
}


antlrcpp::Any ELDOParser::Noise_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNoise_function(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Noise_functionContext* ELDOParser::noise_function() {
  Noise_functionContext *_localctx = _tracker.createInstance<Noise_functionContext>(_ctx, getState());
  enterRule(_localctx, 290, ELDOParser::RuleNoise_function);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1350);
    match(ELDOParser::NOISE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwContext ------------------------------------------------------------------

ELDOParser::SwContext::SwContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::SwContext::SW() {
  return getToken(ELDOParser::SW, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::SwContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::SwContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

tree::TerminalNode* ELDOParser::SwContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

std::vector<ELDOParser::Expression_atomContext *> ELDOParser::SwContext::expression_atom() {
  return getRuleContexts<ELDOParser::Expression_atomContext>();
}

ELDOParser::Expression_atomContext* ELDOParser::SwContext::expression_atom(size_t i) {
  return getRuleContext<ELDOParser::Expression_atomContext>(i);
}


size_t ELDOParser::SwContext::getRuleIndex() const {
  return ELDOParser::RuleSw;
}

void ELDOParser::SwContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSw(this);
}

void ELDOParser::SwContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSw(this);
}


antlrcpp::Any ELDOParser::SwContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitSw(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::SwContext* ELDOParser::sw() {
  SwContext *_localctx = _tracker.createInstance<SwContext>(_ctx, getState());
  enterRule(_localctx, 292, ELDOParser::RuleSw);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1352);
    match(ELDOParser::SW);
    setState(1353);
    node();
    setState(1354);
    node();
    setState(1355);
    node();
    setState(1357);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      setState(1356);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1363);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx)) {
    case 1: {
      setState(1359);
      expression_atom();
      setState(1361);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
      case 1: {
        setState(1360);
        expression_atom();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operational_amplifierContext ------------------------------------------------------------------

ELDOParser::Operational_amplifierContext::Operational_amplifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Operational_amplifierContext::OPA() {
  return getToken(ELDOParser::OPA, 0);
}

std::vector<ELDOParser::NodeContext *> ELDOParser::Operational_amplifierContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::Operational_amplifierContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

tree::TerminalNode* ELDOParser::Operational_amplifierContext::ID() {
  return getToken(ELDOParser::ID, 0);
}


size_t ELDOParser::Operational_amplifierContext::getRuleIndex() const {
  return ELDOParser::RuleOperational_amplifier;
}

void ELDOParser::Operational_amplifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperational_amplifier(this);
}

void ELDOParser::Operational_amplifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperational_amplifier(this);
}


antlrcpp::Any ELDOParser::Operational_amplifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitOperational_amplifier(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Operational_amplifierContext* ELDOParser::operational_amplifier() {
  Operational_amplifierContext *_localctx = _tracker.createInstance<Operational_amplifierContext>(_ctx, getState());
  enterRule(_localctx, 294, ELDOParser::RuleOperational_amplifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1365);
    match(ELDOParser::OPA);
    setState(1366);
    node();
    setState(1367);
    node();
    setState(1368);
    node();
    setState(1369);
    node();
    setState(1371);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx)) {
    case 1: {
      setState(1370);
      match(ELDOParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Two_input_gateContext ------------------------------------------------------------------

ELDOParser::Two_input_gateContext::Two_input_gateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::NodeContext *> ELDOParser::Two_input_gateContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::Two_input_gateContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

ELDOParser::Parameter_listContext* ELDOParser::Two_input_gateContext::parameter_list() {
  return getRuleContext<ELDOParser::Parameter_listContext>(0);
}

tree::TerminalNode* ELDOParser::Two_input_gateContext::DIG_NAND() {
  return getToken(ELDOParser::DIG_NAND, 0);
}

tree::TerminalNode* ELDOParser::Two_input_gateContext::DIG_AND() {
  return getToken(ELDOParser::DIG_AND, 0);
}

tree::TerminalNode* ELDOParser::Two_input_gateContext::DIG_OR() {
  return getToken(ELDOParser::DIG_OR, 0);
}

tree::TerminalNode* ELDOParser::Two_input_gateContext::DIG_NOR() {
  return getToken(ELDOParser::DIG_NOR, 0);
}

tree::TerminalNode* ELDOParser::Two_input_gateContext::DIG_XOR() {
  return getToken(ELDOParser::DIG_XOR, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Two_input_gateContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Two_input_gateContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}


size_t ELDOParser::Two_input_gateContext::getRuleIndex() const {
  return ELDOParser::RuleTwo_input_gate;
}

void ELDOParser::Two_input_gateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTwo_input_gate(this);
}

void ELDOParser::Two_input_gateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTwo_input_gate(this);
}


antlrcpp::Any ELDOParser::Two_input_gateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitTwo_input_gate(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Two_input_gateContext* ELDOParser::two_input_gate() {
  Two_input_gateContext *_localctx = _tracker.createInstance<Two_input_gateContext>(_ctx, getState());
  enterRule(_localctx, 296, ELDOParser::RuleTwo_input_gate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1373);
    _la = _input->LA(1);
    if (!(((((_la - 112) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 112)) & ((1ULL << (ELDOParser::DIG_NAND - 112))
      | (1ULL << (ELDOParser::DIG_AND - 112))
      | (1ULL << (ELDOParser::DIG_NOR - 112))
      | (1ULL << (ELDOParser::DIG_OR - 112))
      | (1ULL << (ELDOParser::DIG_XOR - 112)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1374);
    node();
    setState(1375);
    node();
    setState(1376);
    node();
    setState(1379);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      setState(1377);
      match(ELDOParser::ID);
      setState(1378);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1382);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      setState(1381);
      match(ELDOParser::ID);
      break;
    }

    }
    setState(1384);
    parameter_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndContext ------------------------------------------------------------------

ELDOParser::EndContext::EndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::EndContext::NETLIST_END() {
  return getToken(ELDOParser::NETLIST_END, 0);
}

ELDOParser::End_of_lineContext* ELDOParser::EndContext::end_of_line() {
  return getRuleContext<ELDOParser::End_of_lineContext>(0);
}


size_t ELDOParser::EndContext::getRuleIndex() const {
  return ELDOParser::RuleEnd;
}

void ELDOParser::EndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnd(this);
}

void ELDOParser::EndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnd(this);
}


antlrcpp::Any ELDOParser::EndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitEnd(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::EndContext* ELDOParser::end() {
  EndContext *_localctx = _tracker.createInstance<EndContext>(_ctx, getState());
  enterRule(_localctx, 298, ELDOParser::RuleEnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1386);
    match(ELDOParser::NETLIST_END);
    setState(1387);
    end_of_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ELDOParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Expression_unaryContext* ELDOParser::ExpressionContext::expression_unary() {
  return getRuleContext<ELDOParser::Expression_unaryContext>(0);
}

ELDOParser::Expression_function_callContext* ELDOParser::ExpressionContext::expression_function_call() {
  return getRuleContext<ELDOParser::Expression_function_callContext>(0);
}

ELDOParser::Expression_listContext* ELDOParser::ExpressionContext::expression_list() {
  return getRuleContext<ELDOParser::Expression_listContext>(0);
}

ELDOParser::Expression_atomContext* ELDOParser::ExpressionContext::expression_atom() {
  return getRuleContext<ELDOParser::Expression_atomContext>(0);
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::ExpressionContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}

tree::TerminalNode* ELDOParser::ExpressionContext::QUESTION_MARK() {
  return getToken(ELDOParser::QUESTION_MARK, 0);
}

tree::TerminalNode* ELDOParser::ExpressionContext::COLON() {
  return getToken(ELDOParser::COLON, 0);
}

tree::TerminalNode* ELDOParser::ExpressionContext::OPEN_CURLY() {
  return getToken(ELDOParser::OPEN_CURLY, 0);
}

tree::TerminalNode* ELDOParser::ExpressionContext::CLOSE_CURLY() {
  return getToken(ELDOParser::CLOSE_CURLY, 0);
}

ELDOParser::Expression_operatorContext* ELDOParser::ExpressionContext::expression_operator() {
  return getRuleContext<ELDOParser::Expression_operatorContext>(0);
}


size_t ELDOParser::ExpressionContext::getRuleIndex() const {
  return ELDOParser::RuleExpression;
}

void ELDOParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ELDOParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any ELDOParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


ELDOParser::ExpressionContext* ELDOParser::expression() {
   return expression(0);
}

ELDOParser::ExpressionContext* ELDOParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ELDOParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ELDOParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 300;
  enterRecursionRule(_localctx, 300, ELDOParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      setState(1390);
      expression_unary();
      break;
    }

    case 2: {
      setState(1391);
      expression_function_call();
      break;
    }

    case 3: {
      setState(1392);
      expression_list();
      break;
    }

    case 4: {
      setState(1393);
      expression_atom();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1414);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1412);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1396);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1397);
          match(ELDOParser::QUESTION_MARK);
          setState(1398);
          expression(0);
          setState(1399);
          match(ELDOParser::COLON);
          setState(1400);
          expression(2);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1402);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1403);
          match(ELDOParser::OPEN_CURLY);
          setState(1404);
          expression(0);
          setState(1405);
          match(ELDOParser::CLOSE_CURLY);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1407);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1408);
          expression_operator();
          setState(1410);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
          case 1: {
            setState(1409);
            expression(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1416);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Expression_unaryContext ------------------------------------------------------------------

ELDOParser::Expression_unaryContext::Expression_unaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::ExpressionContext* ELDOParser::Expression_unaryContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}

tree::TerminalNode* ELDOParser::Expression_unaryContext::PLUS() {
  return getToken(ELDOParser::PLUS, 0);
}

tree::TerminalNode* ELDOParser::Expression_unaryContext::MINUS() {
  return getToken(ELDOParser::MINUS, 0);
}


size_t ELDOParser::Expression_unaryContext::getRuleIndex() const {
  return ELDOParser::RuleExpression_unary;
}

void ELDOParser::Expression_unaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_unary(this);
}

void ELDOParser::Expression_unaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_unary(this);
}


antlrcpp::Any ELDOParser::Expression_unaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExpression_unary(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Expression_unaryContext* ELDOParser::expression_unary() {
  Expression_unaryContext *_localctx = _tracker.createInstance<Expression_unaryContext>(_ctx, getState());
  enterRule(_localctx, 302, ELDOParser::RuleExpression_unary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1417);
    _la = _input->LA(1);
    if (!(_la == ELDOParser::PLUS

    || _la == ELDOParser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1418);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_function_callContext ------------------------------------------------------------------

ELDOParser::Expression_function_callContext::Expression_function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Expression_listContext* ELDOParser::Expression_function_callContext::expression_list() {
  return getRuleContext<ELDOParser::Expression_listContext>(0);
}

tree::TerminalNode* ELDOParser::Expression_function_callContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Expression_function_callContext::MOD() {
  return getToken(ELDOParser::MOD, 0);
}

tree::TerminalNode* ELDOParser::Expression_function_callContext::MODEL() {
  return getToken(ELDOParser::MODEL, 0);
}


size_t ELDOParser::Expression_function_callContext::getRuleIndex() const {
  return ELDOParser::RuleExpression_function_call;
}

void ELDOParser::Expression_function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_function_call(this);
}

void ELDOParser::Expression_function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_function_call(this);
}


antlrcpp::Any ELDOParser::Expression_function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExpression_function_call(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Expression_function_callContext* ELDOParser::expression_function_call() {
  Expression_function_callContext *_localctx = _tracker.createInstance<Expression_function_callContext>(_ctx, getState());
  enterRule(_localctx, 304, ELDOParser::RuleExpression_function_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1420);
    _la = _input->LA(1);
    if (!(_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || _la == ELDOParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1421);
    expression_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

ELDOParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Expression_listContext::OPEN_ROUND() {
  return getToken(ELDOParser::OPEN_ROUND, 0);
}

tree::TerminalNode* ELDOParser::Expression_listContext::OPEN_CURLY() {
  return getToken(ELDOParser::OPEN_CURLY, 0);
}

tree::TerminalNode* ELDOParser::Expression_listContext::OPEN_SQUARE() {
  return getToken(ELDOParser::OPEN_SQUARE, 0);
}

tree::TerminalNode* ELDOParser::Expression_listContext::CLOSE_ROUND() {
  return getToken(ELDOParser::CLOSE_ROUND, 0);
}

tree::TerminalNode* ELDOParser::Expression_listContext::CLOSE_CURLY() {
  return getToken(ELDOParser::CLOSE_CURLY, 0);
}

tree::TerminalNode* ELDOParser::Expression_listContext::CLOSE_SQUARE() {
  return getToken(ELDOParser::CLOSE_SQUARE, 0);
}

std::vector<ELDOParser::ExpressionContext *> ELDOParser::Expression_listContext::expression() {
  return getRuleContexts<ELDOParser::ExpressionContext>();
}

ELDOParser::ExpressionContext* ELDOParser::Expression_listContext::expression(size_t i) {
  return getRuleContext<ELDOParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ELDOParser::Expression_listContext::COMMA() {
  return getTokens(ELDOParser::COMMA);
}

tree::TerminalNode* ELDOParser::Expression_listContext::COMMA(size_t i) {
  return getToken(ELDOParser::COMMA, i);
}


size_t ELDOParser::Expression_listContext::getRuleIndex() const {
  return ELDOParser::RuleExpression_list;
}

void ELDOParser::Expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_list(this);
}

void ELDOParser::Expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_list(this);
}


antlrcpp::Any ELDOParser::Expression_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExpression_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Expression_listContext* ELDOParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 306, ELDOParser::RuleExpression_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1423);
    _la = _input->LA(1);
    if (!(((((_la - 140) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 140)) & ((1ULL << (ELDOParser::OPEN_ROUND - 140))
      | (1ULL << (ELDOParser::OPEN_SQUARE - 140))
      | (1ULL << (ELDOParser::OPEN_CURLY - 140)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1428); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1424);
      expression(0);
      setState(1426);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::COMMA) {
        setState(1425);
        match(ELDOParser::COMMA);
      }
      setState(1430); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (ELDOParser::PLUS - 137))
      | (1ULL << (ELDOParser::MINUS - 137))
      | (1ULL << (ELDOParser::OPEN_ROUND - 137))
      | (1ULL << (ELDOParser::OPEN_SQUARE - 137))
      | (1ULL << (ELDOParser::OPEN_CURLY - 137))
      | (1ULL << (ELDOParser::PERCENTAGE - 137))
      | (1ULL << (ELDOParser::NUMBER - 137))
      | (1ULL << (ELDOParser::ID - 137))
      | (1ULL << (ELDOParser::STRING - 137)))) != 0));
    setState(1432);
    _la = _input->LA(1);
    if (!(((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (ELDOParser::CLOSE_ROUND - 141))
      | (1ULL << (ELDOParser::CLOSE_SQUARE - 141))
      | (1ULL << (ELDOParser::CLOSE_CURLY - 141)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_operatorContext ------------------------------------------------------------------

ELDOParser::Expression_operatorContext::Expression_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::PLUS() {
  return getToken(ELDOParser::PLUS, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::MINUS() {
  return getToken(ELDOParser::MINUS, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::STAR() {
  return getToken(ELDOParser::STAR, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::SLASH() {
  return getToken(ELDOParser::SLASH, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_AND() {
  return getToken(ELDOParser::LOGIC_AND, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_BITWISE_AND() {
  return getToken(ELDOParser::LOGIC_BITWISE_AND, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_OR() {
  return getToken(ELDOParser::LOGIC_OR, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_BITWISE_OR() {
  return getToken(ELDOParser::LOGIC_BITWISE_OR, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_EQUAL() {
  return getToken(ELDOParser::LOGIC_EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_NOT_EQUAL() {
  return getToken(ELDOParser::LOGIC_NOT_EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LOGIC_XOR() {
  return getToken(ELDOParser::LOGIC_XOR, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LESS_THAN() {
  return getToken(ELDOParser::LESS_THAN, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::LESS_THAN_EQUAL() {
  return getToken(ELDOParser::LESS_THAN_EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::GREATER_THAN() {
  return getToken(ELDOParser::GREATER_THAN, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::GREATER_THAN_EQUAL() {
  return getToken(ELDOParser::GREATER_THAN_EQUAL, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::EXCLAMATION_MARK() {
  return getToken(ELDOParser::EXCLAMATION_MARK, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::BITWISE_SHIFT_LEFT() {
  return getToken(ELDOParser::BITWISE_SHIFT_LEFT, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::BITWISE_SHIFT_RIGHT() {
  return getToken(ELDOParser::BITWISE_SHIFT_RIGHT, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::POWER_OPERATOR() {
  return getToken(ELDOParser::POWER_OPERATOR, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::CARET() {
  return getToken(ELDOParser::CARET, 0);
}

tree::TerminalNode* ELDOParser::Expression_operatorContext::PERCENT() {
  return getToken(ELDOParser::PERCENT, 0);
}


size_t ELDOParser::Expression_operatorContext::getRuleIndex() const {
  return ELDOParser::RuleExpression_operator;
}

void ELDOParser::Expression_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_operator(this);
}

void ELDOParser::Expression_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_operator(this);
}


antlrcpp::Any ELDOParser::Expression_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExpression_operator(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Expression_operatorContext* ELDOParser::expression_operator() {
  Expression_operatorContext *_localctx = _tracker.createInstance<Expression_operatorContext>(_ctx, getState());
  enterRule(_localctx, 308, ELDOParser::RuleExpression_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1434);
    _la = _input->LA(1);
    if (!(((((_la - 117) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 117)) & ((1ULL << (ELDOParser::EQUAL - 117))
      | (1ULL << (ELDOParser::EXCLAMATION_MARK - 117))
      | (1ULL << (ELDOParser::LESS_THAN - 117))
      | (1ULL << (ELDOParser::GREATER_THAN - 117))
      | (1ULL << (ELDOParser::LESS_THAN_EQUAL - 117))
      | (1ULL << (ELDOParser::GREATER_THAN_EQUAL - 117))
      | (1ULL << (ELDOParser::LOGIC_EQUAL - 117))
      | (1ULL << (ELDOParser::LOGIC_NOT_EQUAL - 117))
      | (1ULL << (ELDOParser::LOGIC_AND - 117))
      | (1ULL << (ELDOParser::LOGIC_OR - 117))
      | (1ULL << (ELDOParser::LOGIC_BITWISE_AND - 117))
      | (1ULL << (ELDOParser::LOGIC_BITWISE_OR - 117))
      | (1ULL << (ELDOParser::LOGIC_XOR - 117))
      | (1ULL << (ELDOParser::BITWISE_SHIFT_LEFT - 117))
      | (1ULL << (ELDOParser::BITWISE_SHIFT_RIGHT - 117))
      | (1ULL << (ELDOParser::POWER_OPERATOR - 117))
      | (1ULL << (ELDOParser::PLUS - 117))
      | (1ULL << (ELDOParser::MINUS - 117))
      | (1ULL << (ELDOParser::STAR - 117))
      | (1ULL << (ELDOParser::SLASH - 117))
      | (1ULL << (ELDOParser::PERCENT - 117))
      | (1ULL << (ELDOParser::CARET - 117)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_atomContext ------------------------------------------------------------------

ELDOParser::Expression_atomContext::Expression_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Expression_atomContext::NUMBER() {
  return getToken(ELDOParser::NUMBER, 0);
}

tree::TerminalNode* ELDOParser::Expression_atomContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Expression_atomContext::STRING() {
  return getToken(ELDOParser::STRING, 0);
}

tree::TerminalNode* ELDOParser::Expression_atomContext::PERCENTAGE() {
  return getToken(ELDOParser::PERCENTAGE, 0);
}


size_t ELDOParser::Expression_atomContext::getRuleIndex() const {
  return ELDOParser::RuleExpression_atom;
}

void ELDOParser::Expression_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_atom(this);
}

void ELDOParser::Expression_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_atom(this);
}


antlrcpp::Any ELDOParser::Expression_atomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitExpression_atom(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Expression_atomContext* ELDOParser::expression_atom() {
  Expression_atomContext *_localctx = _tracker.createInstance<Expression_atomContext>(_ctx, getState());
  enterRule(_localctx, 310, ELDOParser::RuleExpression_atom);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1436);
    _la = _input->LA(1);
    if (!(((((_la - 163) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 163)) & ((1ULL << (ELDOParser::PERCENTAGE - 163))
      | (1ULL << (ELDOParser::NUMBER - 163))
      | (1ULL << (ELDOParser::ID - 163))
      | (1ULL << (ELDOParser::STRING - 163)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Node_listContext ------------------------------------------------------------------

ELDOParser::Node_listContext::Node_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::Node_list_itemContext *> ELDOParser::Node_listContext::node_list_item() {
  return getRuleContexts<ELDOParser::Node_list_itemContext>();
}

ELDOParser::Node_list_itemContext* ELDOParser::Node_listContext::node_list_item(size_t i) {
  return getRuleContext<ELDOParser::Node_list_itemContext>(i);
}

std::vector<tree::TerminalNode *> ELDOParser::Node_listContext::COMMA() {
  return getTokens(ELDOParser::COMMA);
}

tree::TerminalNode* ELDOParser::Node_listContext::COMMA(size_t i) {
  return getToken(ELDOParser::COMMA, i);
}

tree::TerminalNode* ELDOParser::Node_listContext::OPEN_ROUND() {
  return getToken(ELDOParser::OPEN_ROUND, 0);
}

tree::TerminalNode* ELDOParser::Node_listContext::CLOSE_ROUND() {
  return getToken(ELDOParser::CLOSE_ROUND, 0);
}


size_t ELDOParser::Node_listContext::getRuleIndex() const {
  return ELDOParser::RuleNode_list;
}

void ELDOParser::Node_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNode_list(this);
}

void ELDOParser::Node_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNode_list(this);
}


antlrcpp::Any ELDOParser::Node_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNode_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Node_listContext* ELDOParser::node_list() {
  Node_listContext *_localctx = _tracker.createInstance<Node_listContext>(_ctx, getState());
  enterRule(_localctx, 312, ELDOParser::RuleNode_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1457);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ELDOParser::NUMBER:
      case ELDOParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(1442); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(1438);
                  node_list_item();
                  setState(1440);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == ELDOParser::COMMA) {
                    setState(1439);
                    match(ELDOParser::COMMA);
                  }
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(1444); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case ELDOParser::OPEN_ROUND: {
        enterOuterAlt(_localctx, 2);
        setState(1446);
        match(ELDOParser::OPEN_ROUND);
        setState(1451); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1447);
          node_list_item();
          setState(1449);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == ELDOParser::COMMA) {
            setState(1448);
            match(ELDOParser::COMMA);
          }
          setState(1453); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ELDOParser::NUMBER

        || _la == ELDOParser::ID);
        setState(1455);
        match(ELDOParser::CLOSE_ROUND);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Node_list_itemContext ------------------------------------------------------------------

ELDOParser::Node_list_itemContext::Node_list_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::NodeContext* ELDOParser::Node_list_itemContext::node() {
  return getRuleContext<ELDOParser::NodeContext>(0);
}


size_t ELDOParser::Node_list_itemContext::getRuleIndex() const {
  return ELDOParser::RuleNode_list_item;
}

void ELDOParser::Node_list_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNode_list_item(this);
}

void ELDOParser::Node_list_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNode_list_item(this);
}


antlrcpp::Any ELDOParser::Node_list_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNode_list_item(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Node_list_itemContext* ELDOParser::node_list_item() {
  Node_list_itemContext *_localctx = _tracker.createInstance<Node_list_itemContext>(_ctx, getState());
  enterRule(_localctx, 314, ELDOParser::RuleNode_list_item);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1459);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Node_mappingContext ------------------------------------------------------------------

ELDOParser::Node_mappingContext::Node_mappingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ELDOParser::NodeContext *> ELDOParser::Node_mappingContext::node() {
  return getRuleContexts<ELDOParser::NodeContext>();
}

ELDOParser::NodeContext* ELDOParser::Node_mappingContext::node(size_t i) {
  return getRuleContext<ELDOParser::NodeContext>(i);
}

tree::TerminalNode* ELDOParser::Node_mappingContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}


size_t ELDOParser::Node_mappingContext::getRuleIndex() const {
  return ELDOParser::RuleNode_mapping;
}

void ELDOParser::Node_mappingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNode_mapping(this);
}

void ELDOParser::Node_mappingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNode_mapping(this);
}


antlrcpp::Any ELDOParser::Node_mappingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNode_mapping(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Node_mappingContext* ELDOParser::node_mapping() {
  Node_mappingContext *_localctx = _tracker.createInstance<Node_mappingContext>(_ctx, getState());
  enterRule(_localctx, 316, ELDOParser::RuleNode_mapping);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1461);
    node();
    setState(1462);
    match(ELDOParser::EQUAL);
    setState(1463);
    node();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NodeContext ------------------------------------------------------------------

ELDOParser::NodeContext::NodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::NodeContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::NodeContext::NUMBER() {
  return getToken(ELDOParser::NUMBER, 0);
}

tree::TerminalNode* ELDOParser::NodeContext::DOT() {
  return getToken(ELDOParser::DOT, 0);
}

ELDOParser::NodeContext* ELDOParser::NodeContext::node() {
  return getRuleContext<ELDOParser::NodeContext>(0);
}


size_t ELDOParser::NodeContext::getRuleIndex() const {
  return ELDOParser::RuleNode;
}

void ELDOParser::NodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNode(this);
}

void ELDOParser::NodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNode(this);
}


antlrcpp::Any ELDOParser::NodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitNode(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::NodeContext* ELDOParser::node() {
  NodeContext *_localctx = _tracker.createInstance<NodeContext>(_ctx, getState());
  enterRule(_localctx, 318, ELDOParser::RuleNode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1465);
    _la = _input->LA(1);
    if (!(_la == ELDOParser::NUMBER

    || _la == ELDOParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::DOT) {
      setState(1466);
      match(ELDOParser::DOT);
      setState(1467);
      node();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

ELDOParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Parameter_listContext::PARAM_LIST_START() {
  return getToken(ELDOParser::PARAM_LIST_START, 0);
}

tree::TerminalNode* ELDOParser::Parameter_listContext::OPEN_ROUND() {
  return getToken(ELDOParser::OPEN_ROUND, 0);
}

std::vector<ELDOParser::Parameter_list_itemContext *> ELDOParser::Parameter_listContext::parameter_list_item() {
  return getRuleContexts<ELDOParser::Parameter_list_itemContext>();
}

ELDOParser::Parameter_list_itemContext* ELDOParser::Parameter_listContext::parameter_list_item(size_t i) {
  return getRuleContext<ELDOParser::Parameter_list_itemContext>(i);
}

tree::TerminalNode* ELDOParser::Parameter_listContext::CLOSE_ROUND() {
  return getToken(ELDOParser::CLOSE_ROUND, 0);
}


size_t ELDOParser::Parameter_listContext::getRuleIndex() const {
  return ELDOParser::RuleParameter_list;
}

void ELDOParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void ELDOParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}


antlrcpp::Any ELDOParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Parameter_listContext* ELDOParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 320, ELDOParser::RuleParameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::PARAM_LIST_START) {
      setState(1470);
      match(ELDOParser::PARAM_LIST_START);
    }
    setState(1474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::OPEN_ROUND) {
      setState(1473);
      match(ELDOParser::OPEN_ROUND);
    }
    setState(1477); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1476);
              parameter_list_item();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1479); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::CLOSE_ROUND) {
      setState(1481);
      match(ELDOParser::CLOSE_ROUND);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_list_itemContext ------------------------------------------------------------------

ELDOParser::Parameter_list_itemContext::Parameter_list_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::ParameterContext* ELDOParser::Parameter_list_itemContext::parameter() {
  return getRuleContext<ELDOParser::ParameterContext>(0);
}


size_t ELDOParser::Parameter_list_itemContext::getRuleIndex() const {
  return ELDOParser::RuleParameter_list_item;
}

void ELDOParser::Parameter_list_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list_item(this);
}

void ELDOParser::Parameter_list_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list_item(this);
}


antlrcpp::Any ELDOParser::Parameter_list_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitParameter_list_item(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Parameter_list_itemContext* ELDOParser::parameter_list_item() {
  Parameter_list_itemContext *_localctx = _tracker.createInstance<Parameter_list_itemContext>(_ctx, getState());
  enterRule(_localctx, 322, ELDOParser::RuleParameter_list_item);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1484);
    parameter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

ELDOParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Parameter_idContext* ELDOParser::ParameterContext::parameter_id() {
  return getRuleContext<ELDOParser::Parameter_idContext>(0);
}

tree::TerminalNode* ELDOParser::ParameterContext::EQUAL() {
  return getToken(ELDOParser::EQUAL, 0);
}

ELDOParser::ExpressionContext* ELDOParser::ParameterContext::expression() {
  return getRuleContext<ELDOParser::ExpressionContext>(0);
}


size_t ELDOParser::ParameterContext::getRuleIndex() const {
  return ELDOParser::RuleParameter;
}

void ELDOParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void ELDOParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any ELDOParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::ParameterContext* ELDOParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 324, ELDOParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1486);
    parameter_id();
    setState(1489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ELDOParser::EQUAL) {
      setState(1487);
      match(ELDOParser::EQUAL);
      setState(1488);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_idContext ------------------------------------------------------------------

ELDOParser::Parameter_idContext::Parameter_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Parameter_idContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Parameter_idContext::MOD() {
  return getToken(ELDOParser::MOD, 0);
}

tree::TerminalNode* ELDOParser::Parameter_idContext::MODEL() {
  return getToken(ELDOParser::MODEL, 0);
}

ELDOParser::Parameter_id_accessContext* ELDOParser::Parameter_idContext::parameter_id_access() {
  return getRuleContext<ELDOParser::Parameter_id_accessContext>(0);
}


size_t ELDOParser::Parameter_idContext::getRuleIndex() const {
  return ELDOParser::RuleParameter_id;
}

void ELDOParser::Parameter_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_id(this);
}

void ELDOParser::Parameter_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_id(this);
}


antlrcpp::Any ELDOParser::Parameter_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitParameter_id(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Parameter_idContext* ELDOParser::parameter_id() {
  Parameter_idContext *_localctx = _tracker.createInstance<Parameter_idContext>(_ctx, getState());
  enterRule(_localctx, 326, ELDOParser::RuleParameter_id);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1491);
    _la = _input->LA(1);
    if (!(_la == ELDOParser::MOD

    || _la == ELDOParser::MODEL || _la == ELDOParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1493);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx)) {
    case 1: {
      setState(1492);
      parameter_id_access();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_id_accessContext ------------------------------------------------------------------

ELDOParser::Parameter_id_accessContext::Parameter_id_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Parameter_id_accessContext::OPEN_ROUND() {
  return getToken(ELDOParser::OPEN_ROUND, 0);
}

tree::TerminalNode* ELDOParser::Parameter_id_accessContext::CLOSE_ROUND() {
  return getToken(ELDOParser::CLOSE_ROUND, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::Parameter_id_accessContext::ID() {
  return getTokens(ELDOParser::ID);
}

tree::TerminalNode* ELDOParser::Parameter_id_accessContext::ID(size_t i) {
  return getToken(ELDOParser::ID, i);
}

std::vector<tree::TerminalNode *> ELDOParser::Parameter_id_accessContext::COMMA() {
  return getTokens(ELDOParser::COMMA);
}

tree::TerminalNode* ELDOParser::Parameter_id_accessContext::COMMA(size_t i) {
  return getToken(ELDOParser::COMMA, i);
}


size_t ELDOParser::Parameter_id_accessContext::getRuleIndex() const {
  return ELDOParser::RuleParameter_id_access;
}

void ELDOParser::Parameter_id_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_id_access(this);
}

void ELDOParser::Parameter_id_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_id_access(this);
}


antlrcpp::Any ELDOParser::Parameter_id_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitParameter_id_access(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Parameter_id_accessContext* ELDOParser::parameter_id_access() {
  Parameter_id_accessContext *_localctx = _tracker.createInstance<Parameter_id_accessContext>(_ctx, getState());
  enterRule(_localctx, 328, ELDOParser::RuleParameter_id_access);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1495);
    match(ELDOParser::OPEN_ROUND);
    setState(1500); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1496);
      match(ELDOParser::ID);
      setState(1498);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ELDOParser::COMMA) {
        setState(1497);
        match(ELDOParser::COMMA);
      }
      setState(1502); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ELDOParser::ID);
    setState(1504);
    match(ELDOParser::CLOSE_ROUND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilepathContext ------------------------------------------------------------------

ELDOParser::FilepathContext::FilepathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ELDOParser::Filepath_elementContext* ELDOParser::FilepathContext::filepath_element() {
  return getRuleContext<ELDOParser::Filepath_elementContext>(0);
}


size_t ELDOParser::FilepathContext::getRuleIndex() const {
  return ELDOParser::RuleFilepath;
}

void ELDOParser::FilepathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilepath(this);
}

void ELDOParser::FilepathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilepath(this);
}


antlrcpp::Any ELDOParser::FilepathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFilepath(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::FilepathContext* ELDOParser::filepath() {
  FilepathContext *_localctx = _tracker.createInstance<FilepathContext>(_ctx, getState());
  enterRule(_localctx, 330, ELDOParser::RuleFilepath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1506);
    filepath_element();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filepath_elementContext ------------------------------------------------------------------

ELDOParser::Filepath_elementContext::Filepath_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::ID() {
  return getToken(ELDOParser::ID, 0);
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::STRING() {
  return getToken(ELDOParser::STRING, 0);
}

ELDOParser::Filepath_elementContext* ELDOParser::Filepath_elementContext::filepath_element() {
  return getRuleContext<ELDOParser::Filepath_elementContext>(0);
}

std::vector<tree::TerminalNode *> ELDOParser::Filepath_elementContext::APEX() {
  return getTokens(ELDOParser::APEX);
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::APEX(size_t i) {
  return getToken(ELDOParser::APEX, i);
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::SLASH() {
  return getToken(ELDOParser::SLASH, 0);
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::DOT() {
  return getToken(ELDOParser::DOT, 0);
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::MINUS() {
  return getToken(ELDOParser::MINUS, 0);
}

tree::TerminalNode* ELDOParser::Filepath_elementContext::DOLLAR() {
  return getToken(ELDOParser::DOLLAR, 0);
}


size_t ELDOParser::Filepath_elementContext::getRuleIndex() const {
  return ELDOParser::RuleFilepath_element;
}

void ELDOParser::Filepath_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilepath_element(this);
}

void ELDOParser::Filepath_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilepath_element(this);
}


antlrcpp::Any ELDOParser::Filepath_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitFilepath_element(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::Filepath_elementContext* ELDOParser::filepath_element() {
  Filepath_elementContext *_localctx = _tracker.createInstance<Filepath_elementContext>(_ctx, getState());
  enterRule(_localctx, 332, ELDOParser::RuleFilepath_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1524);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1508);
      match(ELDOParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1509);
      match(ELDOParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1510);
      match(ELDOParser::ID);
      setState(1511);
      filepath_element();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1512);
      match(ELDOParser::APEX);
      setState(1513);
      filepath_element();
      setState(1514);
      match(ELDOParser::APEX);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1516);
      match(ELDOParser::SLASH);
      setState(1517);
      filepath_element();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1518);
      match(ELDOParser::DOT);
      setState(1519);
      filepath_element();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1520);
      match(ELDOParser::MINUS);
      setState(1521);
      filepath_element();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1522);
      match(ELDOParser::DOLLAR);
      setState(1523);
      filepath_element();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- End_of_lineContext ------------------------------------------------------------------

ELDOParser::End_of_lineContext::End_of_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ELDOParser::End_of_lineContext::EOF() {
  return getToken(ELDOParser::EOF, 0);
}

std::vector<tree::TerminalNode *> ELDOParser::End_of_lineContext::NL() {
  return getTokens(ELDOParser::NL);
}

tree::TerminalNode* ELDOParser::End_of_lineContext::NL(size_t i) {
  return getToken(ELDOParser::NL, i);
}


size_t ELDOParser::End_of_lineContext::getRuleIndex() const {
  return ELDOParser::RuleEnd_of_line;
}

void ELDOParser::End_of_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnd_of_line(this);
}

void ELDOParser::End_of_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ELDOParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnd_of_line(this);
}


antlrcpp::Any ELDOParser::End_of_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ELDOParserVisitor*>(visitor))
    return parserVisitor->visitEnd_of_line(this);
  else
    return visitor->visitChildren(this);
}

ELDOParser::End_of_lineContext* ELDOParser::end_of_line() {
  End_of_lineContext *_localctx = _tracker.createInstance<End_of_lineContext>(_ctx, getState());
  enterRule(_localctx, 334, ELDOParser::RuleEnd_of_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1533);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      setState(1529);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1526);
          match(ELDOParser::NL); 
        }
        setState(1531);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
      }
      break;
    }

    case 2: {
      setState(1532);
      match(ELDOParser::EOF);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ELDOParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 150: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ELDOParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ELDOParser::_decisionToDFA;
atn::PredictionContextCache ELDOParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ELDOParser::_atn;
std::vector<uint16_t> ELDOParser::_serializedATN;

std::vector<std::string> ELDOParser::_ruleNames = {
  "netlist", "netlist_title", "netlist_entity", "include", "standard_include", 
  "verilog_include", "dspf_include", "library", "library_key", "library_path", 
  "library_name", "library_def", "library_def_header", "library_def_content", 
  "library_def_footer", "subckt", "subckt_header", "subckt_content", "subckt_footer", 
  "analysis", "ac", "ac_parameter_driven", "ac_data_driven", "ac_list_driven", 
  "ac_adaptive", "age", "checksoa", "dc", "dc_component_analysis", "dc_source_analysis", 
  "dc_temperature_analysis", "dc_parameter_analysis", "dc_data_driven_analysis", 
  "dchiz", "dcmismatch", "dex", "dsp", "dspmod", "four", "lstb", "mc", "noise", 
  "noisetran", "op", "op_selective", "op_time_based", "op_dc_based", "optfour", 
  "optimize", "optnoise", "pz", "ramp", "sens", "sensac", "sensparam", "snf", 
  "solve", "solve_parameter", "solve_object", "solve_component", "tf", "tran", 
  "tran_point_driven", "tran_parameterized", "tran_data_driven", "wcase", 
  "extract", "global", "model", "model_lib", "model_name", "model_master", 
  "model_lib_type", "control", "alter", "alter_header", "alter_content", 
  "alter_footer", "save", "save_file", "save_when", "option", "nodeset", 
  "call_tcl", "call_tcl_when", "use_tcl", "defmac", "chrent", "chrent_behaviour", 
  "chrent_point", "chrent_pair", "ic", "ic_content", "ic_subckt", "print", 
  "plot", "ffile", "ffile_tabulation", "ffile_singleline", "ffile_unit", 
  "ffile_storage_format", "probe", "defwave", "temp", "meas", "meas_info", 
  "meas_vect", "meas_catvect", "meas_targ", "connect", "global_declarations", 
  "component", "component_type", "component_attribute", "component_value", 
  "component_parameter_list", "component_analysis", "component_positional_keywork", 
  "component_pin_list", "component_port_list", "component_net_list", "component_coupling_list", 
  "component_table", "component_value_list", "interp_type", "resistor", 
  "capacitor", "inductor", "coupled_inductor", "diffusion_resistor", "transmission_line", 
  "lossy_transmission_line", "ltl_w_model", "ltl_u_model", "junction_diode", 
  "bjt", "jfet", "mosfet", "subckt_instance", "ivsource", "icsource", "vcvs", 
  "cccs", "vccs", "ccvs", "noise_function", "sw", "operational_amplifier", 
  "two_input_gate", "end", "expression", "expression_unary", "expression_function_call", 
  "expression_list", "expression_operator", "expression_atom", "node_list", 
  "node_list_item", "node_mapping", "node", "parameter_list", "parameter_list_item", 
  "parameter", "parameter_id", "parameter_id_access", "filepath", "filepath_element", 
  "end_of_line"
};

std::vector<std::string> ELDOParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "'='", "'!'", "'<'", "'>'", "", "", 
  "", "", "", "", "", "", "", "", "", "", "'and'", "'or'", "':'", "';'", 
  "'+'", "'-'", "'*'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'?'", 
  "','", "'$'", "'&'", "'.'", "'_'", "'@'", "'#'", "'\\'", "'/'", "'''", 
  "'\"'", "'|'", "'%'", "'^'", "'~'"
};

std::vector<std::string> ELDOParser::_symbolicNames = {
  "", "COMMENT", "INCLUDE", "DSPF_INCLUDE", "LIB", "LIB_END", "SUBCKT", 
  "SUBCKT_END", "NETLIST_END", "GLOBAL", "MODEL_DEF", "VERILOG", "GLOBAL_PARAM", 
  "ALTER", "SAVE", "OPTION", "OPT", "NODESET", "CALL_TCL", "CHRENT", "CONNECT", 
  "DEFMAC", "DEFWAVE", "FFILE", "IC", "MEAS", "PLOT", "PRINT", "PROBE", 
  "TEMP_SET", "USE_TCL", "PARAM", "TEMP", "KEY", "NONOISE", "TABLE", "PWL", 
  "SIN", "SFFM", "PULSE", "INTERP", "MOD", "MODEL", "WHEN", "START", "START_OF_RUN", 
  "END_OF_RUN", "END", "FIND", "PP", "TRIG", "TARG", "PARAM_LIST_START", 
  "PIN_LIST_START", "NET_LIST_START", "PORT_LIST_START", "COUPLING_LIST_START", 
  "GENERIC_LIST_START", "AC", "AGE", "CHECKSOA", "DC", "DCHIZ", "DCMISMATCH", 
  "DEX", "DSP", "DSPMOD", "FOUR", "LSTB", "MC", "NOISE", "NOISETRAN", "OP", 
  "OPTFOUR", "OPTIMIZE", "OPTNOISE", "PZ", "RAMP", "SENS", "SENSAC", "SENSPARAM", 
  "SNF", "SOLVE", "TF", "TRAN", "WCASE", "EXTRACT", "RESISTOR", "CAPACITOR", 
  "INDUCTOR", "COUPLED_INDUCTOR", "DIFFUSION_RESISTOR", "TRANSMISSION_LINE", 
  "LOSSY_TRANSMISSION_LINE", "LTL_W_MODEL", "LTL_U_MODEL", "JUNCTION_DIODE", 
  "BJT", "JFET", "MOSFET", "S_DOMAIN_FILTER", "Z_DOMAIN_FILTER", "SUBCK_INSTANCE", 
  "IVSOURCE", "ICSOURCE", "VCVS", "CCCS", "VCCS", "CCVS", "OPA", "SW", "NOISE_FUNCTION", 
  "DIG_NAND", "DIG_AND", "DIG_NOR", "DIG_OR", "DIG_XOR", "EQUAL", "EXCLAMATION_MARK", 
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", 
  "LOGIC_EQUAL", "LOGIC_NOT_EQUAL", "LOGIC_AND", "LOGIC_OR", "LOGIC_BITWISE_AND", 
  "LOGIC_BITWISE_OR", "LOGIC_XOR", "BITWISE_SHIFT_LEFT", "BITWISE_SHIFT_RIGHT", 
  "POWER_OPERATOR", "AND", "OR", "COLON", "SEMICOLON", "PLUS", "MINUS", 
  "STAR", "OPEN_ROUND", "CLOSE_ROUND", "OPEN_SQUARE", "CLOSE_SQUARE", "OPEN_CURLY", 
  "CLOSE_CURLY", "QUESTION_MARK", "COMMA", "DOLLAR", "AMPERSAND", "DOT", 
  "UNDERSCORE", "AT_SIGN", "POUND_SIGN", "BACKSLASH", "SLASH", "APEX", "QUOTES", 
  "PIPE", "PERCENT", "CARET", "TILDE", "ARROW", "PERCENTAGE", "COMPLEX", 
  "NUMBER", "ID", "STRING", "NL", "WS", "CNL"
};

dfa::Vocabulary ELDOParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ELDOParser::_tokenNames;

ELDOParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xac, 0x602, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x3, 0x2, 0x5, 0x2, 
    0x154, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x158, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x15b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 
    0x160, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x161, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x16f, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x174, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x181, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x185, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x18b, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x18f, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x19d, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x19e, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1ac, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x1b0, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 
    0x1b1, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x1b9, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1bc, 0xa, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0x1bf, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1c7, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1e8, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1ef, 0xa, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x5, 0x17, 0x1f8, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x1fc, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x200, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
    0x1d, 0x215, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x5, 0x1e, 0x21b, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x21e, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x224, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x228, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x231, 
    0xa, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x234, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x23b, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x240, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x246, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x24a, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x252, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x25a, 0xa, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x261, 
    0xa, 0x26, 0x3, 0x26, 0x5, 0x26, 0x264, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x5, 0x26, 0x268, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x270, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x278, 0xa, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x283, 0xa, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x292, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x29a, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 
    0x5, 0x2e, 0x29f, 0xa, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x2a2, 0xa, 0x2e, 
    0xc, 0x2e, 0xe, 0x2e, 0x2a5, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
    0x2a9, 0xa, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2ac, 0xa, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x5, 0x30, 0x2b0, 0xa, 0x30, 0x3, 0x30, 0x5, 0x30, 0x2b3, 
    0xa, 0x30, 0x3, 0x30, 0x5, 0x30, 0x2b6, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x2ba, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 
    0x5, 0x32, 0x2c0, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x5, 0x33, 0x2c6, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 
    0x35, 0x2d2, 0xa, 0x35, 0x3, 0x35, 0x5, 0x35, 0x2d5, 0xa, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x5, 0x38, 0x2e5, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x2ed, 0xa, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2f5, 
    0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x5, 0x3c, 0x303, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x30d, 0xa, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x5, 0x3f, 0x31d, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x325, 0xa, 0x40, 0x5, 0x40, 
    0x327, 0xa, 0x40, 0x3, 0x40, 0x5, 0x40, 0x32a, 0xa, 0x40, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 0x32f, 0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 
    0x330, 0x3, 0x41, 0x5, 0x41, 0x334, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x33b, 0xa, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x341, 0xa, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x347, 0xa, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x34f, 
    0xa, 0x46, 0x3, 0x46, 0x5, 0x46, 0x352, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x35b, 
    0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x35f, 0xa, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
    0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x37a, 
    0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x6, 0x4c, 0x37e, 0xa, 0x4c, 0xd, 0x4c, 
    0xe, 0x4c, 0x37f, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 
    0x7, 0x4d, 0x387, 0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 0x38a, 0xb, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x50, 0x3, 0x50, 0x5, 0x50, 0x394, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x5, 0x50, 0x398, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 
    0x5, 0x51, 0x39e, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x5, 0x52, 0x3a5, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 
    0x55, 0x5, 0x55, 0x3b1, 0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3b4, 0xa, 
    0x55, 0x3, 0x55, 0x5, 0x55, 0x3b7, 0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 
    0x3ba, 0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3bd, 0xa, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x3d1, 0xa, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x6, 0x5a, 0x3d6, 0xa, 0x5a, 0xd, 0x5a, 
    0xe, 0x5a, 0x3d7, 0x3, 0x5b, 0x6, 0x5b, 0x3db, 0xa, 0x5b, 0xd, 0x5b, 
    0xe, 0x5b, 0x3dc, 0x3, 0x5b, 0x5, 0x5b, 0x3e0, 0xa, 0x5b, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x6, 0x5d, 0x3e7, 0xa, 0x5d, 
    0xd, 0x5d, 0xe, 0x5d, 0x3e8, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 
    0x5, 0x5e, 0x3ef, 0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x3f7, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x3fe, 0xa, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x406, 
    0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x40a, 0xa, 0x62, 0x3, 0x62, 
    0x5, 0x62, 0x40d, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x67, 0x3, 0x67, 0x5, 0x67, 0x41b, 0xa, 0x67, 0x3, 0x67, 0x5, 0x67, 
    0x41e, 0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 
    0x424, 0xa, 0x68, 0x3, 0x68, 0x5, 0x68, 0x427, 0xa, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x6, 0x69, 0x42e, 0xa, 0x69, 
    0xd, 0x69, 0xe, 0x69, 0x42f, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 
    0x5, 0x6a, 0x436, 0xa, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x439, 0xa, 0x6a, 
    0x3, 0x6a, 0x5, 0x6a, 0x43c, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x5, 0x6a, 0x442, 0xa, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x445, 
    0xa, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x448, 0xa, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 
    0x44b, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 
    0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
    0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x7, 0x71, 0x464, 
    0xa, 0x71, 0xc, 0x71, 0xe, 0x71, 0x467, 0xb, 0x71, 0x3, 0x71, 0x3, 0x71, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x483, 
    0xa, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
    0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 
    0x490, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x495, 
    0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x49a, 0xa, 0x74, 
    0x5, 0x74, 0x49c, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 
    0x4a1, 0xa, 0x75, 0x3, 0x75, 0x5, 0x75, 0x4a4, 0xa, 0x75, 0x3, 0x76, 
    0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x4a9, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 
    0x3, 0x76, 0x5, 0x76, 0x4ae, 0xa, 0x76, 0x5, 0x76, 0x4b0, 0xa, 0x76, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 
    0x79, 0x3, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 
    0x6, 0x7b, 0x4bf, 0xa, 0x7b, 0xd, 0x7b, 0xe, 0x7b, 0x4c0, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x6, 0x7c, 0x4c7, 0xa, 0x7c, 0xd, 0x7c, 
    0xe, 0x7c, 0x4c8, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x6, 0x7d, 0x4ce, 
    0xa, 0x7d, 0xd, 0x7d, 0xe, 0x7d, 0x4cf, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
    0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x3, 0x81, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 
    0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x4ec, 0xa, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 0x3, 
    0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x505, 0xa, 0x89, 
    0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 
    0x89, 0x5, 0x89, 0x50e, 0xa, 0x89, 0x3, 0x89, 0x5, 0x89, 0x511, 0xa, 
    0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x515, 0xa, 0x89, 0x3, 0x8a, 
    0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 
    0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x521, 0xa, 0x8b, 0x3, 0x8b, 
    0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 
    0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x52c, 0xa, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 
    0x52f, 0xa, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 
    0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
    0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 0x3, 0x91, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 
    0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
    0x5, 0x94, 0x550, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x554, 
    0xa, 0x94, 0x5, 0x94, 0x556, 0xa, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
    0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x55e, 0xa, 0x95, 0x3, 0x96, 
    0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x5, 0x96, 0x566, 
    0xa, 0x96, 0x3, 0x96, 0x5, 0x96, 0x569, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
    0x98, 0x3, 0x98, 0x5, 0x98, 0x575, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 
    0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
    0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 
    0x585, 0xa, 0x98, 0x7, 0x98, 0x587, 0xa, 0x98, 0xc, 0x98, 0xe, 0x98, 
    0x58a, 0xb, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 
    0x3, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x595, 0xa, 0x9b, 
    0x6, 0x9b, 0x597, 0xa, 0x9b, 0xd, 0x9b, 0xe, 0x9b, 0x598, 0x3, 0x9b, 
    0x3, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 
    0x9e, 0x5, 0x9e, 0x5a3, 0xa, 0x9e, 0x6, 0x9e, 0x5a5, 0xa, 0x9e, 0xd, 
    0x9e, 0xe, 0x9e, 0x5a6, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 
    0x5ac, 0xa, 0x9e, 0x6, 0x9e, 0x5ae, 0xa, 0x9e, 0xd, 0x9e, 0xe, 0x9e, 
    0x5af, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x5b4, 0xa, 0x9e, 0x3, 0x9f, 
    0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa1, 0x3, 
    0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x5bf, 0xa, 0xa1, 0x3, 0xa2, 0x5, 0xa2, 
    0x5c2, 0xa, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x5c5, 0xa, 0xa2, 0x3, 0xa2, 
    0x6, 0xa2, 0x5c8, 0xa, 0xa2, 0xd, 0xa2, 0xe, 0xa2, 0x5c9, 0x3, 0xa2, 
    0x5, 0xa2, 0x5cd, 0xa, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 
    0x3, 0xa4, 0x5, 0xa4, 0x5d4, 0xa, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 
    0x5d8, 0xa, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x5dd, 
    0xa, 0xa6, 0x6, 0xa6, 0x5df, 0xa, 0xa6, 0xd, 0xa6, 0xe, 0xa6, 0x5e0, 
    0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 
    0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
    0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 
    0xa8, 0x5, 0xa8, 0x5f7, 0xa, 0xa8, 0x3, 0xa9, 0x7, 0xa9, 0x5fa, 0xa, 
    0xa9, 0xc, 0xa9, 0xe, 0xa9, 0x5fd, 0xb, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 
    0x600, 0xa, 0xa9, 0x3, 0xa9, 0x2, 0x3, 0x12e, 0xaa, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
    0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
    0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
    0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
    0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
    0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 
    0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 
    0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 
    0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 
    0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 
    0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 
    0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 
    0x14c, 0x14e, 0x150, 0x2, 0x12, 0x4, 0x2, 0xf, 0xf, 0x31, 0x31, 0x3, 
    0x2, 0x11, 0x12, 0x3, 0x2, 0x2e, 0x31, 0x5, 0x2, 0x21, 0x21, 0x32, 0x34, 
    0xa8, 0xa8, 0x4, 0x2, 0x36, 0x36, 0x3b, 0x3b, 0x4, 0x2, 0x3c, 0x3c, 
    0x3f, 0x3f, 0x3, 0x2, 0x26, 0x29, 0x3, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x72, 
    0x76, 0x3, 0x2, 0x8b, 0x8c, 0x4, 0x2, 0x2b, 0x2c, 0xa8, 0xa8, 0x5, 0x2, 
    0x8e, 0x8e, 0x90, 0x90, 0x92, 0x92, 0x5, 0x2, 0x8f, 0x8f, 0x91, 0x91, 
    0x93, 0x93, 0x6, 0x2, 0x77, 0x86, 0x8b, 0x8d, 0x9d, 0x9d, 0xa1, 0xa2, 
    0x4, 0x2, 0xa5, 0xa5, 0xa7, 0xa9, 0x3, 0x2, 0xa7, 0xa8, 0x2, 0x65e, 
    0x2, 0x153, 0x3, 0x2, 0x2, 0x2, 0x4, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x6, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x173, 0x3, 0x2, 0x2, 0x2, 0xa, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x179, 0x3, 0x2, 0x2, 0x2, 0xe, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x10, 0x188, 0x3, 0x2, 0x2, 0x2, 0x12, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x196, 0x3, 0x2, 0x2, 0x2, 0x16, 0x198, 0x3, 0x2, 0x2, 
    0x2, 0x18, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1c2, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x201, 0x3, 0x2, 0x2, 0x2, 0x34, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x225, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x235, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x247, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x46, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x255, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x25d, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x273, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x52, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x286, 0x3, 0x2, 0x2, 0x2, 0x56, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x58, 0x295, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x2a6, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2b7, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2c3, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2cd, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x2e0, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2f0, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2ff, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x309, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x313, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x318, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x320, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x82, 0x335, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x337, 0x3, 0x2, 0x2, 0x2, 0x86, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x344, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x360, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x362, 0x3, 0x2, 0x2, 0x2, 0x90, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x366, 0x3, 0x2, 0x2, 0x2, 0x94, 0x379, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x98, 0x384, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x38f, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x391, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x39d, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0x3a4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3aa, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x3c0, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0xae, 0x3c8, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x3d5, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0x3da, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x3e1, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0xba, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0x3f0, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x3fb, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0x402, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x410, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0x412, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x414, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0x416, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x418, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0x421, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x42b, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0x433, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x44e, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0x450, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x452, 0x3, 0x2, 0x2, 0x2, 0xda, 0x454, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0x458, 0x3, 0x2, 0x2, 0x2, 0xde, 0x45d, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0x461, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x482, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0x48f, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x49b, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0xea, 0x4af, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0xee, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0x4b6, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x4bc, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x4ca, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x4d7, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x100, 0x4df, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x104, 0x4e7, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x108, 0x4f5, 0x3, 0x2, 0x2, 
    0x2, 0x10a, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x4f9, 0x3, 0x2, 0x2, 
    0x2, 0x10e, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x110, 0x514, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x516, 0x3, 0x2, 0x2, 0x2, 0x114, 0x51c, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x118, 0x530, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x534, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x538, 0x3, 0x2, 0x2, 
    0x2, 0x11e, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x120, 0x540, 0x3, 0x2, 0x2, 
    0x2, 0x122, 0x544, 0x3, 0x2, 0x2, 0x2, 0x124, 0x548, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x557, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x56c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x574, 0x3, 0x2, 0x2, 0x2, 0x130, 0x58b, 0x3, 0x2, 0x2, 
    0x2, 0x132, 0x58e, 0x3, 0x2, 0x2, 0x2, 0x134, 0x591, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x138, 0x59e, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x5b5, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x140, 0x5bb, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x5c1, 0x3, 0x2, 0x2, 0x2, 0x144, 0x5ce, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x148, 0x5d5, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x5e4, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x150, 0x5ff, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x154, 0x5, 0x4, 0x3, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x159, 0x5, 0x150, 0xa9, 0x2, 0x156, 0x158, 0x5, 0x6, 0x4, 
    0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15d, 0x5, 0x150, 0xa9, 0x2, 0x15d, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x160, 0x7, 0xa8, 0x2, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x163, 0x16f, 0x5, 0x8, 0x5, 0x2, 0x164, 0x16f, 0x5, 0x10, 0x9, 0x2, 
    0x165, 0x16f, 0x5, 0x18, 0xd, 0x2, 0x166, 0x16f, 0x5, 0x20, 0x11, 0x2, 
    0x167, 0x16f, 0x5, 0x28, 0x15, 0x2, 0x168, 0x16f, 0x5, 0x88, 0x45, 0x2, 
    0x169, 0x16f, 0x5, 0x8a, 0x46, 0x2, 0x16a, 0x16f, 0x5, 0xde, 0x70, 0x2, 
    0x16b, 0x16f, 0x5, 0x94, 0x4b, 0x2, 0x16c, 0x16f, 0x5, 0xe0, 0x71, 0x2, 
    0x16d, 0x16f, 0x5, 0x12c, 0x97, 0x2, 0x16e, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x164, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x165, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x166, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x169, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16b, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x16f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x170, 0x174, 0x5, 0xa, 0x6, 0x2, 0x171, 
    0x174, 0x5, 0xe, 0x8, 0x2, 0x172, 0x174, 0x5, 0xc, 0x7, 0x2, 0x173, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 0x9, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 
    0x7, 0x4, 0x2, 0x2, 0x176, 0x177, 0x5, 0x14c, 0xa7, 0x2, 0x177, 0x178, 
    0x5, 0x150, 0xa9, 0x2, 0x178, 0xb, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 
    0x7, 0xd, 0x2, 0x2, 0x17a, 0x17b, 0x5, 0x14c, 0xa7, 0x2, 0x17b, 0x17c, 
    0x5, 0x150, 0xa9, 0x2, 0x17c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x180, 
    0x7, 0x5, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0xa8, 0x2, 0x2, 0x17f, 0x181, 
    0x7, 0x77, 0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 
    0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 0x184, 
    0x5, 0x14c, 0xa7, 0x2, 0x183, 0x185, 0x5, 0x142, 0xa2, 0x2, 0x184, 0x183, 
    0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 
    0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x5, 0x150, 0xa9, 0x2, 0x187, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x188, 0x18a, 0x7, 0x6, 0x2, 0x2, 0x189, 0x18b, 
    0x5, 0x12, 0xa, 0x2, 0x18a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 
    0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18e, 
    0x5, 0x14, 0xb, 0x2, 0x18d, 0x18f, 0x5, 0x16, 0xc, 0x2, 0x18e, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 
    0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x5, 0x150, 0xa9, 0x2, 0x191, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x7, 0x23, 0x2, 0x2, 0x193, 0x194, 
    0x7, 0x77, 0x2, 0x2, 0x194, 0x195, 0x7, 0xa8, 0x2, 0x2, 0x195, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x5, 0x14c, 0xa7, 0x2, 0x197, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x7, 0xa8, 0x2, 0x2, 0x199, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x1a, 0xe, 0x2, 0x19b, 0x19d, 
    0x5, 0x1c, 0xf, 0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 
    0x5, 0x1e, 0x10, 0x2, 0x1a1, 0x1a2, 0x5, 0x150, 0xa9, 0x2, 0x1a2, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x6, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x5, 0x16, 0xc, 0x2, 0x1a5, 0x1a6, 0x5, 0x150, 0xa9, 0x2, 0x1a6, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x6, 0x4, 0x2, 0x1a8, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x1a9, 0x1ab, 0x7, 0x7, 0x2, 0x2, 0x1aa, 0x1ac, 0x5, 
    0x16, 0xc, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0x22, 
    0x12, 0x2, 0x1ae, 0x1b0, 0x5, 0x24, 0x13, 0x2, 0x1af, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x26, 0x14, 0x2, 0x1b4, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b6, 0x7, 0x8, 0x2, 0x2, 0x1b6, 0x1b8, 0x7, 0xa8, 
    0x2, 0x2, 0x1b7, 0x1b9, 0x5, 0x13a, 0x9e, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 
    0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1bc, 0x7, 0x36, 0x2, 0x2, 0x1bb, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0x142, 0xa2, 0x2, 0x1be, 0x1bb, 0x3, 0x2, 
    0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c1, 0x5, 0x150, 0xa9, 0x2, 0x1c1, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x6, 0x4, 0x2, 0x1c3, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c6, 0x7, 0x9, 0x2, 0x2, 0x1c5, 0x1c7, 0x7, 0xa8, 0x2, 
    0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x5, 0x150, 0xa9, 
    0x2, 0x1c9, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1e8, 0x5, 0x2a, 0x16, 
    0x2, 0x1cb, 0x1e8, 0x5, 0x34, 0x1b, 0x2, 0x1cc, 0x1e8, 0x5, 0x36, 0x1c, 
    0x2, 0x1cd, 0x1e8, 0x5, 0x38, 0x1d, 0x2, 0x1ce, 0x1e8, 0x5, 0x44, 0x23, 
    0x2, 0x1cf, 0x1e8, 0x5, 0x46, 0x24, 0x2, 0x1d0, 0x1e8, 0x5, 0x48, 0x25, 
    0x2, 0x1d1, 0x1e8, 0x5, 0x4a, 0x26, 0x2, 0x1d2, 0x1e8, 0x5, 0x4c, 0x27, 
    0x2, 0x1d3, 0x1e8, 0x5, 0x4e, 0x28, 0x2, 0x1d4, 0x1e8, 0x5, 0x50, 0x29, 
    0x2, 0x1d5, 0x1e8, 0x5, 0x52, 0x2a, 0x2, 0x1d6, 0x1e8, 0x5, 0x54, 0x2b, 
    0x2, 0x1d7, 0x1e8, 0x5, 0x56, 0x2c, 0x2, 0x1d8, 0x1e8, 0x5, 0x58, 0x2d, 
    0x2, 0x1d9, 0x1e8, 0x5, 0x60, 0x31, 0x2, 0x1da, 0x1e8, 0x5, 0x62, 0x32, 
    0x2, 0x1db, 0x1e8, 0x5, 0x64, 0x33, 0x2, 0x1dc, 0x1e8, 0x5, 0x66, 0x34, 
    0x2, 0x1dd, 0x1e8, 0x5, 0x68, 0x35, 0x2, 0x1de, 0x1e8, 0x5, 0x6a, 0x36, 
    0x2, 0x1df, 0x1e8, 0x5, 0x6c, 0x37, 0x2, 0x1e0, 0x1e8, 0x5, 0x6e, 0x38, 
    0x2, 0x1e1, 0x1e8, 0x5, 0x70, 0x39, 0x2, 0x1e2, 0x1e8, 0x5, 0x72, 0x3a, 
    0x2, 0x1e3, 0x1e8, 0x5, 0x7a, 0x3e, 0x2, 0x1e4, 0x1e8, 0x5, 0x7c, 0x3f, 
    0x2, 0x1e5, 0x1e8, 0x5, 0x84, 0x43, 0x2, 0x1e6, 0x1e8, 0x5, 0x86, 0x44, 
    0x2, 0x1e7, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1cb, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d3, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d5, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d7, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d9, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e1, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e3, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x1e9, 0x1ee, 0x7, 0x3c, 0x2, 0x2, 0x1ea, 0x1ef, 0x5, 0x2c, 0x17, 0x2, 
    0x1eb, 0x1ef, 0x5, 0x2e, 0x18, 0x2, 0x1ec, 0x1ef, 0x5, 0x30, 0x19, 0x2, 
    0x1ed, 0x1ef, 0x5, 0x32, 0x1a, 0x2, 0x1ee, 0x1ea, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x1f0, 0x1f1, 0x5, 0x150, 0xa9, 0x2, 0x1f1, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f3, 0x7, 0xa8, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0xa7, 0x2, 0x2, 
    0x1f4, 0x1f5, 0x7, 0xa7, 0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0xa7, 0x2, 0x2, 
    0x1f6, 0x1f8, 0x5, 0x142, 0xa2, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
    0x1fb, 0x5, 0x146, 0xa4, 0x2, 0x1fa, 0x1fc, 0x5, 0x142, 0xa2, 0x2, 0x1fb, 
    0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x7, 0xa8, 0x2, 0x2, 0x1fe, 
    0x200, 0x5, 0x142, 0xa2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
    0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x31, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
    0x7, 0xa8, 0x2, 0x2, 0x202, 0x203, 0x7, 0xa7, 0x2, 0x2, 0x203, 0x204, 
    0x7, 0xa7, 0x2, 0x2, 0x204, 0x205, 0x7, 0xa7, 0x2, 0x2, 0x205, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x7, 0x3d, 0x2, 0x2, 0x207, 0x208, 
    0x5, 0x142, 0xa2, 0x2, 0x208, 0x209, 0x5, 0x150, 0xa9, 0x2, 0x209, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x3e, 0x2, 0x2, 0x20b, 0x20c, 
    0x5, 0x142, 0xa2, 0x2, 0x20c, 0x20d, 0x5, 0x150, 0xa9, 0x2, 0x20d, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x20e, 0x214, 0x7, 0x3f, 0x2, 0x2, 0x20f, 0x215, 
    0x5, 0x3a, 0x1e, 0x2, 0x210, 0x215, 0x5, 0x3c, 0x1f, 0x2, 0x211, 0x215, 
    0x5, 0x3e, 0x20, 0x2, 0x212, 0x215, 0x5, 0x40, 0x21, 0x2, 0x213, 0x215, 
    0x5, 0x42, 0x22, 0x2, 0x214, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x214, 0x210, 
    0x3, 0x2, 0x2, 0x2, 0x214, 0x211, 0x3, 0x2, 0x2, 0x2, 0x214, 0x212, 
    0x3, 0x2, 0x2, 0x2, 0x214, 0x213, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 
    0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 
    0x5, 0x150, 0xa9, 0x2, 0x217, 0x39, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 
    0x7, 0xa8, 0x2, 0x2, 0x219, 0x21b, 0x7, 0xa8, 0x2, 0x2, 0x21a, 0x219, 
    0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 
    0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x7, 0xa8, 0x2, 0x2, 0x21d, 0x21c, 
    0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 
    0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x7, 0xa7, 0x2, 0x2, 0x220, 0x221, 
    0x7, 0xa7, 0x2, 0x2, 0x221, 0x223, 0x7, 0xa7, 0x2, 0x2, 0x222, 0x224, 
    0x5, 0x142, 0xa2, 0x2, 0x223, 0x222, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 
    0x3, 0x2, 0x2, 0x2, 0x224, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x225, 0x227, 0x7, 
    0xa8, 0x2, 0x2, 0x226, 0x228, 0x7, 0xa8, 0x2, 0x2, 0x227, 0x226, 0x3, 
    0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 
    0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0xa7, 0x2, 0x2, 0x22a, 0x22b, 0x7, 
    0xa7, 0x2, 0x2, 0x22b, 0x230, 0x7, 0xa7, 0x2, 0x2, 0x22c, 0x22d, 0x7, 
    0xa8, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0xa7, 0x2, 0x2, 0x22e, 0x22f, 0x7, 
    0xa7, 0x2, 0x2, 0x22f, 0x231, 0x7, 0xa7, 0x2, 0x2, 0x230, 0x22c, 0x3, 
    0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 0x3, 
    0x2, 0x2, 0x2, 0x232, 0x234, 0x5, 0x142, 0xa2, 0x2, 0x233, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 0x2, 0x2, 0x234, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x235, 0x236, 0x7, 0x22, 0x2, 0x2, 0x236, 0x237, 0x7, 0xa7, 
    0x2, 0x2, 0x237, 0x238, 0x7, 0xa7, 0x2, 0x2, 0x238, 0x23a, 0x7, 0xa7, 
    0x2, 0x2, 0x239, 0x23b, 0x5, 0x142, 0xa2, 0x2, 0x23a, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x23c, 0x23d, 0x7, 0x21, 0x2, 0x2, 0x23d, 0x23f, 0x7, 0xa8, 0x2, 
    0x2, 0x23e, 0x240, 0x7, 0xa8, 0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x240, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x242, 0x7, 0xa7, 0x2, 0x2, 0x242, 0x243, 0x7, 0xa7, 0x2, 
    0x2, 0x243, 0x245, 0x7, 0xa7, 0x2, 0x2, 0x244, 0x246, 0x5, 0x142, 0xa2, 
    0x2, 0x245, 0x244, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x246, 0x41, 0x3, 0x2, 0x2, 0x2, 0x247, 0x249, 0x5, 0x146, 0xa4, 
    0x2, 0x248, 0x24a, 0x5, 0x142, 0xa2, 0x2, 0x249, 0x248, 0x3, 0x2, 0x2, 
    0x2, 0x249, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x24c, 0x7, 0x40, 0x2, 0x2, 0x24c, 0x24d, 0x5, 0x146, 0xa4, 0x2, 
    0x24d, 0x24e, 0x5, 0x150, 0xa9, 0x2, 0x24e, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x24f, 0x251, 0x7, 0x41, 0x2, 0x2, 0x250, 0x252, 0x5, 0x142, 0xa2, 0x2, 
    0x251, 0x250, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 0x2, 0x2, 
    0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x5, 0x150, 0xa9, 0x2, 
    0x254, 0x47, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x7, 0x42, 0x2, 0x2, 
    0x256, 0x257, 0x5, 0x146, 0xa4, 0x2, 0x257, 0x259, 0x5, 0x146, 0xa4, 
    0x2, 0x258, 0x25a, 0x5, 0x142, 0xa2, 0x2, 0x259, 0x258, 0x3, 0x2, 0x2, 
    0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 0x2, 
    0x2, 0x25b, 0x25c, 0x5, 0x150, 0xa9, 0x2, 0x25c, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x25d, 0x25e, 0x7, 0x43, 0x2, 0x2, 0x25e, 0x260, 0x5, 0x146, 0xa4, 
    0x2, 0x25f, 0x261, 0x5, 0x146, 0xa4, 0x2, 0x260, 0x25f, 0x3, 0x2, 0x2, 
    0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x263, 0x3, 0x2, 0x2, 
    0x2, 0x262, 0x264, 0x5, 0x146, 0xa4, 0x2, 0x263, 0x262, 0x3, 0x2, 0x2, 
    0x2, 0x263, 0x264, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 0x2, 
    0x2, 0x265, 0x267, 0x7, 0xa8, 0x2, 0x2, 0x266, 0x268, 0x5, 0x142, 0xa2, 
    0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 
    0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x5, 0x150, 0xa9, 
    0x2, 0x26a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x44, 0x2, 
    0x2, 0x26c, 0x26d, 0x5, 0x146, 0xa4, 0x2, 0x26d, 0x26f, 0x5, 0x146, 
    0xa4, 0x2, 0x26e, 0x270, 0x5, 0x142, 0xa2, 0x2, 0x26f, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x272, 0x5, 0x150, 0xa9, 0x2, 0x272, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x273, 0x274, 0x7, 0x45, 0x2, 0x2, 0x274, 0x275, 0x5, 0x146, 
    0xa4, 0x2, 0x275, 0x277, 0x7, 0xa8, 0x2, 0x2, 0x276, 0x278, 0x5, 0x142, 
    0xa2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 
    0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x5, 0x150, 
    0xa9, 0x2, 0x27a, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x7, 0x46, 
    0x2, 0x2, 0x27c, 0x27d, 0x5, 0x14c, 0xa7, 0x2, 0x27d, 0x27e, 0x5, 0x150, 
    0xa9, 0x2, 0x27e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x47, 
    0x2, 0x2, 0x280, 0x282, 0x7, 0xa7, 0x2, 0x2, 0x281, 0x283, 0x5, 0x142, 
    0xa2, 0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x5, 0x150, 
    0xa9, 0x2, 0x285, 0x53, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 0x48, 
    0x2, 0x2, 0x287, 0x288, 0x5, 0x146, 0xa4, 0x2, 0x288, 0x289, 0x5, 0x146, 
    0xa4, 0x2, 0x289, 0x28a, 0x7, 0xa7, 0x2, 0x2, 0x28a, 0x28b, 0x5, 0x150, 
    0xa9, 0x2, 0x28b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x7, 0x49, 
    0x2, 0x2, 0x28d, 0x28e, 0x5, 0x146, 0xa4, 0x2, 0x28e, 0x28f, 0x5, 0x146, 
    0xa4, 0x2, 0x28f, 0x291, 0x5, 0x146, 0xa4, 0x2, 0x290, 0x292, 0x5, 0x142, 
    0xa2, 0x2, 0x291, 0x290, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 
    0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x5, 0x150, 
    0xa9, 0x2, 0x294, 0x57, 0x3, 0x2, 0x2, 0x2, 0x295, 0x299, 0x7, 0x4a, 
    0x2, 0x2, 0x296, 0x29a, 0x5, 0x5a, 0x2e, 0x2, 0x297, 0x29a, 0x5, 0x5c, 
    0x2f, 0x2, 0x298, 0x29a, 0x5, 0x5e, 0x30, 0x2, 0x299, 0x296, 0x3, 0x2, 
    0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x298, 0x3, 0x2, 
    0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x5, 0x150, 
    0xa9, 0x2, 0x29c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29f, 0x7, 0xa8, 
    0x2, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 
    0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0x12e, 
    0x98, 0x2, 0x2a1, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a5, 0x3, 0x2, 
    0x2, 0x2, 0x2a3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 
    0x2, 0x2, 0x2a4, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2a8, 0x5, 0x146, 0xa4, 0x2, 0x2a7, 0x2a9, 0x5, 0x146, 
    0xa4, 0x2, 0x2a8, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 
    0x2, 0x2, 0x2a9, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ac, 0x5, 0x146, 
    0xa4, 0x2, 0x2ab, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x3, 0x2, 
    0x2, 0x2, 0x2ac, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2af, 0x5, 0x146, 
    0xa4, 0x2, 0x2ae, 0x2b0, 0x5, 0x146, 0xa4, 0x2, 0x2af, 0x2ae, 0x3, 0x2, 
    0x2, 0x2, 0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b2, 0x3, 0x2, 
    0x2, 0x2, 0x2b1, 0x2b3, 0x5, 0x146, 0xa4, 0x2, 0x2b2, 0x2b1, 0x3, 0x2, 
    0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b5, 0x3, 0x2, 
    0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x146, 0xa4, 0x2, 0x2b5, 0x2b4, 0x3, 0x2, 
    0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x2b7, 0x2b9, 0x7, 0x4b, 0x2, 0x2, 0x2b8, 0x2ba, 0x5, 0x142, 0xa2, 
    0x2, 0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 
    0x2, 0x2ba, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x5, 0x150, 0xa9, 
    0x2, 0x2bc, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bf, 0x7, 0x4c, 0x2, 
    0x2, 0x2be, 0x2c0, 0x5, 0x142, 0xa2, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 
    0x2, 0x2c1, 0x2c2, 0x5, 0x150, 0xa9, 0x2, 0x2c2, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x2c3, 0x2c5, 0x7, 0x4d, 0x2, 0x2, 0x2c4, 0x2c6, 0x5, 0x142, 0xa2, 
    0x2, 0x2c5, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 
    0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x5, 0x150, 0xa9, 
    0x2, 0x2c8, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x7, 0x4e, 0x2, 
    0x2, 0x2ca, 0x2cb, 0x5, 0x14c, 0xa7, 0x2, 0x2cb, 0x2cc, 0x5, 0x150, 
    0xa9, 0x2, 0x2cc, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 0x7, 0x4f, 
    0x2, 0x2, 0x2ce, 0x2cf, 0x7, 0xa8, 0x2, 0x2, 0x2cf, 0x2d1, 0x7, 0xa7, 
    0x2, 0x2, 0x2d0, 0x2d2, 0x7, 0xa7, 0x2, 0x2, 0x2d1, 0x2d0, 0x3, 0x2, 
    0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d4, 0x3, 0x2, 
    0x2, 0x2, 0x2d3, 0x2d5, 0x7, 0xa8, 0x2, 0x2, 0x2d4, 0x2d3, 0x3, 0x2, 
    0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0x150, 0xa9, 0x2, 0x2d7, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x50, 0x2, 0x2, 0x2d9, 0x2da, 0x5, 0x142, 
    0xa2, 0x2, 0x2da, 0x2db, 0x5, 0x150, 0xa9, 0x2, 0x2db, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x2dc, 0x2dd, 0x7, 0x51, 0x2, 0x2, 0x2dd, 0x2de, 0x5, 0x142, 
    0xa2, 0x2, 0x2de, 0x2df, 0x5, 0x150, 0xa9, 0x2, 0x2df, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x2e0, 0x2e1, 0x7, 0x52, 0x2, 0x2, 0x2e1, 0x2e2, 0x5, 0x146, 
    0xa4, 0x2, 0x2e2, 0x2e4, 0x5, 0x146, 0xa4, 0x2, 0x2e3, 0x2e5, 0x5, 0x142, 
    0xa2, 0x2, 0x2e4, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 
    0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0x150, 
    0xa9, 0x2, 0x2e7, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x53, 
    0x2, 0x2, 0x2e9, 0x2ea, 0x5, 0x146, 0xa4, 0x2, 0x2ea, 0x2ec, 0x5, 0x146, 
    0xa4, 0x2, 0x2eb, 0x2ed, 0x5, 0x142, 0xa2, 0x2, 0x2ec, 0x2eb, 0x3, 0x2, 
    0x2, 0x2, 0x2ec, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0x150, 0xa9, 0x2, 0x2ef, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x2f0, 0x2f4, 0x7, 0x54, 0x2, 0x2, 0x2f1, 0x2f5, 0x5, 0x74, 
    0x3b, 0x2, 0x2f2, 0x2f5, 0x5, 0x76, 0x3c, 0x2, 0x2f3, 0x2f5, 0x5, 0x78, 
    0x3d, 0x2, 0x2f4, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f2, 0x3, 0x2, 
    0x2, 0x2, 0x2f4, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x3, 0x2, 
    0x2, 0x2, 0x2f6, 0x2f7, 0x5, 0x150, 0xa9, 0x2, 0x2f7, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x2f8, 0x2f9, 0x7, 0x21, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0xa8, 
    0x2, 0x2, 0x2fa, 0x2fb, 0x7, 0xa7, 0x2, 0x2, 0x2fb, 0x2fc, 0x7, 0xa7, 
    0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x142, 0xa2, 0x2, 0x2fd, 0x2fe, 0x5, 0x150, 
    0xa9, 0x2, 0x2fe, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x7, 0x21, 
    0x2, 0x2, 0x300, 0x302, 0x7, 0xa8, 0x2, 0x2, 0x301, 0x303, 0x7, 0xa8, 
    0x2, 0x2, 0x302, 0x301, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 0x2, 0x2, 0x304, 0x305, 0x7, 0xa7, 
    0x2, 0x2, 0x305, 0x306, 0x7, 0xa7, 0x2, 0x2, 0x306, 0x307, 0x5, 0x142, 
    0xa2, 0x2, 0x307, 0x308, 0x5, 0x150, 0xa9, 0x2, 0x308, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x309, 0x30a, 0x7, 0x21, 0x2, 0x2, 0x30a, 0x30c, 0x7, 0xa8, 
    0x2, 0x2, 0x30b, 0x30d, 0x7, 0xa8, 0x2, 0x2, 0x30c, 0x30b, 0x3, 0x2, 
    0x2, 0x2, 0x30c, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 
    0x2, 0x2, 0x30e, 0x30f, 0x7, 0xa7, 0x2, 0x2, 0x30f, 0x310, 0x7, 0xa7, 
    0x2, 0x2, 0x310, 0x311, 0x5, 0x142, 0xa2, 0x2, 0x311, 0x312, 0x5, 0x150, 
    0xa9, 0x2, 0x312, 0x79, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x7, 0x55, 
    0x2, 0x2, 0x314, 0x315, 0x5, 0x146, 0xa4, 0x2, 0x315, 0x316, 0x5, 0x146, 
    0xa4, 0x2, 0x316, 0x317, 0x5, 0x150, 0xa9, 0x2, 0x317, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x318, 0x31c, 0x7, 0x56, 0x2, 0x2, 0x319, 0x31d, 0x5, 0x7e, 
    0x40, 0x2, 0x31a, 0x31d, 0x5, 0x80, 0x41, 0x2, 0x31b, 0x31d, 0x5, 0x82, 
    0x42, 0x2, 0x31c, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31a, 0x3, 0x2, 
    0x2, 0x2, 0x31c, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 
    0x2, 0x2, 0x31e, 0x31f, 0x5, 0x150, 0xa9, 0x2, 0x31f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x320, 0x321, 0x7, 0xa7, 0x2, 0x2, 0x321, 0x326, 0x7, 0xa7, 
    0x2, 0x2, 0x322, 0x324, 0x7, 0xa7, 0x2, 0x2, 0x323, 0x325, 0x7, 0xa7, 
    0x2, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 
    0x2, 0x2, 0x325, 0x327, 0x3, 0x2, 0x2, 0x2, 0x326, 0x322, 0x3, 0x2, 
    0x2, 0x2, 0x326, 0x327, 0x3, 0x2, 0x2, 0x2, 0x327, 0x329, 0x3, 0x2, 
    0x2, 0x2, 0x328, 0x32a, 0x5, 0x142, 0xa2, 0x2, 0x329, 0x328, 0x3, 0x2, 
    0x2, 0x2, 0x329, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x32b, 0x32c, 0x5, 0x12e, 0x98, 0x2, 0x32c, 0x32d, 0x5, 0x12e, 
    0x98, 0x2, 0x32d, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32b, 0x3, 0x2, 
    0x2, 0x2, 0x32f, 0x330, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32e, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 0x333, 0x3, 0x2, 
    0x2, 0x2, 0x332, 0x334, 0x5, 0x142, 0xa2, 0x2, 0x333, 0x332, 0x3, 0x2, 
    0x2, 0x2, 0x333, 0x334, 0x3, 0x2, 0x2, 0x2, 0x334, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x335, 0x336, 0x5, 0x142, 0xa2, 0x2, 0x336, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x337, 0x338, 0x7, 0x57, 0x2, 0x2, 0x338, 0x33a, 0x7, 0xa8, 0x2, 
    0x2, 0x339, 0x33b, 0x5, 0x142, 0xa2, 0x2, 0x33a, 0x339, 0x3, 0x2, 0x2, 
    0x2, 0x33a, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x3, 0x2, 0x2, 
    0x2, 0x33c, 0x33d, 0x5, 0x150, 0xa9, 0x2, 0x33d, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x33e, 0x340, 0x7, 0x58, 0x2, 0x2, 0x33f, 0x341, 0x5, 0x142, 0xa2, 
    0x2, 0x340, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 
    0x2, 0x341, 0x342, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x5, 0x150, 0xa9, 
    0x2, 0x343, 0x87, 0x3, 0x2, 0x2, 0x2, 0x344, 0x346, 0x7, 0xb, 0x2, 0x2, 
    0x345, 0x347, 0x5, 0x13a, 0x9e, 0x2, 0x346, 0x345, 0x3, 0x2, 0x2, 0x2, 
    0x346, 0x347, 0x3, 0x2, 0x2, 0x2, 0x347, 0x348, 0x3, 0x2, 0x2, 0x2, 
    0x348, 0x349, 0x5, 0x150, 0xa9, 0x2, 0x349, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x34a, 0x34b, 0x7, 0xc, 0x2, 0x2, 0x34b, 0x34c, 0x5, 0x8e, 0x48, 0x2, 
    0x34c, 0x34e, 0x5, 0x90, 0x49, 0x2, 0x34d, 0x34f, 0x7, 0x24, 0x2, 0x2, 
    0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34f, 0x3, 0x2, 0x2, 0x2, 
    0x34f, 0x351, 0x3, 0x2, 0x2, 0x2, 0x350, 0x352, 0x5, 0x142, 0xa2, 0x2, 
    0x351, 0x350, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 0x3, 0x2, 0x2, 0x2, 
    0x352, 0x353, 0x3, 0x2, 0x2, 0x2, 0x353, 0x354, 0x5, 0x150, 0xa9, 0x2, 
    0x354, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x7, 0xc, 0x2, 0x2, 
    0x356, 0x357, 0x5, 0x8c, 0x47, 0x2, 0x357, 0x358, 0x5, 0x14c, 0xa7, 
    0x2, 0x358, 0x35a, 0x5, 0x8e, 0x48, 0x2, 0x359, 0x35b, 0x5, 0x92, 0x4a, 
    0x2, 0x35a, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 
    0x2, 0x35b, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x150, 0xa9, 
    0x2, 0x35d, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x34a, 0x3, 0x2, 0x2, 
    0x2, 0x35e, 0x355, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x361, 0x7, 0xa8, 0x2, 0x2, 0x361, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x362, 0x363, 0x7, 0xa8, 0x2, 0x2, 0x363, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x364, 0x365, 0x7, 0xa8, 0x2, 0x2, 0x365, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x366, 0x367, 0x7, 0xa8, 0x2, 0x2, 0x367, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x368, 0x37a, 0x5, 0x96, 0x4c, 0x2, 0x369, 0x37a, 0x5, 0x9e, 0x50, 0x2, 
    0x36a, 0x37a, 0x5, 0xa4, 0x53, 0x2, 0x36b, 0x37a, 0x5, 0xa6, 0x54, 0x2, 
    0x36c, 0x37a, 0x5, 0xa8, 0x55, 0x2, 0x36d, 0x37a, 0x5, 0xac, 0x57, 0x2, 
    0x36e, 0x37a, 0x5, 0xae, 0x58, 0x2, 0x36f, 0x37a, 0x5, 0xb0, 0x59, 0x2, 
    0x370, 0x37a, 0x5, 0xb8, 0x5d, 0x2, 0x371, 0x37a, 0x5, 0xbe, 0x60, 0x2, 
    0x372, 0x37a, 0x5, 0xc0, 0x61, 0x2, 0x373, 0x37a, 0x5, 0xc2, 0x62, 0x2, 
    0x374, 0x37a, 0x5, 0xcc, 0x67, 0x2, 0x375, 0x37a, 0x5, 0xce, 0x68, 0x2, 
    0x376, 0x37a, 0x5, 0xd0, 0x69, 0x2, 0x377, 0x37a, 0x5, 0xd2, 0x6a, 0x2, 
    0x378, 0x37a, 0x5, 0xdc, 0x6f, 0x2, 0x379, 0x368, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x369, 0x3, 0x2, 0x2, 0x2, 0x379, 0x36a, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x379, 0x36c, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x379, 0x36e, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x379, 0x370, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x371, 0x3, 0x2, 0x2, 0x2, 0x379, 0x372, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x373, 0x3, 0x2, 0x2, 0x2, 0x379, 0x374, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x375, 0x3, 0x2, 0x2, 0x2, 0x379, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0x377, 0x3, 0x2, 0x2, 0x2, 0x379, 0x378, 0x3, 0x2, 0x2, 0x2, 
    0x37a, 0x95, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37d, 0x5, 0x98, 0x4d, 0x2, 
    0x37c, 0x37e, 0x5, 0x9a, 0x4e, 0x2, 0x37d, 0x37c, 0x3, 0x2, 0x2, 0x2, 
    0x37e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x37d, 0x3, 0x2, 0x2, 0x2, 
    0x37f, 0x380, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x3, 0x2, 0x2, 0x2, 
    0x381, 0x382, 0x5, 0x9c, 0x4f, 0x2, 0x382, 0x383, 0x5, 0x150, 0xa9, 
    0x2, 0x383, 0x97, 0x3, 0x2, 0x2, 0x2, 0x384, 0x388, 0x7, 0xf, 0x2, 0x2, 
    0x385, 0x387, 0x7, 0xa8, 0x2, 0x2, 0x386, 0x385, 0x3, 0x2, 0x2, 0x2, 
    0x387, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x388, 0x386, 0x3, 0x2, 0x2, 0x2, 
    0x388, 0x389, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38b, 0x3, 0x2, 0x2, 0x2, 
    0x38a, 0x388, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38c, 0x5, 0x150, 0xa9, 0x2, 
    0x38c, 0x99, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0x5, 0x6, 0x4, 0x2, 0x38e, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x9, 0x2, 0x2, 0x2, 0x390, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x391, 0x393, 0x7, 0x10, 0x2, 0x2, 0x392, 0x394, 
    0x5, 0xa0, 0x51, 0x2, 0x393, 0x392, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 
    0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x3, 0x2, 0x2, 0x2, 0x395, 0x397, 
    0x5, 0xa2, 0x52, 0x2, 0x396, 0x398, 0x5, 0x142, 0xa2, 0x2, 0x397, 0x396, 
    0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 
    0x3, 0x2, 0x2, 0x2, 0x399, 0x39a, 0x5, 0x150, 0xa9, 0x2, 0x39a, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x7, 0xa8, 0x2, 0x2, 0x39c, 0x39e, 
    0x7, 0x77, 0x2, 0x2, 0x39d, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 
    0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 
    0x5, 0x14c, 0xa7, 0x2, 0x3a0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a5, 
    0x7, 0xa8, 0x2, 0x2, 0x3a2, 0x3a5, 0x7, 0x31, 0x2, 0x2, 0x3a3, 0x3a5, 
    0x5, 0x146, 0xa4, 0x2, 0x3a4, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a2, 
    0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0x3a6, 0x3a7, 0x9, 0x3, 0x2, 0x2, 0x3a7, 0x3a8, 0x5, 
    0x142, 0xa2, 0x2, 0x3a8, 0x3a9, 0x5, 0x150, 0xa9, 0x2, 0x3a9, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x13, 0x2, 0x2, 0x3ab, 0x3ac, 
    0x5, 0x142, 0xa2, 0x2, 0x3ac, 0x3ad, 0x5, 0x150, 0xa9, 0x2, 0x3ad, 0xa7, 
    0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3b0, 0x7, 0x14, 0x2, 0x2, 0x3af, 0x3b1, 
    0x7, 0xa8, 0x2, 0x2, 0x3b0, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 
    0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b4, 
    0x5, 0xaa, 0x56, 0x2, 0x3b3, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 
    0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b7, 
    0x5, 0x142, 0xa2, 0x2, 0x3b6, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 
    0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3ba, 
    0x5, 0x12e, 0x98, 0x2, 0x3b9, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 
    0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bd, 
    0x7, 0xa8, 0x2, 0x2, 0x3bc, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 
    0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 
    0x5, 0x150, 0xa9, 0x2, 0x3bf, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 
    0x7, 0x2d, 0x2, 0x2, 0x3c1, 0x3c2, 0x7, 0x77, 0x2, 0x2, 0x3c2, 0x3c3, 
    0x9, 0x4, 0x2, 0x2, 0x3c3, 0xab, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 
    0x20, 0x2, 0x2, 0x3c5, 0x3c6, 0x5, 0x14c, 0xa7, 0x2, 0x3c6, 0x3c7, 0x5, 
    0x150, 0xa9, 0x2, 0x3c7, 0xad, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x7, 
    0x17, 0x2, 0x2, 0x3c9, 0x3ca, 0x5, 0x146, 0xa4, 0x2, 0x3ca, 0x3cb, 0x5, 
    0x150, 0xa9, 0x2, 0x3cb, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x7, 
    0x15, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0x140, 0xa1, 0x2, 0x3ce, 0x3d0, 0x5, 
    0xb2, 0x5a, 0x2, 0x3cf, 0x3d1, 0x7, 0xa8, 0x2, 0x2, 0x3d0, 0x3cf, 0x3, 
    0x2, 0x2, 0x2, 0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 
    0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0x5, 0x150, 0xa9, 0x2, 0x3d3, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0x3d4, 0x3d6, 0x5, 0xb4, 0x5b, 0x2, 0x3d5, 0x3d4, 0x3, 
    0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d5, 0x3, 
    0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0x3d9, 0x3db, 0x5, 0xb6, 0x5c, 0x2, 0x3da, 0x3d9, 0x3, 0x2, 
    0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3da, 0x3, 0x2, 
    0x2, 0x2, 0x3dc, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3df, 0x3, 0x2, 
    0x2, 0x2, 0x3de, 0x3e0, 0x7, 0xa7, 0x2, 0x2, 0x3df, 0x3de, 0x3, 0x2, 
    0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0x3e1, 0x3e2, 0x7, 0xa7, 0x2, 0x2, 0x3e2, 0x3e3, 0x7, 0xa7, 0x2, 
    0x2, 0x3e3, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e6, 0x7, 0x1a, 0x2, 
    0x2, 0x3e5, 0x3e7, 0x5, 0xba, 0x5e, 0x2, 0x3e6, 0x3e5, 0x3, 0x2, 0x2, 
    0x2, 0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e6, 0x3, 0x2, 0x2, 
    0x2, 0x3e8, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x3, 0x2, 0x2, 
    0x2, 0x3ea, 0x3eb, 0x5, 0x150, 0xa9, 0x2, 0x3eb, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x3ec, 0x3ee, 0x5, 0x146, 0xa4, 0x2, 0x3ed, 0x3ef, 0x5, 0xbc, 0x5f, 
    0x2, 0x3ee, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 
    0x2, 0x3ef, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x7, 0x8, 0x2, 0x2, 
    0x3f1, 0x3f2, 0x7, 0x77, 0x2, 0x2, 0x3f2, 0x3f3, 0x7, 0xa8, 0x2, 0x2, 
    0x3f3, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f6, 0x7, 0x1d, 0x2, 0x2, 
    0x3f5, 0x3f7, 0x7, 0xa8, 0x2, 0x2, 0x3f6, 0x3f5, 0x3, 0x2, 0x2, 0x2, 
    0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 0x3, 0x2, 0x2, 0x2, 
    0x3f8, 0x3f9, 0x5, 0x142, 0xa2, 0x2, 0x3f9, 0x3fa, 0x5, 0x150, 0xa9, 
    0x2, 0x3fa, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fd, 0x7, 0x1c, 0x2, 
    0x2, 0x3fc, 0x3fe, 0x7, 0xa8, 0x2, 0x2, 0x3fd, 0x3fc, 0x3, 0x2, 0x2, 
    0x2, 0x3fd, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x3, 0x2, 0x2, 
    0x2, 0x3ff, 0x400, 0x5, 0x142, 0xa2, 0x2, 0x400, 0x401, 0x5, 0x150, 
    0xa9, 0x2, 0x401, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x7, 0x19, 
    0x2, 0x2, 0x403, 0x405, 0x5, 0xc4, 0x63, 0x2, 0x404, 0x406, 0x5, 0xc6, 
    0x64, 0x2, 0x405, 0x404, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x3, 0x2, 
    0x2, 0x2, 0x406, 0x407, 0x3, 0x2, 0x2, 0x2, 0x407, 0x409, 0x5, 0x14c, 
    0xa7, 0x2, 0x408, 0x40a, 0x5, 0xc8, 0x65, 0x2, 0x409, 0x408, 0x3, 0x2, 
    0x2, 0x2, 0x409, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40c, 0x3, 0x2, 
    0x2, 0x2, 0x40b, 0x40d, 0x5, 0xca, 0x66, 0x2, 0x40c, 0x40b, 0x3, 0x2, 
    0x2, 0x2, 0x40c, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 0x3, 0x2, 
    0x2, 0x2, 0x40e, 0x40f, 0x5, 0x150, 0xa9, 0x2, 0x40f, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0x410, 0x411, 0x7, 0xa8, 0x2, 0x2, 0x411, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0x412, 0x413, 0x7, 0xa8, 0x2, 0x2, 0x413, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0x414, 0x415, 0x7, 0xa8, 0x2, 0x2, 0x415, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0x416, 0x417, 0x7, 0xa8, 0x2, 0x2, 0x417, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0x418, 0x41a, 0x7, 0x1e, 0x2, 0x2, 0x419, 0x41b, 0x7, 0xa8, 
    0x2, 0x2, 0x41a, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x3, 0x2, 
    0x2, 0x2, 0x41b, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41e, 0x5, 0x142, 
    0xa2, 0x2, 0x41d, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41e, 0x3, 0x2, 
    0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x5, 0x150, 
    0xa9, 0x2, 0x420, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x421, 0x423, 0x7, 0x18, 
    0x2, 0x2, 0x422, 0x424, 0x7, 0xa8, 0x2, 0x2, 0x423, 0x422, 0x3, 0x2, 
    0x2, 0x2, 0x423, 0x424, 0x3, 0x2, 0x2, 0x2, 0x424, 0x426, 0x3, 0x2, 
    0x2, 0x2, 0x425, 0x427, 0x7, 0xa8, 0x2, 0x2, 0x426, 0x425, 0x3, 0x2, 
    0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x429, 0x5, 0x146, 0xa4, 0x2, 0x429, 0x42a, 0x5, 0x150, 
    0xa9, 0x2, 0x42a, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42d, 0x7, 0x1f, 
    0x2, 0x2, 0x42c, 0x42e, 0x7, 0xa7, 0x2, 0x2, 0x42d, 0x42c, 0x3, 0x2, 
    0x2, 0x2, 0x42e, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x42d, 0x3, 0x2, 
    0x2, 0x2, 0x42f, 0x430, 0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 0x3, 0x2, 
    0x2, 0x2, 0x431, 0x432, 0x5, 0x150, 0xa9, 0x2, 0x432, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0x433, 0x435, 0x7, 0x1b, 0x2, 0x2, 0x434, 0x436, 0x5, 0xd4, 
    0x6b, 0x2, 0x435, 0x434, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x3, 0x2, 
    0x2, 0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x439, 0x5, 0xd6, 
    0x6c, 0x2, 0x438, 0x437, 0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 
    0x2, 0x2, 0x439, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43c, 0x5, 0xd8, 
    0x6d, 0x2, 0x43b, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 
    0x2, 0x2, 0x43c, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x7, 0xa8, 
    0x2, 0x2, 0x43e, 0x43f, 0x9, 0x5, 0x2, 0x2, 0x43f, 0x441, 0x5, 0x12e, 
    0x98, 0x2, 0x440, 0x442, 0x7, 0x2d, 0x2, 0x2, 0x441, 0x440, 0x3, 0x2, 
    0x2, 0x2, 0x441, 0x442, 0x3, 0x2, 0x2, 0x2, 0x442, 0x444, 0x3, 0x2, 
    0x2, 0x2, 0x443, 0x445, 0x5, 0x12e, 0x98, 0x2, 0x444, 0x443, 0x3, 0x2, 
    0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 0x447, 0x3, 0x2, 
    0x2, 0x2, 0x446, 0x448, 0x5, 0x142, 0xa2, 0x2, 0x447, 0x446, 0x3, 0x2, 
    0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0x44a, 0x3, 0x2, 
    0x2, 0x2, 0x449, 0x44b, 0x5, 0xda, 0x6e, 0x2, 0x44a, 0x449, 0x3, 0x2, 
    0x2, 0x2, 0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0x3, 0x2, 
    0x2, 0x2, 0x44c, 0x44d, 0x5, 0x150, 0xa9, 0x2, 0x44d, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0x44e, 0x44f, 0x7, 0xa8, 0x2, 0x2, 0x44f, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0x450, 0x451, 0x7, 0xa8, 0x2, 0x2, 0x451, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0x452, 0x453, 0x7, 0xa8, 0x2, 0x2, 0x453, 0xd9, 0x3, 0x2, 
    0x2, 0x2, 0x454, 0x455, 0x7, 0x35, 0x2, 0x2, 0x455, 0x456, 0x5, 0x12e, 
    0x98, 0x2, 0x456, 0x457, 0x5, 0x142, 0xa2, 0x2, 0x457, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0x458, 0x459, 0x7, 0x16, 0x2, 0x2, 0x459, 0x45a, 0x5, 0x12e, 
    0x98, 0x2, 0x45a, 0x45b, 0x5, 0x12e, 0x98, 0x2, 0x45b, 0x45c, 0x5, 0x150, 
    0xa9, 0x2, 0x45c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 0x7, 0xe, 
    0x2, 0x2, 0x45e, 0x45f, 0x5, 0x142, 0xa2, 0x2, 0x45f, 0x460, 0x5, 0x150, 
    0xa9, 0x2, 0x460, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x461, 0x465, 0x5, 0xe2, 
    0x72, 0x2, 0x462, 0x464, 0x5, 0xe4, 0x73, 0x2, 0x463, 0x462, 0x3, 0x2, 
    0x2, 0x2, 0x464, 0x467, 0x3, 0x2, 0x2, 0x2, 0x465, 0x463, 0x3, 0x2, 
    0x2, 0x2, 0x465, 0x466, 0x3, 0x2, 0x2, 0x2, 0x466, 0x468, 0x3, 0x2, 
    0x2, 0x2, 0x467, 0x465, 0x3, 0x2, 0x2, 0x2, 0x468, 0x469, 0x5, 0x150, 
    0xa9, 0x2, 0x469, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x483, 0x5, 0xfc, 
    0x7f, 0x2, 0x46b, 0x483, 0x5, 0xfe, 0x80, 0x2, 0x46c, 0x483, 0x5, 0x100, 
    0x81, 0x2, 0x46d, 0x483, 0x5, 0x102, 0x82, 0x2, 0x46e, 0x483, 0x5, 0x104, 
    0x83, 0x2, 0x46f, 0x483, 0x5, 0x106, 0x84, 0x2, 0x470, 0x483, 0x5, 0x108, 
    0x85, 0x2, 0x471, 0x483, 0x5, 0x10a, 0x86, 0x2, 0x472, 0x483, 0x5, 0x10c, 
    0x87, 0x2, 0x473, 0x483, 0x5, 0x10e, 0x88, 0x2, 0x474, 0x483, 0x5, 0x110, 
    0x89, 0x2, 0x475, 0x483, 0x5, 0x112, 0x8a, 0x2, 0x476, 0x483, 0x5, 0x114, 
    0x8b, 0x2, 0x477, 0x483, 0x5, 0x116, 0x8c, 0x2, 0x478, 0x483, 0x5, 0x118, 
    0x8d, 0x2, 0x479, 0x483, 0x5, 0x11a, 0x8e, 0x2, 0x47a, 0x483, 0x5, 0x11c, 
    0x8f, 0x2, 0x47b, 0x483, 0x5, 0x11e, 0x90, 0x2, 0x47c, 0x483, 0x5, 0x120, 
    0x91, 0x2, 0x47d, 0x483, 0x5, 0x122, 0x92, 0x2, 0x47e, 0x483, 0x5, 0x124, 
    0x93, 0x2, 0x47f, 0x483, 0x5, 0x126, 0x94, 0x2, 0x480, 0x483, 0x5, 0x128, 
    0x95, 0x2, 0x481, 0x483, 0x5, 0x12a, 0x96, 0x2, 0x482, 0x46a, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x482, 0x46c, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x482, 0x46e, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x482, 0x470, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x471, 0x3, 0x2, 0x2, 0x2, 0x482, 0x472, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x473, 0x3, 0x2, 0x2, 0x2, 0x482, 0x474, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x475, 0x3, 0x2, 0x2, 0x2, 0x482, 0x476, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x477, 0x3, 0x2, 0x2, 0x2, 0x482, 0x478, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x479, 0x3, 0x2, 0x2, 0x2, 0x482, 0x47a, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x482, 0x47c, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x482, 0x47e, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x482, 0x480, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0x481, 0x3, 0x2, 0x2, 0x2, 0x483, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0x484, 0x490, 0x5, 0xe8, 0x75, 0x2, 0x485, 0x490, 0x5, 0xe6, 0x74, 
    0x2, 0x486, 0x490, 0x5, 0xea, 0x76, 0x2, 0x487, 0x490, 0x5, 0xee, 0x78, 
    0x2, 0x488, 0x490, 0x5, 0xf0, 0x79, 0x2, 0x489, 0x490, 0x5, 0xf2, 0x7a, 
    0x2, 0x48a, 0x490, 0x5, 0xf4, 0x7b, 0x2, 0x48b, 0x490, 0x5, 0xf8, 0x7d, 
    0x2, 0x48c, 0x490, 0x5, 0xf6, 0x7c, 0x2, 0x48d, 0x490, 0x5, 0xec, 0x77, 
    0x2, 0x48e, 0x490, 0x5, 0xfa, 0x7e, 0x2, 0x48f, 0x484, 0x3, 0x2, 0x2, 
    0x2, 0x48f, 0x485, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x486, 0x3, 0x2, 0x2, 
    0x2, 0x48f, 0x487, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x488, 0x3, 0x2, 0x2, 
    0x2, 0x48f, 0x489, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48a, 0x3, 0x2, 0x2, 
    0x2, 0x48f, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48c, 0x3, 0x2, 0x2, 
    0x2, 0x48f, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48e, 0x3, 0x2, 0x2, 
    0x2, 0x490, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x491, 0x494, 0x7, 0x92, 0x2, 
    0x2, 0x492, 0x495, 0x7, 0xa9, 0x2, 0x2, 0x493, 0x495, 0x5, 0x12e, 0x98, 
    0x2, 0x494, 0x492, 0x3, 0x2, 0x2, 0x2, 0x494, 0x493, 0x3, 0x2, 0x2, 
    0x2, 0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 0x49c, 0x7, 0x93, 0x2, 
    0x2, 0x497, 0x49a, 0x7, 0xa9, 0x2, 0x2, 0x498, 0x49a, 0x5, 0x12e, 0x98, 
    0x2, 0x499, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x498, 0x3, 0x2, 0x2, 
    0x2, 0x49a, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x491, 0x3, 0x2, 0x2, 
    0x2, 0x49b, 0x499, 0x3, 0x2, 0x2, 0x2, 0x49c, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0x49d, 0x4a4, 0x7, 0x36, 0x2, 0x2, 0x49e, 0x4a4, 0x7, 0x3b, 0x2, 0x2, 
    0x49f, 0x4a1, 0x9, 0x6, 0x2, 0x2, 0x4a0, 0x49f, 0x3, 0x2, 0x2, 0x2, 
    0x4a0, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a2, 0x3, 0x2, 0x2, 0x2, 
    0x4a2, 0x4a4, 0x5, 0x142, 0xa2, 0x2, 0x4a3, 0x49d, 0x3, 0x2, 0x2, 0x2, 
    0x4a3, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a0, 0x3, 0x2, 0x2, 0x2, 
    0x4a4, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a6, 0x9, 0x7, 0x2, 0x2, 0x4a6, 
    0x4a8, 0x7, 0x92, 0x2, 0x2, 0x4a7, 0x4a9, 0x5, 0x12e, 0x98, 0x2, 0x4a8, 
    0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4a9, 
    0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4b0, 0x7, 0x93, 0x2, 0x2, 0x4ab, 
    0x4ad, 0x9, 0x7, 0x2, 0x2, 0x4ac, 0x4ae, 0x5, 0x12e, 0x98, 0x2, 0x4ad, 
    0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4ae, 
    0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4af, 
    0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 
    0x7, 0x48, 0x2, 0x2, 0x4b2, 0xed, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 
    0x7, 0x37, 0x2, 0x2, 0x4b4, 0x4b5, 0x5, 0x13a, 0x9e, 0x2, 0x4b5, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 0x7, 0x39, 0x2, 0x2, 0x4b7, 0x4b8, 
    0x5, 0x13a, 0x9e, 0x2, 0x4b8, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4ba, 
    0x7, 0x38, 0x2, 0x2, 0x4ba, 0x4bb, 0x5, 0x13a, 0x9e, 0x2, 0x4bb, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4be, 0x7, 0x3a, 0x2, 0x2, 0x4bd, 0x4bf, 
    0x5, 0x12e, 0x98, 0x2, 0x4be, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 
    0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4c1, 
    0x3, 0x2, 0x2, 0x2, 0x4c1, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 
    0x25, 0x2, 0x2, 0x4c3, 0x4c4, 0x5, 0x12e, 0x98, 0x2, 0x4c4, 0x4c6, 0x7, 
    0x77, 0x2, 0x2, 0x4c5, 0x4c7, 0x5, 0x134, 0x9b, 0x2, 0x4c6, 0x4c5, 0x3, 
    0x2, 0x2, 0x2, 0x4c7, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c6, 0x3, 
    0x2, 0x2, 0x2, 0x4c8, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0x4ca, 0x4cb, 0x9, 0x8, 0x2, 0x2, 0x4cb, 0x4cd, 0x7, 0x8e, 
    0x2, 0x2, 0x4cc, 0x4ce, 0x5, 0x12e, 0x98, 0x2, 0x4cd, 0x4cc, 0x3, 0x2, 
    0x2, 0x2, 0x4ce, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4cd, 0x3, 0x2, 
    0x2, 0x2, 0x4cf, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x3, 0x2, 
    0x2, 0x2, 0x4d1, 0x4d2, 0x7, 0x8f, 0x2, 0x2, 0x4d2, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0x4d3, 0x4d4, 0x7, 0x2a, 0x2, 0x2, 0x4d4, 0x4d5, 0x7, 0x77, 
    0x2, 0x2, 0x4d5, 0x4d6, 0x7, 0xa8, 0x2, 0x2, 0x4d6, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x4d7, 0x4d8, 0x7, 0x59, 0x2, 0x2, 0x4d8, 0x4d9, 0x5, 0x140, 
    0xa1, 0x2, 0x4d9, 0x4da, 0x5, 0x140, 0xa1, 0x2, 0x4da, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x4db, 0x4dc, 0x7, 0x5a, 0x2, 0x2, 0x4dc, 0x4dd, 0x5, 0x140, 
    0xa1, 0x2, 0x4dd, 0x4de, 0x5, 0x140, 0xa1, 0x2, 0x4de, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0x4df, 0x4e0, 0x7, 0x5b, 0x2, 0x2, 0x4e0, 0x4e1, 0x5, 0x140, 
    0xa1, 0x2, 0x4e1, 0x4e2, 0x5, 0x140, 0xa1, 0x2, 0x4e2, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x4e3, 0x4e4, 0x7, 0x5c, 0x2, 0x2, 0x4e4, 0x4e5, 0x7, 0xa8, 
    0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0xa8, 0x2, 0x2, 0x4e6, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x4e7, 0x4e8, 0x7, 0x5d, 0x2, 0x2, 0x4e8, 0x4e9, 0x5, 0x140, 
    0xa1, 0x2, 0x4e9, 0x4eb, 0x5, 0x140, 0xa1, 0x2, 0x4ea, 0x4ec, 0x5, 0x140, 
    0xa1, 0x2, 0x4eb, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ec, 0x3, 0x2, 
    0x2, 0x2, 0x4ec, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0xa8, 
    0x2, 0x2, 0x4ee, 0x105, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f0, 0x7, 0x5e, 
    0x2, 0x2, 0x4f0, 0x4f1, 0x5, 0x140, 0xa1, 0x2, 0x4f1, 0x4f2, 0x5, 0x140, 
    0xa1, 0x2, 0x4f2, 0x4f3, 0x5, 0x140, 0xa1, 0x2, 0x4f3, 0x4f4, 0x5, 0x140, 
    0xa1, 0x2, 0x4f4, 0x107, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f6, 0x7, 0x5f, 
    0x2, 0x2, 0x4f6, 0x109, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x7, 0x60, 
    0x2, 0x2, 0x4f8, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fa, 0x7, 0x61, 
    0x2, 0x2, 0x4fa, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x62, 
    0x2, 0x2, 0x4fc, 0x4fd, 0x5, 0x140, 0xa1, 0x2, 0x4fd, 0x4fe, 0x5, 0x140, 
    0xa1, 0x2, 0x4fe, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 0x7, 0x63, 
    0x2, 0x2, 0x500, 0x501, 0x5, 0x140, 0xa1, 0x2, 0x501, 0x502, 0x5, 0x140, 
    0xa1, 0x2, 0x502, 0x504, 0x5, 0x140, 0xa1, 0x2, 0x503, 0x505, 0x5, 0x140, 
    0xa1, 0x2, 0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x3, 0x2, 
    0x2, 0x2, 0x505, 0x506, 0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x7, 0xa8, 
    0x2, 0x2, 0x507, 0x515, 0x3, 0x2, 0x2, 0x2, 0x508, 0x509, 0x7, 0x63, 
    0x2, 0x2, 0x509, 0x50a, 0x5, 0x140, 0xa1, 0x2, 0x50a, 0x50b, 0x5, 0x140, 
    0xa1, 0x2, 0x50b, 0x50d, 0x5, 0x140, 0xa1, 0x2, 0x50c, 0x50e, 0x5, 0x140, 
    0xa1, 0x2, 0x50d, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 
    0x2, 0x2, 0x50e, 0x510, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x511, 0x5, 0x140, 
    0xa1, 0x2, 0x510, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 0x3, 0x2, 
    0x2, 0x2, 0x511, 0x512, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 0x7, 0xa8, 
    0x2, 0x2, 0x513, 0x515, 0x3, 0x2, 0x2, 0x2, 0x514, 0x4ff, 0x3, 0x2, 
    0x2, 0x2, 0x514, 0x508, 0x3, 0x2, 0x2, 0x2, 0x515, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x516, 0x517, 0x7, 0x64, 0x2, 0x2, 0x517, 0x518, 0x5, 0x140, 
    0xa1, 0x2, 0x518, 0x519, 0x5, 0x140, 0xa1, 0x2, 0x519, 0x51a, 0x5, 0x140, 
    0xa1, 0x2, 0x51a, 0x51b, 0x7, 0xa8, 0x2, 0x2, 0x51b, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x51c, 0x51d, 0x7, 0x65, 0x2, 0x2, 0x51d, 0x520, 0x5, 0x13a, 
    0x9e, 0x2, 0x51e, 0x51f, 0x9, 0x9, 0x2, 0x2, 0x51f, 0x521, 0x7, 0x77, 
    0x2, 0x2, 0x520, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x520, 0x521, 0x3, 0x2, 
    0x2, 0x2, 0x521, 0x522, 0x3, 0x2, 0x2, 0x2, 0x522, 0x523, 0x7, 0xa8, 
    0x2, 0x2, 0x523, 0x115, 0x3, 0x2, 0x2, 0x2, 0x524, 0x525, 0x7, 0x68, 
    0x2, 0x2, 0x525, 0x526, 0x5, 0x13a, 0x9e, 0x2, 0x526, 0x527, 0x7, 0xa8, 
    0x2, 0x2, 0x527, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x528, 0x52b, 0x7, 0x68, 
    0x2, 0x2, 0x529, 0x52a, 0x7, 0x2c, 0x2, 0x2, 0x52a, 0x52c, 0x7, 0x89, 
    0x2, 0x2, 0x52b, 0x529, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x52c, 0x3, 0x2, 
    0x2, 0x2, 0x52c, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52f, 0x7, 0xa8, 
    0x2, 0x2, 0x52e, 0x524, 0x3, 0x2, 0x2, 0x2, 0x52e, 0x528, 0x3, 0x2, 
    0x2, 0x2, 0x52f, 0x117, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x7, 0x69, 
    0x2, 0x2, 0x531, 0x532, 0x5, 0x140, 0xa1, 0x2, 0x532, 0x533, 0x5, 0x140, 
    0xa1, 0x2, 0x533, 0x119, 0x3, 0x2, 0x2, 0x2, 0x534, 0x535, 0x7, 0x6a, 
    0x2, 0x2, 0x535, 0x536, 0x5, 0x140, 0xa1, 0x2, 0x536, 0x537, 0x5, 0x140, 
    0xa1, 0x2, 0x537, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x538, 0x539, 0x7, 0x6b, 
    0x2, 0x2, 0x539, 0x53a, 0x5, 0x140, 0xa1, 0x2, 0x53a, 0x53b, 0x5, 0x140, 
    0xa1, 0x2, 0x53b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x7, 0x6c, 
    0x2, 0x2, 0x53d, 0x53e, 0x5, 0x140, 0xa1, 0x2, 0x53e, 0x53f, 0x5, 0x140, 
    0xa1, 0x2, 0x53f, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x540, 0x541, 0x7, 0x6d, 
    0x2, 0x2, 0x541, 0x542, 0x5, 0x140, 0xa1, 0x2, 0x542, 0x543, 0x5, 0x140, 
    0xa1, 0x2, 0x543, 0x121, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 0x7, 0x6e, 
    0x2, 0x2, 0x545, 0x546, 0x5, 0x140, 0xa1, 0x2, 0x546, 0x547, 0x5, 0x140, 
    0xa1, 0x2, 0x547, 0x123, 0x3, 0x2, 0x2, 0x2, 0x548, 0x549, 0x7, 0x48, 
    0x2, 0x2, 0x549, 0x125, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x7, 0x70, 
    0x2, 0x2, 0x54b, 0x54c, 0x5, 0x140, 0xa1, 0x2, 0x54c, 0x54d, 0x5, 0x140, 
    0xa1, 0x2, 0x54d, 0x54f, 0x5, 0x140, 0xa1, 0x2, 0x54e, 0x550, 0x7, 0xa8, 
    0x2, 0x2, 0x54f, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x3, 0x2, 
    0x2, 0x2, 0x550, 0x555, 0x3, 0x2, 0x2, 0x2, 0x551, 0x553, 0x5, 0x138, 
    0x9d, 0x2, 0x552, 0x554, 0x5, 0x138, 0x9d, 0x2, 0x553, 0x552, 0x3, 0x2, 
    0x2, 0x2, 0x553, 0x554, 0x3, 0x2, 0x2, 0x2, 0x554, 0x556, 0x3, 0x2, 
    0x2, 0x2, 0x555, 0x551, 0x3, 0x2, 0x2, 0x2, 0x555, 0x556, 0x3, 0x2, 
    0x2, 0x2, 0x556, 0x127, 0x3, 0x2, 0x2, 0x2, 0x557, 0x558, 0x7, 0x6f, 
    0x2, 0x2, 0x558, 0x559, 0x5, 0x140, 0xa1, 0x2, 0x559, 0x55a, 0x5, 0x140, 
    0xa1, 0x2, 0x55a, 0x55b, 0x5, 0x140, 0xa1, 0x2, 0x55b, 0x55d, 0x5, 0x140, 
    0xa1, 0x2, 0x55c, 0x55e, 0x7, 0xa8, 0x2, 0x2, 0x55d, 0x55c, 0x3, 0x2, 
    0x2, 0x2, 0x55d, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x55f, 0x560, 0x9, 0xa, 0x2, 0x2, 0x560, 0x561, 0x5, 0x140, 
    0xa1, 0x2, 0x561, 0x562, 0x5, 0x140, 0xa1, 0x2, 0x562, 0x565, 0x5, 0x140, 
    0xa1, 0x2, 0x563, 0x564, 0x7, 0xa8, 0x2, 0x2, 0x564, 0x566, 0x7, 0xa8, 
    0x2, 0x2, 0x565, 0x563, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x3, 0x2, 
    0x2, 0x2, 0x566, 0x568, 0x3, 0x2, 0x2, 0x2, 0x567, 0x569, 0x7, 0xa8, 
    0x2, 0x2, 0x568, 0x567, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0x3, 0x2, 
    0x2, 0x2, 0x569, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56b, 0x5, 0x142, 
    0xa2, 0x2, 0x56b, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 0x7, 0xa, 
    0x2, 0x2, 0x56d, 0x56e, 0x5, 0x150, 0xa9, 0x2, 0x56e, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x56f, 0x570, 0x8, 0x98, 0x1, 0x2, 0x570, 0x575, 0x5, 0x130, 
    0x99, 0x2, 0x571, 0x575, 0x5, 0x132, 0x9a, 0x2, 0x572, 0x575, 0x5, 0x134, 
    0x9b, 0x2, 0x573, 0x575, 0x5, 0x138, 0x9d, 0x2, 0x574, 0x56f, 0x3, 0x2, 
    0x2, 0x2, 0x574, 0x571, 0x3, 0x2, 0x2, 0x2, 0x574, 0x572, 0x3, 0x2, 
    0x2, 0x2, 0x574, 0x573, 0x3, 0x2, 0x2, 0x2, 0x575, 0x588, 0x3, 0x2, 
    0x2, 0x2, 0x576, 0x577, 0xc, 0x3, 0x2, 0x2, 0x577, 0x578, 0x7, 0x94, 
    0x2, 0x2, 0x578, 0x579, 0x5, 0x12e, 0x98, 0x2, 0x579, 0x57a, 0x7, 0x89, 
    0x2, 0x2, 0x57a, 0x57b, 0x5, 0x12e, 0x98, 0x4, 0x57b, 0x587, 0x3, 0x2, 
    0x2, 0x2, 0x57c, 0x57d, 0xc, 0x5, 0x2, 0x2, 0x57d, 0x57e, 0x7, 0x92, 
    0x2, 0x2, 0x57e, 0x57f, 0x5, 0x12e, 0x98, 0x2, 0x57f, 0x580, 0x7, 0x93, 
    0x2, 0x2, 0x580, 0x587, 0x3, 0x2, 0x2, 0x2, 0x581, 0x582, 0xc, 0x4, 
    0x2, 0x2, 0x582, 0x584, 0x5, 0x136, 0x9c, 0x2, 0x583, 0x585, 0x5, 0x12e, 
    0x98, 0x2, 0x584, 0x583, 0x3, 0x2, 0x2, 0x2, 0x584, 0x585, 0x3, 0x2, 
    0x2, 0x2, 0x585, 0x587, 0x3, 0x2, 0x2, 0x2, 0x586, 0x576, 0x3, 0x2, 
    0x2, 0x2, 0x586, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x586, 0x581, 0x3, 0x2, 
    0x2, 0x2, 0x587, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x588, 0x586, 0x3, 0x2, 
    0x2, 0x2, 0x588, 0x589, 0x3, 0x2, 0x2, 0x2, 0x589, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x58a, 0x588, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x58c, 0x9, 0xb, 
    0x2, 0x2, 0x58c, 0x58d, 0x5, 0x12e, 0x98, 0x2, 0x58d, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x58e, 0x58f, 0x9, 0xc, 0x2, 0x2, 0x58f, 0x590, 0x5, 0x134, 
    0x9b, 0x2, 0x590, 0x133, 0x3, 0x2, 0x2, 0x2, 0x591, 0x596, 0x9, 0xd, 
    0x2, 0x2, 0x592, 0x594, 0x5, 0x12e, 0x98, 0x2, 0x593, 0x595, 0x7, 0x95, 
    0x2, 0x2, 0x594, 0x593, 0x3, 0x2, 0x2, 0x2, 0x594, 0x595, 0x3, 0x2, 
    0x2, 0x2, 0x595, 0x597, 0x3, 0x2, 0x2, 0x2, 0x596, 0x592, 0x3, 0x2, 
    0x2, 0x2, 0x597, 0x598, 0x3, 0x2, 0x2, 0x2, 0x598, 0x596, 0x3, 0x2, 
    0x2, 0x2, 0x598, 0x599, 0x3, 0x2, 0x2, 0x2, 0x599, 0x59a, 0x3, 0x2, 
    0x2, 0x2, 0x59a, 0x59b, 0x9, 0xe, 0x2, 0x2, 0x59b, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x59c, 0x59d, 0x9, 0xf, 0x2, 0x2, 0x59d, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x59e, 0x59f, 0x9, 0x10, 0x2, 0x2, 0x59f, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x5a0, 0x5a2, 0x5, 0x13c, 0x9f, 0x2, 0x5a1, 0x5a3, 0x7, 0x95, 
    0x2, 0x2, 0x5a2, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a3, 0x3, 0x2, 
    0x2, 0x2, 0x5a3, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a0, 0x3, 0x2, 
    0x2, 0x2, 0x5a5, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a4, 0x3, 0x2, 
    0x2, 0x2, 0x5a6, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5b4, 0x3, 0x2, 
    0x2, 0x2, 0x5a8, 0x5ad, 0x7, 0x8e, 0x2, 0x2, 0x5a9, 0x5ab, 0x5, 0x13c, 
    0x9f, 0x2, 0x5aa, 0x5ac, 0x7, 0x95, 0x2, 0x2, 0x5ab, 0x5aa, 0x3, 0x2, 
    0x2, 0x2, 0x5ab, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ae, 0x3, 0x2, 
    0x2, 0x2, 0x5ad, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5af, 0x3, 0x2, 
    0x2, 0x2, 0x5af, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b0, 0x3, 0x2, 
    0x2, 0x2, 0x5b0, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 0x7, 0x8f, 
    0x2, 0x2, 0x5b2, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5a4, 0x3, 0x2, 
    0x2, 0x2, 0x5b3, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x5b5, 0x5b6, 0x5, 0x140, 0xa1, 0x2, 0x5b6, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x5b7, 0x5b8, 0x5, 0x140, 0xa1, 0x2, 0x5b8, 0x5b9, 0x7, 0x77, 
    0x2, 0x2, 0x5b9, 0x5ba, 0x5, 0x140, 0xa1, 0x2, 0x5ba, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x5bb, 0x5be, 0x9, 0x11, 0x2, 0x2, 0x5bc, 0x5bd, 0x7, 0x98, 
    0x2, 0x2, 0x5bd, 0x5bf, 0x5, 0x140, 0xa1, 0x2, 0x5be, 0x5bc, 0x3, 0x2, 
    0x2, 0x2, 0x5be, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x5c0, 0x5c2, 0x7, 0x36, 0x2, 0x2, 0x5c1, 0x5c0, 0x3, 0x2, 
    0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c4, 0x3, 0x2, 
    0x2, 0x2, 0x5c3, 0x5c5, 0x7, 0x8e, 0x2, 0x2, 0x5c4, 0x5c3, 0x3, 0x2, 
    0x2, 0x2, 0x5c4, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c7, 0x3, 0x2, 
    0x2, 0x2, 0x5c6, 0x5c8, 0x5, 0x144, 0xa3, 0x2, 0x5c7, 0x5c6, 0x3, 0x2, 
    0x2, 0x2, 0x5c8, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5c7, 0x3, 0x2, 
    0x2, 0x2, 0x5c9, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cc, 0x3, 0x2, 
    0x2, 0x2, 0x5cb, 0x5cd, 0x7, 0x8f, 0x2, 0x2, 0x5cc, 0x5cb, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x5ce, 0x5cf, 0x5, 0x146, 0xa4, 0x2, 0x5cf, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x5d0, 0x5d3, 0x5, 0x148, 0xa5, 0x2, 0x5d1, 0x5d2, 0x7, 0x77, 
    0x2, 0x2, 0x5d2, 0x5d4, 0x5, 0x12e, 0x98, 0x2, 0x5d3, 0x5d1, 0x3, 0x2, 
    0x2, 0x2, 0x5d3, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x5d5, 0x5d7, 0x9, 0xc, 0x2, 0x2, 0x5d6, 0x5d8, 0x5, 0x14a, 
    0xa6, 0x2, 0x5d7, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d8, 0x3, 0x2, 
    0x2, 0x2, 0x5d8, 0x149, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5de, 0x7, 0x8e, 
    0x2, 0x2, 0x5da, 0x5dc, 0x7, 0xa8, 0x2, 0x2, 0x5db, 0x5dd, 0x7, 0x95, 
    0x2, 0x2, 0x5dc, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5dd, 0x3, 0x2, 
    0x2, 0x2, 0x5dd, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5de, 0x5da, 0x3, 0x2, 
    0x2, 0x2, 0x5df, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5de, 0x3, 0x2, 
    0x2, 0x2, 0x5e0, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x5e3, 0x7, 0x8f, 0x2, 0x2, 0x5e3, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x5e4, 0x5e5, 0x5, 0x14e, 0xa8, 0x2, 0x5e5, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x5e6, 0x5f7, 0x7, 0xa8, 0x2, 0x2, 0x5e7, 0x5f7, 0x7, 0xa9, 
    0x2, 0x2, 0x5e8, 0x5e9, 0x7, 0xa8, 0x2, 0x2, 0x5e9, 0x5f7, 0x5, 0x14e, 
    0xa8, 0x2, 0x5ea, 0x5eb, 0x7, 0x9e, 0x2, 0x2, 0x5eb, 0x5ec, 0x5, 0x14e, 
    0xa8, 0x2, 0x5ec, 0x5ed, 0x7, 0x9e, 0x2, 0x2, 0x5ed, 0x5f7, 0x3, 0x2, 
    0x2, 0x2, 0x5ee, 0x5ef, 0x7, 0x9d, 0x2, 0x2, 0x5ef, 0x5f7, 0x5, 0x14e, 
    0xa8, 0x2, 0x5f0, 0x5f1, 0x7, 0x98, 0x2, 0x2, 0x5f1, 0x5f7, 0x5, 0x14e, 
    0xa8, 0x2, 0x5f2, 0x5f3, 0x7, 0x8c, 0x2, 0x2, 0x5f3, 0x5f7, 0x5, 0x14e, 
    0xa8, 0x2, 0x5f4, 0x5f5, 0x7, 0x96, 0x2, 0x2, 0x5f5, 0x5f7, 0x5, 0x14e, 
    0xa8, 0x2, 0x5f6, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5e7, 0x3, 0x2, 
    0x2, 0x2, 0x5f6, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5ea, 0x3, 0x2, 
    0x2, 0x2, 0x5f6, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f0, 0x3, 0x2, 
    0x2, 0x2, 0x5f6, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f4, 0x3, 0x2, 
    0x2, 0x2, 0x5f7, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5fa, 0x7, 0xaa, 
    0x2, 0x2, 0x5f9, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fd, 0x3, 0x2, 
    0x2, 0x2, 0x5fb, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fc, 0x3, 0x2, 
    0x2, 0x2, 0x5fc, 0x600, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fb, 0x3, 0x2, 
    0x2, 0x2, 0x5fe, 0x600, 0x7, 0x2, 0x2, 0x3, 0x5ff, 0x5fb, 0x3, 0x2, 
    0x2, 0x2, 0x5ff, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x600, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x153, 0x159, 0x161, 0x16e, 0x173, 0x180, 0x184, 0x18a, 
    0x18e, 0x19e, 0x1ab, 0x1b1, 0x1b8, 0x1bb, 0x1be, 0x1c6, 0x1e7, 0x1ee, 
    0x1f7, 0x1fb, 0x1ff, 0x214, 0x21a, 0x21d, 0x223, 0x227, 0x230, 0x233, 
    0x23a, 0x23f, 0x245, 0x249, 0x251, 0x259, 0x260, 0x263, 0x267, 0x26f, 
    0x277, 0x282, 0x291, 0x299, 0x29e, 0x2a3, 0x2a8, 0x2ab, 0x2af, 0x2b2, 
    0x2b5, 0x2b9, 0x2bf, 0x2c5, 0x2d1, 0x2d4, 0x2e4, 0x2ec, 0x2f4, 0x302, 
    0x30c, 0x31c, 0x324, 0x326, 0x329, 0x330, 0x333, 0x33a, 0x340, 0x346, 
    0x34e, 0x351, 0x35a, 0x35e, 0x379, 0x37f, 0x388, 0x393, 0x397, 0x39d, 
    0x3a4, 0x3b0, 0x3b3, 0x3b6, 0x3b9, 0x3bc, 0x3d0, 0x3d7, 0x3dc, 0x3df, 
    0x3e8, 0x3ee, 0x3f6, 0x3fd, 0x405, 0x409, 0x40c, 0x41a, 0x41d, 0x423, 
    0x426, 0x42f, 0x435, 0x438, 0x43b, 0x441, 0x444, 0x447, 0x44a, 0x465, 
    0x482, 0x48f, 0x494, 0x499, 0x49b, 0x4a0, 0x4a3, 0x4a8, 0x4ad, 0x4af, 
    0x4c0, 0x4c8, 0x4cf, 0x4eb, 0x504, 0x50d, 0x510, 0x514, 0x520, 0x52b, 
    0x52e, 0x54f, 0x553, 0x555, 0x55d, 0x565, 0x568, 0x574, 0x584, 0x586, 
    0x588, 0x594, 0x598, 0x5a2, 0x5a6, 0x5ab, 0x5af, 0x5b3, 0x5be, 0x5c1, 
    0x5c4, 0x5c9, 0x5cc, 0x5d3, 0x5d7, 0x5dc, 0x5e0, 0x5f6, 0x5fb, 0x5ff, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ELDOParser::Initializer ELDOParser::_init;
