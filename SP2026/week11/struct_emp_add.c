#include <stdio.h>
#include <string.h>

typedef struct {
    char city[20];
    int zipCode;
} Address;

typedef struct {
    char name[20];
    int id;
    Address address;
} Employee;

int main(void) {
    Employee e = {"Maya", 101, {"Columbia", 65201}};

    printf("%s lives in %s, %d\n",
           e.name, e.address.city, e.address.zipCode);

    strcpy(e.address.city, "St. Louis");
    e.address.zipCode = 63101;

    printf("%s now lives in %s, %d\n",
           e.name, e.address.city, e.address.zipCode);

    return 0;
}