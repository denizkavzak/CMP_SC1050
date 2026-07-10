#include <stdio.h>

int calculateSum(const int numbers[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += numbers[i];
    }

    return total;
}

int main(void)
{
    int values[] = {5, 8, 12, 4, 6};
    int size = sizeof(values) / sizeof(values[0]);

    printf("Sum: %d\n", calculateSum(values, size));

    return 0;
}