
// Generated from C:/Users/nakam/Desktop/parsetest/antlr_sample/calculator\Expression.g4 by ANTLR 4.7.2


#include "ExpressionListener.h"
#include "ExpressionVisitor.h"

#include "ExpressionParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExpressionParser::ExpressionParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExpressionParser::~ExpressionParser() {
  delete _interpreter;
}

std::string ExpressionParser::getGrammarFileName() const {
  return "Expression.g4";
}

const std::vector<std::string>& ExpressionParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExpressionParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

ExpressionParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExpressionParser::ExprContext* ExpressionParser::InputContext::expr() {
  return getRuleContext<ExpressionParser::ExprContext>(0);
}

tree::TerminalNode* ExpressionParser::InputContext::EOF() {
  return getToken(ExpressionParser::EOF, 0);
}


size_t ExpressionParser::InputContext::getRuleIndex() const {
  return ExpressionParser::RuleInput;
}

void ExpressionParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void ExpressionParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any ExpressionParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::InputContext* ExpressionParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, ExpressionParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    expr(0);
    setState(15);
    match(ExpressionParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExpressionParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExpressionParser::ExprContext::getRuleIndex() const {
  return ExpressionParser::RuleExpr;
}

void ExpressionParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_additiveContext ------------------------------------------------------------------

std::vector<ExpressionParser::ExprContext *> ExpressionParser::Expr_additiveContext::expr() {
  return getRuleContexts<ExpressionParser::ExprContext>();
}

ExpressionParser::ExprContext* ExpressionParser::Expr_additiveContext::expr(size_t i) {
  return getRuleContext<ExpressionParser::ExprContext>(i);
}

tree::TerminalNode* ExpressionParser::Expr_additiveContext::PLUS() {
  return getToken(ExpressionParser::PLUS, 0);
}

tree::TerminalNode* ExpressionParser::Expr_additiveContext::MINUS() {
  return getToken(ExpressionParser::MINUS, 0);
}

ExpressionParser::Expr_additiveContext::Expr_additiveContext(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_additiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_additive(this);
}
void ExpressionParser::Expr_additiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_additive(this);
}

antlrcpp::Any ExpressionParser::Expr_additiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_additive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_powerContext ------------------------------------------------------------------

tree::TerminalNode* ExpressionParser::Expr_powerContext::HAT() {
  return getToken(ExpressionParser::HAT, 0);
}

std::vector<ExpressionParser::ExprContext *> ExpressionParser::Expr_powerContext::expr() {
  return getRuleContexts<ExpressionParser::ExprContext>();
}

ExpressionParser::ExprContext* ExpressionParser::Expr_powerContext::expr(size_t i) {
  return getRuleContext<ExpressionParser::ExprContext>(i);
}

ExpressionParser::Expr_powerContext::Expr_powerContext(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_powerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_power(this);
}
void ExpressionParser::Expr_powerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_power(this);
}

