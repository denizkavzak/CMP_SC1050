#include<stdio.h>

void printArrSize(int *arr);
//void printArrSize2(int arr[5]);

int main(){

    int arr[] = {1,2,3,4,5};

    printf("sizeof(arr) in main:%lu\n", sizeof(arr));

    printArrSize(arr);
    //printArrSize2(arr);

    return 0;
}

void printArrSize(int *arr){
    printf("size of arr in func = %lu\n", sizeof(arr));
}

// void printArrSize2(int arr[5]){
//     printf("size of arr[] = %lu", sizeof(arr));
// }