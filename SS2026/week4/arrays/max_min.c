#include <stdio.h>

int main()
{
    int numbers[5] = {8, 12, 5, 20, 14};

    int max, min = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        /* common mistake
        if (numbers[i] > max)
        {
            max = i;
        }
        */
    }

    printf("Maximum = %d, Minimum = %d\n", max, min);

    return 0;
}