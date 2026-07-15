#include<stdio.h>
/*
This program uses pass by reference to
return multiple values
*/

// returns the average
float getStats(int arr[], int size, int* min, int* max);
//int func1(int param1, int *er);

int main(){

    return 0;
}

float getStats(int arr[], int size, int* min, int* max){
    int total = 0;
    int maxArr = arr[0], minArr = arr[0];
    for (size_t i = 0; i < size; i++)
    {
    }

    *min = minArr;
    *max = maxArr;

    return (float)total/size;
}