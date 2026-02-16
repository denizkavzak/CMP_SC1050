#include<stdio.h>

int main(){

    int counter = 1;
    while(counter <= 10){
        printf("%d\n", counter);
        counter++;
    }

    counter = 0; // has to be 0
    while(++counter <= 10){ // increment first, then check condition
        printf("%d\n", counter);
    }

    for(counter = 1; counter <= 10: counter++){
        printf("%d\n", counter);
    }

    counter = 11;
    do{ // will execute at least ONCE before the check
        printf("%d\n", counter);
        counter++;
    }while(counter <= 10);

    counter = 11;
    while(counter <= 10){
        printf("%d\n", counter);
        counter++;
    }

    return 0;
}