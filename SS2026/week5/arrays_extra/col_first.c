#include<stdio.h>

#define ROW 2 // symbolic constants
#define COL 3

int main(){

    int arr2[ROW][COL] = {{1,2,3},{4,5,6}};

    printf("Printing arr2: \n");
    for (size_t i = 0; i < COL; i++)
    {
        for (size_t j = 0; j < ROW; j++)
        {
            printf("%d ", arr2[j][i]);
        } 
        printf("\n"); 
    }

    return 0;

}