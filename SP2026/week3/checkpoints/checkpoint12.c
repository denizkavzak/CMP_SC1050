#include<stdio.h>

int main(){

    int number1 = 10;
    int number2 = 0;

    printf("counter--: %d\n", number1--);
    printf("counter after decrement: %d\n", number1);

    printf("++counter: %d\n", ++number2);
    printf("counter after increment: %d\n", number2);

    return 0;
}

