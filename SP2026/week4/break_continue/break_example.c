#include<stdio.h>

int main(){

    int counter = 0;

    while(counter != 100){

        if(counter == 8){
            break;
        }
        counter += 2;
    }

    printf("Counter after loop: %d\n", counter);

    return 0;
}