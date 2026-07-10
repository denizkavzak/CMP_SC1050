#include <stdio.h>

#define ROWS 3
#define COLS 4

void printMatrix(const int matrix[][COLS], int rows)
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < COLS; column++)
        {
            printf("%4d", matrix[row][column]);
        }

        printf("\n");
    }
}

int main(void)
{
    int values[ROWS][COLS] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printMatrix(values, ROWS);

    return 0;
}