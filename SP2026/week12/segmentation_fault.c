#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *numbers = malloc(3 * sizeof(int));

    if (numbers == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    // Problem: index 3 is outside the allocated memory
    numbers[3] = 40;

    printf("%d\n", numbers[3]);

    free(numbers);

    printf("End\n");

    return 0;
}