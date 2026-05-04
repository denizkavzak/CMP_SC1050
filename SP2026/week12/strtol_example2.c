#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char text[] = "12abc";
    char *endptr;

    long value = strtol(text, &endptr, 10);

    if (*endptr != '\0') {
        printf("Invalid number\n");
        return 1;
    }

    printf("Valid number: %ld\n", value);

    return 0;
}