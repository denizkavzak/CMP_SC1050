#include<stdio.h>

int bubble(int *arr, int size);
int swap(int *a, int *b);
int printArray(int *arr, int size);
int linear(int *arr, int size, int key);

int main(){

    int arr[] = {25,10,30,5,2,7,25,2,1,15};

    bubble(arr,10);
    printArray(arr,10);

    printf("Is 5 in the array?: %d\n" ,linear(arr, 10, 5));
    printf("Is 50 in the array?: %d\n" ,linear(arr, 10, 50));

    return 0;
}

int bubble(int *arr, int size)
{
    for (size_t i = 1; i < size; i++)
    {
        for (size_t j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    return 0;
}

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int printArray(int *arr, int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int linear(int *arr, int size, int key)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
