#include <stdio.h>

enum MenuChoice
{
    ADD_RECORD = 1,
    SEARCH_RECORD,
    PRINT_RECORDS,
    EXIT_PROGRAM
};

int main(void)
{
    int input;

    printf("1. Add record\n");
    printf("2. Search record\n");
    printf("3. Print records\n");
    printf("4. Exit\n");
    printf("Choice: ");
    scanf("%d", &input);

    enum MenuChoice choice = input;

    switch (choice)
    {
        case ADD_RECORD:
            printf("Adding a record...\n");
            break;

        case SEARCH_RECORD:
            printf("Searching...\n");
            break;

        case PRINT_RECORDS:
            printf("Printing records...\n");
            break;

        case EXIT_PROGRAM:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}