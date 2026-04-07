#include<stdio.h>

#define SIZE 5

int main(){

    int a[] = {1,2,3,4,5};
    int *p = a;

    printf("Printing using a[i] notation: \n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("value of a[%d] is: %d\n", i, a[i]);
    }

    printf("\n");
    printf("Printing using *(a+i) notation: \n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("value of *(a+%d) is: %d\n", i, *(a+i));
    }
    
    printf("\n");
    printf("Printing using *(p+i) notation: \n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("value of *(p+%d) is: %d\n", i, *(p+i));
    }

    printf("\n");

    return 0;
}