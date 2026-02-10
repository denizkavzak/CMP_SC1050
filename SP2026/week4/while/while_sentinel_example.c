#include<stdio.h>

int main(){

    int counter = 0; // no price entered yet
    int item_price;
    int total_price = 0;

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

    if(counter != 0){
        printf("Counter: %d\n", counter);
        printf("Average price is: %.0f\n", (float)total_price/counter);

        printf("Total price: %d\n", total_price);
    }else{
        printf("User didn't enter any grade values\n");
    }

    // if(counter != 0) { // consider case with user entering -1 in first input
    //     average_price = (float)total_price / counter;
    //     printf("Average price: %.2f\n", average_price);
    // }

    return 0;
}
