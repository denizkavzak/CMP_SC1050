#include<stdio.h>

int main(){

    int counter = 1;
    int total_odd = 0;

    printf("Total of: ");
    // calculate the total of odd numbers
    while(counter <= 10){
        if(counter % 2 != 0){
            total_odd = total_odd + counter;
            printf("%d ", counter);
        } 
        counter = counter + 1;
    }

    printf("\nTotal of the odd numbers from 1 to 10: %d\n", total_odd);

    return 0;
}

