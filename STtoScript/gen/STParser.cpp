
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2


#include "STListener.h"
#include "STVisitor.h"

#include "STParser.h"


using namespace antlrcpp;
using namespace antlr4;

STParser::STParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

STParser::~STParser() {
  delete _interpreter;
}

std::string STParser::getGrammarFileName() const {
  return "ST.g4";
}

const std::vector<std::string>& STParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& STParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

STParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::Stmt_listContext* STParser::InputContext::stmt_list() {
  return getRuleContext<STParser::Stmt_listContext>(0);
}

tree::TerminalNode* STParser::InputContext::EOF() {
  return getToken(STParser::EOF, 0);
}


size_t STParser::InputContext::getRuleIndex() const {
  return STParser::RuleInput;
}

void STParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void STParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any STParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

STParser::InputContext* STParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, STParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    stmt_list();
    setState(69);
    match(STParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

STParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<STParser::StatementContext *> STParser::Stmt_listContext::statement() {
  return getRuleContexts<STParser::StatementContext>();
}

STParser::StatementContext* STParser::Stmt_listContext::statement(size_t i) {
  return getRuleContext<STParser::StatementContext>(i);
}


size_t STParser::Stmt_listContext::getRuleIndex() const {
  return STParser::RuleStmt_list;
}

void STParser::Stmt_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_list(this);
}

void STParser::Stmt_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_list(this);
}


antlrcpp::Any STParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

STParser::Stmt_listContext* STParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 2, STParser::RuleStmt_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(74);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(71);
        statement(); 
      }
      setState(76);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

STParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::StatementContext::getRuleIndex() const {
  return STParser::RuleStatement;
}

void STParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- St_commentContext ------------------------------------------------------------------

STParser::CommentContext* STParser::St_commentContext::comment() {
  return getRuleContext<STParser::CommentContext>(0);
}

STParser::St_commentContext::St_commentContext(StatementContext *ctx) { copyFrom(ctx); }

void STParser::St_commentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_comment(this);
}
void STParser::St_commentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_comment(this);
}

antlrcpp::Any STParser::St_commentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitSt_comment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtContext ------------------------------------------------------------------

tree::TerminalNode* STParser::StmtContext::SEMI_COLON() {
  return getToken(STParser::SEMI_COLON, 0);
}

STParser::Single_stmtContext* STParser::StmtContext::single_stmt() {
  return getRuleContext<STParser::Single_stmtContext>(0);
}

STParser::StmtContext::StmtContext(StatementContext *ctx) { copyFrom(ctx); }

void STParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}
void STParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

antlrcpp::Any STParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}
STParser::StatementContext* STParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, STParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::SINGLE_LINE_COMMENT:
      case STParser::MULTI_LINE_COMMENT_A: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<STParser::St_commentContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(77);
        comment();
        break;
      }

      case STParser::SEMI_COLON:
      case STParser::CASE:
      case STParser::REPEAT:
      case STParser::EXIT:
      case STParser::RETURN:
      case STParser::IDENTIFIER: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<STParser::StmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(79);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << STParser::CASE)
          | (1ULL << STParser::REPEAT)
          | (1ULL << STParser::EXIT)
          | (1ULL << STParser::RETURN)
          | (1ULL << STParser::IDENTIFIER))) != 0)) {
          setState(78);
          single_stmt();
        }
        setState(81);
        match(STParser::SEMI_COLON);
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

//----------------- CommentContext ------------------------------------------------------------------

STParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::CommentContext::getRuleIndex() const {
  return STParser::RuleComment;
}

void STParser::CommentContext::copyFrom(CommentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Line_commentContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Line_commentContext::SINGLE_LINE_COMMENT() {
  return getToken(STParser::SINGLE_LINE_COMMENT, 0);
}

STParser::Line_commentContext::Line_commentContext(CommentContext *ctx) { copyFrom(ctx); }

void STParser::Line_commentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine_comment(this);
}
void STParser::Line_commentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine_comment(this);
}

antlrcpp::Any STParser::Line_commentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitLine_comment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Multi_commentContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Multi_commentContext::MULTI_LINE_COMMENT_A() {
  return getToken(STParser::MULTI_LINE_COMMENT_A, 0);
}

STParser::Multi_commentContext::Multi_commentContext(CommentContext *ctx) { copyFrom(ctx); }

void STParser::Multi_commentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comment(this);
}
void STParser::Multi_commentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comment(this);
}

antlrcpp::Any STParser::Multi_commentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitMulti_comment(this);
  else
    return visitor->visitChildren(this);
}
STParser::CommentContext* STParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 6, STParser::RuleComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::SINGLE_LINE_COMMENT: {
        _localctx = dynamic_cast<CommentContext *>(_tracker.createInstance<STParser::Line_commentContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(84);
        match(STParser::SINGLE_LINE_COMMENT);
        break;
      }

      case STParser::MULTI_LINE_COMMENT_A: {
        _localctx = dynamic_cast<CommentContext *>(_tracker.createInstance<STParser::Multi_commentContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(85);
        match(STParser::MULTI_LINE_COMMENT_A);
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

//----------------- Single_stmtContext ------------------------------------------------------------------

STParser::Single_stmtContext::Single_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Single_stmtContext::getRuleIndex() const {
  return STParser::RuleSingle_stmt;
}

void STParser::Single_stmtContext::copyFrom(Single_stmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Stmt_funcContext ------------------------------------------------------------------

STParser::FunctionContext* STParser::Stmt_funcContext::function() {
  return getRuleContext<STParser::FunctionContext>(0);
}

STParser::Stmt_funcContext::Stmt_funcContext(Single_stmtContext *ctx) { copyFrom(ctx); }

void STParser::Stmt_funcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_func(this);
}
void STParser::Stmt_funcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_func(this);
}

antlrcpp::Any STParser::Stmt_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_func(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Stmt_assignContext ------------------------------------------------------------------

STParser::AssignContext* STParser::Stmt_assignContext::assign() {
  return getRuleContext<STParser::AssignContext>(0);
}

STParser::Stmt_assignContext::Stmt_assignContext(Single_stmtContext *ctx) { copyFrom(ctx); }

void STParser::Stmt_assignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_assign(this);
}
void STParser::Stmt_assignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_assign(this);
}

antlrcpp::Any STParser::Stmt_assignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_assign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Stmt_repeatContext ------------------------------------------------------------------

STParser::RepeatContext* STParser::Stmt_repeatContext::repeat() {
  return getRuleContext<STParser::RepeatContext>(0);
}

STParser::Stmt_repeatContext::Stmt_repeatContext(Single_stmtContext *ctx) { copyFrom(ctx); }

void STParser::Stmt_repeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_repeat(this);
}
void STParser::Stmt_repeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_repeat(this);
}

antlrcpp::Any STParser::Stmt_repeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_repeat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Stmt_returnContext ------------------------------------------------------------------

STParser::S_returnContext* STParser::Stmt_returnContext::s_return() {
  return getRuleContext<STParser::S_returnContext>(0);
}

STParser::Stmt_returnContext::Stmt_returnContext(Single_stmtContext *ctx) { copyFrom(ctx); }

void STParser::Stmt_returnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_return(this);
}
void STParser::Stmt_returnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_return(this);
}

antlrcpp::Any STParser::Stmt_returnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_return(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Stmt_exitContext ------------------------------------------------------------------

STParser::ExitContext* STParser::Stmt_exitContext::exit() {
  return getRuleContext<STParser::ExitContext>(0);
}

STParser::Stmt_exitContext::Stmt_exitContext(Single_stmtContext *ctx) { copyFrom(ctx); }

void STParser::Stmt_exitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_exit(this);
}
void STParser::Stmt_exitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_exit(this);
}

antlrcpp::Any STParser::Stmt_exitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_exit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Stmt_caseContext ------------------------------------------------------------------

STParser::S_caseContext* STParser::Stmt_caseContext::s_case() {
  return getRuleContext<STParser::S_caseContext>(0);
}

STParser::Stmt_caseContext::Stmt_caseContext(Single_stmtContext *ctx) { copyFrom(ctx); }

void STParser::Stmt_caseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_case(this);
}
void STParser::Stmt_caseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_case(this);
}

