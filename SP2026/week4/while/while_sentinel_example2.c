#include<stdio.h>

// take n number of positive inputs from user and count even odd
int main(){

    int counter = 0;
    int count_even = 0;
    int count_odd = 0;
    int number;

    // we take the first input from the user
    // if the user doesn't want to enter any valid inputs
    // they can enter -1 and exit immediately
    printf("Enter a number: (-1 to exit): ");
    scanf("%d", &number);

    // read prices until user enters -1
    while(number != -1){
        if(number % 2 == 0)
            count_even = count_even + 1;
        else
            count_odd = count_odd + 1 ;

        counter = counter + 1;
        printf("Enter a number: (-1 to exit): ");
        scanf("%d", &number);
    }

    printf("Counter: %d\n", counter);
    printf("Count of even numbers: %d\n", count_even);
    printf("Count of odd numbers: %d\n", count_odd);

    return 0;
}
