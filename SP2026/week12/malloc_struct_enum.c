#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Recall: enum gives names to integer-like values
enum EmploymentStatus {
    STUDENT,
    EMPLOYED,
    UNEMPLOYED
};

struct Address {
    char city[50];
    int zip;
};

struct Person {
    char name[50];
    int age;
    enum EmploymentStatus status;
    struct Address *address;
};

int main(void) {
    struct Person *p = malloc(sizeof(struct Person));
    // struct Person *p = malloc(sizeof *p); // More generalized approach

    if (p == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    p->address = malloc(sizeof(struct Address));
    // p->address = malloc(sizeof *(p->address)); // More generalized approach

    if (p->address == NULL) {
        printf("malloc failed\n");
        free(p);
        return 1;
    }

    strcpy(p->name, "Carla");
    p->age = 22;
    p->status = STUDENT;

    strcpy(p->address->city, "Austin");
    p->address->zip = 73301;

    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("City: %s\n", p->address->city);
    printf("ZIP: %d\n", p->address->zip);

    if (p->status == STUDENT) {
        printf("Status: Student\n");
    } else if (p->status == EMPLOYED) {
        printf("Status: Employed\n");
    } else if (p->status == UNEMPLOYED) {
        printf("Status: Unemployed\n");
    }

    free(p->address);
    free(p);

    return 0;
}