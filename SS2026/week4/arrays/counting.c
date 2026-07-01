#include <stdio.h>

int main()
{
    int numbers[5];
    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++)
    { 
        printf("Enter score %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
    }

    printf("Even: %d, Odd: %d\n", even, odd);

    return 0;
}