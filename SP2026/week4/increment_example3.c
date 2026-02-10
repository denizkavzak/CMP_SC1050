#include<stdio.h>

int main(){

    int counter = 1;

    printf("Counter original value: %d\n", counter);
    printf("Counter with post-increment: %d\n", ++counter);
    printf("Counter after post-increment: %d\n", counter);

    return 0;
}