antlrcpp::Any STParser::Stmt_caseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStmt_case(this);
  else
    return visitor->visitChildren(this);
}
STParser::Single_stmtContext* STParser::single_stmt() {
  Single_stmtContext *_localctx = _tracker.createInstance<Single_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, STParser::RuleSingle_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Single_stmtContext *>(_tracker.createInstance<STParser::Stmt_assignContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(88);
      assign();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Single_stmtContext *>(_tracker.createInstance<STParser::Stmt_funcContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(89);
      function();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Single_stmtContext *>(_tracker.createInstance<STParser::Stmt_repeatContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(90);
      repeat();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Single_stmtContext *>(_tracker.createInstance<STParser::Stmt_exitContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(91);
      exit();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Single_stmtContext *>(_tracker.createInstance<STParser::Stmt_caseContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(92);
      s_case();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<Single_stmtContext *>(_tracker.createInstance<STParser::Stmt_returnContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(93);
      s_return();
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

//----------------- S_returnContext ------------------------------------------------------------------

STParser::S_returnContext::S_returnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::S_returnContext::RETURN() {
  return getToken(STParser::RETURN, 0);
}


size_t STParser::S_returnContext::getRuleIndex() const {
  return STParser::RuleS_return;
}

void STParser::S_returnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_return(this);
}

void STParser::S_returnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_return(this);
}


antlrcpp::Any STParser::S_returnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitS_return(this);
  else
    return visitor->visitChildren(this);
}

STParser::S_returnContext* STParser::s_return() {
  S_returnContext *_localctx = _tracker.createInstance<S_returnContext>(_ctx, getState());
  enterRule(_localctx, 10, STParser::RuleS_return);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(STParser::RETURN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_caseContext ------------------------------------------------------------------

STParser::S_caseContext::S_caseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::S_caseContext::CASE() {
  return getToken(STParser::CASE, 0);
}

STParser::ExprContext* STParser::S_caseContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}

tree::TerminalNode* STParser::S_caseContext::OF() {
  return getToken(STParser::OF, 0);
}

tree::TerminalNode* STParser::S_caseContext::END_CASE() {
  return getToken(STParser::END_CASE, 0);
}

tree::TerminalNode* STParser::S_caseContext::ELSE() {
  return getToken(STParser::ELSE, 0);
}

std::vector<STParser::Case_selectContext *> STParser::S_caseContext::case_select() {
  return getRuleContexts<STParser::Case_selectContext>();
}

STParser::Case_selectContext* STParser::S_caseContext::case_select(size_t i) {
  return getRuleContext<STParser::Case_selectContext>(i);
}

STParser::Stmt_listContext* STParser::S_caseContext::stmt_list() {
  return getRuleContext<STParser::Stmt_listContext>(0);
}


size_t STParser::S_caseContext::getRuleIndex() const {
  return STParser::RuleS_case;
}

void STParser::S_caseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_case(this);
}

void STParser::S_caseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_case(this);
}


antlrcpp::Any STParser::S_caseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitS_case(this);
  else
    return visitor->visitChildren(this);
}

STParser::S_caseContext* STParser::s_case() {
  S_caseContext *_localctx = _tracker.createInstance<S_caseContext>(_ctx, getState());
  enterRule(_localctx, 12, STParser::RuleS_case);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(STParser::CASE);
    setState(99);
    expr(0);
    setState(100);
    match(STParser::OF);
    setState(102); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(101);
      dynamic_cast<S_caseContext *>(_localctx)->cases = case_select();
      setState(104); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STParser::EXPLICIT_INT)
      | (1ULL << STParser::EXPLICIT_UINT)
      | (1ULL << STParser::EXPLICIT_DINT)
      | (1ULL << STParser::EXPLICIT_UDINT)
      | (1ULL << STParser::EXPLICIT_REAL)
      | (1ULL << STParser::EXPLICIT_LREAL)
      | (1ULL << STParser::EXPLICIT_STRING)
      | (1ULL << STParser::IDENTIFIER)
      | (1ULL << STParser::BINARY_NOTATION)
      | (1ULL << STParser::OCTAL_NOTATION)
      | (1ULL << STParser::HEXA_NOTATION)
      | (1ULL << STParser::DEC_NOTATION)
      | (1ULL << STParser::REAL_NUM)
      | (1ULL << STParser::MBCS)
      | (1ULL << STParser::WSTR))) != 0));
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STParser::ELSE) {
      setState(106);
      match(STParser::ELSE);
      setState(107);
      dynamic_cast<S_caseContext *>(_localctx)->else_stmt = stmt_list();
    }
    setState(110);
    match(STParser::END_CASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_selectContext ------------------------------------------------------------------

STParser::Case_selectContext::Case_selectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::Case_listContext* STParser::Case_selectContext::case_list() {
  return getRuleContext<STParser::Case_listContext>(0);
}

tree::TerminalNode* STParser::Case_selectContext::COLON() {
  return getToken(STParser::COLON, 0);
}

STParser::Stmt_listContext* STParser::Case_selectContext::stmt_list() {
  return getRuleContext<STParser::Stmt_listContext>(0);
}


size_t STParser::Case_selectContext::getRuleIndex() const {
  return STParser::RuleCase_select;
}

void STParser::Case_selectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_select(this);
}

void STParser::Case_selectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_select(this);
}


antlrcpp::Any STParser::Case_selectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitCase_select(this);
  else
    return visitor->visitChildren(this);
}

STParser::Case_selectContext* STParser::case_select() {
  Case_selectContext *_localctx = _tracker.createInstance<Case_selectContext>(_ctx, getState());
  enterRule(_localctx, 14, STParser::RuleCase_select);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    case_list();
    setState(113);
    match(STParser::COLON);
    setState(114);
    dynamic_cast<Case_selectContext *>(_localctx)->case_stmt = stmt_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_listContext ------------------------------------------------------------------

STParser::Case_listContext::Case_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<STParser::Case_list_elemContext *> STParser::Case_listContext::case_list_elem() {
  return getRuleContexts<STParser::Case_list_elemContext>();
}

STParser::Case_list_elemContext* STParser::Case_listContext::case_list_elem(size_t i) {
  return getRuleContext<STParser::Case_list_elemContext>(i);
}

std::vector<tree::TerminalNode *> STParser::Case_listContext::COMMA() {
  return getTokens(STParser::COMMA);
}

tree::TerminalNode* STParser::Case_listContext::COMMA(size_t i) {
  return getToken(STParser::COMMA, i);
}


size_t STParser::Case_listContext::getRuleIndex() const {
  return STParser::RuleCase_list;
}

void STParser::Case_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_list(this);
}

void STParser::Case_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_list(this);
}


antlrcpp::Any STParser::Case_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitCase_list(this);
  else
    return visitor->visitChildren(this);
}

STParser::Case_listContext* STParser::case_list() {
  Case_listContext *_localctx = _tracker.createInstance<Case_listContext>(_ctx, getState());
  enterRule(_localctx, 16, STParser::RuleCase_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    case_list_elem();
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == STParser::COMMA) {
      setState(117);
      match(STParser::COMMA);
      setState(118);
      case_list_elem();
      setState(123);
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

//----------------- Case_list_elemContext ------------------------------------------------------------------

STParser::Case_list_elemContext::Case_list_elemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::SubrangeContext* STParser::Case_list_elemContext::subrange() {
  return getRuleContext<STParser::SubrangeContext>(0);
}

STParser::Constant_valContext* STParser::Case_list_elemContext::constant_val() {
  return getRuleContext<STParser::Constant_valContext>(0);
}

STParser::LabelContext* STParser::Case_list_elemContext::label() {
  return getRuleContext<STParser::LabelContext>(0);
}


size_t STParser::Case_list_elemContext::getRuleIndex() const {
  return STParser::RuleCase_list_elem;
}

void STParser::Case_list_elemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_list_elem(this);
}

void STParser::Case_list_elemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_list_elem(this);
}


antlrcpp::Any STParser::Case_list_elemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitCase_list_elem(this);
  else
    return visitor->visitChildren(this);
}

STParser::Case_list_elemContext* STParser::case_list_elem() {
  Case_list_elemContext *_localctx = _tracker.createInstance<Case_list_elemContext>(_ctx, getState());
  enterRule(_localctx, 18, STParser::RuleCase_list_elem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(124);
      subrange();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
      constant_val();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(126);
      label();
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

//----------------- SubrangeContext ------------------------------------------------------------------

STParser::SubrangeContext::SubrangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::SubrangeContext::RANGE() {
  return getToken(STParser::RANGE, 0);
}

std::vector<STParser::Range_valContext *> STParser::SubrangeContext::range_val() {
  return getRuleContexts<STParser::Range_valContext>();
}

STParser::Range_valContext* STParser::SubrangeContext::range_val(size_t i) {
  return getRuleContext<STParser::Range_valContext>(i);
}


size_t STParser::SubrangeContext::getRuleIndex() const {
  return STParser::RuleSubrange;
}

void STParser::SubrangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubrange(this);
}

void STParser::SubrangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubrange(this);
}


antlrcpp::Any STParser::SubrangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitSubrange(this);
  else
    return visitor->visitChildren(this);
}

STParser::SubrangeContext* STParser::subrange() {
  SubrangeContext *_localctx = _tracker.createInstance<SubrangeContext>(_ctx, getState());
  enterRule(_localctx, 20, STParser::RuleSubrange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    dynamic_cast<SubrangeContext *>(_localctx)->range_l = range_val();
    setState(130);
    match(STParser::RANGE);
    setState(131);
    dynamic_cast<SubrangeContext *>(_localctx)->range_h = range_val();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Range_valContext ------------------------------------------------------------------

STParser::Range_valContext::Range_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::Constant_valContext* STParser::Range_valContext::constant_val() {
  return getRuleContext<STParser::Constant_valContext>(0);
}

STParser::LabelContext* STParser::Range_valContext::label() {
  return getRuleContext<STParser::LabelContext>(0);
}


size_t STParser::Range_valContext::getRuleIndex() const {
  return STParser::RuleRange_val;
}

void STParser::Range_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange_val(this);
}

void STParser::Range_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange_val(this);
}


