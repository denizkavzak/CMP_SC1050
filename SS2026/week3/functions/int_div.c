#include <stdio.h>

double calculateAverage(int num1, int num2)
{
    return (num1 + num2) / 2;
}

int main(void)
{
    printf("%.2f\n", calculateAverage(5, 8));

    return 0;
}