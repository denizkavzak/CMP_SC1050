#include<stdio.h>

int doubleIt(int num);
int doubleItByRef(int *num);

int main(){

    int a = 10;

    // Call by value
    printf("Value of a before function call: %d\n", a);
    int result = doubleIt(a);
    printf("Result of doubleIt function: %d\n", result);
    printf("Value of a after function call: %d\n", a);

    // Call by ref
    printf("Value of a before function call: %d\n", a);
    result = doubleItByRef(&a);
    printf("Result of doubleIt function: %d\n", result);
    printf("Value of a after function call: %d\n", a);

    return 0;

}

int doubleIt(int num)
{
    num = num * 2;
    return num;
}

int doubleItByRef(int *num){
    *num = (*num) * 2;
    return 1;
}