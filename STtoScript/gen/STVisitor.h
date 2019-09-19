
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by STParser.
 */
class  STVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by STParser.
   */
    virtual antlrcpp::Any visitInput(STParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(STParser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitSt_comment(STParser::St_commentContext *context) = 0;

    virtual antlrcpp::Any visitStmt(STParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitLine_comment(STParser::Line_commentContext *context) = 0;

    virtual antlrcpp::Any visitMulti_comment(STParser::Multi_commentContext *context) = 0;

    virtual antlrcpp::Any visitStmt_assign(STParser::Stmt_assignContext *context) = 0;

    virtual antlrcpp::Any visitStmt_func(STParser::Stmt_funcContext *context) = 0;

    virtual antlrcpp::Any visitStmt_repeat(STParser::Stmt_repeatContext *context) = 0;

    virtual antlrcpp::Any visitStmt_exit(STParser::Stmt_exitContext *context) = 0;

    virtual antlrcpp::Any visitStmt_case(STParser::Stmt_caseContext *context) = 0;

    virtual antlrcpp::Any visitStmt_return(STParser::Stmt_returnContext *context) = 0;

    virtual antlrcpp::Any visitS_return(STParser::S_returnContext *context) = 0;

    virtual antlrcpp::Any visitS_case(STParser::S_caseContext *context) = 0;

    virtual antlrcpp::Any visitCase_select(STParser::Case_selectContext *context) = 0;

    virtual antlrcpp::Any visitCase_list(STParser::Case_listContext *context) = 0;

    virtual antlrcpp::Any visitCase_list_elem(STParser::Case_list_elemContext *context) = 0;

    virtual antlrcpp::Any visitSubrange(STParser::SubrangeContext *context) = 0;

    virtual antlrcpp::Any visitRange_val(STParser::Range_valContext *context) = 0;

    virtual antlrcpp::Any visitLabel(STParser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitRepeat(STParser::RepeatContext *context) = 0;

    virtual antlrcpp::Any visitExit(STParser::ExitContext *context) = 0;

    virtual antlrcpp::Any visitAssign(STParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitExpr_const(STParser::Expr_constContext *context) = 0;

    virtual antlrcpp::Any visitExpr_logical_xor(STParser::Expr_logical_xorContext *context) = 0;

    virtual antlrcpp::Any visitExpr_cmp(STParser::Expr_cmpContext *context) = 0;

    virtual antlrcpp::Any visitExpr_var(STParser::Expr_varContext *context) = 0;

    virtual antlrcpp::Any visitExpr_power(STParser::Expr_powerContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multipricative(STParser::Expr_multipricativeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_eq(STParser::Expr_eqContext *context) = 0;

    virtual antlrcpp::Any visitExpr_logical_and(STParser::Expr_logical_andContext *context) = 0;

    virtual antlrcpp::Any visitExpr_func(STParser::Expr_funcContext *context) = 0;

    virtual antlrcpp::Any visitExpr_additive(STParser::Expr_additiveContext *context) = 0;

    virtual antlrcpp::Any visitExpr_unary(STParser::Expr_unaryContext *context) = 0;

    virtual antlrcpp::Any visitExpr_none(STParser::Expr_noneContext *context) = 0;

    virtual antlrcpp::Any visitExpr_logical_or(STParser::Expr_logical_orContext *context) = 0;

    virtual antlrcpp::Any visitParen_expr(STParser::Paren_exprContext *context) = 0;

    virtual antlrcpp::Any visitFunction(STParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitArg_exprs(STParser::Arg_exprsContext *context) = 0;

    virtual antlrcpp::Any visitArg_expr(STParser::Arg_exprContext *context) = 0;

    virtual antlrcpp::Any visitArg_in(STParser::Arg_inContext *context) = 0;

    virtual antlrcpp::Any visitArg_out(STParser::Arg_outContext *context) = 0;

    virtual antlrcpp::Any visitIn_arg(STParser::In_argContext *context) = 0;

    virtual antlrcpp::Any visitOut_arg(STParser::Out_argContext *context) = 0;

    virtual antlrcpp::Any visitVariable(STParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitConst_int(STParser::Const_intContext *context) = 0;

    virtual antlrcpp::Any visitConst_real(STParser::Const_realContext *context) = 0;

    virtual antlrcpp::Any visitConst_string(STParser::Const_stringContext *context) = 0;

    virtual antlrcpp::Any visitInteger_val(STParser::Integer_valContext *context) = 0;

    virtual antlrcpp::Any visitInt_e(STParser::Int_eContext *context) = 0;

    virtual antlrcpp::Any visitUint_e(STParser::Uint_eContext *context) = 0;

    virtual antlrcpp::Any visitDint_e(STParser::Dint_eContext *context) = 0;

    virtual antlrcpp::Any visitUdint_e(STParser::Udint_eContext *context) = 0;

    virtual antlrcpp::Any visitBinary(STParser::BinaryContext *context) = 0;

    virtual antlrcpp::Any visitOctal(STParser::OctalContext *context) = 0;

    virtual antlrcpp::Any visitHexa(STParser::HexaContext *context) = 0;

    virtual antlrcpp::Any visitDec(STParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitReal_val(STParser::Real_valContext *context) = 0;

    virtual antlrcpp::Any visitReal_e(STParser::Real_eContext *context) = 0;

    virtual antlrcpp::Any visitLreal_e(STParser::Lreal_eContext *context) = 0;

    virtual antlrcpp::Any visitReal_normal(STParser::Real_normalContext *context) = 0;

    virtual antlrcpp::Any visitString_val(STParser::String_valContext *context) = 0;

    virtual antlrcpp::Any visitStr_e(STParser::Str_eContext *context) = 0;

    virtual antlrcpp::Any visitMbcs_str(STParser::Mbcs_strContext *context) = 0;

    virtual antlrcpp::Any visitWstr_str(STParser::Wstr_strContext *context) = 0;


};

