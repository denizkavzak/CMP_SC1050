#include <stdio.h>

int main()
{
    int scores[5];
    int passed = 0;

    for (int i = 0; i < 5; i++) // for (int i = 0; i <= 5; i++) off by one error
    { 
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\nScores:\n");

    for (int i = 0; i < 5; i++)
    {
        if (scores[i] >= 60)
        {
            passed++;
        }
        
        printf("%d ", scores[i]);
    }

    printf("\nPassed: %d\n", passed);

    return 0;
}