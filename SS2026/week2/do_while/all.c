#include <stdio.h>

int main(void)
{
    int choice;
    int counter = 0;

    do
    {
        printf("\nCurrent counter: %d\n", counter);
        printf("1. Post-increment counter\n");
        printf("2. Pre-increment counter\n");
        printf("3. Reset counter\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Expression returned: %d\n", counter++);
                printf("Counter is now: %d\n", counter);
                break;

            case 2:
                printf("Expression returned: %d\n", ++counter);
                printf("Counter is now: %d\n", counter);
                break;

            case 3:
                counter = 0;
                printf("Counter reset.\n");
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 4);

    return 0;
}