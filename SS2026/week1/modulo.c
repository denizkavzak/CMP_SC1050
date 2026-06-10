#include<stdio.h>

int main(){

    int num;

    printf("Enter a number: \n");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Even\n");
    }
    if(num % 2 != 0){
        printf("Odd\n");
    }
    if(num % 7 == 0){
        printf("Divisible by 7\n");
    }

    return 0;
}