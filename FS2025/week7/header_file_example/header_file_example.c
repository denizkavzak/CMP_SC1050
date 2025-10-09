#include "header_file_example.h"

// maximum of three numbers
int maximum(int num1, int num2, int num3) {
    int max = num1;

    if(num2>max){
        max = num2;
    }
    if(num3>max){
        max = num3;
    }
    return max;
} 

// minimum of three numbers
int minimum(int num1, int num2, int num3){
    int min = num1;

    if(num2<min){
        min = num2;
    }
    if(num3<min){
        min = num3;
    }
    return min;
} 

// average of three numbers
float average(int num1, int num2, int num3){
    int total = num1 + num2 + num3;
    return (float) total / 3.0;
}