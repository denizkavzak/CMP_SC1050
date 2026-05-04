#include<stdio.h>
#include<stdlib.h>

int main(){

    // allocated HEAP memory
    // malloc returns a void*, which can be casted to any other pointer type
    int * iPtr = malloc(sizeof(int));
    // int *iPtr = (int *) malloc(sizeof(int)); // this type cast is automatically done
    // if you need to change the type to something else for a specific use, cast it 

    /*
    When can malloc return NULL?
    The system cannot provide enough memory
    The requested size is accidentally huge
    Integer overflow in the size calculation
    Asking for zero bytes
    */
    if(iPtr != NULL){

        *iPtr = 10;

        printf("%p\n", &iPtr); // address of iPtr
        printf("%p\n", iPtr); // address of the allocated location it points to
        printf("%d\n", *iPtr); // value in the allocated location it points to

        free(iPtr);

        printf("Freed memory successfully!\n");
    }

    return 0;
}