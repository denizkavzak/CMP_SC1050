#include<stdio.h>

int main(){

    int counter = 1; // INITIAL VALUE OF COUNTER
    
    // Print the values from 1 to 5
    while(counter < 5){ // if (counter <= 10) // CONDITION CHECK
        printf("%d, ", counter);    
        counter = counter + 1; // INCREMENT COUNTER
    }
    printf("%d", counter);  

    // if (counter < 5), 1<5 TRUE, go into the loop, print counter 1, increment counter, new counter=2
    // if (counter < 5), 2<5 TRUE, go into the loop, print counter 2, increment counter, new counter=3
    // if (counter < 5), 3<5 TRUE, go into the loop, print counter 3, increment counter, new counter=4
    // if (counter < 5), 4<5 TRUE, go into the loop, print counter 4, increment counter, new counter=5
    // if (counter < 5), 5=5 FALSE, go outside of loop block, continue the code after the loop block
    // when we are outside of the loop, counter is 5


    // // Print the values from 1 to 5
    // while(counter <= 5){ // if (counter <= 10)
    //     if (counter != 5) {
    //         printf("%d, ", counter);    
    //     } else{
    //         printf("%d", counter);
    //     }
    //     counter = counter + 1;
    // }
    // if (counter <= 5), 1<=5 TRUE, go into the loop, print counter 1, increment counter, new counter=2
    // if (counter <= 5), 2<=5 TRUE, go into the loop, print counter 2, increment counter, new counter=3
    // if (counter <= 5), 3<=5 TRUE, go into the loop, print counter 3, increment counter, new counter=4
    // if (counter <= 5), 4<=5 TRUE, go into the loop, print counter 4, increment counter, new counter=5
    // if (counter <= 5), 5<=5 TRUE, go into the loop, print counter 5, increment counter, new counter=6
    // if (counter <= 5), 6>5 FALSE, go outside of loop block, continue the code after the loop block
    // when we are outside of the loop, counter is 6

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