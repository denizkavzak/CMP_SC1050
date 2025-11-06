#include <stdio.h>

size_t getSize(float *ptr); // takes a float array

int main(){

    float array[20];

    printf("The number of bytes in the array is %lu"
    "\nThe number of bytes returned by getSize is %lu\n",
    sizeof(array), getSize(array));
    // arrays are passed as the address of their first elements

    return 0;
}

// we are passing a pointer, so the sizeof will be the size of a pointer
size_t getSize(float *ptr){
    return sizeof(ptr);
}