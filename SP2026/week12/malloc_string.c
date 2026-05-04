#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *str = malloc(7 * sizeof(char));

    if (str == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    strcpy(str, "Hello!");

    printf("%s\n", str);

    free(str);

    return 0;
}