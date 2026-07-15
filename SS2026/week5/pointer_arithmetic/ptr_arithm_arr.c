#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    int * arrPtr = arr;

    printf("arr[0] is: %d\n", arr[0]);
    printf("*(arr+0) is: %d\n", *(arr+0));
    printf("*(arrPtr+0) is: %d\n", *(arrPtr+0));

    printf("arr[1] is: %d\n", arr[1]);
    printf("*(arr+1) is: %d\n", *(arr+1));
    printf("*(arrPtr+1) is: %d\n", *(arrPtr+1));


    return 0;
}