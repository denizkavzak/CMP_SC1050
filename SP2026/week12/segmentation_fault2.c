#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x = malloc(sizeof(int));

    if (x == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    *x = 100;

    free(x);
    // x = NULL; // good practice to avoid using a dangling pointer
    // A dangling pointer is a pointer that still stores an address, 
    // but the memory at that address is no longer valid for your program to use.

    // Problem: x points to memory that was already freed
    //if (x != NULL) {
    printf("%d\n", *x);
    //}

    printf("End\n");

    return 0;
}