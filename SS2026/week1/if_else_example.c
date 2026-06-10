#include<stdio.h>

int main(){

    int grade = 80;

    if (grade < 60)
    {
        printf("F\n");
    }
    if (grade < 70){
        printf("D\n");
    }
    if (grade < 80){
        printf("C\n");
    }
    if (grade < 90){
        printf("B\n");
    }
    if (grade <= 100){
        printf("A\n");
    }

    return 0;
}