#include <stdio.h>

int main(void)
{
    int age;

    do
    {
        printf("Enter an age between 1 and 120: ");
        scanf("%d", &age);

        if (age < 1 || age > 120)
        {
            printf("Invalid age. Try again.\n");
        }
    }
    while (age < 1 || age > 120);

    printf("Accepted age: %d\n", age);

    return 0;
}