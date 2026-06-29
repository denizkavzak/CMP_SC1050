#include <stdio.h>

int main()
{
    int x = 10;

    if(x > 5)
    {
        int bonus = 3;
        printf("Inside block: %d\n", bonus);
    }

    printf("Outside block: %d\n", x);

    return 0;
}