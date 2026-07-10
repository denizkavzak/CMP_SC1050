#include<stdio.h>

#define SIZE 5

int doubleIt(int a[], int size);
void printArray(int a[], int size);

int main(){

    int a[] = {1,2,3,4,5};

    // Call by ref
    printf("Value of array a before function call:\n");
    printArray(a, SIZE);

    // returns an error/success code
    // arrays are passed as "ADDRESSES" already
    // pass by reference
    int result = doubleIt(a, SIZE);

    printf("Result of doubleIt function: %d\n", result);

    printf("Value of a after function call:\n");
    printArray(a, SIZE);

    return 0;

}

int doubleIt(int a[], int size)
{
    if(size < 0){
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] * 2;        
    }
    
    return 1;
}

void printArray(int a[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}