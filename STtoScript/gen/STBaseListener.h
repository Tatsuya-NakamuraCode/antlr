
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STListener.h"


/**
 * This class provides an empty implementation of STListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  STBaseListener : public STListener {
public:

  virtual void enterInput(STParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(STParser::InputContext * /*ctx*/) override { }

  virtual void enterStmt_list(STParser::Stmt_listContext * /*ctx*/) override { }
  virtual void exitStmt_list(STParser::Stmt_listContext * /*ctx*/) override { }

  virtual void enterSt_comment(STParser::St_commentContext * /*ctx*/) override { }
  virtual void exitSt_comment(STParser::St_commentContext * /*ctx*/) override { }

  virtual void enterStmt(STParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(STParser::StmtContext * /*ctx*/) override { }

  virtual void enterLine_comment(STParser::Line_commentContext * /*ctx*/) override { }
  virtual void exitLine_comment(STParser::Line_commentContext * /*ctx*/) override { }

  virtual void enterMulti_comment(STParser::Multi_commentContext * /*ctx*/) override { }
  virtual void exitMulti_comment(STParser::Multi_commentContext * /*ctx*/) override { }

  virtual void enterStmt_assign(STParser::Stmt_assignContext * /*ctx*/) override { }
  virtual void exitStmt_assign(STParser::Stmt_assignContext * /*ctx*/) override { }

  virtual void enterStmt_func(STParser::Stmt_funcContext * /*ctx*/) override { }
  virtual void exitStmt_func(STParser::Stmt_funcContext * /*ctx*/) override { }

  virtual void enterStmt_repeat(STParser::Stmt_repeatContext * /*ctx*/) override { }
  virtual void exitStmt_repeat(STParser::Stmt_repeatContext * /*ctx*/) override { }

  virtual void enterStmt_exit(STParser::Stmt_exitContext * /*ctx*/) override { }
  virtual void exitStmt_exit(STParser::Stmt_exitContext * /*ctx*/) override { }

  virtual void enterStmt_case(STParser::Stmt_caseContext * /*ctx*/) override { }
  virtual void exitStmt_case(STParser::Stmt_caseContext * /*ctx*/) override { }

  virtual void enterStmt_return(STParser::Stmt_returnContext * /*ctx*/) override { }
  virtual void exitStmt_return(STParser::Stmt_returnContext * /*ctx*/) override { }

  virtual void enterS_return(STParser::S_returnContext * /*ctx*/) override { }
  virtual void exitS_return(STParser::S_returnContext * /*ctx*/) override { }

  virtual void enterS_case(STParser::S_caseContext * /*ctx*/) override { }
  virtual void exitS_case(STParser::S_caseContext * /*ctx*/) override { }

  virtual void enterCase_select(STParser::Case_selectContext * /*ctx*/) override { }
  virtual void exitCase_select(STParser::Case_selectContext * /*ctx*/) override { }

  virtual void enterCase_list(STParser::Case_listContext * /*ctx*/) override { }
  virtual void exitCase_list(STParser::Case_listContext * /*ctx*/) override { }

  virtual void enterCase_list_elem(STParser::Case_list_elemContext * /*ctx*/) override { }
  virtual void exitCase_list_elem(STParser::Case_list_elemContext * /*ctx*/) override { }

  virtual void enterSubrange(STParser::SubrangeContext * /*ctx*/) override { }
  virtual void exitSubrange(STParser::SubrangeContext * /*ctx*/) override { }

  virtual void enterRange_val(STParser::Range_valContext * /*ctx*/) override { }
  virtual void exitRange_val(STParser::Range_valContext * /*ctx*/) override { }

  virtual void enterLabel(STParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(STParser::LabelContext * /*ctx*/) override { }

  virtual void enterRepeat(STParser::RepeatContext * /*ctx*/) override { }
  virtual void exitRepeat(STParser::RepeatContext * /*ctx*/) override { }

  virtual void enterExit(STParser::ExitContext * /*ctx*/) override { }
  virtual void exitExit(STParser::ExitContext * /*ctx*/) override { }

  virtual void enterAssign(STParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(STParser::AssignContext * /*ctx*/) override { }

  virtual void enterExpr_const(STParser::Expr_constContext * /*ctx*/) override { }
  virtual void exitExpr_const(STParser::Expr_constContext * /*ctx*/) override { }

  virtual void enterExpr_logical_xor(STParser::Expr_logical_xorContext * /*ctx*/) override { }
  virtual void exitExpr_logical_xor(STParser::Expr_logical_xorContext * /*ctx*/) override { }

  virtual void enterExpr_cmp(STParser::Expr_cmpContext * /*ctx*/) override { }
  virtual void exitExpr_cmp(STParser::Expr_cmpContext * /*ctx*/) override { }

  virtual void enterExpr_var(STParser::Expr_varContext * /*ctx*/) override { }
  virtual void exitExpr_var(STParser::Expr_varContext * /*ctx*/) override { }

  virtual void enterExpr_power(STParser::Expr_powerContext * /*ctx*/) override { }
  virtual void exitExpr_power(STParser::Expr_powerContext * /*ctx*/) override { }

  virtual void enterExpr_multipricative(STParser::Expr_multipricativeContext * /*ctx*/) override { }
  virtual void exitExpr_multipricative(STParser::Expr_multipricativeContext * /*ctx*/) override { }

  virtual void enterExpr_eq(STParser::Expr_eqContext * /*ctx*/) override { }
  virtual void exitExpr_eq(STParser::Expr_eqContext * /*ctx*/) override { }

  virtual void enterExpr_logical_and(STParser::Expr_logical_andContext * /*ctx*/) override { }
  virtual void exitExpr_logical_and(STParser::Expr_logical_andContext * /*ctx*/) override { }

  virtual void enterExpr_func(STParser::Expr_funcContext * /*ctx*/) override { }
  virtual void exitExpr_func(STParser::Expr_funcContext * /*ctx*/) override { }

  virtual void enterExpr_additive(STParser::Expr_additiveContext * /*ctx*/) override { }
  virtual void exitExpr_additive(STParser::Expr_additiveContext * /*ctx*/) override { }

  virtual void enterExpr_unary(STParser::Expr_unaryContext * /*ctx*/) override { }
  virtual void exitExpr_unary(STParser::Expr_unaryContext * /*ctx*/) override { }

  virtual void enterExpr_none(STParser::Expr_noneContext * /*ctx*/) override { }
  virtual void exitExpr_none(STParser::Expr_noneContext * /*ctx*/) override { }

  virtual void enterExpr_logical_or(STParser::Expr_logical_orContext * /*ctx*/) override { }
  virtual void exitExpr_logical_or(STParser::Expr_logical_orContext * /*ctx*/) override { }

  virtual void enterParen_expr(STParser::Paren_exprContext * /*ctx*/) override { }
  virtual void exitParen_expr(STParser::Paren_exprContext * /*ctx*/) override { }

  virtual void enterFunction(STParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(STParser::FunctionContext * /*ctx*/) override { }

  virtual void enterArg_exprs(STParser::Arg_exprsContext * /*ctx*/) override { }
  virtual void exitArg_exprs(STParser::Arg_exprsContext * /*ctx*/) override { }

  virtual void enterArg_expr(STParser::Arg_exprContext * /*ctx*/) override { }
  virtual void exitArg_expr(STParser::Arg_exprContext * /*ctx*/) override { }

  virtual void enterArg_in(STParser::Arg_inContext * /*ctx*/) override { }
  virtual void exitArg_in(STParser::Arg_inContext * /*ctx*/) override { }

  virtual void enterArg_out(STParser::Arg_outContext * /*ctx*/) override { }
  virtual void exitArg_out(STParser::Arg_outContext * /*ctx*/) override { }

  virtual void enterIn_arg(STParser::In_argContext * /*ctx*/) override { }
  virtual void exitIn_arg(STParser::In_argContext * /*ctx*/) override { }

  virtual void enterOut_arg(STParser::Out_argContext * /*ctx*/) override { }
  virtual void exitOut_arg(STParser::Out_argContext * /*ctx*/) override { }

  virtual void enterVariable(STParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(STParser::VariableContext * /*ctx*/) override { }

  virtual void enterConst_int(STParser::Const_intContext * /*ctx*/) override { }
  virtual void exitConst_int(STParser::Const_intContext * /*ctx*/) override { }

  virtual void enterConst_real(STParser::Const_realContext * /*ctx*/) override { }
  virtual void exitConst_real(STParser::Const_realContext * /*ctx*/) override { }

  virtual void enterConst_string(STParser::Const_stringContext * /*ctx*/) override { }
  virtual void exitConst_string(STParser::Const_stringContext * /*ctx*/) override { }

  virtual void enterInteger_val(STParser::Integer_valContext * /*ctx*/) override { }
  virtual void exitInteger_val(STParser::Integer_valContext * /*ctx*/) override { }

  virtual void enterInt_e(STParser::Int_eContext * /*ctx*/) override { }
  virtual void exitInt_e(STParser::Int_eContext * /*ctx*/) override { }

  virtual void enterUint_e(STParser::Uint_eContext * /*ctx*/) override { }
  virtual void exitUint_e(STParser::Uint_eContext * /*ctx*/) override { }

  virtual void enterDint_e(STParser::Dint_eContext * /*ctx*/) override { }
  virtual void exitDint_e(STParser::Dint_eContext * /*ctx*/) override { }

  virtual void enterUdint_e(STParser::Udint_eContext * /*ctx*/) override { }
  virtual void exitUdint_e(STParser::Udint_eContext * /*ctx*/) override { }

  virtual void enterBinary(STParser::BinaryContext * /*ctx*/) override { }
  virtual void exitBinary(STParser::BinaryContext * /*ctx*/) override { }

  virtual void enterOctal(STParser::OctalContext * /*ctx*/) override { }
  virtual void exitOctal(STParser::OctalContext * /*ctx*/) override { }

  virtual void enterHexa(STParser::HexaContext * /*ctx*/) override { }
  virtual void exitHexa(STParser::HexaContext * /*ctx*/) override { }

  virtual void enterDec(STParser::DecContext * /*ctx*/) override { }
  virtual void exitDec(STParser::DecContext * /*ctx*/) override { }

  virtual void enterReal_val(STParser::Real_valContext * /*ctx*/) override { }
  virtual void exitReal_val(STParser::Real_valContext * /*ctx*/) override { }

  virtual void enterReal_e(STParser::Real_eContext * /*ctx*/) override { }
  virtual void exitReal_e(STParser::Real_eContext * /*ctx*/) override { }

  virtual void enterLreal_e(STParser::Lreal_eContext * /*ctx*/) override { }
  virtual void exitLreal_e(STParser::Lreal_eContext * /*ctx*/) override { }

  virtual void enterReal_normal(STParser::Real_normalContext * /*ctx*/) override { }
  virtual void exitReal_normal(STParser::Real_normalContext * /*ctx*/) override { }

  virtual void enterString_val(STParser::String_valContext * /*ctx*/) override { }
  virtual void exitString_val(STParser::String_valContext * /*ctx*/) override { }

  virtual void enterStr_e(STParser::Str_eContext * /*ctx*/) override { }
  virtual void exitStr_e(STParser::Str_eContext * /*ctx*/) override { }

  virtual void enterMbcs_str(STParser::Mbcs_strContext * /*ctx*/) override { }
  virtual void exitMbcs_str(STParser::Mbcs_strContext * /*ctx*/) override { }

  virtual void enterWstr_str(STParser::Wstr_strContext * /*ctx*/) override { }
  virtual void exitWstr_str(STParser::Wstr_strContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

