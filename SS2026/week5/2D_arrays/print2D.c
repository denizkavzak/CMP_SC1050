#include<stdio.h>

#define ROW 2
#define COL 3

int main(){

    int arr[ROW][COL] = {{1,2,3}, {4,5,6}};

    printf("Row-wise\n");
    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < COL; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Col-wise\n");
    for (size_t i = 0; i < COL; i++)
    {
        for (size_t j = 0; j < ROW; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }


    return 0;
}