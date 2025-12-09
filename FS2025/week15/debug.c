#include<stdio.h>

#define MY_CONSTANT 5
//#define DEBUG 1
int main() {

    #if DEBUG
        printf("inside\n");
    #endif

    printf("%d\n", MY_CONSTANT);

    return 0;
}