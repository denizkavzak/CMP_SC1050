#include<stdio.h>

int func1(int number);
int func2(float number);

int main(){

    int num1 = 10;
    float num2 = 10.5;

    func1(num1); // call it with an int
    func1(num2); // call it with a float

    func2(num2); // call with float
    func2(num1); // call with int

    return 0;
}

int func1(int number){
    printf("Number in func1 is: %d\n", number);
    return number * 5;
}

int func2(float number){
    printf("Number in func2 is: %f\n", number);
    return number * 2;
}