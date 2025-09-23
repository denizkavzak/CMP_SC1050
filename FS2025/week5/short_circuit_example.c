#include<stdio.h>


int main(){

    int counter = 0;
    int a = 5;

    if((a<4) && (counter++==1)){
        printf("I'm in if statement\n");
    }else{
        printf("I'm in else statement\n");
    }

    printf("Counter is: %d\n", counter);

    return 0;
}