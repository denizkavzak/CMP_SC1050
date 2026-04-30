#include <stdio.h>

typedef enum {
    ADD = 1,
    REMOVE = 2,
    PRINT = 3,
    QUIT = 4
} MenuChoice;

int main(void) {
    int input;

    printf("1. Add\n");
    printf("2. Remove\n");
    printf("3. Print\n");
    printf("4. Quit\n");
    printf("Choice: ");
    scanf("%d", &input);

    MenuChoice choice = input;

    switch (choice) {
        case ADD:
            printf("Adding item...\n");
            break;
        case REMOVE:
            printf("Removing item...\n");
            break;
        case PRINT:
            printf("Printing list...\n");
            break;
        case QUIT:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}