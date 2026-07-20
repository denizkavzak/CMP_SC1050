#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct product{
    int ID;
    char name[20];
    double price;
    int quantity;
}Product;

void printProduct(Product item){
    printf("ID: %d, name = %s, price = %.2f, quantity = %d\n",
    item.ID, item.name, item.price, item.quantity);
}

int compareProducts(Product item1, Product item2){
    if(item1.ID == item2.ID){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    Product products[SIZE];
    //Product *arrPtr = products;
    // *(arrPtr+2) // ptr offsetting

    Product item1 = {100, "Keyboard", 24.5, 8};
    Product item2 = {200, "Mouse", 14.9, 5};
    Product item3 = {300, "Monitor", 99.9, 2};

    products[0] = item1;
    products[1] = item2;
    products[2] = item3;

    for (size_t i = 0; i < SIZE; i++)
    {
        printProduct(products[i]);
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        if(products[i].ID == 300){
            printf("Found!\n");    
        }        
    }
  
    for (size_t i = 0; i < SIZE; i++)
    {
        if(strcmp(products[i].name, "Mouse") == 0){
            printf("Found!\n");    
        }        
    }    

    for (size_t i = 0; i < SIZE; i++)
    {
        if(products[i].quantity < 5){
            printf("Item ID: %d needs restocking, only %d left\n",
            products[i].ID, products[i].quantity);
        }
    }
    
    return 0;
}