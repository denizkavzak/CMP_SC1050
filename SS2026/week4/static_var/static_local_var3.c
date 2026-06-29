#include<stdio.h>

void printCounter();

int main(){

    printCounter();
    printCounter();
    printCounter();

    return 0;
}

void printCounter(){
    static int counter = 0;       
    counter++;
    printf("counter is: %d\n",counter);
}