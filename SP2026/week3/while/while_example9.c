#include<stdio.h>

int main(){

    int counter = 1;
    int temperature, min, max, total;

    printf("Enter an item price: ");
    scanf("%d", &temperature);

    min = max = temperature;
    counter = counter + 1;

    // read 3 temperature values, find max and min
    // calculate the average of temperatures
    while(counter <= 3){
        printf("Enter an item price: ");
        scanf("%d", &temperature);
        total = total + temperature;
        if(temperature > max){
            max = temperature;
        } else{
            min = temperature;
        }
        counter = counter + 1;
    }

    printf("Min temperature: %d\n", min);
    printf("Max temperature: %d\n", max);
    printf("Average temperature: %d\n", total/3);

    return 0;
}

