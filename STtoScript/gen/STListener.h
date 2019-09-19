
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by STParser.
 */
class  STListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(STParser::InputContext *ctx) = 0;
  virtual void exitInput(STParser::InputContext *ctx) = 0;

  virtual void enterStmt_list(STParser::Stmt_listContext *ctx) = 0;
  virtual void exitStmt_list(STParser::Stmt_listContext *ctx) = 0;

  virtual void enterSt_comment(STParser::St_commentContext *ctx) = 0;
  virtual void exitSt_comment(STParser::St_commentContext *ctx) = 0;

  virtual void enterStmt(STParser::StmtContext *ctx) = 0;
  virtual void exitStmt(STParser::StmtContext *ctx) = 0;

  virtual void enterLine_comment(STParser::Line_commentContext *ctx) = 0;
  virtual void exitLine_comment(STParser::Line_commentContext *ctx) = 0;

  virtual void enterMulti_comment(STParser::Multi_commentContext *ctx) = 0;
  virtual void exitMulti_comment(STParser::Multi_commentContext *ctx) = 0;

  virtual void enterStmt_assign(STParser::Stmt_assignContext *ctx) = 0;
  virtual void exitStmt_assign(STParser::Stmt_assignContext *ctx) = 0;

  virtual void enterStmt_func(STParser::Stmt_funcContext *ctx) = 0;
  virtual void exitStmt_func(STParser::Stmt_funcContext *ctx) = 0;

  virtual void enterStmt_repeat(STParser::Stmt_repeatContext *ctx) = 0;
  virtual void exitStmt_repeat(STParser::Stmt_repeatContext *ctx) = 0;

  virtual void enterStmt_exit(STParser::Stmt_exitContext *ctx) = 0;
  virtual void exitStmt_exit(STParser::Stmt_exitContext *ctx) = 0;

  virtual void enterStmt_case(STParser::Stmt_caseContext *ctx) = 0;
  virtual void exitStmt_case(STParser::Stmt_caseContext *ctx) = 0;

  virtual void enterStmt_return(STParser::Stmt_returnContext *ctx) = 0;
  virtual void exitStmt_return(STParser::Stmt_returnContext *ctx) = 0;

  virtual void enterS_return(STParser::S_returnContext *ctx) = 0;
  virtual void exitS_return(STParser::S_returnContext *ctx) = 0;

  virtual void enterS_case(STParser::S_caseContext *ctx) = 0;
  virtual void exitS_case(STParser::S_caseContext *ctx) = 0;

  virtual void enterCase_select(STParser::Case_selectContext *ctx) = 0;
  virtual void exitCase_select(STParser::Case_selectContext *ctx) = 0;

  virtual void enterCase_list(STParser::Case_listContext *ctx) = 0;
  virtual void exitCase_list(STParser::Case_listContext *ctx) = 0;

  virtual void enterCase_list_elem(STParser::Case_list_elemContext *ctx) = 0;
  virtual void exitCase_list_elem(STParser::Case_list_elemContext *ctx) = 0;

  virtual void enterSubrange(STParser::SubrangeContext *ctx) = 0;
  virtual void exitSubrange(STParser::SubrangeContext *ctx) = 0;

  virtual void enterRange_val(STParser::Range_valContext *ctx) = 0;
  virtual void exitRange_val(STParser::Range_valContext *ctx) = 0;

  virtual void enterLabel(STParser::LabelContext *ctx) = 0;
  virtual void exitLabel(STParser::LabelContext *ctx) = 0;

  virtual void enterRepeat(STParser::RepeatContext *ctx) = 0;
  virtual void exitRepeat(STParser::RepeatContext *ctx) = 0;

  virtual void enterExit(STParser::ExitContext *ctx) = 0;
  virtual void exitExit(STParser::ExitContext *ctx) = 0;

  virtual void enterAssign(STParser::AssignContext *ctx) = 0;
  virtual void exitAssign(STParser::AssignContext *ctx) = 0;

  virtual void enterExpr_const(STParser::Expr_constContext *ctx) = 0;
  virtual void exitExpr_const(STParser::Expr_constContext *ctx) = 0;

  virtual void enterExpr_logical_xor(STParser::Expr_logical_xorContext *ctx) = 0;
  virtual void exitExpr_logical_xor(STParser::Expr_logical_xorContext *ctx) = 0;

  virtual void enterExpr_cmp(STParser::Expr_cmpContext *ctx) = 0;
  virtual void exitExpr_cmp(STParser::Expr_cmpContext *ctx) = 0;

  virtual void enterExpr_var(STParser::Expr_varContext *ctx) = 0;
  virtual void exitExpr_var(STParser::Expr_varContext *ctx) = 0;

  virtual void enterExpr_power(STParser::Expr_powerContext *ctx) = 0;
  virtual void exitExpr_power(STParser::Expr_powerContext *ctx) = 0;

  virtual void enterExpr_multipricative(STParser::Expr_multipricativeContext *ctx) = 0;
  virtual void exitExpr_multipricative(STParser::Expr_multipricativeContext *ctx) = 0;

  virtual void enterExpr_eq(STParser::Expr_eqContext *ctx) = 0;
  virtual void exitExpr_eq(STParser::Expr_eqContext *ctx) = 0;

  virtual void enterExpr_logical_and(STParser::Expr_logical_andContext *ctx) = 0;
  virtual void exitExpr_logical_and(STParser::Expr_logical_andContext *ctx) = 0;

  virtual void enterExpr_func(STParser::Expr_funcContext *ctx) = 0;
  virtual void exitExpr_func(STParser::Expr_funcContext *ctx) = 0;

  virtual void enterExpr_additive(STParser::Expr_additiveContext *ctx) = 0;
  virtual void exitExpr_additive(STParser::Expr_additiveContext *ctx) = 0;

  virtual void enterExpr_unary(STParser::Expr_unaryContext *ctx) = 0;
  virtual void exitExpr_unary(STParser::Expr_unaryContext *ctx) = 0;

  virtual void enterExpr_none(STParser::Expr_noneContext *ctx) = 0;
  virtual void exitExpr_none(STParser::Expr_noneContext *ctx) = 0;

  virtual void enterExpr_logical_or(STParser::Expr_logical_orContext *ctx) = 0;
  virtual void exitExpr_logical_or(STParser::Expr_logical_orContext *ctx) = 0;

  virtual void enterParen_expr(STParser::Paren_exprContext *ctx) = 0;
  virtual void exitParen_expr(STParser::Paren_exprContext *ctx) = 0;

  virtual void enterFunction(STParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(STParser::FunctionContext *ctx) = 0;

  virtual void enterArg_exprs(STParser::Arg_exprsContext *ctx) = 0;
  virtual void exitArg_exprs(STParser::Arg_exprsContext *ctx) = 0;

  virtual void enterArg_expr(STParser::Arg_exprContext *ctx) = 0;
  virtual void exitArg_expr(STParser::Arg_exprContext *ctx) = 0;

  virtual void enterArg_in(STParser::Arg_inContext *ctx) = 0;
  virtual void exitArg_in(STParser::Arg_inContext *ctx) = 0;

  virtual void enterArg_out(STParser::Arg_outContext *ctx) = 0;
  virtual void exitArg_out(STParser::Arg_outContext *ctx) = 0;

  virtual void enterIn_arg(STParser::In_argContext *ctx) = 0;
  virtual void exitIn_arg(STParser::In_argContext *ctx) = 0;

  virtual void enterOut_arg(STParser::Out_argContext *ctx) = 0;
  virtual void exitOut_arg(STParser::Out_argContext *ctx) = 0;

  virtual void enterVariable(STParser::VariableContext *ctx) = 0;
  virtual void exitVariable(STParser::VariableContext *ctx) = 0;

  virtual void enterConst_int(STParser::Const_intContext *ctx) = 0;
  virtual void exitConst_int(STParser::Const_intContext *ctx) = 0;

  virtual void enterConst_real(STParser::Const_realContext *ctx) = 0;
  virtual void exitConst_real(STParser::Const_realContext *ctx) = 0;

  virtual void enterConst_string(STParser::Const_stringContext *ctx) = 0;
  virtual void exitConst_string(STParser::Const_stringContext *ctx) = 0;

  virtual void enterInteger_val(STParser::Integer_valContext *ctx) = 0;
  virtual void exitInteger_val(STParser::Integer_valContext *ctx) = 0;

  virtual void enterInt_e(STParser::Int_eContext *ctx) = 0;
  virtual void exitInt_e(STParser::Int_eContext *ctx) = 0;

  virtual void enterUint_e(STParser::Uint_eContext *ctx) = 0;
  virtual void exitUint_e(STParser::Uint_eContext *ctx) = 0;

  virtual void enterDint_e(STParser::Dint_eContext *ctx) = 0;
  virtual void exitDint_e(STParser::Dint_eContext *ctx) = 0;

  virtual void enterUdint_e(STParser::Udint_eContext *ctx) = 0;
  virtual void exitUdint_e(STParser::Udint_eContext *ctx) = 0;

  virtual void enterBinary(STParser::BinaryContext *ctx) = 0;
  virtual void exitBinary(STParser::BinaryContext *ctx) = 0;

  virtual void enterOctal(STParser::OctalContext *ctx) = 0;
  virtual void exitOctal(STParser::OctalContext *ctx) = 0;

  virtual void enterHexa(STParser::HexaContext *ctx) = 0;
  virtual void exitHexa(STParser::HexaContext *ctx) = 0;

  virtual void enterDec(STParser::DecContext *ctx) = 0;
  virtual void exitDec(STParser::DecContext *ctx) = 0;

  virtual void enterReal_val(STParser::Real_valContext *ctx) = 0;
  virtual void exitReal_val(STParser::Real_valContext *ctx) = 0;

  virtual void enterReal_e(STParser::Real_eContext *ctx) = 0;
  virtual void exitReal_e(STParser::Real_eContext *ctx) = 0;

  virtual void enterLreal_e(STParser::Lreal_eContext *ctx) = 0;
  virtual void exitLreal_e(STParser::Lreal_eContext *ctx) = 0;

  virtual void enterReal_normal(STParser::Real_normalContext *ctx) = 0;
  virtual void exitReal_normal(STParser::Real_normalContext *ctx) = 0;

  virtual void enterString_val(STParser::String_valContext *ctx) = 0;
  virtual void exitString_val(STParser::String_valContext *ctx) = 0;

  virtual void enterStr_e(STParser::Str_eContext *ctx) = 0;
  virtual void exitStr_e(STParser::Str_eContext *ctx) = 0;

  virtual void enterMbcs_str(STParser::Mbcs_strContext *ctx) = 0;
  virtual void exitMbcs_str(STParser::Mbcs_strContext *ctx) = 0;

  virtual void enterWstr_str(STParser::Wstr_strContext *ctx) = 0;
  virtual void exitWstr_str(STParser::Wstr_strContext *ctx) = 0;


};

