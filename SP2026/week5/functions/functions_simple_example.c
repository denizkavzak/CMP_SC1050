#include<stdio.h>

int minimum(int x, int y, int z);

int main(){

    int number1, number2, number3;

    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &number1, &number2, &number3);

    int min = minimum(number1, number2, number3);
    printf("Minimum of numbers %d, %d, and %d is: %d\n", number1, number2, number3, min);

    return 0;
}

int minimum(int x, int y, int z){
    int min = x;
    if(y < min){
        min = y;
    }
    if(z < min){
        min = z;
    }
    return min; 
}