#include <stdio.h>

int main(){

    int x[5] = {1, 2};

    printf("Sizeof: %lu\n", sizeof(x)/sizeof(x[0]));

    return 0;
}

