#include<stdio.h>

int main(){

    int num1, num2;

    printf("Enter num1: \n");
    scanf("%d", &num1);

    printf("Enter num2: \n");
    scanf("%d", &num2);

    printf("num1: %d, num2:%d\n", num1,num2);
    
    if(num1 == num2){
        printf("They are equal!\n");
    }
    if((num1 = num2)){ // First do num1 = num2, Then if(num1)
        printf("They are equal ASSIGNMENT!\n");
    }
    printf("num1: %d, num2:%d\n", num1,num2);
    if(num1 != num2){
        printf("Not equal!\n");
    }
    if(num1 < num2){
        printf("Num1 is less than num2!\n");
    }    
    if(num1 >= num2){
        printf("Num1 is greater than or equal num2!\n");
    }  
    return 0;
}