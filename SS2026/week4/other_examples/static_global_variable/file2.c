#include<stdio.h>

//extern int x; // We cannot use extern to access x, because it is defined as static in the other file

void show();

int main()
{
    show();
    //printf("%d\n", x);   // NOW using x
}