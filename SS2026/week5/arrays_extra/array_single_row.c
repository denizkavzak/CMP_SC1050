#include<stdio.h>

#define ROW 2 // symbolic constants
#define COL 3

#define SIZE 10

int main(){

    int arr1[ROW][COL];
    int arr2[][COL] = {{1,2,3},{4,5,6}};

    printf("Printing arr2: \n");
    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < COL; j++)
        {
            printf("%d ", arr2[i][j]);
        } 
        printf("\n"); 
    }

    printf("\n");
    
    printf("Printing first row: \n");
    // print the values in the first row (index 0)
    for(int i=0; i<COL; i++){
        printf("%d ", arr2[0][i]);
    }

    printf("\n");
    printf("Printing last column: \n");
    // print the values in the last column (index 2)
    for(int i=0; i<ROW; i++){
        printf("%d ", arr2[i][2]);
    }
    printf("\n");
    return 0;

}