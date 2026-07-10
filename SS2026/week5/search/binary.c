#include <stdio.h>

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
    int values[] = {3, 7, 11, 15, 19, 24, 30};
    int size = sizeof(values) / sizeof(values[0]);
    int target;

    printf("Enter a target: ");
    scanf("%d", &target);

    int index = binarySearch(values, size, target);

    if (index == -1)
    {
        printf("Target not found.\n");
    }
    else
    {
        printf("Target found at index %d.\n", index);
    }

    return 0;
}