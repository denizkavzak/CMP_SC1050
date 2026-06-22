#include <stdio.h>

int main(void)
{
    int number = 10;

    while (number < 5)
    {
        printf("Inside while loop\n");
    }

    do
    {
        printf("Inside do-while loop\n");
    }
    while (number < 5);

    return 0;
}