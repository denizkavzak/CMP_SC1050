#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;

    printf("Enter max string length: ");
    scanf("%d", &size);

    char *str = malloc((size + 1) * sizeof(char));

    if (str == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    printf("Enter a word: ");
    scanf("%s", str);
    // scanf("%5s", str); // safer, but 5 needs to be hard coded, cannot be dynamic

    printf("You entered: %s\n", str);

    free(str);

    return 0;
}