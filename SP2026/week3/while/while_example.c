#include<stdio.h>

int main(){

    int counter = 1;

    // Print the values from 1 to 10
    while(counter <= 10){ // if (counter <= 10)
        printf("%d, ", counter);
        counter = counter + 1;
    }

    printf("\ncounter value after while: %d\n", counter);

    printf("\n");

    // counter = 1; // re-initialize counter

    // // Print the values from 1 to 10
    // while(counter < 10){
    //     printf("%d, ", counter);
    //     counter = counter + 1;
    // }

    // // to print the last value without a , at the end. Instead puts new line
    // printf("%d\n", counter);

    return 0;
}