antlrcpp::Any ExpressionParser::Expr_powerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_power(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_funccallContext ------------------------------------------------------------------

tree::TerminalNode* ExpressionParser::Expr_funccallContext::OPEN_PAREN() {
  return getToken(ExpressionParser::OPEN_PAREN, 0);
}

tree::TerminalNode* ExpressionParser::Expr_funccallContext::CLOSE_PAREN() {
  return getToken(ExpressionParser::CLOSE_PAREN, 0);
}

tree::TerminalNode* ExpressionParser::Expr_funccallContext::IDENTIFIER() {
  return getToken(ExpressionParser::IDENTIFIER, 0);
}

std::vector<ExpressionParser::ExprContext *> ExpressionParser::Expr_funccallContext::expr() {
  return getRuleContexts<ExpressionParser::ExprContext>();
}

ExpressionParser::ExprContext* ExpressionParser::Expr_funccallContext::expr(size_t i) {
  return getRuleContext<ExpressionParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExpressionParser::Expr_funccallContext::COMMA() {
  return getTokens(ExpressionParser::COMMA);
}

tree::TerminalNode* ExpressionParser::Expr_funccallContext::COMMA(size_t i) {
  return getToken(ExpressionParser::COMMA, i);
}

ExpressionParser::Expr_funccallContext::Expr_funccallContext(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_funccallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_funccall(this);
}
void ExpressionParser::Expr_funccallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_funccall(this);
}

antlrcpp::Any ExpressionParser::Expr_funccallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_funccall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multipricativeContext ------------------------------------------------------------------

std::vector<ExpressionParser::ExprContext *> ExpressionParser::Expr_multipricativeContext::expr() {
  return getRuleContexts<ExpressionParser::ExprContext>();
}

ExpressionParser::ExprContext* ExpressionParser::Expr_multipricativeContext::expr(size_t i) {
  return getRuleContext<ExpressionParser::ExprContext>(i);
}

tree::TerminalNode* ExpressionParser::Expr_multipricativeContext::ASTERISK() {
  return getToken(ExpressionParser::ASTERISK, 0);
}

tree::TerminalNode* ExpressionParser::Expr_multipricativeContext::SLASH() {
  return getToken(ExpressionParser::SLASH, 0);
}

ExpressionParser::Expr_multipricativeContext::Expr_multipricativeContext(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_multipricativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_multipricative(this);
}
void ExpressionParser::Expr_multipricativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_multipricative(this);
}

antlrcpp::Any ExpressionParser::Expr_multipricativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_multipricative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_unaryContext ------------------------------------------------------------------

ExpressionParser::ExprContext* ExpressionParser::Expr_unaryContext::expr() {
  return getRuleContext<ExpressionParser::ExprContext>(0);
}

tree::TerminalNode* ExpressionParser::Expr_unaryContext::PLUS() {
  return getToken(ExpressionParser::PLUS, 0);
}

tree::TerminalNode* ExpressionParser::Expr_unaryContext::MINUS() {
  return getToken(ExpressionParser::MINUS, 0);
}

ExpressionParser::Expr_unaryContext::Expr_unaryContext(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_unaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_unary(this);
}
void ExpressionParser::Expr_unaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_unary(this);
}

antlrcpp::Any ExpressionParser::Expr_unaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_unary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multipricative2Context ------------------------------------------------------------------

ExpressionParser::ExprContext* ExpressionParser::Expr_multipricative2Context::expr() {
  return getRuleContext<ExpressionParser::ExprContext>(0);
}

ExpressionParser::Paren_exprContext* ExpressionParser::Expr_multipricative2Context::paren_expr() {
  return getRuleContext<ExpressionParser::Paren_exprContext>(0);
}

ExpressionParser::Expr_multipricative2Context::Expr_multipricative2Context(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_multipricative2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_multipricative2(this);
}
void ExpressionParser::Expr_multipricative2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_multipricative2(this);
}

antlrcpp::Any ExpressionParser::Expr_multipricative2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_multipricative2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_noneContext ------------------------------------------------------------------

ExpressionParser::Int_exprContext* ExpressionParser::Expr_noneContext::int_expr() {
  return getRuleContext<ExpressionParser::Int_exprContext>(0);
}

ExpressionParser::Fp_exprContext* ExpressionParser::Expr_noneContext::fp_expr() {
  return getRuleContext<ExpressionParser::Fp_exprContext>(0);
}

ExpressionParser::Str_exprContext* ExpressionParser::Expr_noneContext::str_expr() {
  return getRuleContext<ExpressionParser::Str_exprContext>(0);
}

ExpressionParser::Const_exprContext* ExpressionParser::Expr_noneContext::const_expr() {
  return getRuleContext<ExpressionParser::Const_exprContext>(0);
}

ExpressionParser::Paren_exprContext* ExpressionParser::Expr_noneContext::paren_expr() {
  return getRuleContext<ExpressionParser::Paren_exprContext>(0);
}

ExpressionParser::Expr_noneContext::Expr_noneContext(ExprContext *ctx) { copyFrom(ctx); }

