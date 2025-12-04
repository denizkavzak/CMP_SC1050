#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *msg = "Hello";
    char *buf;

    buf = (char *)malloc(strlen(msg)+1); // Fix

    if (buf == NULL) {
        return 1;
    }

    strcpy(buf, msg);

    printf("%s\n", buf);

    // printf("I am accessing out of boundary: %c\n", *(buf+10));
    // undefined behavior
    // It might print garbage
    // It might crash
    // It might appear to work
    // It might crash only on another machine / compiler / optimization level

    // char* p = malloc(sizeof(char)*5);
    // strcpy(p, "robin");

    free(buf);

    //printf("%c\n", buf[0]); 

    // buf = NULL;                     // <--- important
    // printf("%c\n", *buf);           // <-- this will segfault

    return 0;
}
