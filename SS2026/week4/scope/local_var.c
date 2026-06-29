#include <stdio.h>

void printDouble(int number)
{
    int result = number * 2;
    printf("Double = %d\n", result);
}

void printTriple(int number)
{
    int result = number * 3;
    printf("Triple = %d\n", result);
}

int main()
{
    printDouble(5);
    printTriple(5);

    return 0;
}