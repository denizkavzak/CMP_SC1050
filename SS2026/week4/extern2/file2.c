#include<stdio.h>

void printX();
void incrementX();

static int x = 10;

void printX(){
    printf("x in file2: %d\n",x);
}

void incrementX(){
    x++;
    printX();
}