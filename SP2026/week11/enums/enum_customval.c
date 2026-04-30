#include <stdio.h>

typedef enum {
    LOW = 1,
    MEDIUM = 5,
    HIGH = 10
} Priority;

int main(void) {
    Priority task = HIGH;

    printf("Task priority value: %d\n", task);

    return 0;
}