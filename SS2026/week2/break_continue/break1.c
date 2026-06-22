#include <stdio.h>

int main(void)
{
    int number;

    do{
        printf("Enter a positive number, or a negative number to stop: ");
        scanf("%d", &number);
        if (number >=0){
            printf("You entered: %d\n", number);
        }
    }while(number >= 0);

    while (1)
    {
        printf("Enter a positive number, or a negative number to stop: ");
        scanf("%d", &number);

        if (number < 0)
        {
            break;
        }
        printf("You entered: %d\n", number);
    }

    printf("Loop ended.\n");

    return 0;
}