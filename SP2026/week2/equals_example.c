#include<stdio.h>

int main(){

    int number1 = 5;
    int number2 = 10;

    if(number1 == number2){
        printf("number1: %d is equal to number2: %d\n", number1, number2);
    }

    if(number1 != number2){
        printf("number1: %d is NOT equal to number2: %d\n", number1, number2);
    }

    if(number1 = number2){
        printf("number1: %d is equal to number2: %d\n", number1, number2);
    }

    return 0;
}

