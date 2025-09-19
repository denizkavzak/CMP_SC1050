#include<stdio.h>

int main(){

    int x = 0;

    if(x++) {
        printf("in if statement\n");
    }

    printf("value of x:%d\n", x);

    return 0;
}