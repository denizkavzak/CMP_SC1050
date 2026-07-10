#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void)
{
    int numbers[ROWS][COLS] =
    {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    // The outer loop moves between rows. 
    // The inner loop moves through the columns in each row.
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLS; column++)
        {
            printf("%4d", numbers[row][column]);
        }

        printf("\n");
    }

    return 0;
}