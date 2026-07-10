#include<stdio.h>

int main(){

    int a[] = {1,2,3,4,5};
    int *p = a;

    printf("value of a is: %p\n", a); //&a[0]
    printf("value of &a[0] is: %p\n", &a[0]);
    printf("address of a is: %p\n", &a); //(a+0)
    printf("value of p is: %p\n", p);
    
    printf("value of a[0] is: %d\n", a[0]);
    printf("value of *p is: %d\n", *p);

    printf("value of *(p+1) is: %d\n", *(p+1));
    printf("value of *(p+2) is: %d\n", *(p+2));

    printf("value of *(a+1) is: %d\n", *(a+1));
    printf("value of *(a+2) is: %d\n", *(a+2));

    return 0;
}