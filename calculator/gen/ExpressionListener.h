
// Generated from C:/Users/nakam/Desktop/parsetest/antlr_sample/calculator\Expression.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExpressionParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExpressionParser.
 */
class  ExpressionListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(ExpressionParser::InputContext *ctx) = 0;
  virtual void exitInput(ExpressionParser::InputContext *ctx) = 0;

  virtual void enterExpr_additive(ExpressionParser::Expr_additiveContext *ctx) = 0;
  virtual void exitExpr_additive(ExpressionParser::Expr_additiveContext *ctx) = 0;

  virtual void enterExpr_power(ExpressionParser::Expr_powerContext *ctx) = 0;
  virtual void exitExpr_power(ExpressionParser::Expr_powerContext *ctx) = 0;

  virtual void enterExpr_funccall(ExpressionParser::Expr_funccallContext *ctx) = 0;
  virtual void exitExpr_funccall(ExpressionParser::Expr_funccallContext *ctx) = 0;

  virtual void enterExpr_multipricative(ExpressionParser::Expr_multipricativeContext *ctx) = 0;
  virtual void exitExpr_multipricative(ExpressionParser::Expr_multipricativeContext *ctx) = 0;

  virtual void enterExpr_unary(ExpressionParser::Expr_unaryContext *ctx) = 0;
  virtual void exitExpr_unary(ExpressionParser::Expr_unaryContext *ctx) = 0;

  virtual void enterExpr_multipricative2(ExpressionParser::Expr_multipricative2Context *ctx) = 0;
  virtual void exitExpr_multipricative2(ExpressionParser::Expr_multipricative2Context *ctx) = 0;

  virtual void enterExpr_none(ExpressionParser::Expr_noneContext *ctx) = 0;
  virtual void exitExpr_none(ExpressionParser::Expr_noneContext *ctx) = 0;

  virtual void enterParen_expr(ExpressionParser::Paren_exprContext *ctx) = 0;
  virtual void exitParen_expr(ExpressionParser::Paren_exprContext *ctx) = 0;

  virtual void enterInt_expr(ExpressionParser::Int_exprContext *ctx) = 0;
  virtual void exitInt_expr(ExpressionParser::Int_exprContext *ctx) = 0;

  virtual void enterFp_expr(ExpressionParser::Fp_exprContext *ctx) = 0;
  virtual void exitFp_expr(ExpressionParser::Fp_exprContext *ctx) = 0;

  virtual void enterStr_expr(ExpressionParser::Str_exprContext *ctx) = 0;
  virtual void exitStr_expr(ExpressionParser::Str_exprContext *ctx) = 0;

  virtual void enterConst_expr(ExpressionParser::Const_exprContext *ctx) = 0;
  virtual void exitConst_expr(ExpressionParser::Const_exprContext *ctx) = 0;


};

