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
    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int i = 0; i < size - 1 - pass; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }

        printf("After pass %d: ", pass + 1);
        printArray(numbers, size);
    }
}

int main(void)
{
    int values[] = {5, 1, 4, 2, 8};
    int size = sizeof(values) / sizeof(values[0]);

    bubbleSort(values, size);

    return 0;
}