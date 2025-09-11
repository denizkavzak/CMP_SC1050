#include<stdio.h>

int main(){

    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);
    
    printf( "%s\n", grade >= 60 ? "Passed" : "Failed" );

    "%s", printf(grade >= 60 ? "Passed\n" : "Failed\n" );

    return 0;
}