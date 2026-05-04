#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <array_size>\n", argv[0]);
        return 1;
    }

    int size = atoi(argv[1]);

    if (size <= 0) {
        printf("Size must be positive\n");
        return 1;
    }

    int *arr = malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}