#include<stdio.h>

int main(){

    for(int counter = -25; counter <= 25; counter++){
        printf("Counter before if-else block: %d\n", counter);
        if(counter >= 0 || ((++counter) % 2) != 0){
            printf("Counter %d is a Positive Even of 4\n", counter);
        }
        printf("Counter after if-else block: %d\n", counter);
    }

    printf("\n");

    return 0;
}

