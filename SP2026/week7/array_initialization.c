#include<stdio.h>

int main(){

    int arr1[10] = {10,11,12,13,14}; // it is going to fill the rest with 0s
    int arr2[20] = {0}; // it is going to fill the rest with 0s
    int arr3[] = {9,10,20,15,90}; // arr3 and arr4 have the same size, same elements
    int arr4[5] = {9,10,20,15,90};

    int arr5[5] = {1,2,3,4,5,6}; // I am trying to put 6 values to a 5 size array COMPILE ERROR

    printf("%d\n", arr4[10]); // whatever value is in that memory slot, it will print it
    arr4[10] = 100;
    printf("%d\n", arr4[10]); 

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");


    return 0;
}