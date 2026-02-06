#include<stdio.h>

int main(){

    // Find the first 3 product that is greater than 100
    int product = 3;

    while(product <= 100){
        printf("Product before multiplication is: %d\n", product); 
        product = product * 3; // increment
        printf("Product after multiplication is: %d\n", product); 
    }

    // product is 3, if (3 <= 100) TRUE, go into loop, product = 3 * 3; new product value is 9
    // product is 9, if (9 <= 100) TRUE, go into loop, product = 9 * 3; new product value is 27; 
    // product is 27, if (27 <= 100) TRUE, go into loop, product = 27 * 3; new product value is 81; 
    // product is 81, if (81 <= 100) TRUE, go into loop, product = 82 * 3; new product value is 243; 
    // product is 243, if (243 <= 100) FALSE, go outside of the loop

    //printf("Product is: %d\n", product);

    return 0;
}