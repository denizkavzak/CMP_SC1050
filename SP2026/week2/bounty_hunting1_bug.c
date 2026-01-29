#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int sum;

    /* Ask the user for two numbers */
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    /* Calculate the sum of the two numbers */
    sum = a + b;

    /* Print the result */
    // printf("The sum is %d\n", &sum); // BUG
    printf("The sum is %d\n", sum); // FIX

    return 0;
}
