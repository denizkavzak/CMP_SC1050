#include <stdio.h>

void printArray(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

void bubbleSort(int numbers[], int size)
{
    for (int pass = 0; pass < size; pass++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int values[] = {7, 3, 9, 2, 5};
    int size = sizeof(values) / sizeof(values[0]);

    printf("Before sorting: ");
    printArray(values, size);

    bubbleSort(values, size);

    printf("After sorting:  ");
    printArray(values, size);

    return 0;
}