
// Generated from C:/Users/nakam/Desktop/parsetest/STtoScript/STtoScript\ST.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  STLexer : public antlr4::Lexer {
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

  STLexer(antlr4::CharStream *input);
  ~STLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

