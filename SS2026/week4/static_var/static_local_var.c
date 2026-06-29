#include <stdio.h>

void greet()
{
    static int count = 0;

    count++;

    printf("This function has been called %d times\n", count);
}

int main()
{
    greet();
    greet();
    greet();

    return 0;
}