#include<stdio.h>

int main(){

    void *vPtr;
    int a = 5;
    double b = 6;

    vPtr = &a;

    printf("int value: %d\n", *((int*)vPtr));

    vPtr = &b;
    printf("int value: %f\n", *((double*)vPtr));

    return 0;
}