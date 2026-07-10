#include<stdio.h>

void print1DArray(int arr[], int size);

int main(){

    int a[] = {1,2,3,4,5};

    print1DArray(a,5);

    return 0;
}

void print1DArray(int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}