#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number == 0)
        {
            printf("Zero ignored.\n");
            continue;
        }

        if (number < 0)
        {
            printf("Negative number entered. Stopping.\n");
            break;
        }

        sum += number;
    }

    printf("Sum: %d\n", sum);

    return 0;
}