#include<stdio.h>

int main(){

    for(int counter = 0; counter <= 6; counter++){
        if(counter % 2 == 0 && ((++counter) % 3) != 0){
            printf("Counter %d is Even and counter + 1 is divisible by 3\n", counter);
        }
    }

    printf("\n");

    return 0;
}

