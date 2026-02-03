#include<stdio.h>

int main(){

    int number = 80;

    if(number%2 == 0){
        printf("Number is even \n");
    }
    if(number%2 != 0){
        printf("Number is odd\n");
    }
    if(number%10==0){
        printf("Number is a multiply of 10\n");
    }
    if(number%5==0){
        printf("Number is a multiply of 5\n");
    }
    if(number%7==0){
        printf("Number is a multiply of 7\n");
    }

    return 0;
}


