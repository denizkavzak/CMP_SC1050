#include<stdio.h>

int main(){

    int counter = 1;
    int item_price;

    int min, max;

    printf("Enter an item price: ");
    scanf("%d", &item_price);

    // set the first entered price as min and 
    // max to be used in comparisons
    min = max = item_price;
    counter = counter + 1;

    // read 3 item prices, find max and min
    while(counter <= 3){
        printf("Enter an item price: ");
        scanf("%d", &item_price);
        //printf("\n");
        if(item_price < min){
            min = item_price;
        }
        else{
            max = item_price;
        }

        counter = counter + 1;
    }

    printf("Min price: %d\n", min);
    printf("Max price: %d\n", max);

    return 0;
}