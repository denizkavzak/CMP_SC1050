#include <stdio.h>
#include <stdlib.h>

int main(){

    int x[5] = {0};

    printf("Sizeof array: %lu\n", sizeof(x));
    printf("Sizeof array[0]: %lu\n", sizeof(x[0]));

    printf("Number of elements in the array: %lu\n", sizeof(x)/sizeof(x[0]));

    return 0;
}


