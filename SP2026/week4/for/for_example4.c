#include<stdio.h>

int main(){

    for(int counter=1; counter != 10; counter++){
        printf("%d ", counter);
    }

    //printf("Counter: %d\n", counter);

    int counter = 1;
    for( ; counter != 10; counter++){
        printf("%d ", counter);
    }

    printf("Counter: %d\n", counter);


    printf("\n");

    return 0;
}