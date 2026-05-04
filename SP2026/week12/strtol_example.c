#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char text[] = "123abc";
    char *endptr;

    long value = strtol(text, &endptr, 10);

    printf("value = %ld\n", value);
    printf("leftover text = %s\n", endptr);

    return 0;
}