#include<stdio.h>

int main(){

    int x = 10;
    int * xPtr = &x;

    printf("xPtr value = %p\n", xPtr);
    printf("Address of x value = %p\n", &x);

    printf("xPtr+1 value = %p\n", xPtr+1);

    return 0;
}