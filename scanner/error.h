#include <stddef.h>
#include <stdlib.h>

#ifndef ERROR_LIST_H 
#define ERROR_LIST_H 

struct ErrorList;

struct ErrorList {
    int line;       
    int column;
    char* message;
    struct ErrorList* next;
};

void addToErrorList(
        struct ErrorList** errorListHead, 
        struct ErrorList** errorListTail, 
        int line, 
        int column, 
        char* message
);

void printErrorList(struct ErrorList** errorListHead);

#endif
