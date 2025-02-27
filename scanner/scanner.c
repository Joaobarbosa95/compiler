#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "error.h"
#include "token.h"

int main(int argc, char* argv[]) {
    if(argc != 2) {
        printf("File path missing\n");
        printf("Usage: ./scanner <file_path>\n");
        exit(1);
    }

    FILE* fd = fopen(argv[1], "r");

    if(fd == NULL) {
        printf("Failed to open file: %s\n", argv[1]);
        exit(1);
    }

    struct ErrorList* errorListHead = NULL;
    struct ErrorList* errorListTail = NULL;

    struct TokenList* tokenListHead = NULL;
    struct TokenList* tokenListTail = NULL;

    bool hasError = false;

    //addToErrorList(&errorListHead, &errorListTail, 4, 13, "must be a int");
    enum TokenType tokenType = COMMA;

    printf("ENUM: %i\n", tokenType);
    Token* token = buildToken(tokenType, "oiu", "oaoaoao", 9);

    void scanToken() {
        char c;
        int column = 1;
        int line = 1;

        while(c = fgetc(fd)) {
            switch(c) {
                case '(':
                case ')':
                case '{':
                case '}':
                case ',':
                case '.':
                case '-':
                case ')':
                case '+':
                case ';':
                case '*':
            }
        }
         
    }
    

    // Check if scanner detected errors
    if(hasError) {
        printErrorList(&errorListHead);
        exit(1);
    }

    return 0;
}
