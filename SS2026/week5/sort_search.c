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
        int swapped = 0;

        for (int i = 0; i < size - 1 - pass; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;

                swapped = 1;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

int binarySearch(const int numbers[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;

        if (numbers[middle] == target)
        {
            return middle;
        }
        else if (target < numbers[middle])
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }

    return -1;
}

int main(void)
{
    int values[] = {18, 4, 25, 7, 11, 3, 20};
    int size = sizeof(values) / sizeof(values[0]);
    int target;

    printf("Original array: ");
    printArray(values, size);

    bubbleSort(values, size);

    printf("Sorted array:   ");
    printArray(values, size);

    printf("Enter a number to search for: ");
    scanf("%d", &target);

    int index = binarySearch(values, size, target);

    if (index == -1)
    {
        printf("%d was not found.\n", target);
    }
    else
    {
        printf("%d was found at index %d.\n", target, index);
    }

    return 0;
}