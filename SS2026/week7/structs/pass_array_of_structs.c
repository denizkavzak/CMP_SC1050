#include <stdio.h>

struct Item
{
    char name[30];
    double price;
    int quantity;
};

double calculateInventoryValue(
    const struct Item items[],
    int size)
{
    double total = 0.0;

    for (int i = 0; i < size; i++)
    {
        total += items[i].price * items[i].quantity;
    }

    return total;
}

void printLowStock(
    const struct Item items[],
    int size,
    int limit)
{
    for (int i = 0; i < size; i++)
    {
        if (items[i].quantity < limit)
        {
            printf("%s has only %d remaining.\n",
                   items[i].name,
                   items[i].quantity);
        }
    }
}

int main(void)
{
    struct Item inventory[] = {
        {"Keyboard", 39.99, 6},
        {"Mouse", 19.99, 15},
        {"Monitor", 179.99, 3},
        {"Webcam", 49.99, 8}
    };

    int size = sizeof(inventory) / sizeof(inventory[0]);

    printLowStock(inventory, size, 5);

    printf("Total value: $%.2f\n",
           calculateInventoryValue(inventory, size));

    return 0;
}