antlrcpp::Any STParser::Range_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitRange_val(this);
  else
    return visitor->visitChildren(this);
}

STParser::Range_valContext* STParser::range_val() {
  Range_valContext *_localctx = _tracker.createInstance<Range_valContext>(_ctx, getState());
  enterRule(_localctx, 22, STParser::RuleRange_val);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::EXPLICIT_INT:
      case STParser::EXPLICIT_UINT:
      case STParser::EXPLICIT_DINT:
      case STParser::EXPLICIT_UDINT:
      case STParser::EXPLICIT_REAL:
      case STParser::EXPLICIT_LREAL:
      case STParser::EXPLICIT_STRING:
      case STParser::BINARY_NOTATION:
      case STParser::OCTAL_NOTATION:
      case STParser::HEXA_NOTATION:
      case STParser::DEC_NOTATION:
      case STParser::REAL_NUM:
      case STParser::MBCS:
      case STParser::WSTR: {
        enterOuterAlt(_localctx, 1);
        setState(133);
        constant_val();
        break;
      }

      case STParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        label();
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

//----------------- LabelContext ------------------------------------------------------------------

STParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::LabelContext::IDENTIFIER() {
  return getToken(STParser::IDENTIFIER, 0);
}


size_t STParser::LabelContext::getRuleIndex() const {
  return STParser::RuleLabel;
}

void STParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void STParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}


antlrcpp::Any STParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

STParser::LabelContext* STParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 24, STParser::RuleLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(STParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatContext ------------------------------------------------------------------

STParser::RepeatContext::RepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::RepeatContext::REPEAT() {
  return getToken(STParser::REPEAT, 0);
}

STParser::Stmt_listContext* STParser::RepeatContext::stmt_list() {
  return getRuleContext<STParser::Stmt_listContext>(0);
}

tree::TerminalNode* STParser::RepeatContext::UNTIL() {
  return getToken(STParser::UNTIL, 0);
}

STParser::ExprContext* STParser::RepeatContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}

tree::TerminalNode* STParser::RepeatContext::END_REPEAT() {
  return getToken(STParser::END_REPEAT, 0);
}


size_t STParser::RepeatContext::getRuleIndex() const {
  return STParser::RuleRepeat;
}

void STParser::RepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat(this);
}

void STParser::RepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat(this);
}


antlrcpp::Any STParser::RepeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitRepeat(this);
  else
    return visitor->visitChildren(this);
}

STParser::RepeatContext* STParser::repeat() {
  RepeatContext *_localctx = _tracker.createInstance<RepeatContext>(_ctx, getState());
  enterRule(_localctx, 26, STParser::RuleRepeat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(STParser::REPEAT);
    setState(140);
    stmt_list();
    setState(141);
    match(STParser::UNTIL);
    setState(142);
    expr(0);
    setState(143);
    match(STParser::END_REPEAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitContext ------------------------------------------------------------------

STParser::ExitContext::ExitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::ExitContext::EXIT() {
  return getToken(STParser::EXIT, 0);
}


size_t STParser::ExitContext::getRuleIndex() const {
  return STParser::RuleExit;
}

void STParser::ExitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExit(this);
}

void STParser::ExitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExit(this);
}


antlrcpp::Any STParser::ExitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExit(this);
  else
    return visitor->visitChildren(this);
}

STParser::ExitContext* STParser::exit() {
  ExitContext *_localctx = _tracker.createInstance<ExitContext>(_ctx, getState());
  enterRule(_localctx, 28, STParser::RuleExit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(STParser::EXIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

STParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::AssignContext::IDENTIFIER() {
  return getToken(STParser::IDENTIFIER, 0);
}

tree::TerminalNode* STParser::AssignContext::ASSIGN() {
  return getToken(STParser::ASSIGN, 0);
}

STParser::ExprContext* STParser::AssignContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}


size_t STParser::AssignContext::getRuleIndex() const {
  return STParser::RuleAssign;
}

void STParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void STParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


antlrcpp::Any STParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

STParser::AssignContext* STParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 30, STParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(STParser::IDENTIFIER);
    setState(148);
    match(STParser::ASSIGN);
    setState(149);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

STParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::ExprContext::getRuleIndex() const {
  return STParser::RuleExpr;
}

void STParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_constContext ------------------------------------------------------------------

STParser::Constant_valContext* STParser::Expr_constContext::constant_val() {
  return getRuleContext<STParser::Constant_valContext>(0);
}

STParser::Expr_constContext::Expr_constContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_constContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_const(this);
}
void STParser::Expr_constContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_const(this);
}

antlrcpp::Any STParser::Expr_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_const(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_logical_xorContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Expr_logical_xorContext::XOR() {
  return getToken(STParser::XOR, 0);
}

std::vector<STParser::ExprContext *> STParser::Expr_logical_xorContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_logical_xorContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

STParser::Expr_logical_xorContext::Expr_logical_xorContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_logical_xorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_logical_xor(this);
}
void STParser::Expr_logical_xorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_logical_xor(this);
}

antlrcpp::Any STParser::Expr_logical_xorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_logical_xor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_cmpContext ------------------------------------------------------------------

std::vector<STParser::ExprContext *> STParser::Expr_cmpContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_cmpContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

tree::TerminalNode* STParser::Expr_cmpContext::GT() {
  return getToken(STParser::GT, 0);
}

tree::TerminalNode* STParser::Expr_cmpContext::LT() {
  return getToken(STParser::LT, 0);
}

tree::TerminalNode* STParser::Expr_cmpContext::LE() {
  return getToken(STParser::LE, 0);
}

tree::TerminalNode* STParser::Expr_cmpContext::GE() {
  return getToken(STParser::GE, 0);
}

STParser::Expr_cmpContext::Expr_cmpContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_cmpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_cmp(this);
}
void STParser::Expr_cmpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_cmp(this);
}

antlrcpp::Any STParser::Expr_cmpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_cmp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_varContext ------------------------------------------------------------------

STParser::VariableContext* STParser::Expr_varContext::variable() {
  return getRuleContext<STParser::VariableContext>(0);
}

STParser::Expr_varContext::Expr_varContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_var(this);
}
void STParser::Expr_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_var(this);
}

antlrcpp::Any STParser::Expr_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_var(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_powerContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Expr_powerContext::POW() {
  return getToken(STParser::POW, 0);
}

std::vector<STParser::ExprContext *> STParser::Expr_powerContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_powerContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

STParser::Expr_powerContext::Expr_powerContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_powerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_power(this);
}
void STParser::Expr_powerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_power(this);
}

antlrcpp::Any STParser::Expr_powerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_power(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multipricativeContext ------------------------------------------------------------------

std::vector<STParser::ExprContext *> STParser::Expr_multipricativeContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_multipricativeContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

tree::TerminalNode* STParser::Expr_multipricativeContext::ASTERISK() {
  return getToken(STParser::ASTERISK, 0);
}

tree::TerminalNode* STParser::Expr_multipricativeContext::SLASH() {
  return getToken(STParser::SLASH, 0);
}

tree::TerminalNode* STParser::Expr_multipricativeContext::MOD() {
  return getToken(STParser::MOD, 0);
}

STParser::Expr_multipricativeContext::Expr_multipricativeContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_multipricativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_multipricative(this);
}
void STParser::Expr_multipricativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_multipricative(this);
}

antlrcpp::Any STParser::Expr_multipricativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_multipricative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_eqContext ------------------------------------------------------------------

std::vector<STParser::ExprContext *> STParser::Expr_eqContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_eqContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

tree::TerminalNode* STParser::Expr_eqContext::EQ() {
  return getToken(STParser::EQ, 0);
}

tree::TerminalNode* STParser::Expr_eqContext::NEQ() {
  return getToken(STParser::NEQ, 0);
}

STParser::Expr_eqContext::Expr_eqContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_eqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_eq(this);
}
void STParser::Expr_eqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_eq(this);
}

antlrcpp::Any STParser::Expr_eqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_eq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_logical_andContext ------------------------------------------------------------------

std::vector<STParser::ExprContext *> STParser::Expr_logical_andContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_logical_andContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

tree::TerminalNode* STParser::Expr_logical_andContext::AND() {
  return getToken(STParser::AND, 0);
}

tree::TerminalNode* STParser::Expr_logical_andContext::AMBASSADOR() {
  return getToken(STParser::AMBASSADOR, 0);
}

STParser::Expr_logical_andContext::Expr_logical_andContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_logical_andContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_logical_and(this);
}
void STParser::Expr_logical_andContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_logical_and(this);
}

antlrcpp::Any STParser::Expr_logical_andContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_logical_and(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_funcContext ------------------------------------------------------------------

STParser::FunctionContext* STParser::Expr_funcContext::function() {
  return getRuleContext<STParser::FunctionContext>(0);
}

STParser::Expr_funcContext::Expr_funcContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_funcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_func(this);
}
void STParser::Expr_funcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_func(this);
}

