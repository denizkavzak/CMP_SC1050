#include <stdio.h>
/*
Example on array of pointers to integers
Extension modify the original variables
pointer array provides indirect access to the original variables
*/
int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    // numbers is an array containing three int * values
    int *numbers[3] = {&a, &b, &c};

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *numbers[i]);
    }

    // modify the original variables
    for (int i = 0; i < 3; i++)
    {
        *numbers[i] += 5;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}