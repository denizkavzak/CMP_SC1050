#include <stdio.h>

int main(void)
{
    int choice;

    do
    {
        printf("\nMenu\n");
        printf("1. Say hello\n");
        printf("2. Show a message\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Hello!\n");
                break;

            case 2:
                printf("C programming is fun.\n");
                break;

            case 3:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 3);

    return 0;
}