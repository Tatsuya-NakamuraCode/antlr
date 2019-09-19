grammar ST;


input: stmt_list EOF;

stmt_list
    : statement*
    ;

statement
    : comment                   #st_comment
    | single_stmt?  SEMI_COLON  #stmt
    ;

comment
    : SINGLE_LINE_COMMENT   #line_comment
    | MULTI_LINE_COMMENT_A  #multi_comment
    ;


single_stmt
    : assign        #stmt_assign
    | function      #stmt_func
    | repeat        #stmt_repeat
    | exit          #stmt_exit
    | s_case        #stmt_case
    | s_return      #stmt_return
    ;

// return
s_return
    : RETURN
    ;

// case A of ... end_case
s_case
    : CASE expr OF cases=case_select+ (ELSE else_stmt=stmt_list)? END_CASE
    ;

case_select
    : case_list COLON case_stmt=stmt_list
    ;

case_list
    : case_list_elem (',' case_list_elem)*
    ;

case_list_elem
    : subrange
    | constant_val
    | label
    ;

subrange
    : range_l=range_val  RANGE range_h=range_val
    ;

range_val
    : constant_val
    | label
    ;

label
    : IDENTIFIER
    ;

// repeat ... until . end_repeat
repeat
    : REPEAT stmt_list UNTIL expr END_REPEAT
    ;

exit : EXIT;

assign
    : IDENTIFIER ASSIGN expr
    ;

expr
    : constant_val                                      #expr_const
    | function                                          #expr_func
    | variable                                          #expr_var
    | paren_expr                                        #expr_none
    | op=(PLUS|MINUS|NOT) expr                          #expr_unary
    | lhs=expr POW rhs=expr                             #expr_power
    | lhs=expr op=(ASTERISK | SLASH | MOD) rhs=expr     #expr_multipricative
    | lhs=expr op=(PLUS|MINUS) right=expr               #expr_additive
    | lhs=expr op=(GT|LT|LE|GE) right=expr              #expr_cmp
    | lhs=expr op=(EQ|NEQ) right=expr                   #expr_eq
    | lhs=expr op=(AND|AMBASSADOR) right=expr           #expr_logical_and
    | lhs=expr XOR right=expr                           #expr_logical_xor
    | lhs=expr OR right=expr                            #expr_logical_or
    ;

paren_expr: OPEN_PAREN expr CLOSE_PAREN;

function : IDENTIFIER OPEN_PAREN arg_exprs? CLOSE_PAREN;

arg_exprs : single_arg (COMMA single_arg)*;

single_arg
    : expr          #arg_expr
    | in_arg        #arg_in
    | out_arg       #arg_out
    ;

in_arg
    : param=IDENTIFIER ASSIGN expr
    ;
out_arg
    : param=IDENTIFIER OUTREF arg=IDENTIFIER
    ;

variable : IDENTIFIER;

constant_val
    : integer_val                                       #const_int
    | real_val                                          #const_real
    | string_val                                        #const_string
    ;

integer_val : int_explicit? int_num;

int_explicit
    : EXPLICIT_INT       #int_e
    | EXPLICIT_UINT      #uint_e
    | EXPLICIT_DINT      #dint_e
    | EXPLICIT_UDINT     #udint_e
    ;

int_num
    : BINARY_NOTATION   #binary
    | OCTAL_NOTATION    #octal
    | HEXA_NOTATION     #hexa
    | DEC_NOTATION      #dec
    ;

real_val    : real_explicit? real_num;

real_explicit
    : EXPLICIT_REAL      #real_e
    | EXPLICIT_LREAL     #lreal_e
    ;

real_num
    : REAL_NUM      #real_normal
    ;

string_val    : string_expricit? string_str;

string_expricit
    : EXPLICIT_STRING      #str_e
    ;

string_str
    : MBCS                  #mbcs_str
    | WSTR                  #wstr_str
    ;


EXPLICIT_INT    :   INT '#';
EXPLICIT_UINT   :   UINT '#';
EXPLICIT_DINT   :   DINT '#';
EXPLICIT_UDINT  :   UDINT '#';
EXPLICIT_REAL   :   REAL '#';
EXPLICIT_LREAL  :   LREAL '#';
EXPLICIT_STRING :   STRING '#';

PLUS : '+';
MINUS : '-';
ASTERISK : '*';
SLASH : '/';
POW: '**';
LT: '<';
GT: '>';
LE: '<=';
GE: '>=';
EQ: '=';
NEQ: '<>';
ASSIGN: ':=';
OUTREF: '=>';
RANGE: '..';
COMMA: ',';
OPEN_PAREN : '(';
CLOSE_PAREN : ')';
SEMI_COLON: ';';
COLON: ':';
AMBASSADOR: '&';

 NOT : N O T;
 MOD : M O D;
 AND : A N D;
 XOR : X O R;
 OR  : O R;
 CASE: C A S E;
 OF: O F;
 ELSE: E L S E;
 END_CASE: E N D '_' C A S E;
 REPEAT: R E P E A T;
 UNTIL: U N T I L;
 END_REPEAT: E N D '_' R E P E A T;
 EXIT: E X I T;
 RETURN: R E T U R N;

 fragment ID_START: [A-Za-z_];
 fragment ID_CONTINUE: ID_START | [0-9];
 IDENTIFIER: ID_START ID_CONTINUE*;

 WS: [ \t]+ -> skip;
 EOL: ('\r'? '\n' | '\r') -> skip;
 SINGLE_LINE_COMMENT: '//' ~[\r\n]*;
 MULTI_LINE_COMMENT_A : '/*' ~[*]* '*/'; // TODO: 未対応 mode必要

 BINARY_NOTATION    : '2#'[01_]+;
 OCTAL_NOTATION     : '8#'[0-8_]+;
 HEXA_NOTATION      : '16#'[0-9A-Fa-f_]+;
 DEC_NOTATION       : [0-9_]+;
 REAL_NUM           : [0-9_]+ '.' [0-9_]+;
 MBCS               : '\'' ~[']+ '\'';  // TODO: 未対応　エスケープ処理
 WSTR               : '"' ~["]+ '"';    // TODO: 未対応　エスケープ処理


 fragment INT: I N T;
 fragment DINT: D INT;
 fragment UINT: U INT;
 fragment UDINT: U DINT;
 fragment REAL: R E A L;
 fragment LREAL: L REAL;
 fragment STRING: S T R I N G;
 fragment WSTRING: W STRING;


 fragment A: [Aa];
 fragment B: [Bb];
 fragment C: [Cc];
 fragment D: [Dd];
 fragment E: [Ee];
 fragment F: [Ff];
 fragment G: [Gg];
 fragment H: [Hh];
 fragment I: [Ii];
 fragment J: [Jj];
 fragment K: [Kk];
 fragment L: [Ll];
 fragment M: [Mm];
 fragment N: [Nn];
 fragment O: [Oo];
 fragment P: [Pp];
 fragment Q: [Qq];
 fragment R: [Rr];
 fragment S: [Ss];
 fragment T: [Tt];
 fragment U: [Uu];
 fragment V: [Vv];
 fragment W: [Ww];
 fragment X: [Xx];
 fragment Y: [Yy];
 fragment Z: [Zz];
