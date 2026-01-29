#include<stdio.h>

int main(){

    int num1, num2;

    printf("Enter number1 and number 2: ");
    scanf("%d %d", &num1, &num2);

    printf("\nYou entered Number 1: %d\n", num1);
    printf("\nYou entered Number 2: %d\n\n", num2);

    printf("Number 1 + Number 2 = %d\n", num1+num2);
    printf("Number 1 - Number 2 = %d\n", num1-num2);
    printf("Number 1 * Number 2 = %d\n", num1*num2);
    printf("Number 1 / Number 2 = %d\n", num1/num2);
    printf("Number 1 %% Number 2 = %d\n", num1%num2);

    return 0;

}
