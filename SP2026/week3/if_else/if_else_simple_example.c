#include<stdio.h>

int main(){

    int price = 50;

    if(price >= 100) // ==, !=, >=, >, <=, <
    {
        printf("Price is expensive\n");
    }
    else //(price<100)
    {
        printf("Price is cheap\n");
    }

    return 0;
}