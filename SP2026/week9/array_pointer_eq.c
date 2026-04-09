#include<stdio.h>

void printArray(int *arr, int size);
void printArrayPointer(int *arr, int size);

int main(){

    int a[] = {1,2,3,4,5};

    printArray(a,5);

    return 0;
}

void printArray(int *arr, int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void printArrayPointer(int *arr, int size)
{
    //int *arrPtr = arr;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}
