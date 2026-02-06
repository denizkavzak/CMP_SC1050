#include<stdio.h>

int main(){

    int counter = 1;

    while(counter <= 10){
        if(counter % 2 != 0){
            printf("%d ", counter);
        } 
        counter = counter + 1;
    }

    printf("\n");

    return 0;
}

