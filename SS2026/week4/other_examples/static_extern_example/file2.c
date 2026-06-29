#include<stdio.h>

extern void test();
extern int x;

int main()
{
    test();
    printf("x: %d\n",x);
}