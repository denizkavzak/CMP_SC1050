#include <stdio.h>

#define ROWS 3
#define COLS 4

int calculateColumnSum(const int matrix[][COLS],
                       int rows,
                       int column_to_sum)
{
    int total = 0;

    for (int row = 0; row < rows; row++)
    {
        total += matrix[row][column_to_sum];
    }

    return total;
}

int main(void)
{
    int values[ROWS][COLS] =
    {
        {10, 20, 30, 40},
        {5, 10, 15, 20},
        {2, 4, 6, 8}
    };

    for (int column = 0; column < COLS; column++)
    {
        printf("Column %d sum: %d\n",
               column,
               calculateColumnSum(values, ROWS, column));
    }

    return 0;
}