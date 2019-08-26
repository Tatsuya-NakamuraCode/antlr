grammar Expression;

input: expr EOF;

expr
    : int_expr                                  #expr_none
    | fp_expr                                   #expr_none
    | str_expr                                  #expr_none
    | const_expr                                #expr_none
    | paren_expr                                #expr_none
    | op=(PLUS|MINUS) expr                      #expr_unary
    | <assoc=right> lhs=expr HAT rhs=expr       #expr_power
    | lhs=expr op=(ASTERISK | SLASH) rhs=expr   #expr_multipricative
    | lhs=expr  rhs=paren_expr                  #expr_multipricative2
    | lhs=expr op=(PLUS|MINUS) rhs=expr         #expr_additive
    | funcname=IDENTIFIER OPEN_PAREN (args+=expr (COMMA args+=expr)*)? CLOSE_PAREN #expr_funccall   //+=を使うと、同じ種類の構文要素リスト化できる
    ;

paren_expr: OPEN_PAREN expr CLOSE_PAREN;
int_expr
    : UINT
    ;
fp_expr
    : FP_NUM
    ;
str_expr
    : STR
    ;
const_expr
    : IDENTIFIER
    ;

PLUS: '+';
MINUS: '-';
ASTERISK: '*';
SLASH: '/';
HAT: '^';
OPEN_PAREN: '(';
CLOSE_PAREN: ')';
COMMA   : ',';
DOT     : '.';

UINT    : [0-9]+;
FP_NUM  : [0-9]+DOT[0-9]+;
STR     : '"' ~["]* '"';

fragment ID_START: [A-Za-z_];
fragment ID_CONTINUE: ID_START | [0-9];
IDENTIFIER: ID_START ID_CONTINUE*;

WS: [ \t]+ -> skip;
