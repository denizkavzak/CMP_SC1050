#include <stdio.h>

int addOne(int number)
{
    return number++;
}

int main(void)
{
    int x = 5;

    printf("%d\n", addOne(x));
    printf("%d\n", x);

    return 0;
}