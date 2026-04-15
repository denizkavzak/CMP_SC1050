#include<stdio.h>

int bubble(int *arr, int size);
int printArray(int *arr, int size);

int main(){

    int arr[] = {25,10,30,5,2,7,25,2,1,15};

    bubble(arr,10);
    printArray(arr,10);

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
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}

int printArray(int *arr, int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}