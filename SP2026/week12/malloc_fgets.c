#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;

    printf("Enter max string length: ");
    scanf("%d", &size);

    getchar();
    // The getchar() removes the leftover newline from typing the number.

    char *str = malloc((size + 1) * sizeof(char));

    if (str == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    printf("Enter some text: ");
    fgets(str, size + 1, stdin);
    // fgets(str, size + 1, stdin) reads at most size characters and then adds '\0'.

    printf("You entered: %s\n", str);

    free(str);

    return 0;
}