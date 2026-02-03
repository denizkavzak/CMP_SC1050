#include<stdio.h>

int main(){

    int counter = 1;

    // Print the values from 1 to 10 and whether they are EVEN or ODD
    while(counter <= 10){
        if(counter % 2 == 0){
            printf("%d is EVEN\n", counter);
        } 
        else{
            printf("%d is ODD\n", counter);
        }
        counter = counter + 1;
    }

    return 0;
}

