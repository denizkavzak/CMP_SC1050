#include<stdio.h>


int main(){

    int number1;
    int number2;
    int multiplication;

    printf("Enter a value for number1:\n");
    scanf("%d", &number1);
    printf("Enter a value for number2:\n");
    scanf("%d", &number2);

    multiplication = number1 * number2;

    printf("Number 1: %d \n", number1);
    printf("Number 2: %d \n", number2);
    printf("Multiplication of number 1 and number 2: %d\n", multiplication);
    printf("Multiplication of number 1 and number 2: %d\n", number1 * number2);

    return 0;

}

