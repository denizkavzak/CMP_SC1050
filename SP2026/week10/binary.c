#include<stdio.h>

#define SIZE 10

int bubble(int *arr, int size);
int swap(int *a, int *b);
int printArray(int *arr, int size);
int binary(const int *arr, int key, int low, int high);

int main(){

    int arr[] = {25,10,30,5,2,7,25,2,1,15};

    bubble(arr,10);
    printArray(arr,10);

    printf("Is 5 in the array?: %d\n" ,binary(arr, 5, 0, SIZE - 1));
    printf("Is 50 in the array?: %d\n" ,binary(arr, 50, 0, SIZE - 1));

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

int binary(const int *arr, int key, int low, int high)
{
    int middle;
    while (low <= high)
    {
        middle = (low + high)/2;

        if (key == arr[middle])
        {
            return middle;
        }
        else if (key < arr[middle])
        {
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }
    return -1;
}
