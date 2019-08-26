
// Generated from C:/Users/nakam/Desktop/parsetest/antlr_sample/calculator\Expression.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExpressionListener.h"


/**
 * This class provides an empty implementation of ExpressionListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExpressionBaseListener : public ExpressionListener {
public:

  virtual void enterInput(ExpressionParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(ExpressionParser::InputContext * /*ctx*/) override { }

  virtual void enterExpr_additive(ExpressionParser::Expr_additiveContext * /*ctx*/) override { }
  virtual void exitExpr_additive(ExpressionParser::Expr_additiveContext * /*ctx*/) override { }

  virtual void enterExpr_power(ExpressionParser::Expr_powerContext * /*ctx*/) override { }
  virtual void exitExpr_power(ExpressionParser::Expr_powerContext * /*ctx*/) override { }

  virtual void enterExpr_funccall(ExpressionParser::Expr_funccallContext * /*ctx*/) override { }
  virtual void exitExpr_funccall(ExpressionParser::Expr_funccallContext * /*ctx*/) override { }

  virtual void enterExpr_multipricative(ExpressionParser::Expr_multipricativeContext * /*ctx*/) override { }
  virtual void exitExpr_multipricative(ExpressionParser::Expr_multipricativeContext * /*ctx*/) override { }

  virtual void enterExpr_unary(ExpressionParser::Expr_unaryContext * /*ctx*/) override { }
  virtual void exitExpr_unary(ExpressionParser::Expr_unaryContext * /*ctx*/) override { }

  virtual void enterExpr_multipricative2(ExpressionParser::Expr_multipricative2Context * /*ctx*/) override { }
  virtual void exitExpr_multipricative2(ExpressionParser::Expr_multipricative2Context * /*ctx*/) override { }

  virtual void enterExpr_none(ExpressionParser::Expr_noneContext * /*ctx*/) override { }
  virtual void exitExpr_none(ExpressionParser::Expr_noneContext * /*ctx*/) override { }

  virtual void enterParen_expr(ExpressionParser::Paren_exprContext * /*ctx*/) override { }
  virtual void exitParen_expr(ExpressionParser::Paren_exprContext * /*ctx*/) override { }

  virtual void enterInt_expr(ExpressionParser::Int_exprContext * /*ctx*/) override { }
  virtual void exitInt_expr(ExpressionParser::Int_exprContext * /*ctx*/) override { }

  virtual void enterFp_expr(ExpressionParser::Fp_exprContext * /*ctx*/) override { }
  virtual void exitFp_expr(ExpressionParser::Fp_exprContext * /*ctx*/) override { }

  virtual void enterStr_expr(ExpressionParser::Str_exprContext * /*ctx*/) override { }
  virtual void exitStr_expr(ExpressionParser::Str_exprContext * /*ctx*/) override { }

  virtual void enterConst_expr(ExpressionParser::Const_exprContext * /*ctx*/) override { }
  virtual void exitConst_expr(ExpressionParser::Const_exprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

