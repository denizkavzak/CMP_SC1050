#include<stdio.h>
/* This program will take num_of_elements integer values
from the user and count the number of even and odd numbers.
*/
int main(){
    int num_of_elements, num, counter = 1, counter_even = 0, counter_odd = 0;  
    
    printf("Enter num_of_elements: \n");
    scanf("%d", &num_of_elements);
    
    while(counter <= num_of_elements){
        printf("Enter a number: \n");
        scanf("%d", &num);

        if(num % 2 == 0){
            counter_even = counter_even + 1;
        }else{
            counter_odd = counter_odd + 1;
        }
        counter = counter + 1;
    }
    printf("Count of even numbers: %d\n", counter_even);
    printf("Count of odd numbers: %d\n", counter_odd);

    return 0;
}