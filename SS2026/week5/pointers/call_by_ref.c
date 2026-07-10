#include<stdio.h>

void Add2(int x);
void Add2ByRef(int *x);

int main(){

    int x = 10;
    printf("x = %d\n", x);
    Add2(x);
    printf("x = %d\n", x);

    int *p = &x;
    Add2ByRef(p);

    //Add2ByRef(&x);
    printf("x = %d\n", x);

    return 0;
}

void Add2(int x){
    x = x + 2;
}

void Add2ByRef(int *x){
    *x = *x + 2;
}