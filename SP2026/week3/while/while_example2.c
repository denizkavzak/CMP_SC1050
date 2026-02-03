#include<stdio.h>

int main(){

    int counter = 1;

    // Print the EVEN values from 1 to 10
    while(counter <= 10){
        if(counter % 2 == 0){
            printf("%d ", counter);
        }
        counter = counter + 1;
    }

    printf("\n");

    return 0;
}