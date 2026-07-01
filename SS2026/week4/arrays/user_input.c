#include <stdio.h>

int main()
{
    int scores[5];
    int score;

    for (int i = 0; i < 5; i++) // for (int i = 0; i <= 5; i++) off by one error
    { 
        printf("Enter score %d: ", i + 1);
        //scanf("%d", &scores[i]);
        scanf("%d", &score);
        scores[i] = score;
    }

    printf("\nScores:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }

    return 0;
}