#include<stdio.h>

int main(){

    int number1 = 80;
    int number2 = 100;

    printf("Enter first number to be compared: ");
    scanf("%d" , &number1);

    printf("Enter second number to be compared: ");
    scanf("%d" , &number2);

    printf("Entered numbers: %d and %d\n", number1, number2);

    if(number1 > number2){
        printf( "number1 is greater than number2\n" );
    } else 
        if(number1 < number2){
            printf( "number1 is less than number2\n" );
    } else{
        printf( "number1 is equal to number2\n" );
    }

    return 0;
}