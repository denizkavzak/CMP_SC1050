#include<stdio.h>

// #define ROW 2
// #define COL 3

int main(){

    int arr1[2][3];
    int arr2[][3] = {{1,2,3},{4,5,6}};
    int arr3[2][3] = {1,2,3,4}; // would give error if -Wall -Werror used
    int arr4[2][3] = {0};
   // int arr5[2][3] = {{1,2,3},{4,5,6,7}}; // gives an error, trying to put 4 elements to size 3 array

    //int a[4] = {1,2,3,4,5,6};

    //arr = {1,2,3,4,5}; // doesn't work

    printf("Printing arr1: \n");
    for (size_t i = 0; i < 2; i++) // ROWS
    {
        for (size_t j = 0; j < 3; j++) // COLUMNS
        {
            printf("%d ", arr1[i][j]); // would give error if -Wall -Werror used
        }  
        printf("\n");
    }
    
    printf("\n");

    printf("Assigning values to arr1: \n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            arr1[i][j] = j+1;
        }  
        printf("\n");
    }

    printf("Printing arr1 after values assigned: \n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }  
        printf("\n");
    }

    printf("\n");

    printf("Printing arr2: \n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        } 
        printf("\n"); 
    }

    printf("\n");

    printf("Printing arr3: \n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }  
        printf("\n");
    }

    printf("\n");

    printf("Printing arr4: \n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", arr4[i][j]);
        }  
        printf("\n");
    }

    printf("\n");

    printf("Try to print something out of boundary: \n");
    printf("%d \n", arr4[3][3]); // this will print whatever value there is in that memory location
    
    return 0;

}