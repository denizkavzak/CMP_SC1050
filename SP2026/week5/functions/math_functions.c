#include<stdio.h>
#include<math.h>

int main(){

    int num1 = 9;
    float num2 = 16.0;
    double num3 = 5.0;

    printf("Sqrt of num1: %d is %f\n",num1, sqrt(num1));
    printf("Sqrt of num2: %f is %f\n",num2, sqrt(num2));
    printf("Sqrt of num3: %f is %f\n",num3, sqrt(num3));

    num2 = -16.356;
    // fabs(x) takes absolute value of x
    printf("Absolute value of %f is %f\n", num2, fabs(num2));

    // floor(x) and ceil(x)
    printf("Floor %f is %f\n", num2, floor(num2));
    printf("Ceiling %f is %f\n", num2, ceil(num2));

    num2 = 16.356;
    printf("Floor %f is %f\n", num2, floor(num2));
    printf("Ceiling %f is %f\n", num2, ceil(num2));

    // pow(x,y)
    printf("%f ^ %d is %f\n", num3, 3, pow(num3,3));

    return 0;
}