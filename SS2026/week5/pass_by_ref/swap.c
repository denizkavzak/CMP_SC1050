#include <stdio.h>

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(void)
{
    int x = 5;
    int y = 10;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}