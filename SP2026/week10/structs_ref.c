#include<stdio.h>

struct person{
    int ID;
    char *name;
    char *lastname;
    struct person * spouse;
};

int main(){

    struct person p1, p2;

    p1.ID = 1;
    p1.name = "Deniz";
    p1.lastname = "Kavzak Ufuktepe";

    p2.ID = 2;
    p2.name = "Ekincan";
    p2.lastname = "Ufuktepe";

    p1.spouse = &p2;
    p2.spouse = &p1;

    printf("Person ID: %d\n", p1.ID);
    printf("Person name: %s\n", p1.name);
    printf("Person last name: %s\n", p1.lastname);
    printf("Spouse name: %s\n", (p1.spouse)->name);

    return 0;
}