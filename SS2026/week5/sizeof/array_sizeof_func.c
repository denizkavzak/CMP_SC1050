#include<stdio.h>

void printArrSize(int *arr);
//void printArrSize2(int arr[]);

//void printArr(int arr[], int size);

int main(){

    int a[5] = {1,2,3,4,5};

    printf("sizeof arr in main: %ld\n", sizeof(a));

    printArrSize(a);

    return 0;
}

void printArrSize(int *arr){
    printf("sizeof arr in printArrSize func: %ld\n", sizeof(arr));
}

// void printArrSize2(int arr[]){
//     printf("sizeof arr in printArrSize2 func: %ld\n", sizeof(arr));
// }