#include<stdio.h>
#include<limits.h>
/* The user will enter num_of_elements POSITIVE integer numbers.
   This program will find the min and max of those numbers.
*/
int main(){

    int num, counter = 1;
    int min = INT_MAX, max = INT_MIN;

    printf("min: %d and max: %d\n", min, max);

    while(counter <= 5){
        printf("Enter a number: \n");
        scanf("%d",&num);
        if (num < min){
            min = num;
        } 
        if (num > max){
            max = num;
        }
        counter = counter + 1;
    }

    printf("Min is: %d\n", min);
    printf("Max is: %d\n", max);

    return 0;
}