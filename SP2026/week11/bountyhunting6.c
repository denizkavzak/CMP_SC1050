#include<stdio.h>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int * const ptr2 = arr;
    const int *ptr3 = arr;

    for (size_t i = 0; i < 9; i++)
    {
        //*(ptr3 + i) = *(++ptr2); // bug
        *(ptr2 + i) = *(++ptr3); // fix
    }

    return 0;
}

