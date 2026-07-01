#include<stdio.h>

int main(){

    int arr1[5];
    int arr2[] = {1,2,3,4,5};
    int arr3[10] = {1,2,3,4,5};
    int arr4[5] = {0};
    int arr5[5] = {1,2,3,4,5,6}; // gives an error, trying to put 6 elements to size 5 array

    //arr = {1,2,3,4,5}; // doesn't work

    printf("Printing arr1: \n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("\n");

    printf("Assigning values to arr1: \n");
    for (size_t i = 0; i < 5; i++)
    {
        arr1[i] = i+1;
    }

    printf("Printing arr1 after values assigned: \n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Printing arr2: \n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("Printing arr3: \n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    printf("Printing arr4: \n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr4[i]);
    }

    printf("\n");

    printf("Try to print something out of boundary: \n");
    printf("%d \n", arr4[10]); // this will print whatever value there is in that memory location
    
    return 0;

}