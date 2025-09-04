#include<stdio.h>

int main(){

    int num1;
    int num2;

    printf("Enter two integers to be compared\n");

    scanf("%d %d", &num1, &num2);

    printf("First entered number:%d\nSecond entered number:%d\n", num1, num2);

    if (num1==num2)
    {
        printf("Entered number 1 and number 2 are equal!\n");
    }

    if (num1!=num2)
    {
        printf("Entered number 1 and number 2 are not equal!\n");
    }
    
    if (num1<num2)
    {
        printf("Entered number 1 is smaller than number 2!\n");
    }
    if (num1<=num2)
    {
        printf("Entered number 1 is smaller than or equal to number 2!\n");
    }    
    if (num1>num2)
    {
        printf("Entered number 1 is greater than number 2!\n");
    }
    if (num1>=num2)
    {
        printf("Entered number 1 is greater than or equal to number 2!\n");
    }

    return 0;
}