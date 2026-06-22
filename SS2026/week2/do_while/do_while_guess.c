#include <stdio.h>

int main(void)
{
    const int secretNumber = 7;
    int guess;
    int attempts = 0;

    do
    {
        printf("Guess the number from 1 to 10: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secretNumber)
        {
            printf("Too low.\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high.\n");
        }
    }
    while (guess != secretNumber); // while (guess != secretNumber && attempts < 3);

    printf("Correct! Attempts: %d\n", attempts);

    return 0;
}