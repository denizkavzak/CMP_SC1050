#include<stdio.h>

int main(){

    int a = 5, b = 10, c = 5;

    // && has higher precedence than ||, I need parenthesis
    if((a==c || a>b) && b<c){ // vs a==c || a>b && b<c
        printf("Compound logical statement is True\n");
    }else{
        printf("Compound logical statement is False\n");
    }

    return 0;
}