#include<stdio.h>

int main(){

    // let's form a for loop that only works with even numbers from 1 to 10
    printf("Even counters: ");
    for(int counter = 0; counter <= 10; counter += 2){
        printf("%d ", counter);
    }
    printf("\n");

    // let's form a for loop that counts down from 100 to 0 by 5s
    printf("Count down 5s: ");
    for(int counter = 100; counter >=0; counter -= 5){
        printf("%d ", counter);
    }
    printf("\n");
    
    // let's form a for loop that uses an arithmetic expression
    printf("Count with arithmetic expression: ");
    int a = 2;
    int b = 5;
    for(int counter = a; counter <= a*b*10; counter += a*b){
        printf("%d ", counter);
    }
    printf("\n"); 

    return 0;
}