#include<stdio.h>

int func(void *arr, char type, int size);

int main(){

    int arr[] = {1,2,3,4,5};

    func(arr, 'I', 5);

    return 0;
}

int func(void *arr, char type, int size)
{

    if (type == 'I')
    {
        int *arrInt = (int *)arr;
        for (int i = 0; i < size; i++)
        {
            printf("%d ", *(arrInt+i));
            
        }
    }
    else if (type == 'F') {
        float *arrFloat = (float *)arr;
        for (int i = 0; i < size; i++) {
            printf("%f ", arrFloat[i]);
        }
    }
    else{
        return -1;
    }
    
    printf("\n");

    return 0;
}
