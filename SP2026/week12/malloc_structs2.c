#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {
    char city[50];
    int zip;
};

struct Person {
    char name[50];
    int age;
    struct Address *address;
};

int main(void) {
    struct Person *p = malloc(sizeof(struct Person));

    if (p == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    p->address = malloc(sizeof(struct Address));

    if (p->address == NULL) {
        printf("malloc failed\n");
        free(p);
        return 1;
    }

    strcpy(p->name, "Bob");
    p->age = 30;

    strcpy(p->address->city, "Chicago");
    p->address->zip = 60601;

    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("City: %s\n", p->address->city);
    printf("ZIP: %d\n", p->address->zip);

    free(p->address);
    free(p);

    return 0;
}