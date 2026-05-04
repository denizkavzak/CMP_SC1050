#include<stdio.h>
#include<stdlib.h>

int main(){

    int * arr;
    int size;

    printf("Enter the number of elements:\n");
    scanf("%d", &size);

    arr = malloc(size * sizeof(int));

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    printf("Freed memory successfully!\n");

    return 0;
}