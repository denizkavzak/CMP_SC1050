#include <stdio.h>

int main()
{
    int numbers[5] = {8, 12, 5, 20, 14};
    int copy[5];

    for (int i = 1; i < 5; i++){
        copy[i] = numbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",copy[i]);
    }
    printf("\n");

    // shift rights
    for (int i = 4; i > 0; i--) // vs for (int i = 1; i < 5; i++)
    {
        copy[i] = copy[i - 1];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",copy[i]);
    }
    printf("\n");

    return 0;
}