#include<stdio.h>

int add(int number1, int number2);

int main(){

    int n1 = 5, n2 = 10;
    printf("%d\n", add(n1, n2));
    return 0;
}

int add(int num1, int num2){
    return num1 + num2; 
}