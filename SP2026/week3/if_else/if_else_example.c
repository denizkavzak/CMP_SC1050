#include<stdio.h>

int main(){

    int num1 = 10;
    int num2 = 5;

    if(num1 == num2)
    {
        printf("They are equal\n");
    }
    else //if(num1 != num2)
    {
        printf("They are NOT equal\n");
    }

    if(num1 > num2) // this part will never be executed
    {
        printf("number1 is greater than number2\n");
    }
    else { // this part will never be executed
        printf("number1 and number2 has another relationship\n");
    }

    printf("I am done with comparison\n");

    return 0;
}