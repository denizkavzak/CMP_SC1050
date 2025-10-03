#include<stdio.h>

int count_digits(int number, int counted_digit);

int main(){
    
    int num = 4314;
    int count_digit = 4;

    int count = count_digits(num, count_digit);

    printf("The number of %ds in number %d is %d\n", count_digit, num, count);

    return 0;
}

int count_digits(int number, int counted_digit){
    int count = 0;
    while(number > 0){
        int current_digit = number % 10;
        printf("current digit: %d \n", current_digit);
        if(current_digit == counted_digit){
            count ++;
        }
        number = number/10;
        printf("updated number: %d \n", number);
    }
    return count;
}