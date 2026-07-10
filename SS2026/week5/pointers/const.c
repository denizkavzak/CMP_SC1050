#include<stdio.h>

int main(){

    int x = 10;
    int * p = &x;

    int y = 50;
    p = & y;
    *p = 100;

    int * const p2 = &x;
    //p2 = &y;
    *p2 = 50;

    const int * p3 = &x;
    p3 = &y;
    //*p3 = 100;

    const int * const p4 = &x;
    //p4 = &y;
    //*p4 = 100;  

    return 0;
}