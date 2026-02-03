#include<stdio.h>

int main(){

    int counter = 1;
    int mult_div_five = 1;

    printf("Multiplication of: ");
    // calculate the multiplication of numbers divisible by 5
    while(counter <= 10){
        if(counter % 5 == 0){
            mult_div_five = mult_div_five * counter;
            printf("%d ", counter);
        } 
        counter = counter + 1;
    }

    printf("\nMultiplication of the odd numbers from 1 to 10: %d\n", mult_div_five);

    return 0;
}

