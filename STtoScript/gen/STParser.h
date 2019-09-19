
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  STParser : public antlr4::Parser {
public:
  enum {
    EXPLICIT_INT = 1, EXPLICIT_UINT = 2, EXPLICIT_DINT = 3, EXPLICIT_UDINT = 4, 
    EXPLICIT_REAL = 5, EXPLICIT_LREAL = 6, EXPLICIT_STRING = 7, PLUS = 8, 
    MINUS = 9, ASTERISK = 10, SLASH = 11, POW = 12, LT = 13, GT = 14, LE = 15, 
    GE = 16, EQ = 17, NEQ = 18, ASSIGN = 19, OUTREF = 20, RANGE = 21, COMMA = 22, 
    OPEN_PAREN = 23, CLOSE_PAREN = 24, SEMI_COLON = 25, COLON = 26, AMBASSADOR = 27, 
    NOT = 28, MOD = 29, AND = 30, XOR = 31, OR = 32, CASE = 33, OF = 34, 
    ELSE = 35, END_CASE = 36, REPEAT = 37, UNTIL = 38, END_REPEAT = 39, 
    EXIT = 40, RETURN = 41, IDENTIFIER = 42, WS = 43, EOL = 44, SINGLE_LINE_COMMENT = 45, 
    MULTI_LINE_COMMENT_A = 46, BINARY_NOTATION = 47, OCTAL_NOTATION = 48, 
    HEXA_NOTATION = 49, DEC_NOTATION = 50, REAL_NUM = 51, MBCS = 52, WSTR = 53
  };

  enum {
    RuleInput = 0, RuleStmt_list = 1, RuleStatement = 2, RuleComment = 3, 
    RuleSingle_stmt = 4, RuleS_return = 5, RuleS_case = 6, RuleCase_select = 7, 
    RuleCase_list = 8, RuleCase_list_elem = 9, RuleSubrange = 10, RuleRange_val = 11, 
    RuleLabel = 12, RuleRepeat = 13, RuleExit = 14, RuleAssign = 15, RuleExpr = 16, 
    RuleParen_expr = 17, RuleFunction = 18, RuleArg_exprs = 19, RuleSingle_arg = 20, 
    RuleIn_arg = 21, RuleOut_arg = 22, RuleVariable = 23, RuleConstant_val = 24, 
    RuleInteger_val = 25, RuleInt_explicit = 26, RuleInt_num = 27, RuleReal_val = 28, 
    RuleReal_explicit = 29, RuleReal_num = 30, RuleString_val = 31, RuleString_expricit = 32, 
    RuleString_str = 33
  };

  STParser(antlr4::TokenStream *input);
  ~STParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InputContext;
  class Stmt_listContext;
  class StatementContext;
  class CommentContext;
  class Single_stmtContext;
  class S_returnContext;
  class S_caseContext;
  class Case_selectContext;
  class Case_listContext;
  class Case_list_elemContext;
  class SubrangeContext;
  class Range_valContext;
  class LabelContext;
  class RepeatContext;
  class ExitContext;
  class AssignContext;
  class ExprContext;
  class Paren_exprContext;
  class FunctionContext;
  class Arg_exprsContext;
  class Single_argContext;
  class In_argContext;
  class Out_argContext;
  class VariableContext;
  class Constant_valContext;
  class Integer_valContext;
  class Int_explicitContext;
  class Int_numContext;
  class Real_valContext;
  class Real_explicitContext;
  class Real_numContext;
  class String_valContext;
  class String_expricitContext;
  class String_strContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Stmt_listContext *stmt_list();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  Stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stmt_listContext* stmt_list();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  St_commentContext : public StatementContext {
  public:
    St_commentContext(StatementContext *ctx);

    CommentContext *comment();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtContext : public StatementContext {
  public:
    StmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *SEMI_COLON();
    Single_stmtContext *single_stmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CommentContext() = default;
    void copyFrom(CommentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Line_commentContext : public CommentContext {
  public:
    Line_commentContext(CommentContext *ctx);

    antlr4::tree::TerminalNode *SINGLE_LINE_COMMENT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Multi_commentContext : public CommentContext {
  public:
    Multi_commentContext(CommentContext *ctx);

    antlr4::tree::TerminalNode *MULTI_LINE_COMMENT_A();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CommentContext* comment();

  class  Single_stmtContext : public antlr4::ParserRuleContext {
  public:
    Single_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Single_stmtContext() = default;
    void copyFrom(Single_stmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Stmt_funcContext : public Single_stmtContext {
  public:
    Stmt_funcContext(Single_stmtContext *ctx);

    FunctionContext *function();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Stmt_assignContext : public Single_stmtContext {
  public:
    Stmt_assignContext(Single_stmtContext *ctx);

    AssignContext *assign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Stmt_repeatContext : public Single_stmtContext {
  public:
    Stmt_repeatContext(Single_stmtContext *ctx);

    RepeatContext *repeat();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Stmt_returnContext : public Single_stmtContext {
  public:
    Stmt_returnContext(Single_stmtContext *ctx);

    S_returnContext *s_return();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Stmt_exitContext : public Single_stmtContext {
  public:
    Stmt_exitContext(Single_stmtContext *ctx);

    ExitContext *exit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Stmt_caseContext : public Single_stmtContext {
  public:
    Stmt_caseContext(Single_stmtContext *ctx);

    S_caseContext *s_case();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Single_stmtContext* single_stmt();

  class  S_returnContext : public antlr4::ParserRuleContext {
  public:
    S_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_returnContext* s_return();

  class  S_caseContext : public antlr4::ParserRuleContext {
  public:
    STParser::Case_selectContext *cases = nullptr;;
    STParser::Stmt_listContext *else_stmt = nullptr;;
    S_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *END_CASE();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<Case_selectContext *> case_select();
    Case_selectContext* case_select(size_t i);
    Stmt_listContext *stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_caseContext* s_case();

  class  Case_selectContext : public antlr4::ParserRuleContext {
  public:
    STParser::Stmt_listContext *case_stmt = nullptr;;
    Case_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Case_listContext *case_list();
    antlr4::tree::TerminalNode *COLON();
    Stmt_listContext *stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_selectContext* case_select();

  class  Case_listContext : public antlr4::ParserRuleContext {
  public:
    Case_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_list_elemContext *> case_list_elem();
    Case_list_elemContext* case_list_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_listContext* case_list();

  class  Case_list_elemContext : public antlr4::ParserRuleContext {
  public:
    Case_list_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubrangeContext *subrange();
    Constant_valContext *constant_val();
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_list_elemContext* case_list_elem();

  class  SubrangeContext : public antlr4::ParserRuleContext {
  public:
    STParser::Range_valContext *range_l = nullptr;;
    STParser::Range_valContext *range_h = nullptr;;
    SubrangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    std::vector<Range_valContext *> range_val();
    Range_valContext* range_val(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubrangeContext* subrange();

  class  Range_valContext : public antlr4::ParserRuleContext {
  public:
    Range_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_valContext *constant_val();
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_valContext* range_val();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  RepeatContext : public antlr4::ParserRuleContext {
  public:
    RepeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    Stmt_listContext *stmt_list();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *END_REPEAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatContext* repeat();

  class  ExitContext : public antlr4::ParserRuleContext {
  public:
    ExitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExitContext* exit();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_constContext : public ExprContext {
  public:
    Expr_constContext(ExprContext *ctx);

    Constant_valContext *constant_val();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_logical_xorContext : public ExprContext {
  public:
    Expr_logical_xorContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    STParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *XOR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_cmpContext : public ExprContext {
  public:
    Expr_cmpContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    STParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_varContext : public ExprContext {
  public:
    Expr_varContext(ExprContext *ctx);

    VariableContext *variable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_powerContext : public ExprContext {
  public:
    Expr_powerContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    STParser::ExprContext *rhs = nullptr;
    antlr4::tree::TerminalNode *POW();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_multipricativeContext : public ExprContext {
  public:
    Expr_multipricativeContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    STParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *MOD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_eqContext : public ExprContext {
  public:
    Expr_eqContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    STParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_logical_andContext : public ExprContext {
  public:
    Expr_logical_andContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    STParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *AMBASSADOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_funcContext : public ExprContext {
  public:
    Expr_funcContext(ExprContext *ctx);

    FunctionContext *function();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_additiveContext : public ExprContext {
  public:
    Expr_additiveContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    STParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_unaryContext : public ExprContext {
  public:
    Expr_unaryContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_noneContext : public ExprContext {
  public:
    Expr_noneContext(ExprContext *ctx);

    Paren_exprContext *paren_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_logical_orContext : public ExprContext {
  public:
    Expr_logical_orContext(ExprContext *ctx);

    STParser::ExprContext *lhs = nullptr;
    STParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *OR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Paren_exprContext : public antlr4::ParserRuleContext {
  public:
    Paren_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_exprContext* paren_expr();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    Arg_exprsContext *arg_exprs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  Arg_exprsContext : public antlr4::ParserRuleContext {
  public:
    Arg_exprsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Single_argContext *> single_arg();
    Single_argContext* single_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_exprsContext* arg_exprs();

  class  Single_argContext : public antlr4::ParserRuleContext {
  public:
    Single_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Single_argContext() = default;
    void copyFrom(Single_argContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Arg_inContext : public Single_argContext {
  public:
    Arg_inContext(Single_argContext *ctx);

    In_argContext *in_arg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Arg_outContext : public Single_argContext {
  public:
    Arg_outContext(Single_argContext *ctx);

    Out_argContext *out_arg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Arg_exprContext : public Single_argContext {
  public:
    Arg_exprContext(Single_argContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Single_argContext* single_arg();

  class  In_argContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *param = nullptr;;
    In_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_argContext* in_arg();

  class  Out_argContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *param = nullptr;;
    antlr4::Token *arg = nullptr;;
    Out_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTREF();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Out_argContext* out_arg();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  Constant_valContext : public antlr4::ParserRuleContext {
  public:
    Constant_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Constant_valContext() = default;
    void copyFrom(Constant_valContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Const_intContext : public Constant_valContext {
  public:
    Const_intContext(Constant_valContext *ctx);

    Integer_valContext *integer_val();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_realContext : public Constant_valContext {
  public:
    Const_realContext(Constant_valContext *ctx);

    Real_valContext *real_val();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_stringContext : public Constant_valContext {
  public:
    Const_stringContext(Constant_valContext *ctx);

    String_valContext *string_val();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Constant_valContext* constant_val();

  class  Integer_valContext : public antlr4::ParserRuleContext {
  public:
    Integer_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numContext *int_num();
    Int_explicitContext *int_explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_valContext* integer_val();

  class  Int_explicitContext : public antlr4::ParserRuleContext {
  public:
    Int_explicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Int_explicitContext() = default;
    void copyFrom(Int_explicitContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Dint_eContext : public Int_explicitContext {
  public:
    Dint_eContext(Int_explicitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_DINT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Uint_eContext : public Int_explicitContext {
  public:
    Uint_eContext(Int_explicitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_UINT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int_eContext : public Int_explicitContext {
  public:
    Int_eContext(Int_explicitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Udint_eContext : public Int_explicitContext {
  public:
    Udint_eContext(Int_explicitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_UDINT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Int_explicitContext* int_explicit();

  class  Int_numContext : public antlr4::ParserRuleContext {
  public:
    Int_numContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Int_numContext() = default;
    void copyFrom(Int_numContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OctalContext : public Int_numContext {
  public:
    OctalContext(Int_numContext *ctx);

    antlr4::tree::TerminalNode *OCTAL_NOTATION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecContext : public Int_numContext {
  public:
    DecContext(Int_numContext *ctx);

    antlr4::tree::TerminalNode *DEC_NOTATION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HexaContext : public Int_numContext {
  public:
    HexaContext(Int_numContext *ctx);

    antlr4::tree::TerminalNode *HEXA_NOTATION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryContext : public Int_numContext {
  public:
    BinaryContext(Int_numContext *ctx);

    antlr4::tree::TerminalNode *BINARY_NOTATION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Int_numContext* int_num();

  class  Real_valContext : public antlr4::ParserRuleContext {
  public:
    Real_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_numContext *real_num();
    Real_explicitContext *real_explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_valContext* real_val();

  class  Real_explicitContext : public antlr4::ParserRuleContext {
  public:
    Real_explicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Real_explicitContext() = default;
    void copyFrom(Real_explicitContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Real_eContext : public Real_explicitContext {
  public:
    Real_eContext(Real_explicitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_REAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Lreal_eContext : public Real_explicitContext {
  public:
    Lreal_eContext(Real_explicitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_LREAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Real_explicitContext* real_explicit();

  class  Real_numContext : public antlr4::ParserRuleContext {
  public:
    Real_numContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Real_numContext() = default;
    void copyFrom(Real_numContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Real_normalContext : public Real_numContext {
  public:
    Real_normalContext(Real_numContext *ctx);

    antlr4::tree::TerminalNode *REAL_NUM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Real_numContext* real_num();

  class  String_valContext : public antlr4::ParserRuleContext {
  public:
    String_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_strContext *string_str();
    String_expricitContext *string_expricit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_valContext* string_val();

  class  String_expricitContext : public antlr4::ParserRuleContext {
  public:
    String_expricitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    String_expricitContext() = default;
    void copyFrom(String_expricitContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Str_eContext : public String_expricitContext {
  public:
    Str_eContext(String_expricitContext *ctx);

    antlr4::tree::TerminalNode *EXPLICIT_STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  String_expricitContext* string_expricit();

  class  String_strContext : public antlr4::ParserRuleContext {
  public:
    String_strContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    String_strContext() = default;
    void copyFrom(String_strContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Wstr_strContext : public String_strContext {
  public:
    Wstr_strContext(String_strContext *ctx);

    antlr4::tree::TerminalNode *WSTR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Mbcs_strContext : public String_strContext {
  public:
    Mbcs_strContext(String_strContext *ctx);

    antlr4::tree::TerminalNode *MBCS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  String_strContext* string_str();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

