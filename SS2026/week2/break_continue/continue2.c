#include <stdio.h>

int main(void)
{
    int score;
    int total = 0;
    int validCount = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter score %d: ", i);
        scanf("%d", &score);

        if (score < 0 || score > 100)
        {
            printf("Invalid score ignored.\n");
            continue;
        }

        total += score;
        validCount++;
    }

    if (validCount > 0)
    {
        printf("Average: %.2f\n", (double) total / validCount);
    }
    else
    {
        printf("No valid scores entered.\n");
    }

    return 0;
}