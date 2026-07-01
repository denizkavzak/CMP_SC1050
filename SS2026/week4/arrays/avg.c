#include <stdio.h>

int main()
{
    int scores[5];
    double sum = 0;

    for (int i = 0; i < 5; i++)
    { 
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\nScores:\n");

    for (int i = 0; i < 5; i++)
    {
        sum += scores[i]; // common mistake sum = scores[i];
    }

    printf("%.2f\n", sum / 5);

    // reverse printing
    for (int i = 4; i >= 0; i--) // infinite loop for (int i = 4; i >= 0; i++)
    {
        printf("%d ", scores[i]);
    }

    return 0;
}