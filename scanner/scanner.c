#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "error.h"

int main(int argc, char* argv[]) {
    if(argc != 2) {
        printf("Source file not found\n");
        exit(1);
    }

    FILE* fd = fopen(argv[1], "r");

    if(fd == NULL) {
        printf("Failed to open file: %s\n", argv[1]);
        exit(1);
    }

    struct ErrorList* errorListHead = NULL;
    struct ErrorList* errorListTail = NULL;
    bool hasError = false;
    printf("%p\n", &errorListHead);
    printf("TAIL: %p\n", errorListTail);

    addToErrorList(&errorListHead, &errorListTail, 4, 13, "must be a int");
    printf("TAIL: %p\n", errorListTail);
    addToErrorList(&errorListHead, &errorListTail, 7, 5, "must be a string");
    printf("TAIL: %p\n", errorListTail);
    addToErrorList(&errorListHead, &errorListTail, 1, 33, "syntax error");
    printf("TAIL: %p\n", errorListTail);

    printErrorList(&errorListHead);

    return 0;
}
