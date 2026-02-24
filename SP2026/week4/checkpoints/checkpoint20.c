#include<stdio.h>

int main(){

    for(int counter = 0; counter <= 10; counter++){
        if(counter % 2 == 0 || ((++counter) % 3) != 0){
            printf("Counter %d is Even or counter + 1 is divisible by 3\n", counter);
        }
    }

    return 0;
}

