#include<stdio.h>

// this program will count the even numbers between 1 to 10 (included)
int main(){

    printf("Remainder of 8 by 2: %d\n", 8 % 2);
    printf("Remainder of 13 by 2: %d\n", 13 % 2);

    // if a number % 2 == 0 the number is EVEN
    // if a number % 2 != 0 the number is ODD

    int counter = 1; // increment each time in the loop
    int even_number_counter = 0; // increment when you find an even number

    while(counter <= 10){ // to go in while condition is true
        if(counter % 2 == 0){ // if the remainder is 0, it is EVEN
            even_number_counter = even_number_counter + 1; // increment the EVEN counter
            printf("%d is EVEN\n", counter);
        }
        counter = counter + 1; // increment the loop counter
    }

    printf("Loop counter value after the loop exit: %d\n", counter);
    printf("The even numbers between 1 and 10: %d\n", even_number_counter);

    return 0;
}