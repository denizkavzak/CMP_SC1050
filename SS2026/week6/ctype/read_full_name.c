#include <stdio.h>
#include <string.h>
/*
This program reads a full name with fgets
*/
int main(void)
{
    char name[40];

    printf("Enter your full name: ");

    if (fgets(name, sizeof(name), stdin) != NULL)
    {
        // finds the newline stored by fgets and 
        // replaces it with the null character.
        name[strcspn(name, "\n")] = '\0';
        printf("Hello, %s!\n", name);
    }

    return 0;
}