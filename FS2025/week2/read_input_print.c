#include<stdio.h>

int addition(int number1, int number2);

int main(){

    int integer1;
    int integer2;
    int sum;
    //int dif;

    printf("Enter first integer:\n");
    scanf("%d", &integer1);

    printf("Enter second integer:\n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;

    printf("The sum of the two integers is: %d\n", sum);

    printf("The sum of the two integers is: %d\n", integer1 + integer2);

    printf("The multiplication of the two integers is: %d\n", integer1 * integer2);

    printf("The division of the two integers is: %d\n", integer1 / integer2);

    printf("The remainder of the two integers is: %d\n", integer1 % integer2);

    return 0;

}