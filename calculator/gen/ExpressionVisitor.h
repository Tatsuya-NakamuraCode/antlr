
// Generated from C:/Users/nakam/Desktop/parsetest/antlr_sample/calculator\Expression.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExpressionParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExpressionParser.
 */
class  ExpressionVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExpressionParser.
   */
    virtual antlrcpp::Any visitInput(ExpressionParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitExpr_additive(ExpressionParser::Expr_additiveContext *context) = 0;

    virtual antlrcpp::Any visitExpr_power(ExpressionParser::Expr_powerContext *context) = 0;

    virtual antlrcpp::Any visitExpr_funccall(ExpressionParser::Expr_funccallContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multipricative(ExpressionParser::Expr_multipricativeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_unary(ExpressionParser::Expr_unaryContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multipricative2(ExpressionParser::Expr_multipricative2Context *context) = 0;

    virtual antlrcpp::Any visitExpr_none(ExpressionParser::Expr_noneContext *context) = 0;

    virtual antlrcpp::Any visitParen_expr(ExpressionParser::Paren_exprContext *context) = 0;

    virtual antlrcpp::Any visitInt_expr(ExpressionParser::Int_exprContext *context) = 0;

    virtual antlrcpp::Any visitFp_expr(ExpressionParser::Fp_exprContext *context) = 0;

    virtual antlrcpp::Any visitStr_expr(ExpressionParser::Str_exprContext *context) = 0;

    virtual antlrcpp::Any visitConst_expr(ExpressionParser::Const_exprContext *context) = 0;


};

