#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    int *arrPtr = arr;

    printf("using arr[i] indexing:\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("arr[%d] is %d\n", i, arr[i]);
    }
    
    printf("using *(arr+i) indexing:\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("*(arr+%d) is %d\n", i, *(arr+i));
    }

    printf("using *(arrPtr+i) indexing:\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("*(arrPtr+%d) is %d\n", i, *(arrPtr+i));
    }

    return 0;
}