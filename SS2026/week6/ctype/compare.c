#include <stdio.h>
#include <string.h>
/*
This program compare passwords
savedPassword == enteredPassword
compares addresses, not string contents.
We need strcmp for compare correctly
*/
int main(void)
{
    char savedPassword[] = "Tiger123";
    char enteredPassword[30];

    printf("Password: ");
    scanf("%29s", enteredPassword);

    if (strcmp(savedPassword, enteredPassword) == 0)
        printf("Access granted.\n");
    else
        printf("Access denied.\n");

    return 0;
}