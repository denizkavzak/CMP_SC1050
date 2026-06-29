#include <stdio.h>
/*
Generate unique receipt numbers.
*/
int nextReceiptNumber()
{
    static int receipt = 1000;

    receipt++;
    return receipt;
}

int main()
{
    printf("Receipt #%d\n", nextReceiptNumber());
    printf("Receipt #%d\n", nextReceiptNumber());
    printf("Receipt #%d\n", nextReceiptNumber());

    return 0;
}