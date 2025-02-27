#include <stdio.h>

#ifndef TOKEN_H
#define TOKEN_H

enum TokenType {
  // Single-character tokens.
  LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
  COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

  // One or two character tokens.
  BANG, BANG_EQUAL,
  EQUAL, EQUAL_EQUAL,
  GREATER, GREATER_EQUAL,
  LESS, LESS_EQUAL,

  // Literals.
  IDENTIFIER, STRING, NUMBER,

  // Keywords.
  AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
  PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

  EOFF
};

typedef struct Token {
    enum TokenType tokenType;
    char* lexeme;
    char* literal; 
    int line;
} Token;

Token* buildToken(enum TokenType tokenType, char* lexeme, char* literal, int line); 
void addToTokenList(Token* token);

#endif 
