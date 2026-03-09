#include<stdio.h>

// All function prototypes are the same and valid
int count_num_of_digit_n(int, int); // function prototype: without parameter names
// int count_num_of_digit_n(int x, int y); // function prototype: with different parameter names than the implementation
// int count_num_of_digit_n(int num, int digit); // function prototype: with exact same parameter names

int main() {

    int num = 284712;
    int d = 2;
    printf("There are %d %d's in number %d\n", count_num_of_digit_n(num, d), d, num);

    return 0;
}

// implementation of function
int count_num_of_digit_n(int num, int digit) {
    int count = 0;
    while(num) {
        int remainder = num % 10;
        if(digit == remainder) {
            count++;
        }
        num /= 10; // num = num / 10;
    }
    return count;
}