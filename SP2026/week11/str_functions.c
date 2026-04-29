#include <stdio.h>
#include <string.h>

int main(void) {
    char first[20] = "cat";
    char second[20] = "dog";
    char copy[20];

    printf("Length of first: %zu\n", strlen(first));

    strcpy(copy, first);
    printf("Copied string: %s\n", copy);

    int result = strcmp(first, second);

    if (result < 0) {
        printf("%s comes before %s\n", first, second);
    } else if (result > 0) {
        printf("%s comes after %s\n", first, second);
    } else {
        printf("%s and %s are equal\n", first, second);
    }

    return 0;
}