antlrcpp::Any STParser::Expr_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_func(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_additiveContext ------------------------------------------------------------------

std::vector<STParser::ExprContext *> STParser::Expr_additiveContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_additiveContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

tree::TerminalNode* STParser::Expr_additiveContext::PLUS() {
  return getToken(STParser::PLUS, 0);
}

tree::TerminalNode* STParser::Expr_additiveContext::MINUS() {
  return getToken(STParser::MINUS, 0);
}

STParser::Expr_additiveContext::Expr_additiveContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_additiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_additive(this);
}
void STParser::Expr_additiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_additive(this);
}

antlrcpp::Any STParser::Expr_additiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_additive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_unaryContext ------------------------------------------------------------------

STParser::ExprContext* STParser::Expr_unaryContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}

tree::TerminalNode* STParser::Expr_unaryContext::PLUS() {
  return getToken(STParser::PLUS, 0);
}

tree::TerminalNode* STParser::Expr_unaryContext::MINUS() {
  return getToken(STParser::MINUS, 0);
}

tree::TerminalNode* STParser::Expr_unaryContext::NOT() {
  return getToken(STParser::NOT, 0);
}

STParser::Expr_unaryContext::Expr_unaryContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_unaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_unary(this);
}
void STParser::Expr_unaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_unary(this);
}

antlrcpp::Any STParser::Expr_unaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_unary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_noneContext ------------------------------------------------------------------

STParser::Paren_exprContext* STParser::Expr_noneContext::paren_expr() {
  return getRuleContext<STParser::Paren_exprContext>(0);
}

STParser::Expr_noneContext::Expr_noneContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_noneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_none(this);
}
void STParser::Expr_noneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_none(this);
}

antlrcpp::Any STParser::Expr_noneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_none(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_logical_orContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Expr_logical_orContext::OR() {
  return getToken(STParser::OR, 0);
}

std::vector<STParser::ExprContext *> STParser::Expr_logical_orContext::expr() {
  return getRuleContexts<STParser::ExprContext>();
}

STParser::ExprContext* STParser::Expr_logical_orContext::expr(size_t i) {
  return getRuleContext<STParser::ExprContext>(i);
}

STParser::Expr_logical_orContext::Expr_logical_orContext(ExprContext *ctx) { copyFrom(ctx); }

void STParser::Expr_logical_orContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_logical_or(this);
}
void STParser::Expr_logical_orContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_logical_or(this);
}

antlrcpp::Any STParser::Expr_logical_orContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitExpr_logical_or(this);
  else
    return visitor->visitChildren(this);
}

STParser::ExprContext* STParser::expr() {
   return expr(0);
}

STParser::ExprContext* STParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  STParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  STParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, STParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(158);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_constContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(152);
      constant_val();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_funcContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(153);
      function();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_varContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(154);
      variable();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(155);
      paren_expr();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expr_unaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(156);
      dynamic_cast<Expr_unaryContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << STParser::PLUS)
        | (1ULL << STParser::MINUS)
        | (1ULL << STParser::NOT))) != 0))) {
        dynamic_cast<Expr_unaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(157);
      expr(9);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(186);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(184);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_powerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(160);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(161);
          match(STParser::POW);
          setState(162);
          dynamic_cast<Expr_powerContext *>(_localctx)->rhs = expr(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_multipricativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(164);
          dynamic_cast<Expr_multipricativeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << STParser::ASTERISK)
            | (1ULL << STParser::SLASH)
            | (1ULL << STParser::MOD))) != 0))) {
            dynamic_cast<Expr_multipricativeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(165);
          dynamic_cast<Expr_multipricativeContext *>(_localctx)->rhs = expr(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_additiveContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(167);
          dynamic_cast<Expr_additiveContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == STParser::PLUS

          || _la == STParser::MINUS)) {
            dynamic_cast<Expr_additiveContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(168);
          dynamic_cast<Expr_additiveContext *>(_localctx)->right = expr(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_cmpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(170);
          dynamic_cast<Expr_cmpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << STParser::LT)
            | (1ULL << STParser::GT)
            | (1ULL << STParser::LE)
            | (1ULL << STParser::GE))) != 0))) {
            dynamic_cast<Expr_cmpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(171);
          dynamic_cast<Expr_cmpContext *>(_localctx)->right = expr(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Expr_eqContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(172);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(173);
          dynamic_cast<Expr_eqContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == STParser::EQ

          || _la == STParser::NEQ)) {
            dynamic_cast<Expr_eqContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(174);
          dynamic_cast<Expr_eqContext *>(_localctx)->right = expr(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Expr_logical_andContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(175);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(176);
          dynamic_cast<Expr_logical_andContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == STParser::AMBASSADOR

          || _la == STParser::AND)) {
            dynamic_cast<Expr_logical_andContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(177);
          dynamic_cast<Expr_logical_andContext *>(_localctx)->right = expr(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Expr_logical_xorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(178);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(179);
          match(STParser::XOR);
          setState(180);
          dynamic_cast<Expr_logical_xorContext *>(_localctx)->right = expr(3);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Expr_logical_orContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(181);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(182);
          match(STParser::OR);
          setState(183);
          dynamic_cast<Expr_logical_orContext *>(_localctx)->right = expr(2);
          break;
        }

        } 
      }
      setState(188);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Paren_exprContext ------------------------------------------------------------------

STParser::Paren_exprContext::Paren_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::Paren_exprContext::OPEN_PAREN() {
  return getToken(STParser::OPEN_PAREN, 0);
}

STParser::ExprContext* STParser::Paren_exprContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}

tree::TerminalNode* STParser::Paren_exprContext::CLOSE_PAREN() {
  return getToken(STParser::CLOSE_PAREN, 0);
}


size_t STParser::Paren_exprContext::getRuleIndex() const {
  return STParser::RuleParen_expr;
}

void STParser::Paren_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParen_expr(this);
}

void STParser::Paren_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParen_expr(this);
}


antlrcpp::Any STParser::Paren_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitParen_expr(this);
  else
    return visitor->visitChildren(this);
}

STParser::Paren_exprContext* STParser::paren_expr() {
  Paren_exprContext *_localctx = _tracker.createInstance<Paren_exprContext>(_ctx, getState());
  enterRule(_localctx, 34, STParser::RuleParen_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(STParser::OPEN_PAREN);
    setState(190);
    expr(0);
    setState(191);
    match(STParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

STParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::FunctionContext::IDENTIFIER() {
  return getToken(STParser::IDENTIFIER, 0);
}

tree::TerminalNode* STParser::FunctionContext::OPEN_PAREN() {
  return getToken(STParser::OPEN_PAREN, 0);
}

tree::TerminalNode* STParser::FunctionContext::CLOSE_PAREN() {
  return getToken(STParser::CLOSE_PAREN, 0);
}

STParser::Arg_exprsContext* STParser::FunctionContext::arg_exprs() {
  return getRuleContext<STParser::Arg_exprsContext>(0);
}


size_t STParser::FunctionContext::getRuleIndex() const {
  return STParser::RuleFunction;
}

void STParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void STParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


antlrcpp::Any STParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

STParser::FunctionContext* STParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 36, STParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(STParser::IDENTIFIER);
    setState(194);
    match(STParser::OPEN_PAREN);
    setState(196);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STParser::EXPLICIT_INT)
      | (1ULL << STParser::EXPLICIT_UINT)
      | (1ULL << STParser::EXPLICIT_DINT)
      | (1ULL << STParser::EXPLICIT_UDINT)
      | (1ULL << STParser::EXPLICIT_REAL)
      | (1ULL << STParser::EXPLICIT_LREAL)
      | (1ULL << STParser::EXPLICIT_STRING)
      | (1ULL << STParser::PLUS)
      | (1ULL << STParser::MINUS)
      | (1ULL << STParser::OPEN_PAREN)
      | (1ULL << STParser::NOT)
      | (1ULL << STParser::IDENTIFIER)
      | (1ULL << STParser::BINARY_NOTATION)
      | (1ULL << STParser::OCTAL_NOTATION)
      | (1ULL << STParser::HEXA_NOTATION)
      | (1ULL << STParser::DEC_NOTATION)
      | (1ULL << STParser::REAL_NUM)
      | (1ULL << STParser::MBCS)
      | (1ULL << STParser::WSTR))) != 0)) {
      setState(195);
      arg_exprs();
    }
    setState(198);
    match(STParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_exprsContext ------------------------------------------------------------------

STParser::Arg_exprsContext::Arg_exprsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<STParser::Single_argContext *> STParser::Arg_exprsContext::single_arg() {
  return getRuleContexts<STParser::Single_argContext>();
}

STParser::Single_argContext* STParser::Arg_exprsContext::single_arg(size_t i) {
  return getRuleContext<STParser::Single_argContext>(i);
}

std::vector<tree::TerminalNode *> STParser::Arg_exprsContext::COMMA() {
  return getTokens(STParser::COMMA);
}

tree::TerminalNode* STParser::Arg_exprsContext::COMMA(size_t i) {
  return getToken(STParser::COMMA, i);
}


size_t STParser::Arg_exprsContext::getRuleIndex() const {
  return STParser::RuleArg_exprs;
}

void STParser::Arg_exprsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_exprs(this);
}

