#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *endptr;
    long number;

    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    number = strtol(argv[1], &endptr, 10); // better than atoi
    /* atoi cannot differentiate between valid/invalid inputs
    int x = atoi("abc"); and int x = atoi("0"); would both have 0 value
    Because atoi("abc") tries to read an integer from the start of the string.
    It looks at the first character:
    abc
    ^
    The first character is 'a', which is not a digit, not +, and not -.
    So atoi cannot find any number to convert. When atoi cannot convert anything, it returns 0.
    */

    if (*endptr != '\0') {
        printf("Invalid number: %s\n", argv[1]);
        return 1;
    }

    printf("You entered: %ld\n", number);

    return 0;
}