#include<stdio.h>

int main(){

    int integer1, integer2;

    printf("Enter first number:\n");
    scanf("%d",&integer1);

    printf("Enter second integer:\n");
    scanf("%d",&integer2);

    printf("Sum of integer1: %d and integer2: %d is %d\n",integer1, integer2, integer1+integer2);

    return 0;
}