#include <stdio.h>

int main(void)
{
    int number = 42;
    double price = 19.95;

    int * numPtr = &number;

    void *ptr;
    ptr = &number;

    //printf("number: %d\n", *ptr); 

    int * nPt = (int *)ptr;

    printf("number: %d\n", *((int *)ptr)); // first treats ptr as an int *, then dereferences it

    ptr = &price;
    printf("price: %.2f\n", *(double *)ptr);

    return 0;
}