void STParser::Arg_exprsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_exprs(this);
}


antlrcpp::Any STParser::Arg_exprsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitArg_exprs(this);
  else
    return visitor->visitChildren(this);
}

STParser::Arg_exprsContext* STParser::arg_exprs() {
  Arg_exprsContext *_localctx = _tracker.createInstance<Arg_exprsContext>(_ctx, getState());
  enterRule(_localctx, 38, STParser::RuleArg_exprs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    single_arg();
    setState(205);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == STParser::COMMA) {
      setState(201);
      match(STParser::COMMA);
      setState(202);
      single_arg();
      setState(207);
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

//----------------- Single_argContext ------------------------------------------------------------------

STParser::Single_argContext::Single_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Single_argContext::getRuleIndex() const {
  return STParser::RuleSingle_arg;
}

void STParser::Single_argContext::copyFrom(Single_argContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Arg_inContext ------------------------------------------------------------------

STParser::In_argContext* STParser::Arg_inContext::in_arg() {
  return getRuleContext<STParser::In_argContext>(0);
}

STParser::Arg_inContext::Arg_inContext(Single_argContext *ctx) { copyFrom(ctx); }

void STParser::Arg_inContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_in(this);
}
void STParser::Arg_inContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_in(this);
}

antlrcpp::Any STParser::Arg_inContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitArg_in(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Arg_outContext ------------------------------------------------------------------

STParser::Out_argContext* STParser::Arg_outContext::out_arg() {
  return getRuleContext<STParser::Out_argContext>(0);
}

STParser::Arg_outContext::Arg_outContext(Single_argContext *ctx) { copyFrom(ctx); }

void STParser::Arg_outContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_out(this);
}
void STParser::Arg_outContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_out(this);
}

antlrcpp::Any STParser::Arg_outContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitArg_out(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Arg_exprContext ------------------------------------------------------------------

STParser::ExprContext* STParser::Arg_exprContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}

STParser::Arg_exprContext::Arg_exprContext(Single_argContext *ctx) { copyFrom(ctx); }

void STParser::Arg_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_expr(this);
}
void STParser::Arg_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_expr(this);
}

antlrcpp::Any STParser::Arg_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitArg_expr(this);
  else
    return visitor->visitChildren(this);
}
STParser::Single_argContext* STParser::single_arg() {
  Single_argContext *_localctx = _tracker.createInstance<Single_argContext>(_ctx, getState());
  enterRule(_localctx, 40, STParser::RuleSingle_arg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Single_argContext *>(_tracker.createInstance<STParser::Arg_exprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(208);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Single_argContext *>(_tracker.createInstance<STParser::Arg_inContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(209);
      in_arg();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Single_argContext *>(_tracker.createInstance<STParser::Arg_outContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(210);
      out_arg();
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

//----------------- In_argContext ------------------------------------------------------------------

STParser::In_argContext::In_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::In_argContext::ASSIGN() {
  return getToken(STParser::ASSIGN, 0);
}

STParser::ExprContext* STParser::In_argContext::expr() {
  return getRuleContext<STParser::ExprContext>(0);
}

tree::TerminalNode* STParser::In_argContext::IDENTIFIER() {
  return getToken(STParser::IDENTIFIER, 0);
}


size_t STParser::In_argContext::getRuleIndex() const {
  return STParser::RuleIn_arg;
}

void STParser::In_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIn_arg(this);
}

void STParser::In_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIn_arg(this);
}


antlrcpp::Any STParser::In_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitIn_arg(this);
  else
    return visitor->visitChildren(this);
}

STParser::In_argContext* STParser::in_arg() {
  In_argContext *_localctx = _tracker.createInstance<In_argContext>(_ctx, getState());
  enterRule(_localctx, 42, STParser::RuleIn_arg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    dynamic_cast<In_argContext *>(_localctx)->param = match(STParser::IDENTIFIER);
    setState(214);
    match(STParser::ASSIGN);
    setState(215);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Out_argContext ------------------------------------------------------------------

STParser::Out_argContext::Out_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::Out_argContext::OUTREF() {
  return getToken(STParser::OUTREF, 0);
}

std::vector<tree::TerminalNode *> STParser::Out_argContext::IDENTIFIER() {
  return getTokens(STParser::IDENTIFIER);
}

tree::TerminalNode* STParser::Out_argContext::IDENTIFIER(size_t i) {
  return getToken(STParser::IDENTIFIER, i);
}


size_t STParser::Out_argContext::getRuleIndex() const {
  return STParser::RuleOut_arg;
}

void STParser::Out_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOut_arg(this);
}

void STParser::Out_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOut_arg(this);
}


antlrcpp::Any STParser::Out_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitOut_arg(this);
  else
    return visitor->visitChildren(this);
}

STParser::Out_argContext* STParser::out_arg() {
  Out_argContext *_localctx = _tracker.createInstance<Out_argContext>(_ctx, getState());
  enterRule(_localctx, 44, STParser::RuleOut_arg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    dynamic_cast<Out_argContext *>(_localctx)->param = match(STParser::IDENTIFIER);
    setState(218);
    match(STParser::OUTREF);
    setState(219);
    dynamic_cast<Out_argContext *>(_localctx)->arg = match(STParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

STParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STParser::VariableContext::IDENTIFIER() {
  return getToken(STParser::IDENTIFIER, 0);
}


size_t STParser::VariableContext::getRuleIndex() const {
  return STParser::RuleVariable;
}

void STParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void STParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any STParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

STParser::VariableContext* STParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 46, STParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(STParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_valContext ------------------------------------------------------------------

STParser::Constant_valContext::Constant_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Constant_valContext::getRuleIndex() const {
  return STParser::RuleConstant_val;
}

void STParser::Constant_valContext::copyFrom(Constant_valContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Const_intContext ------------------------------------------------------------------

STParser::Integer_valContext* STParser::Const_intContext::integer_val() {
  return getRuleContext<STParser::Integer_valContext>(0);
}

STParser::Const_intContext::Const_intContext(Constant_valContext *ctx) { copyFrom(ctx); }

void STParser::Const_intContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst_int(this);
}
void STParser::Const_intContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst_int(this);
}

antlrcpp::Any STParser::Const_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitConst_int(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_realContext ------------------------------------------------------------------

STParser::Real_valContext* STParser::Const_realContext::real_val() {
  return getRuleContext<STParser::Real_valContext>(0);
}

STParser::Const_realContext::Const_realContext(Constant_valContext *ctx) { copyFrom(ctx); }

void STParser::Const_realContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst_real(this);
}
void STParser::Const_realContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst_real(this);
}

antlrcpp::Any STParser::Const_realContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitConst_real(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_stringContext ------------------------------------------------------------------

STParser::String_valContext* STParser::Const_stringContext::string_val() {
  return getRuleContext<STParser::String_valContext>(0);
}

STParser::Const_stringContext::Const_stringContext(Constant_valContext *ctx) { copyFrom(ctx); }

void STParser::Const_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst_string(this);
}
void STParser::Const_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst_string(this);
}

antlrcpp::Any STParser::Const_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitConst_string(this);
  else
    return visitor->visitChildren(this);
}
STParser::Constant_valContext* STParser::constant_val() {
  Constant_valContext *_localctx = _tracker.createInstance<Constant_valContext>(_ctx, getState());
  enterRule(_localctx, 48, STParser::RuleConstant_val);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(226);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::EXPLICIT_INT:
      case STParser::EXPLICIT_UINT:
      case STParser::EXPLICIT_DINT:
      case STParser::EXPLICIT_UDINT:
      case STParser::BINARY_NOTATION:
      case STParser::OCTAL_NOTATION:
      case STParser::HEXA_NOTATION:
      case STParser::DEC_NOTATION: {
        _localctx = dynamic_cast<Constant_valContext *>(_tracker.createInstance<STParser::Const_intContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(223);
        integer_val();
        break;
      }

      case STParser::EXPLICIT_REAL:
      case STParser::EXPLICIT_LREAL:
      case STParser::REAL_NUM: {
        _localctx = dynamic_cast<Constant_valContext *>(_tracker.createInstance<STParser::Const_realContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(224);
        real_val();
        break;
      }

      case STParser::EXPLICIT_STRING:
      case STParser::MBCS:
      case STParser::WSTR: {
        _localctx = dynamic_cast<Constant_valContext *>(_tracker.createInstance<STParser::Const_stringContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(225);
        string_val();
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

//----------------- Integer_valContext ------------------------------------------------------------------

STParser::Integer_valContext::Integer_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::Int_numContext* STParser::Integer_valContext::int_num() {
  return getRuleContext<STParser::Int_numContext>(0);
}

STParser::Int_explicitContext* STParser::Integer_valContext::int_explicit() {
  return getRuleContext<STParser::Int_explicitContext>(0);
}


size_t STParser::Integer_valContext::getRuleIndex() const {
  return STParser::RuleInteger_val;
}

void STParser::Integer_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_val(this);
}

void STParser::Integer_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_val(this);
}


antlrcpp::Any STParser::Integer_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitInteger_val(this);
  else
    return visitor->visitChildren(this);
}

STParser::Integer_valContext* STParser::integer_val() {
  Integer_valContext *_localctx = _tracker.createInstance<Integer_valContext>(_ctx, getState());
  enterRule(_localctx, 50, STParser::RuleInteger_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STParser::EXPLICIT_INT)
      | (1ULL << STParser::EXPLICIT_UINT)
      | (1ULL << STParser::EXPLICIT_DINT)
      | (1ULL << STParser::EXPLICIT_UDINT))) != 0)) {
      setState(228);
      int_explicit();
    }
    setState(231);
    int_num();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_explicitContext ------------------------------------------------------------------