void ExpressionParser::Expr_noneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_none(this);
}
void ExpressionParser::Expr_noneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_none(this);
}

antlrcpp::Any ExpressionParser::Expr_noneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitExpr_none(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::ExprContext* ExpressionParser::expr() {
   return expr(0);
}

ExpressionParser::ExprContext* ExpressionParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExpressionParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExpressionParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExpressionParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(18);
      int_expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(19);
      fp_expr();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(20);
      str_expr();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(21);
      const_expr();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(22);
      paren_expr();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Expr_unaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(23);
      dynamic_cast<Expr_unaryContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ExpressionParser::PLUS

      || _la == ExpressionParser::MINUS)) {
        dynamic_cast<Expr_unaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(24);
      expr(6);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expr_funccallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(25);
      dynamic_cast<Expr_funccallContext *>(_localctx)->funcname = match(ExpressionParser::IDENTIFIER);
      setState(26);
      match(ExpressionParser::OPEN_PAREN);
      setState(35);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ExpressionParser::PLUS)
        | (1ULL << ExpressionParser::MINUS)
        | (1ULL << ExpressionParser::OPEN_PAREN)
        | (1ULL << ExpressionParser::UINT)
        | (1ULL << ExpressionParser::FP_NUM)
        | (1ULL << ExpressionParser::STR)
        | (1ULL << ExpressionParser::IDENTIFIER))) != 0)) {
        setState(27);
        dynamic_cast<Expr_funccallContext *>(_localctx)->exprContext = expr(0);
        dynamic_cast<Expr_funccallContext *>(_localctx)->args.push_back(dynamic_cast<Expr_funccallContext *>(_localctx)->exprContext);
        setState(32);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExpressionParser::COMMA) {
          setState(28);
          match(ExpressionParser::COMMA);
          setState(29);
          dynamic_cast<Expr_funccallContext *>(_localctx)->exprContext = expr(0);
          dynamic_cast<Expr_funccallContext *>(_localctx)->args.push_back(dynamic_cast<Expr_funccallContext *>(_localctx)->exprContext);
          setState(34);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(37);
      match(ExpressionParser::CLOSE_PAREN);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(53);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(51);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_powerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(40);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(41);
          match(ExpressionParser::HAT);
          setState(42);
          dynamic_cast<Expr_powerContext *>(_localctx)->rhs = expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_multipricativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(43);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(44);
          dynamic_cast<Expr_multipricativeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExpressionParser::ASTERISK

          || _la == ExpressionParser::SLASH)) {
            dynamic_cast<Expr_multipricativeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(45);
          dynamic_cast<Expr_multipricativeContext *>(_localctx)->rhs = expr(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_additiveContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(46);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(47);
          dynamic_cast<Expr_additiveContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExpressionParser::PLUS

          || _la == ExpressionParser::MINUS)) {
            dynamic_cast<Expr_additiveContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(48);
          dynamic_cast<Expr_additiveContext *>(_localctx)->rhs = expr(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_multipricative2Context>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(49);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(50);
          dynamic_cast<Expr_multipricative2Context *>(_localctx)->rhs = paren_expr();
          break;
        }

        } 
      }
      setState(55);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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

ExpressionParser::Paren_exprContext::Paren_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExpressionParser::Paren_exprContext::OPEN_PAREN() {
  return getToken(ExpressionParser::OPEN_PAREN, 0);
}

ExpressionParser::ExprContext* ExpressionParser::Paren_exprContext::expr() {
  return getRuleContext<ExpressionParser::ExprContext>(0);
}

tree::TerminalNode* ExpressionParser::Paren_exprContext::CLOSE_PAREN() {
  return getToken(ExpressionParser::CLOSE_PAREN, 0);
}


size_t ExpressionParser::Paren_exprContext::getRuleIndex() const {
  return ExpressionParser::RuleParen_expr;
}

void ExpressionParser::Paren_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParen_expr(this);
}

void ExpressionParser::Paren_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParen_expr(this);
}


