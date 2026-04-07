#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    printf("address of a is: %p\n", &a);
    printf("value of p is: %p\n", p);

    printf("value of p+1 is: %p\n", p+1);
    printf("value of p+2 is: %p\n", p+2);

    return 0;
}