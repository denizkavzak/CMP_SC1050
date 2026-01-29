#include<stdio.h>

int main(){

    int var1 = 20;
    int var2 = 8;
    int var3 = 5;

    printf("var1 + var 2 * var3 = %d\n", var1 + var2 * var3);
    printf("(var1 + var 2) * var3 = %d\n", (var1 + var2) * var3);
    
    printf("var1 + var 2 %% var3 = %d\n", var1 + var2 % var3);
    printf("(var1 + var 2) %% var3 = %d\n", (var1 + var2) % var3);
    
    printf("var1 / var 3 %% var2 = %d\n", var1 / var3 % var2);
    printf("var1 / (var 2 %% var3) = %d\n", var1 / (var2 % var3));

    return 0;
}