antlrcpp::Any ExpressionParser::Paren_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitParen_expr(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::Paren_exprContext* ExpressionParser::paren_expr() {
  Paren_exprContext *_localctx = _tracker.createInstance<Paren_exprContext>(_ctx, getState());
  enterRule(_localctx, 4, ExpressionParser::RuleParen_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(ExpressionParser::OPEN_PAREN);
    setState(57);
    expr(0);
    setState(58);
    match(ExpressionParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_exprContext ------------------------------------------------------------------

ExpressionParser::Int_exprContext::Int_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExpressionParser::Int_exprContext::UINT() {
  return getToken(ExpressionParser::UINT, 0);
}


size_t ExpressionParser::Int_exprContext::getRuleIndex() const {
  return ExpressionParser::RuleInt_expr;
}

void ExpressionParser::Int_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_expr(this);
}

void ExpressionParser::Int_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_expr(this);
}


antlrcpp::Any ExpressionParser::Int_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitInt_expr(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::Int_exprContext* ExpressionParser::int_expr() {
  Int_exprContext *_localctx = _tracker.createInstance<Int_exprContext>(_ctx, getState());
  enterRule(_localctx, 6, ExpressionParser::RuleInt_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(ExpressionParser::UINT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fp_exprContext ------------------------------------------------------------------

ExpressionParser::Fp_exprContext::Fp_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExpressionParser::Fp_exprContext::FP_NUM() {
  return getToken(ExpressionParser::FP_NUM, 0);
}


size_t ExpressionParser::Fp_exprContext::getRuleIndex() const {
  return ExpressionParser::RuleFp_expr;
}

void ExpressionParser::Fp_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFp_expr(this);
}

void ExpressionParser::Fp_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFp_expr(this);
}


antlrcpp::Any ExpressionParser::Fp_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitFp_expr(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::Fp_exprContext* ExpressionParser::fp_expr() {
  Fp_exprContext *_localctx = _tracker.createInstance<Fp_exprContext>(_ctx, getState());
  enterRule(_localctx, 8, ExpressionParser::RuleFp_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(ExpressionParser::FP_NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Str_exprContext ------------------------------------------------------------------

ExpressionParser::Str_exprContext::Str_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExpressionParser::Str_exprContext::STR() {
  return getToken(ExpressionParser::STR, 0);
}


size_t ExpressionParser::Str_exprContext::getRuleIndex() const {
  return ExpressionParser::RuleStr_expr;
}

void ExpressionParser::Str_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStr_expr(this);
}

void ExpressionParser::Str_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStr_expr(this);
}


antlrcpp::Any ExpressionParser::Str_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitStr_expr(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::Str_exprContext* ExpressionParser::str_expr() {
  Str_exprContext *_localctx = _tracker.createInstance<Str_exprContext>(_ctx, getState());
  enterRule(_localctx, 10, ExpressionParser::RuleStr_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(ExpressionParser::STR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_exprContext ------------------------------------------------------------------

ExpressionParser::Const_exprContext::Const_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExpressionParser::Const_exprContext::IDENTIFIER() {
  return getToken(ExpressionParser::IDENTIFIER, 0);
}


size_t ExpressionParser::Const_exprContext::getRuleIndex() const {
  return ExpressionParser::RuleConst_expr;
}

void ExpressionParser::Const_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst_expr(this);
}

void ExpressionParser::Const_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExpressionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst_expr(this);
}


antlrcpp::Any ExpressionParser::Const_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExpressionVisitor*>(visitor))
    return parserVisitor->visitConst_expr(this);
  else
    return visitor->visitChildren(this);
}

ExpressionParser::Const_exprContext* ExpressionParser::const_expr() {
  Const_exprContext *_localctx = _tracker.createInstance<Const_exprContext>(_ctx, getState());
  enterRule(_localctx, 12, ExpressionParser::RuleConst_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(ExpressionParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExpressionParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExpressionParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExpressionParser::_decisionToDFA;
atn::PredictionContextCache ExpressionParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExpressionParser::_atn;
std::vector<uint16_t> ExpressionParser::_serializedATN;

std::vector<std::string> ExpressionParser::_ruleNames = {
  "input", "expr", "paren_expr", "int_expr", "fp_expr", "str_expr", "const_expr"
};

std::vector<std::string> ExpressionParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'^'", "'('", "')'", "','", "'.'"
};

std::vector<std::string> ExpressionParser::_symbolicNames = {
  "", "PLUS", "MINUS", "ASTERISK", "SLASH", "HAT", "OPEN_PAREN", "CLOSE_PAREN", 
  "COMMA", "DOT", "UINT", "FP_NUM", "STR", "IDENTIFIER", "WS"
};

dfa::Vocabulary ExpressionParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExpressionParser::_tokenNames;

ExpressionParser::Initializer::Initializer() {
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
    0x3, 0x10, 0x47, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x21, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x24, 0xb, 0x3, 0x5, 0x3, 0x26, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x29, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x36, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x39, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x2, 0x3, 0x4, 0x9, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x2, 0x4, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x5, 0x6, 
    0x2, 0x4b, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0xc, 0x42, 0x3, 0x2, 0x2, 0x2, 0xe, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 0x7, 
    0x2, 0x2, 0x3, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x8, 0x3, 
    0x1, 0x2, 0x14, 0x29, 0x5, 0x8, 0x5, 0x2, 0x15, 0x29, 0x5, 0xa, 0x6, 
    0x2, 0x16, 0x29, 0x5, 0xc, 0x7, 0x2, 0x17, 0x29, 0x5, 0xe, 0x8, 0x2, 
    0x18, 0x29, 0x5, 0x6, 0x4, 0x2, 0x19, 0x1a, 0x9, 0x2, 0x2, 0x2, 0x1a, 
    0x29, 0x5, 0x4, 0x3, 0x8, 0x1b, 0x1c, 0x7, 0xf, 0x2, 0x2, 0x1c, 0x25, 
    0x7, 0x8, 0x2, 0x2, 0x1d, 0x22, 0x5, 0x4, 0x3, 0x2, 0x1e, 0x1f, 0x7, 
    0xa, 0x2, 0x2, 0x1f, 0x21, 0x5, 0x4, 0x3, 0x2, 0x20, 0x1e, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x24, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x29, 
    0x7, 0x9, 0x2, 0x2, 0x28, 0x13, 0x3, 0x2, 0x2, 0x2, 0x28, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x16, 0x3, 0x2, 0x2, 0x2, 0x28, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x18, 0x3, 0x2, 0x2, 0x2, 0x28, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2b, 0xc, 0x7, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x7, 0x2, 0x2, 0x2c, 
    0x36, 0x5, 0x4, 0x3, 0x7, 0x2d, 0x2e, 0xc, 0x6, 0x2, 0x2, 0x2e, 0x2f, 
    0x9, 0x3, 0x2, 0x2, 0x2f, 0x36, 0x5, 0x4, 0x3, 0x7, 0x30, 0x31, 0xc, 
    0x4, 0x2, 0x2, 0x31, 0x32, 0x9, 0x2, 0x2, 0x2, 0x32, 0x36, 0x5, 0x4, 
    0x3, 0x5, 0x33, 0x34, 0xc, 0x5, 0x2, 0x2, 0x34, 0x36, 0x5, 0x6, 0x4, 
    0x2, 0x35, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x35, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x30, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x5, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x8, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x4, 
    0x3, 0x2, 0x3c, 0x3d, 0x7, 0x9, 0x2, 0x2, 0x3d, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x7, 0xc, 0x2, 0x2, 0x3f, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0xd, 0x2, 0x2, 0x41, 0xb, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0xe, 0x2, 0x2, 0x43, 0xd, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 
    0x7, 0xf, 0x2, 0x2, 0x45, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7, 0x22, 0x25, 
    0x28, 0x35, 0x37, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExpressionParser::Initializer ExpressionParser::_init;
