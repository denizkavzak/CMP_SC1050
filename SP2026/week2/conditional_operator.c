#include<stdio.h>

int main(){

    int grade = 80;

    printf("%s\n", grade >= 60 ? "Passed" : "Failed" );

    grade >= 60 ? printf( "Passed\n" ) :  printf( "Failed\n" );

    return 0;
}