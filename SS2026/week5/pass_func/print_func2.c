#include<stdio.h>

#define SIZE 5

void print1DArray(int arr[]);

int main(){

    int a[] = {1,2,3,4,5};

    print1DArray(a);

    return 0;
}

void print1DArray(int arr[]){
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}