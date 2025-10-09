#include "scoping_example_functions.h"

int mult_by_num(int x, int num){
    printf("x value is (parameter) in mult_by_num: %d\n", x);
    return x*num;
}

int divide_by_num(int a, int num){
    if(num == 0){
        return -1;
    }
    else{
        int x = a/num; // integer division, local variable x
        printf("x value is (local variable) in divide_by_num: %d\n", x);
        return x;
    }
}