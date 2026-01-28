#include<stdio.h>
/*
This program takes two integers from the user
and calculates the sum of those two integer numbers
*/

// main function
int main(void){
    
    int number1; // variable num1
    int number2; // variable num2
    int multiplication; // variable multiplication

    printf("Enter a value for number1: "); // prompt
    scanf("%d", &number1);

    printf("Enter a value for number2: "); // prompt
    scanf("%d", &number2);

    multiplication = number1 * number2;
    printf("Multiplication result of number1 and number2: %d\n", multiplication);
    printf("Multiplication result of number1 and number2: %d\n", number1*number2);
    printf("Mult result of number1: %d and number2: %d is: %d\n", number1,number2,multiplication);

    return 0;

}