int binarySearch(const int numbers[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;

        printf("low = %d, high = %d, middle = %d, value = %d\n",
               low, high, middle, numbers[middle]);

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