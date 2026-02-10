#include<stdio.h>
#include<math.h>

// we need to compile with -lm flag!
int main(){

    double a = 10.0;
    int b = 2;

    // pow requires two doubles, b is converted to double temporary
    printf("%.2f \n", pow(a, b));

    return 0;
}