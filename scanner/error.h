#include <stddef.h>
#include <stdlib.h>

#ifndef ERROR_LIST_H 
#define ERROR_LIST_H 

struct ErrorList;

typedef struct ErrorList {
    int line;       
    int column;
    char* message;
    struct ErrorList* next;
} ErrorList;

void addToErrorList(
        ErrorList** errorListHead, 
        ErrorList** errorListTail, 
        int line, 
        int column, 
        char* message
);

void printErrorList(ErrorList** errorListHead);

#endif
