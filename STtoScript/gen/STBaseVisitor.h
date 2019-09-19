
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STVisitor.h"


/**
 * This class provides an empty implementation of STVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  STBaseVisitor : public STVisitor {
public:

  virtual antlrcpp::Any visitInput(STParser::InputContext *ctx) override {
	printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_list(STParser::Stmt_listContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_comment(STParser::St_commentContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(STParser::StmtContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine_comment(STParser::Line_commentContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_comment(STParser::Multi_commentContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_assign(STParser::Stmt_assignContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_func(STParser::Stmt_funcContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_repeat(STParser::Stmt_repeatContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_exit(STParser::Stmt_exitContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_case(STParser::Stmt_caseContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_return(STParser::Stmt_returnContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_return(STParser::S_returnContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_case(STParser::S_caseContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_select(STParser::Case_selectContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_list(STParser::Case_listContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_list_elem(STParser::Case_list_elemContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubrange(STParser::SubrangeContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange_val(STParser::Range_valContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(STParser::LabelContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat(STParser::RepeatContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExit(STParser::ExitContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(STParser::AssignContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_const(STParser::Expr_constContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_logical_xor(STParser::Expr_logical_xorContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_cmp(STParser::Expr_cmpContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_var(STParser::Expr_varContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_power(STParser::Expr_powerContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_multipricative(STParser::Expr_multipricativeContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_eq(STParser::Expr_eqContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_logical_and(STParser::Expr_logical_andContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func(STParser::Expr_funcContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_additive(STParser::Expr_additiveContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_unary(STParser::Expr_unaryContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_none(STParser::Expr_noneContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_logical_or(STParser::Expr_logical_orContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_expr(STParser::Paren_exprContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(STParser::FunctionContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_exprs(STParser::Arg_exprsContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_expr(STParser::Arg_exprContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_in(STParser::Arg_inContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_out(STParser::Arg_outContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn_arg(STParser::In_argContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut_arg(STParser::Out_argContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(STParser::VariableContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_int(STParser::Const_intContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_real(STParser::Const_realContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_string(STParser::Const_stringContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_val(STParser::Integer_valContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_e(STParser::Int_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUint_e(STParser::Uint_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDint_e(STParser::Dint_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdint_e(STParser::Udint_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary(STParser::BinaryContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOctal(STParser::OctalContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexa(STParser::HexaContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec(STParser::DecContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal_val(STParser::Real_valContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal_e(STParser::Real_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLreal_e(STParser::Lreal_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal_normal(STParser::Real_normalContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_val(STParser::String_valContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_e(STParser::Str_eContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMbcs_str(STParser::Mbcs_strContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWstr_str(STParser::Wstr_strContext *ctx) override {
	  printf("%s\n", __func__);
    return visitChildren(ctx);
  }


};

