#include <stdio.h>

int main(void)
{
    int choice;

    printf("1. Add a student\n");
    printf("2. Remove a student\n");
    printf("3. Display students\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Adding a student...\n");
            break;

        case 2:
            printf("Removing a student...\n");
            break;

        case 3:
            printf("Displaying students...\n");
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}