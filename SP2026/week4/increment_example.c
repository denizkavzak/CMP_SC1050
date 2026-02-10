#include<stdio.h>

int main(){

    int counter = 0;


    printf("counter++: %d\n", counter++);
    printf("counter after increment: %d\n", counter);
    printf("++counter: %d\n", ++counter);
    printf("counter after increment: %d\n", counter);

    printf("counter--: %d\n", counter--);
    printf("counter after decrement: %d\n", counter);
    printf("--counter: %d\n", --counter);
    printf("counter after decrement: %d\n", counter);

    return 0;
}