STParser::Int_explicitContext::Int_explicitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Int_explicitContext::getRuleIndex() const {
  return STParser::RuleInt_explicit;
}

void STParser::Int_explicitContext::copyFrom(Int_explicitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Dint_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Dint_eContext::EXPLICIT_DINT() {
  return getToken(STParser::EXPLICIT_DINT, 0);
}

STParser::Dint_eContext::Dint_eContext(Int_explicitContext *ctx) { copyFrom(ctx); }

void STParser::Dint_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDint_e(this);
}
void STParser::Dint_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDint_e(this);
}

antlrcpp::Any STParser::Dint_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitDint_e(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Uint_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Uint_eContext::EXPLICIT_UINT() {
  return getToken(STParser::EXPLICIT_UINT, 0);
}

STParser::Uint_eContext::Uint_eContext(Int_explicitContext *ctx) { copyFrom(ctx); }

void STParser::Uint_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUint_e(this);
}
void STParser::Uint_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUint_e(this);
}

antlrcpp::Any STParser::Uint_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitUint_e(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Int_eContext::EXPLICIT_INT() {
  return getToken(STParser::EXPLICIT_INT, 0);
}

STParser::Int_eContext::Int_eContext(Int_explicitContext *ctx) { copyFrom(ctx); }

void STParser::Int_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_e(this);
}
void STParser::Int_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_e(this);
}

antlrcpp::Any STParser::Int_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitInt_e(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Udint_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Udint_eContext::EXPLICIT_UDINT() {
  return getToken(STParser::EXPLICIT_UDINT, 0);
}

STParser::Udint_eContext::Udint_eContext(Int_explicitContext *ctx) { copyFrom(ctx); }

void STParser::Udint_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUdint_e(this);
}
void STParser::Udint_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUdint_e(this);
}

