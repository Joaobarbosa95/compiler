#include <stdio.h>
#include <stdlib.h>
#include "error.h"

void addToErrorList(
        struct ErrorList** errorListHead, 
        struct ErrorList** errorListTail, 
        int line, 
        int column, 
        char* message
    ) {
    struct ErrorList* newError = (struct ErrorList*)calloc(1, sizeof(struct ErrorList*));
    newError->line = line; 
    newError->column = column; 
    newError->message = message; 
    newError->next = NULL; 

    printf("NEW: %p\n", newError);

    if(*errorListHead == NULL) {
        *errorListHead = newError;
    } 

    if(*errorListTail == NULL) {
        *errorListTail = newError;
    } else {
        (*errorListTail)->next = newError;
        *errorListTail = newError;
    } 
};

void printErrorList(struct ErrorList** errorListHead) {
    struct ErrorList* tmp = *errorListHead;

    printf("HEAD: %p\n", tmp);
    
    while (tmp) {
        printf("[line %i]: Error in position %i: %s\n", tmp->line, tmp->column, tmp->message);
        struct ErrorList* prev = tmp;
        tmp = tmp->next;
        free(prev);
    };
};
