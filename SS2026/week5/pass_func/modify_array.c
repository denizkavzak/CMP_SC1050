#include<stdio.h>

void doubleArray(int arr[], int size);
void print1DArray(const int arr[], int size);
void doubleInt(int num);

int main(){

    int a[] = {1,2,3,4,5};
    int num = 5;

    print1DArray(a,5);
    doubleArray(a,5);
    print1DArray(a,5);

    printf("%d ",num);
    doubleInt(num);
    printf("%d ",num);

    return 0;
}

void print1DArray(const int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void doubleArray(int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }  
}

void doubleInt(int num){
    num = num * 2;
}