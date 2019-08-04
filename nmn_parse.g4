grammar nmn_parse;

input
    : (line_expr? EOL)* line_expr? EOF
    ;

line_expr
    : comment_line
    | SEPARATOR* cmd_body SEPARATOR* COMMENT?
    | SEPARATOR+ COMMENT?
    ;

comment_line    : COMMENT;

cmd_body
    : command (SEPARATOR+ operand)*
    ;

command
    : cmd_nomal
    | cmd_unit
    | cmd_cal
    | cmd_ld
//    | cmd_unknown
    ;

cmd_nomal    : CMD_NOMAL | ALPHABETS;
cmd_unit     : CMD_UNIT;
cmd_cal      : CMD_CAL;
cmd_ld       : CMD_LD;
//cmd_unknown  : ANY_LEXICAL;

operand
    : ope_dev
    | ope_immediate
    | ope_undef
//    | ope_unknown
    ;

ope_dev
    : dev_normal
    | dev_indirect
    | dev_z
    | dev_rly
    ;

dev_normal  : DEV | LABEL | DEV_WORDBIT | DEV_INDEX | ALPHABETS;
dev_indirect: INDIRECT;
dev_z       : DEV_Z;
dev_rly     : IMM_DEC_NUM | RLY;

ope_immediate
    : imm_dec
    | imm_hex
    | imm_fp
    | imm_str
    ;

imm_dec     : IMM_DEC | IMM_DEC_NUM;
imm_hex     : IMM_HEX;
imm_fp      : IMM_FP | IMM_FP_EXP;
imm_str     : IMM_STR;

ope_undef   : OPE_UNDEF;

//ope_unknown : ANY_LEXICAL;

//base
EOL         : '\r'? '\n' | '\r';
SEPARATOR   : [ \t];
COMMENT     : ';' ~[\r\n]*;

// common pattern
IMM_DEC_NUM : DEC_NUM;

// Immediate list
IMM_DEC     : [#Kk]? SIGN? DEC_NUM;    // | IMM_DEC_NUM
IMM_HEX     : [$Hh]HEX_NUM;
IMM_FP      : [#Kk]? SIGN? (DEC_NUM? DOT DEC_NUM | DEC_NUM DOT);
IMM_FP_EXP  : [#Kk]? SIGN? (DEC_NUM (DOT DEC_NUM?)? | DOT DEC_NUM) E SIGN? DEC_NUM;
IMM_STR     : D_QUOTE (~["] | (D_QUOTE D_QUOTE))* D_QUOTE;

//common pattern
ALPHABETS   : ALPHABET+;

//command list
SUFFIX      : DOT ALPHABET+;
CMD_NOMAL   : ALPHABET+ SUFFIX?;    // | ALPHABETS
CMD_UNIT    : U '_' ALPHABET+ SUFFIX?;
CMD_CAL     : C A L ('+' | '-' | '*' | '/' | '^' | '~' | '&' | '|' | '<<' | '>>') SUFFIX?;
CMD_LD      : L D ('=' | '<>' | '<' | '>' | '<=' | '>=' ) SUFFIX?;

// device list
DEV_Z       : Z DEC_NUM;
DEV         : ASTERISK ? ATMARK? ALPHABET+ HEX_NUM ('_' DEC_NUM)?;
DEV_WORDBIT : DEV DOT DEC_NUM;
DEV_INDEX   : DEV COLON (DEV_Z | IMM_DEC);
LABEL       : ASTERISK ? '_'? ALPHABET (ALPHABET | DEC_NUM)*; // | ALPHABETS
RLY         : ASTERISK ? ATMARK? DEC_NUM (COLON (DEV_Z | IMM_DEC))?;
INDIRECT    : '#TM' DEC_NUM (DOT DEC_NUM)?;

// Undefined ope
OPE_UNDEF   : '???';

//ANY_LEXICAL : ~[\r\n \t;]+;

//Fragment
fragment D_QUOTE    : '"';
fragment COMMA      : ',';
fragment DOT        : '.';
fragment COLON      : ':';
fragment SEMICOLON  : ';';
fragment ATMARK     : '@';
fragment SHARP      : '#';
fragment ASTERISK   : '*';
fragment QUESTION   : '?';
fragment SIGN       : [+-];
fragment DEC_NUM    : [0-9]+;
fragment HEX_NUM    : [0-9A-Fa-f]+;
fragment ALPHABET   : [A-Za-z];
fragment A : [Aa];
fragment B : [Bb];
fragment C : [Cc];
fragment D : [Dd];
fragment E : [Ee];
fragment F : [Ff];
fragment G : [Gg];
fragment H : [Hh];
fragment I : [Ii];
fragment J : [Jj];
fragment K : [Kk];
fragment L : [Ll];
fragment M : [Mm];
fragment N : [Nn];
fragment O : [Oo];
fragment P : [Pp];
fragment Q : [Qq];
fragment R : [Rr];
fragment S : [Ss];
fragment T : [Tt];
fragment U : [Uu];
fragment V : [Vv];
fragment W : [Ww];
fragment X : [Xx];
fragment Y : [Yy];
fragment Z : [Zz];
