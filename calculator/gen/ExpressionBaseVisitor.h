
// Generated from C:/Users/nakam/Desktop/parsetest/antlr_sample/calculator\Expression.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExpressionVisitor.h"


/**
 * This class provides an empty implementation of ExpressionVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExpressionBaseVisitor : public ExpressionVisitor {
public:

  virtual antlrcpp::Any visitInput(ExpressionParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_additive(ExpressionParser::Expr_additiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_power(ExpressionParser::Expr_powerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_funccall(ExpressionParser::Expr_funccallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_multipricative(ExpressionParser::Expr_multipricativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_unary(ExpressionParser::Expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_multipricative2(ExpressionParser::Expr_multipricative2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_none(ExpressionParser::Expr_noneContext *ctx) override {
	  printf("none");
	  antlrcpp::Any ret = visitChildren(ctx);
	  printf("none2");
	  return ret;
  }

  virtual antlrcpp::Any visitParen_expr(ExpressionParser::Paren_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_expr(ExpressionParser::Int_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFp_expr(ExpressionParser::Fp_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_expr(ExpressionParser::Str_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_expr(ExpressionParser::Const_exprContext *ctx) override {
    return visitChildren(ctx);
  }


};

