#include<stdio.h>

float average(int a[], int size);
int addFive(int num);
int modifyArrayIndex(int a[], int size, int index, int newValue);
void printArray(const int a[], int size);

int main(){

    int arr1[5] = {1,2,3,4,5};

    float avg = average(arr1, 5);
    printf("average is %f\n", avg);

    int number = 10;
    printf("Sum five is: %d\n", addFive(number)); // call by value
    printf("Number value after function call: %d\n", number);

    printArray(arr1, 5);
    modifyArrayIndex(arr1, 5, 2, 10); // call by reference
    printArray(arr1, 5);

    return 0;

}

float average(int a[], int size)
{
    float sum = 0;
    for(int i=0; i<size; i++){
        sum += a[i];
    }
    return sum/size;
}

int addFive(int num){
    num = num + 5;
    return num;
}

int modifyArrayIndex(int a[], int size, int index, int newValue){

    if(index < 0 || index >= size){ // if index is in bounds
        return -1;
    }
    a[index] = newValue;
    return 1;
}

void printArray(const int a[], int size){
    printf("Printing array: \n");
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}