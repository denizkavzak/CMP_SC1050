#include <stdio.h>

void calculate(int a, int b, int *sum, int *difference)
{
    *sum = a + b;
    *difference = a - b;
}

int main(void)
{
    int sum;
    int difference;

    calculate(10, 4, &sum, &difference);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}