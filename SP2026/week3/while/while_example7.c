#include<stdio.h>

int main(){

    int counter = 1;
    int item_price;
    int total_price = 0;
    int average_price;

    // read 3 item prices
    while(counter <= 3){
        printf("Enter an item price: ");
        scanf("%d", &item_price);
        //printf("\n");
        total_price = total_price + item_price;
        counter = counter + 1;
    }

    average_price = total_price / 3;

    printf("Average price: %d\n", average_price);

    return 0;
}