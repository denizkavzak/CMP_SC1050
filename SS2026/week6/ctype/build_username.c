#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
This program builds a username from first and last names
*/
int main(void)
{
    char first[20] = "Grace";
    char last[20] = "Hopper";
    char username[50] = "";
    // Why does username must have enough capacity?

    username[0] = (char) tolower((unsigned char) first[0]);
    username[1] = '\0';
    // Why is username[1] = '\0' necessary?

    // How strcat finds the end of the destination string
    strcat(username, last);

    for (int i = 0; username[i] != '\0'; i++)
    {
        username[i] =
            (char) tolower((unsigned char) username[i]);
    }

    printf("Username: %s\n", username);

    return 0;
}