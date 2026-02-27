#include<stdio.h>

int minimum(int, int, int);

int main(){

    int n1, n2, n3;
    printf("Enter 3 numbers to find their minimum:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d",  minimum(n1, n2, n3));
}

int minimum(int num1, int num2, int num3){
    int min = num1;
    if (num2<min)
    {
        min = num2;
    }
    if (num3<min)
    {
        min = num3;
    }
    //return min;
}


