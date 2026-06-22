#include<stdio.h>

float add(float num1, float num2);
int addInt(int num1, int num2);

int main(){

    int n1 = 5, n2 = 10;
    printf("%f\n", add(n1,n2));

    float n3 = 5.5, n4 = 10.5;
    printf("%d\n", addInt(n3,n4));

    printf("%f\n", n3);

    return 0;
}

float add(float num1, float num2){
    return num1 + num2;
}

int addInt(int num1, int num2){
    num1 = num1 + num2;
    return num1;
}