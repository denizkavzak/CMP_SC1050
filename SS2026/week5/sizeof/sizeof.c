#include<stdio.h>

int main(){

    printf("size of an char: %ld\n", sizeof(char));
    printf("size of an int: %ld\n", sizeof(int));
    printf("size of an float: %ld\n", sizeof(float));
    printf("size of an double: %ld\n", sizeof(double));

    int arr[5] = {1,2,3,4,5};

    printf("size of the arr: %ld\n", sizeof(arr));

    int *p;
    printf("size of a pointer: %ld\n", sizeof(p));
    double *p2;
    printf("size of a pointer 2: %ld\n", sizeof(p2));

    return 0;
}