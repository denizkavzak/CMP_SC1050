#include <stdio.h>

int findMaximum(const int numbers[], int size)
{
    int maximum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

int main(void)
{
    int values[] = {15, 8, 29, 4, 21};
    int size = sizeof(values) / sizeof(values[0]);

    printf("Maximum: %d\n", findMaximum(values, size));

    return 0;
}