#include<stdio.h>

int find_digit(int number, int searched_digit);

int main(){
    
    int num = 431;

    int found = find_digit(num, 4);

    if(found == 1){
        printf("The value is found in the number\n");
    }else
    {
        printf("The value is not found in the number\n");
    }
    return 0;
}

int find_digit(int number, int searched_digit){
    
    while(number > 0){
        int current_digit = number % 10;
        printf("current digit: %d \n", current_digit);
        if(current_digit == searched_digit){
            return 1;
        }
        number = number/10;
        printf("updated number: %d \n", number);
    }
    return 0;
}