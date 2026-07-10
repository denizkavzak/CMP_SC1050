#include<stdio.h>

int main(){

    int x = 5;
    int *p;

    p = &x;

    printf("x: %d\n",x);
    printf("p dereferenced: %d\n", *p);

    printf("Address of x: %p\n", &x);
    
    printf("Address of p:%p\n", &p);

    printf("Value inside p: %p\n", p);
    printf("&*p: %p\n", &*p);
    printf("*&p: %p\n", *&p);

    return 0;
}