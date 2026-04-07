#include<stdio.h>

int addTwo(int num); // call by value
void addTwoByRef(int *num); // call by reference

int main(){

    int n = 10;

    printf("value of n before func call: %d\n", n);
    int res = addTwo(n);
    printf("value of n after func call: %d\n", n);

    // int *ptr = &n;
    // *ptr = *ptr + 2;
    addTwoByRef(&n);
    printf("value of n after func call: %d\n", n);

    return 0;
}

int addTwo(int num){
    num = num + 2;
    return num;
}

void addTwoByRef(int *num){
    *num = *num + 2;
}