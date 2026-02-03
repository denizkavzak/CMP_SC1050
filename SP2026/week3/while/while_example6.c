#include<stdio.h>

int main(){

    int counter = 1;
    int total_odd = 0;
    int count_odds = 0;
    int average = 0;

    printf("Total of: ");
    // calculate the total of odd numbers AND count the number of odd numbers
    while(counter <= 10){
        if(counter % 2 != 0){
            total_odd = total_odd + counter;
            count_odds = count_odds + 1;
            printf("%d ", counter);
        } 
        counter = counter + 1;
    }

    average = total_odd / count_odds;

    printf("\nTotal of the odd numbers from 1 to 10: %d\n", total_odd);
    printf("The average of %d odd numbers: %d / %d = %d \n", count_odds, total_odd, count_odds, average);

    return 0;
}

