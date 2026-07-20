#include <stdio.h>
#include <string.h>

struct Product
{
    int productId;
    char name[30];
    //char *name;
    double price;
    int quantity;
};

int main(void)
{
    // initialize members
    struct Product item = {
        101,
        "Wireless Mouse",
        24.99,
        8
    };

    struct Product item2;

    item2.productId = 102;
    //item2.name = "Wireless Keyboard";
    strcpy(item2.name,"Wireless Keyboard");
    //not allowed after it is declared
    // item2 = {
    //     102,
    //     "Wireless Keyboard",
    //     44.99,
    //     5
    // };


    printf("%s\n", item.name);
    printf("Unit price: $%.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);
    printf("Inventory value: $%.2f\n",
           item.price * item.quantity);

    return 0;
}