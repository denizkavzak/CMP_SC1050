#include<stdio.h>

int main(){

    int arr1[5]; // definition
    int arr2[5] = {1,2,3}; // definition + initialization
    // "filling the rest with 0s only works during initialization in definition"
    int arr3[6];

    arr3[0] = 10;
    arr3[1] = 20;
    arr3[2] = 30;
    arr3[3] = 40;
    // arr3[4] = 0; // it is not going to put 0 to this location automatically
    // arr3[5] = 0; // it is not going to put 0 to this location automatically


    for (int i = 0; i < 6; i++) // printing all values in arr1
    {
        printf("%d\n",arr3[i]);
    }

    printf("\n\n");

    //arr1 = {1,2,3,4,5}; // cannot do this

    for (int i = 0; i < 5; i++) // put values 1,2,3,4,5
    {
        arr1[i] = i + 1; // assigning value to array elements
    }

    for (int i = 0; i < 5; i++) // printing all values in arr1
    {
        printf("%d\n",arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) // printing all values in arr2
    {
        printf("%d\n",arr2[i]);
    }

    // arr1[0] = 1;
    // arr1[1] = 2;
    

    return 0;
}