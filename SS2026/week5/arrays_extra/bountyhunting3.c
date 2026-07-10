#include <stdio.h>

int main() {
    int matrix[4][3] = {
        {5, 1, 2},
        {3, 9, 4},
        {8, 6, 7},
        {4, 3, 8}
    };

    int sum = 0;

    // Sum all elements in column 1 (the middle column)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}

