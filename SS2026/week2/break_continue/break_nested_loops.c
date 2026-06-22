#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 3; row++)
    {
        for (int column = 1; column <= 3; column++)
        {
            if (column == 2)
            {
                break;
            }

            printf("row = %d, column = %d\n", row, column);
        }
    }

    return 0;
}

