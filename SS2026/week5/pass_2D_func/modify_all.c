#include <stdio.h>

#define ROWS 2
#define COLS 3

void addOne(int matrix[][COLS], int rows)
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < COLS; column++)
        {
            matrix[row][column]++;
        }
    }
}

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
        {1, 2, 3},
        {4, 5, 6}
    };

    addOne(values, ROWS);
    printMatrix(values, ROWS);

    return 0;
}