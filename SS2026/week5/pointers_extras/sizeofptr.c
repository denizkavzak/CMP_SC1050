#include <stdio.h>
#include <stdlib.h>

void foo(int a[5]){
    printf("Sizeof: %lu\n",sizeof(a));
}

void foo2(int *a){
    printf("Sizeof: %lu\n",sizeof(a));
}

int main(){

    int x[5] = {0};

    printf("Sizeof array: %lu\n", sizeof(x));

    foo(x); // all arrays are passed as the address of its first element
    // therefore we are passing a pointer, the size of x will be the size
    // of a pointer, which is 8 bytes in a 64-bits system

    return 0;
}