antlrcpp::Any STParser::Udint_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitUdint_e(this);
  else
    return visitor->visitChildren(this);
}
STParser::Int_explicitContext* STParser::int_explicit() {
  Int_explicitContext *_localctx = _tracker.createInstance<Int_explicitContext>(_ctx, getState());
  enterRule(_localctx, 52, STParser::RuleInt_explicit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::EXPLICIT_INT: {
        _localctx = dynamic_cast<Int_explicitContext *>(_tracker.createInstance<STParser::Int_eContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(233);
        match(STParser::EXPLICIT_INT);
        break;
      }

      case STParser::EXPLICIT_UINT: {
        _localctx = dynamic_cast<Int_explicitContext *>(_tracker.createInstance<STParser::Uint_eContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(234);
        match(STParser::EXPLICIT_UINT);
        break;
      }

      case STParser::EXPLICIT_DINT: {
        _localctx = dynamic_cast<Int_explicitContext *>(_tracker.createInstance<STParser::Dint_eContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(235);
        match(STParser::EXPLICIT_DINT);
        break;
      }

      case STParser::EXPLICIT_UDINT: {
        _localctx = dynamic_cast<Int_explicitContext *>(_tracker.createInstance<STParser::Udint_eContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(236);
        match(STParser::EXPLICIT_UDINT);
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

//----------------- Int_numContext ------------------------------------------------------------------

STParser::Int_numContext::Int_numContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Int_numContext::getRuleIndex() const {
  return STParser::RuleInt_num;
}

void STParser::Int_numContext::copyFrom(Int_numContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OctalContext ------------------------------------------------------------------

tree::TerminalNode* STParser::OctalContext::OCTAL_NOTATION() {
  return getToken(STParser::OCTAL_NOTATION, 0);
}

STParser::OctalContext::OctalContext(Int_numContext *ctx) { copyFrom(ctx); }

void STParser::OctalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOctal(this);
}
void STParser::OctalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOctal(this);
}

antlrcpp::Any STParser::OctalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitOctal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecContext ------------------------------------------------------------------

tree::TerminalNode* STParser::DecContext::DEC_NOTATION() {
  return getToken(STParser::DEC_NOTATION, 0);
}

STParser::DecContext::DecContext(Int_numContext *ctx) { copyFrom(ctx); }

void STParser::DecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDec(this);
}
void STParser::DecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDec(this);
}

antlrcpp::Any STParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HexaContext ------------------------------------------------------------------

tree::TerminalNode* STParser::HexaContext::HEXA_NOTATION() {
  return getToken(STParser::HEXA_NOTATION, 0);
}

STParser::HexaContext::HexaContext(Int_numContext *ctx) { copyFrom(ctx); }

void STParser::HexaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexa(this);
}
void STParser::HexaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexa(this);
}

antlrcpp::Any STParser::HexaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitHexa(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryContext ------------------------------------------------------------------

tree::TerminalNode* STParser::BinaryContext::BINARY_NOTATION() {
  return getToken(STParser::BINARY_NOTATION, 0);
}

STParser::BinaryContext::BinaryContext(Int_numContext *ctx) { copyFrom(ctx); }

void STParser::BinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary(this);
}
void STParser::BinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary(this);
}

antlrcpp::Any STParser::BinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitBinary(this);
  else
    return visitor->visitChildren(this);
}
STParser::Int_numContext* STParser::int_num() {
  Int_numContext *_localctx = _tracker.createInstance<Int_numContext>(_ctx, getState());
  enterRule(_localctx, 54, STParser::RuleInt_num);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::BINARY_NOTATION: {
        _localctx = dynamic_cast<Int_numContext *>(_tracker.createInstance<STParser::BinaryContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(239);
        match(STParser::BINARY_NOTATION);
        break;
      }

      case STParser::OCTAL_NOTATION: {
        _localctx = dynamic_cast<Int_numContext *>(_tracker.createInstance<STParser::OctalContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(240);
        match(STParser::OCTAL_NOTATION);
        break;
      }

      case STParser::HEXA_NOTATION: {
        _localctx = dynamic_cast<Int_numContext *>(_tracker.createInstance<STParser::HexaContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(241);
        match(STParser::HEXA_NOTATION);
        break;
      }

      case STParser::DEC_NOTATION: {
        _localctx = dynamic_cast<Int_numContext *>(_tracker.createInstance<STParser::DecContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(242);
        match(STParser::DEC_NOTATION);
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

//----------------- Real_valContext ------------------------------------------------------------------

STParser::Real_valContext::Real_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::Real_numContext* STParser::Real_valContext::real_num() {
  return getRuleContext<STParser::Real_numContext>(0);
}

STParser::Real_explicitContext* STParser::Real_valContext::real_explicit() {
  return getRuleContext<STParser::Real_explicitContext>(0);
}


size_t STParser::Real_valContext::getRuleIndex() const {
  return STParser::RuleReal_val;
}

void STParser::Real_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal_val(this);
}

void STParser::Real_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal_val(this);
}


antlrcpp::Any STParser::Real_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitReal_val(this);
  else
    return visitor->visitChildren(this);
}

STParser::Real_valContext* STParser::real_val() {
  Real_valContext *_localctx = _tracker.createInstance<Real_valContext>(_ctx, getState());
  enterRule(_localctx, 56, STParser::RuleReal_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STParser::EXPLICIT_REAL

    || _la == STParser::EXPLICIT_LREAL) {
      setState(245);
      real_explicit();
    }
    setState(248);
    real_num();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Real_explicitContext ------------------------------------------------------------------

STParser::Real_explicitContext::Real_explicitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Real_explicitContext::getRuleIndex() const {
  return STParser::RuleReal_explicit;
}

void STParser::Real_explicitContext::copyFrom(Real_explicitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Real_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Real_eContext::EXPLICIT_REAL() {
  return getToken(STParser::EXPLICIT_REAL, 0);
}

STParser::Real_eContext::Real_eContext(Real_explicitContext *ctx) { copyFrom(ctx); }

void STParser::Real_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal_e(this);
}
void STParser::Real_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal_e(this);
}

antlrcpp::Any STParser::Real_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitReal_e(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Lreal_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Lreal_eContext::EXPLICIT_LREAL() {
  return getToken(STParser::EXPLICIT_LREAL, 0);
}

STParser::Lreal_eContext::Lreal_eContext(Real_explicitContext *ctx) { copyFrom(ctx); }

void STParser::Lreal_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLreal_e(this);
}
void STParser::Lreal_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLreal_e(this);
}

antlrcpp::Any STParser::Lreal_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitLreal_e(this);
  else
    return visitor->visitChildren(this);
}
STParser::Real_explicitContext* STParser::real_explicit() {
  Real_explicitContext *_localctx = _tracker.createInstance<Real_explicitContext>(_ctx, getState());
  enterRule(_localctx, 58, STParser::RuleReal_explicit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::EXPLICIT_REAL: {
        _localctx = dynamic_cast<Real_explicitContext *>(_tracker.createInstance<STParser::Real_eContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(250);
        match(STParser::EXPLICIT_REAL);
        break;
      }

      case STParser::EXPLICIT_LREAL: {
        _localctx = dynamic_cast<Real_explicitContext *>(_tracker.createInstance<STParser::Lreal_eContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(251);
        match(STParser::EXPLICIT_LREAL);
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

//----------------- Real_numContext ------------------------------------------------------------------

STParser::Real_numContext::Real_numContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::Real_numContext::getRuleIndex() const {
  return STParser::RuleReal_num;
}

void STParser::Real_numContext::copyFrom(Real_numContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Real_normalContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Real_normalContext::REAL_NUM() {
  return getToken(STParser::REAL_NUM, 0);
}

STParser::Real_normalContext::Real_normalContext(Real_numContext *ctx) { copyFrom(ctx); }

void STParser::Real_normalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal_normal(this);
}
void STParser::Real_normalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal_normal(this);
}

antlrcpp::Any STParser::Real_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitReal_normal(this);
  else
    return visitor->visitChildren(this);
}
STParser::Real_numContext* STParser::real_num() {
  Real_numContext *_localctx = _tracker.createInstance<Real_numContext>(_ctx, getState());
  enterRule(_localctx, 60, STParser::RuleReal_num);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Real_numContext *>(_tracker.createInstance<STParser::Real_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(STParser::REAL_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_valContext ------------------------------------------------------------------

STParser::String_valContext::String_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STParser::String_strContext* STParser::String_valContext::string_str() {
  return getRuleContext<STParser::String_strContext>(0);
}

STParser::String_expricitContext* STParser::String_valContext::string_expricit() {
  return getRuleContext<STParser::String_expricitContext>(0);
}


size_t STParser::String_valContext::getRuleIndex() const {
  return STParser::RuleString_val;
}

void STParser::String_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_val(this);
}

void STParser::String_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_val(this);
}


antlrcpp::Any STParser::String_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitString_val(this);
  else
    return visitor->visitChildren(this);
}

STParser::String_valContext* STParser::string_val() {
  String_valContext *_localctx = _tracker.createInstance<String_valContext>(_ctx, getState());
  enterRule(_localctx, 62, STParser::RuleString_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STParser::EXPLICIT_STRING) {
      setState(256);
      string_expricit();
    }
    setState(259);
    string_str();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_expricitContext ------------------------------------------------------------------

STParser::String_expricitContext::String_expricitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::String_expricitContext::getRuleIndex() const {
  return STParser::RuleString_expricit;
}

void STParser::String_expricitContext::copyFrom(String_expricitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Str_eContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Str_eContext::EXPLICIT_STRING() {
  return getToken(STParser::EXPLICIT_STRING, 0);
}

STParser::Str_eContext::Str_eContext(String_expricitContext *ctx) { copyFrom(ctx); }

void STParser::Str_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStr_e(this);
}
void STParser::Str_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStr_e(this);
}

antlrcpp::Any STParser::Str_eContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitStr_e(this);
  else
    return visitor->visitChildren(this);
}
STParser::String_expricitContext* STParser::string_expricit() {
  String_expricitContext *_localctx = _tracker.createInstance<String_expricitContext>(_ctx, getState());
  enterRule(_localctx, 64, STParser::RuleString_expricit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<String_expricitContext *>(_tracker.createInstance<STParser::Str_eContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(STParser::EXPLICIT_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_strContext ------------------------------------------------------------------

STParser::String_strContext::String_strContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STParser::String_strContext::getRuleIndex() const {
  return STParser::RuleString_str;
}

void STParser::String_strContext::copyFrom(String_strContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Wstr_strContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Wstr_strContext::WSTR() {
  return getToken(STParser::WSTR, 0);
}

STParser::Wstr_strContext::Wstr_strContext(String_strContext *ctx) { copyFrom(ctx); }

void STParser::Wstr_strContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWstr_str(this);
}
void STParser::Wstr_strContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWstr_str(this);
}

antlrcpp::Any STParser::Wstr_strContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitWstr_str(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mbcs_strContext ------------------------------------------------------------------

tree::TerminalNode* STParser::Mbcs_strContext::MBCS() {
  return getToken(STParser::MBCS, 0);
}

STParser::Mbcs_strContext::Mbcs_strContext(String_strContext *ctx) { copyFrom(ctx); }

void STParser::Mbcs_strContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMbcs_str(this);
}
void STParser::Mbcs_strContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMbcs_str(this);
}

antlrcpp::Any STParser::Mbcs_strContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STVisitor*>(visitor))
    return parserVisitor->visitMbcs_str(this);
  else
    return visitor->visitChildren(this);
}
STParser::String_strContext* STParser::string_str() {
  String_strContext *_localctx = _tracker.createInstance<String_strContext>(_ctx, getState());
  enterRule(_localctx, 66, STParser::RuleString_str);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STParser::MBCS: {
        _localctx = dynamic_cast<String_strContext *>(_tracker.createInstance<STParser::Mbcs_strContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(263);
        match(STParser::MBCS);
        break;
      }

      case STParser::WSTR: {
        _localctx = dynamic_cast<String_strContext *>(_tracker.createInstance<STParser::Wstr_strContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(264);
        match(STParser::WSTR);
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

bool STParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool STParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> STParser::_decisionToDFA;
atn::PredictionContextCache STParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN STParser::_atn;
std::vector<uint16_t> STParser::_serializedATN;

std::vector<std::string> STParser::_ruleNames = {
  "input", "stmt_list", "statement", "comment", "single_stmt", "s_return", 
  "s_case", "case_select", "case_list", "case_list_elem", "subrange", "range_val", 
  "label", "repeat", "exit", "assign", "expr", "paren_expr", "function", 
  "arg_exprs", "single_arg", "in_arg", "out_arg", "variable", "constant_val", 
  "integer_val", "int_explicit", "int_num", "real_val", "real_explicit", 
  "real_num", "string_val", "string_expricit", "string_str"
};

std::vector<std::string> STParser::_literalNames = {
  "", "", "", "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'**'", "'<'", 
  "'>'", "'<='", "'>='", "'='", "'<>'", "':='", "'=>'", "'..'", "','", "'('", 
  "')'", "';'", "':'", "'&'"
};

std::vector<std::string> STParser::_symbolicNames = {
  "", "EXPLICIT_INT", "EXPLICIT_UINT", "EXPLICIT_DINT", "EXPLICIT_UDINT", 
  "EXPLICIT_REAL", "EXPLICIT_LREAL", "EXPLICIT_STRING", "PLUS", "MINUS", 
  "ASTERISK", "SLASH", "POW", "LT", "GT", "LE", "GE", "EQ", "NEQ", "ASSIGN", 
  "OUTREF", "RANGE", "COMMA", "OPEN_PAREN", "CLOSE_PAREN", "SEMI_COLON", 
  "COLON", "AMBASSADOR", "NOT", "MOD", "AND", "XOR", "OR", "CASE", "OF", 
  "ELSE", "END_CASE", "REPEAT", "UNTIL", "END_REPEAT", "EXIT", "RETURN", 
  "IDENTIFIER", "WS", "EOL", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT_A", 
  "BINARY_NOTATION", "OCTAL_NOTATION", "HEXA_NOTATION", "DEC_NOTATION", 
  "REAL_NUM", "MBCS", "WSTR"
};

dfa::Vocabulary STParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> STParser::_tokenNames;

STParser::Initializer::Initializer() {
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
    0x3, 0x37, 0x10e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x7, 0x3, 0x4b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4e, 0xb, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x52, 0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 0x55, 0xa, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x59, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x61, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x69, 
    0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x6a, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6f, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7a, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x7d, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x82, 0xa, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x8a, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xa1, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xbb, 0xa, 0x12, 0xc, 
    0x12, 0xe, 0x12, 0xbe, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xc7, 0xa, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xce, 0xa, 
    0x15, 0xc, 0x15, 0xe, 0x15, 0xd1, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0xd6, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0xe5, 0xa, 0x1a, 0x3, 0x1b, 
    0x5, 0x1b, 0xe8, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xf0, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0xf6, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 
    0xf9, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 
    0xff, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x5, 0x21, 0x104, 
    0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 
    0x23, 0x5, 0x23, 0x10c, 0xa, 0x23, 0x3, 0x23, 0x2, 0x3, 0x22, 0x24, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 0x8, 0x4, 
    0x2, 0xa, 0xb, 0x1e, 0x1e, 0x4, 0x2, 0xc, 0xd, 0x1f, 0x1f, 0x3, 0x2, 
    0xa, 0xb, 0x3, 0x2, 0xf, 0x12, 0x3, 0x2, 0x13, 0x14, 0x4, 0x2, 0x1d, 
    0x1d, 0x20, 0x20, 0x2, 0x117, 0x2, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x54, 0x3, 0x2, 0x2, 0x2, 0x8, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x60, 0x3, 0x2, 0x2, 0x2, 0xc, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x64, 0x3, 0x2, 0x2, 0x2, 0x10, 0x72, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x14, 0x81, 0x3, 0x2, 0x2, 0x2, 0x16, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x95, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xca, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x30, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0xef, 0x3, 0x2, 0x2, 0x2, 0x38, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x100, 0x3, 0x2, 0x2, 0x2, 0x40, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x107, 0x3, 0x2, 0x2, 0x2, 0x44, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x5, 0x4, 0x3, 0x2, 0x47, 0x48, 0x7, 0x2, 0x2, 0x3, 0x48, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x6, 0x4, 0x2, 0x4a, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x55, 0x5, 0x8, 0x5, 0x2, 
    0x50, 0x52, 0x5, 0xa, 0x6, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 
    0x7, 0x1b, 0x2, 0x2, 0x54, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x7, 0x2f, 
    0x2, 0x2, 0x57, 0x59, 0x7, 0x30, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x61, 0x5, 0x20, 0x11, 0x2, 0x5b, 0x61, 0x5, 0x26, 0x14, 0x2, 
    0x5c, 0x61, 0x5, 0x1c, 0xf, 0x2, 0x5d, 0x61, 0x5, 0x1e, 0x10, 0x2, 0x5e, 
    0x61, 0x5, 0xe, 0x8, 0x2, 0x5f, 0x61, 0x5, 0xc, 0x7, 0x2, 0x60, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x63, 0x7, 0x2b, 0x2, 0x2, 0x63, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x7, 0x23, 0x2, 0x2, 0x65, 0x66, 0x5, 0x22, 0x12, 0x2, 0x66, 
    0x68, 0x7, 0x24, 0x2, 0x2, 0x67, 0x69, 0x5, 0x10, 0x9, 0x2, 0x68, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6d, 0x7, 0x25, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x4, 0x3, 
    0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x26, 0x2, 0x2, 0x71, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x12, 0xa, 0x2, 0x73, 0x74, 
    0x7, 0x1c, 0x2, 0x2, 0x74, 0x75, 0x5, 0x4, 0x3, 0x2, 0x75, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x7b, 0x5, 0x14, 0xb, 0x2, 0x77, 0x78, 0x7, 0x18, 
    0x2, 0x2, 0x78, 0x7a, 0x5, 0x14, 0xb, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x82, 0x5, 0x16, 0xc, 0x2, 0x7f, 0x82, 
    0x5, 0x32, 0x1a, 0x2, 0x80, 0x82, 0x5, 0x1a, 0xe, 0x2, 0x81, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x15, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x18, 0xd, 
    0x2, 0x84, 0x85, 0x7, 0x17, 0x2, 0x2, 0x85, 0x86, 0x5, 0x18, 0xd, 0x2, 
    0x86, 0x17, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x5, 0x32, 0x1a, 0x2, 0x88, 
    0x8a, 0x5, 0x1a, 0xe, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 
    0x2c, 0x2, 0x2, 0x8c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x27, 
    0x2, 0x2, 0x8e, 0x8f, 0x5, 0x4, 0x3, 0x2, 0x8f, 0x90, 0x7, 0x28, 0x2, 
    0x2, 0x90, 0x91, 0x5, 0x22, 0x12, 0x2, 0x91, 0x92, 0x7, 0x29, 0x2, 0x2, 
    0x92, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x2a, 0x2, 0x2, 0x94, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 0x2c, 0x2, 0x2, 0x96, 0x97, 
    0x7, 0x15, 0x2, 0x2, 0x97, 0x98, 0x5, 0x22, 0x12, 0x2, 0x98, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x8, 0x12, 0x1, 0x2, 0x9a, 0xa1, 0x5, 0x32, 
    0x1a, 0x2, 0x9b, 0xa1, 0x5, 0x26, 0x14, 0x2, 0x9c, 0xa1, 0x5, 0x30, 
    0x19, 0x2, 0x9d, 0xa1, 0x5, 0x24, 0x13, 0x2, 0x9e, 0x9f, 0x9, 0x2, 0x2, 
    0x2, 0x9f, 0xa1, 0x5, 0x22, 0x12, 0xb, 0xa0, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0xc, 0xa, 0x2, 0x2, 0xa3, 0xa4, 0x7, 
    0xe, 0x2, 0x2, 0xa4, 0xbb, 0x5, 0x22, 0x12, 0xb, 0xa5, 0xa6, 0xc, 0x9, 
    0x2, 0x2, 0xa6, 0xa7, 0x9, 0x3, 0x2, 0x2, 0xa7, 0xbb, 0x5, 0x22, 0x12, 
    0xa, 0xa8, 0xa9, 0xc, 0x8, 0x2, 0x2, 0xa9, 0xaa, 0x9, 0x4, 0x2, 0x2, 
    0xaa, 0xbb, 0x5, 0x22, 0x12, 0x9, 0xab, 0xac, 0xc, 0x7, 0x2, 0x2, 0xac, 
    0xad, 0x9, 0x5, 0x2, 0x2, 0xad, 0xbb, 0x5, 0x22, 0x12, 0x8, 0xae, 0xaf, 
    0xc, 0x6, 0x2, 0x2, 0xaf, 0xb0, 0x9, 0x6, 0x2, 0x2, 0xb0, 0xbb, 0x5, 
    0x22, 0x12, 0x7, 0xb1, 0xb2, 0xc, 0x5, 0x2, 0x2, 0xb2, 0xb3, 0x9, 0x7, 
    0x2, 0x2, 0xb3, 0xbb, 0x5, 0x22, 0x12, 0x6, 0xb4, 0xb5, 0xc, 0x4, 0x2, 
    0x2, 0xb5, 0xb6, 0x7, 0x21, 0x2, 0x2, 0xb6, 0xbb, 0x5, 0x22, 0x12, 0x5, 
    0xb7, 0xb8, 0xc, 0x3, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x22, 0x2, 0x2, 0xb9, 
    0xbb, 0x5, 0x22, 0x12, 0x4, 0xba, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xba, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xae, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x23, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x19, 0x2, 0x2, 0xc0, 0xc1, 
    0x5, 0x22, 0x12, 0x2, 0xc1, 0xc2, 0x7, 0x1a, 0x2, 0x2, 0xc2, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x2c, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x19, 
    0x2, 0x2, 0xc5, 0xc7, 0x5, 0x28, 0x15, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc9, 0x7, 0x1a, 0x2, 0x2, 0xc9, 0x27, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xcf, 0x5, 0x2a, 0x16, 0x2, 0xcb, 0xcc, 0x7, 0x18, 0x2, 0x2, 0xcc, 0xce, 
    0x5, 0x2a, 0x16, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd6, 0x5, 0x22, 0x12, 0x2, 0xd3, 0xd6, 0x5, 0x2c, 0x17, 
    0x2, 0xd4, 0xd6, 0x5, 0x2e, 0x18, 0x2, 0xd5, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x2c, 0x2, 0x2, 0xd8, 0xd9, 
    0x7, 0x15, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x22, 0x12, 0x2, 0xda, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x2c, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x16, 
    0x2, 0x2, 0xdd, 0xde, 0x7, 0x2c, 0x2, 0x2, 0xde, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0xe0, 0x7, 0x2c, 0x2, 0x2, 0xe0, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0xe5, 0x5, 0x34, 0x1b, 0x2, 0xe2, 0xe5, 0x5, 0x3a, 0x1e, 0x2, 
    0xe3, 0xe5, 0x5, 0x40, 0x21, 0x2, 0xe4, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x36, 0x1c, 0x2, 0xe7, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x5, 0x38, 0x1d, 0x2, 0xea, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xf0, 0x7, 0x3, 0x2, 0x2, 0xec, 0xf0, 0x7, 0x4, 0x2, 0x2, 
    0xed, 0xf0, 0x7, 0x5, 0x2, 0x2, 0xee, 0xf0, 0x7, 0x6, 0x2, 0x2, 0xef, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xef, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xf6, 0x7, 0x31, 0x2, 0x2, 0xf2, 0xf6, 0x7, 0x32, 
    0x2, 0x2, 0xf3, 0xf6, 0x7, 0x33, 0x2, 0x2, 0xf4, 0xf6, 0x7, 0x34, 0x2, 
    0x2, 0xf5, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0x3c, 0x1f, 0x2, 0xf8, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x3e, 0x20, 0x2, 0xfb, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xff, 0x7, 0x7, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x8, 0x2, 
    0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x35, 0x2, 0x2, 0x101, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x102, 0x104, 0x5, 0x42, 0x22, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x5, 0x44, 0x23, 0x2, 0x106, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x9, 0x2, 0x2, 0x108, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x7, 0x36, 0x2, 0x2, 0x10a, 0x10c, 
    0x7, 0x37, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x4c, 0x51, 
    0x54, 0x58, 0x60, 0x6a, 0x6e, 0x7b, 0x81, 0x89, 0xa0, 0xba, 0xbc, 0xc6, 
    0xcf, 0xd5, 0xe4, 0xe7, 0xef, 0xf5, 0xf8, 0xfe, 0x103, 0x10b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

STParser::Initializer STParser::_init;
