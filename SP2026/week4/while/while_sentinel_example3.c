#include<stdio.h>

int main(){

    int counter = 0; // no price entered yet
    int item_price;
    float total_price = 0;

    // take the first input from the user
    // if the user doesn't want to enter any valid inputs
    // they can enter -1 and exit immediately
    printf("Enter an item price: (-1 to exit): ");
    scanf("%d", &item_price);

    // read prices until user enters -1
    while(item_price != -1){
        total_price = total_price + item_price;
        counter = counter + 1;
                
        printf("Enter an item price: (-1 to exit): ");
        scanf("%d", &item_price);
    }

    printf("Total price: %f\n", total_price);
    printf("Counter: %d\n", counter);
    printf("Average price is: %.2f\n", ((float)total_price)/counter);

    return 0;
}
