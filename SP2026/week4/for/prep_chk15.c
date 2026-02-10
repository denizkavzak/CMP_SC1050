#include<stdio.h>

int main(){

    int sum = 0; // what happens if I put it inside for loop

    printf("Counter pre incremented, then sum calculated: \n");
    for(int counter = 1; counter <= 3; counter++, sum += counter){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("\nSum outside for loop: %d\n", sum);

    printf("\n"); 

    return 0;
}


