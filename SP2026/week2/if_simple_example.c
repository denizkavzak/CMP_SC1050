#include<stdio.h>

int main(){

    int price = 150;

    if(price>=100) // ==, !=, >=, >, <=, <
    {
        printf("Price is cheap\n");
    }
    if(price>100)
    {
        printf("Price is expensive\n");
    }

    return 0;
}