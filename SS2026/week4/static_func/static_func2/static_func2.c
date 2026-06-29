#include"static_func2.h"

static float SumOfNumbers(int a, int b, int c);

float averageOfNumbers(int a, int b, int c){
    return SumOfNumbers(a,b,c)/3;
}

static float SumOfNumbers(int a, int b, int c){
    return (float)(a + b + c);
}