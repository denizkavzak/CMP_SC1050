#include"functions.h"

int main(){

    int n = 5;

    printf("Sum: %d\n", sum_of_numbers(n));
    printf("Mult: %d\n",mult_of_numbers(n));

    int a = 1;
    printf("Call inc: %d\n", inc(a));
    printf("Call inc: %d\n", inc(a));
    printf("Call inc: %d\n", inc(a));
    printf("a: %d\n", a);

    return 0;    
}