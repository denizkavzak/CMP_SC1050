#include <stdio.h>
/*
Rearranging values without moving them
An array of pointers can specify 
a different order without changing the original array.
The integers were not copied or moved. 
Only pointers to them were placed in a different order.
*/
int main(void)
{
    int values[4] = {40, 10, 30, 20};

    int *order[4] = {
        &values[1],
        &values[3],
        &values[2],
        &values[0]
    };

    printf("Original order: ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", values[i]);
    }

    printf("\nPointer order:  ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *order[i]);
    }

    printf("\n");

    return 0;
}