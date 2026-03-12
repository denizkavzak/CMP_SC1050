#include<stdio.h>

int main(){
    
    int arr[5] = {1,2,3,4,5};
    /* trying to access out of boundary
     in an already defined array of size 5
     it will print whatever value there is
     in that memory location
    */
    printf("%d\n",arr[6]);

    return 0;
}

