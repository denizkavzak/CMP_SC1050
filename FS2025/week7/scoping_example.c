#include<stdio.h>

int x = 10; // global variable

int main(){

    // normally we cannot do this
    // int x = 1;
    // int x = 2;

    printf("x value is (global variable): %d\n", x);
    int x = 5; // x is redefined as a local variable with value 5
    printf("x value is: %d\n", x); 
    {
        int x = 4; // x is redefined as 4
        printf("x value is: %d\n", x); 
        {
            printf("x value is: %d\n", x); // x is still 4
            int x = 3; // x is redefined as 3
            printf("x value is: %d\n", x); 
        }
    }
}