#include<stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf( "%s\n", (num%2)==0 ? "EVEN" : "ODD" );

    return 0;
}