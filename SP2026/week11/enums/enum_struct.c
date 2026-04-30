#include <stdio.h>

typedef enum {
    PART_TIME,
    FULL_TIME
} Status;

typedef struct {
    char name[20];
    Status status;
    double payRate;
} Employee;

int main(void) {
    Employee e = {"Maya", FULL_TIME, 22.50};

    printf("Name: %s\n", e.name);

    if (e.status == FULL_TIME) {
        printf("Status: Full time\n");
    } else {
        printf("Status: Part time\n");
    }

    printf("Pay rate: %.2f\n", e.payRate);

    return 0;
}