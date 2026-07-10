#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void)
{
    int values[ROWS][COLS] =
    {
        {12, 7, 25, 4},
        {19, 31, 8, 14},
        {6, 20, 17, 10}
    };

    int largest = values[0][0];
    int largestRow = 0;
    int largestColumn = 0;

    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLS; column++)
        {
            if (values[row][column] > largest)
            {
                largest = values[row][column];
                largestRow = row;
                largestColumn = column;
            }
        }
    }

    printf("Largest value: %d\n", largest);
    printf("Location: row %d, column %d\n",
           largestRow, largestColumn);

    return 0;
}