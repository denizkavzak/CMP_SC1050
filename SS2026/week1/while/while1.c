#include<stdio.h>
/* This program is taking num_of_elements integer numbers 
from the user and finds the sum of them */
int main(){

    int counter = 1;
    int sum = 0;
    int num;
    int num_of_elements;

    printf("How many numbers will you enter?: \n");
    scanf("%d",&num_of_elements);

    while(counter <= num_of_elements){
        printf("Enter a number: \n");
        scanf("%d",&num);

        sum = sum + num;
        counter = counter + 1;
    }

    printf("Sum of the entered values: %d\n",sum);

    return 0;
}