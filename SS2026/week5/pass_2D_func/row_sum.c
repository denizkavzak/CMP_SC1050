#include <stdio.h>

#define ROWS 3
#define COLS 4

int calculateRowSum(const int matrix[][COLS], int row_to_sum)
{
    int total = 0;

    for (int column = 0; column < COLS; column++)
    {
        total += matrix[row_to_sum][column];
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

    for (int row = 0; row < ROWS; row++)
    {
        printf("Row %d sum: %d\n",
               row, calculateRowSum(values, row));
    }

    return 0;
}