#include<stdio.h>

int main(){

    int num = 10;
    int *numPtr = &num;
    //numPtr = &num;

    printf("num is: %d\n", num);
    printf("numPtr has value: %p\n", numPtr);
    printf("address of num: %p\n", &num);
    printf("address of numPtr: %p\n", &numPtr);

    printf("value that is pointed by numPtr: %d\n", *numPtr);
    *numPtr = 20;
    //num = 20;
    printf("value that is pointed by numPtr: %d\n", *numPtr);
    printf("num is: %d\n", num);

    // * dereferencing operator
    // & address operator
    *&numPtr; // equivalent to numPtr
    &*numPtr;

    printf("numPtr is: %p\n", numPtr);
    printf("*&numPtr is: %p\n", *&numPtr);
    printf("&*numPtr is: %p\n", &*numPtr);

    numPtr = NULL;
    int y = 100;
    numPtr = &y;
    int *ptr2 = &y;

    return 0;
}