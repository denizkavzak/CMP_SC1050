#include<stdio.h>

int x = 100; // global variable

int add(int x, int y);

int main(){

    int a = 10; // local variable of main function

    return 0;
}

int add(int x, int y){
    int sum; // local variable of add function
    sum = x + y;
    return sum;
}