#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    int *p2 = NULL;

    printf("value of a is: %d\n", a);
    printf("value of p is: %p\n", p);
    printf("address of a is: %p\n", &a);
    printf("value of p dereference is: %d\n", *p);

    printf("value of &*p: %p\n", &*p);
    printf("value of *&p: %p\n", *&p);

    printf("value of p2 is: %p\n", p2);
    printf("value of dereference p2 is: %d\n", *p2);

    return 0;
}