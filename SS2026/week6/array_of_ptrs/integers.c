#include <stdio.h>
/*
Example on array of pointers to integers
numbers[i]     // an address
*numbers[i]    // the integer stored at that address

Expression	    Meaning
numbers	        The array of pointers
numbers[i]	    The pointer at index i
*numbers[i]	    The value pointed to by that pointer
&numbers[i]	    Address of the pointer element itself
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

    return 0;
}