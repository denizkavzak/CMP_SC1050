#include<stdio.h>

int main(){

    int a = 100;

    for(; a != 1; a /= 5){
        printf("%d ", a);
    }
    printf("\n");

    return 0;
}
    

