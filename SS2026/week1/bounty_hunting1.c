#include <stdio.h>
/* This program multiplies numbers 
entered by the user*/ 
int main() {
    int n, i = 1;
    int product = 0; // bug, fix: product = 1

    printf("How many numbers? ");
    scanf("%d", &n);

    while (i <= n) {
        int value;
        printf("Enter number %d: ", i);
        scanf("%d", &value);
        product *= value;
        i++;
    }
    printf("Product = %d\n", product);
    return 0;
}

