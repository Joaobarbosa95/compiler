#include "token.h"

Token* buildToken(
        enum TokenType tokenType,
        char* lexeme,
        char* literal,
        int line
) {
    Token* token;  
    token->tokenType = tokenType;
    token->lexeme = lexeme;
    token->literal = literal;
    token->line = line;

    return token;
};

/*
void addToTokenList(
        struct TokenListHead* tokenListHead, 
        struct TokenListTail* tokenListTail, 
        Token* token
) {
    //
};
*/
