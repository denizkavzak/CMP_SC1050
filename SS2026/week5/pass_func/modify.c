#include <stdio.h>

void doubleValues(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] *= 2;
    }
}

void printArray(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

int main(void)
{
    int values[] = {2, 4, 6, 8};
    int size = sizeof(values) / sizeof(values[0]);

    printf("Before: ");
    printArray(values, size);

    doubleValues(values, size);

    printf("After:  ");
    printArray(values, size);

    return 0;
}