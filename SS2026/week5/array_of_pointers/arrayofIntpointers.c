#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;
    int z = 30;

    int *pointers[] = {&x, &y, &z};

    // print values
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *pointers[i]);
    }

    // modify values
    for (int i = 0; i < 3; i++)
    {
        *pointers[i] += 5;
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
}