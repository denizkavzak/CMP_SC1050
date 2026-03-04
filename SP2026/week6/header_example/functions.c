#include"functions.h"

int sum_of_numbers(int n){
    int sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int mult_of_numbers(int n){
    int mul = 1;
    for (size_t i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}

int inc(int x) {
    x++;
    return x;
}