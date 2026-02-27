#include<stdio.h>

//int func(int, int, int);

int main(){
    int a = 5, b = 10, c = 2;
    printf("%d", func(a,b,c));
}

int func(int x, int y, int z){
    return x*y*z;
}
