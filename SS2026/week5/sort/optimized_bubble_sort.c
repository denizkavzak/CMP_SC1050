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