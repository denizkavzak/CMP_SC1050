#include <stdio.h>

struct Product
{
    int productId;
    char name[30];
    double price;
    int quantity;
};

int main(void)
{
    struct Product item = {
        .productId = 101,
        .name = "Wireless Mouse",
        .price = 24.99,
        .quantity = 8
    };

    printf("%s\n", item.name);
    printf("Unit price: $%.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);
    printf("Inventory value: $%.2f\n",
           item.price * item.quantity);

    return 0;
}