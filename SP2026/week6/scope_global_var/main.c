#include "scope_global_var.h"

int x = 50; // global variable

int main(){
    printf("x value is (global variable) in main: %d\n", x);
    int mult = mult_by_num(5,6);
    int div = divide_by_num(10,5);
}