#include<stdio.h>

int reverse_digits(int number);

int main(){
    
    int num = 431;

    int reverse_num = reverse_digits(num);
    
    printf("The reverse of number %d is %d\n", num, reverse_num);
    return 0;
}

int reverse_digits(int number){
    int reverse = 0;
    
    printf("Number to be reversed: %d \n", number);
    while(number > 0){
        int current_digit = number % 10;
        printf("current digit: %d \n", current_digit);
        reverse = reverse * 10 + current_digit;
        printf("current reverse: %d \n", reverse);
        
        number = number/10;
        printf("updated number: %d \n", number);
    }
    return reverse;
}