#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
This program parses a product record
using strtok
*/
int main(void)
{
    char record[] = "Keyboard,39.99,12"; // atoi to use 12 as an int

    // strtok modifies record by replacing delimiters with '\0'.
    char *name = strtok(record, ",");
    char *price = strtok(NULL, ",");
    char *quantity = strtok(NULL, ",");

    printf("Quantity as integer: %d\n", atoi(quantity));

    printf("Product: %s\n", name);
    printf("Price: %s\n", price);
    printf("Quantity: %s\n", quantity);

    return 0;
}