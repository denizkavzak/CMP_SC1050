#include<stdio.h>

int main(){

    int num1;
    int num2 = 5;

    num1 = 10;

    if(num1 == num2)
    {
        printf("num1: %d is equal to num2: %d\n", num1, num2);
    }
    if(num1 != num2)
    {
        printf("num1: %d is NOT equal to num2: %d\n", num1, num2);
    }
    if(num1 = num2) // Assignment first num1 = 5, it will check if(5) second
    {
        printf("num1: %d and num2: %d\n", num1, num2);
    }

    num1 = num2;
    if(num1)
    {
    }

    if(0) // 0 is FALSE
    {
        printf("It's never going to get in here!\n");
    }
    if(5) // anything non zero is TRUE
    {
        printf("It's always going to get in here!\n");
    }

    return 0;
}