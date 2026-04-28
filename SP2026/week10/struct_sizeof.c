#include<stdio.h>

struct student{
    int ID;
    char *name;
    char *lastname;
    float gpa;
}st1, st2, st3;

int main(){

    //struct student st1;

    st1.ID = 1; // 4 bytes
    st1.name = "Deniz"; // size 6 bytes
    st1.lastname = "Kavzak"; // size 7 bytes
    st1.gpa = 3.5; // 4 bytes

    printf("Student ID: %d\n", st1.ID);
    printf("Student name: %s\n", st1.name);
    printf("Student last name: %s\n", st1.lastname);
    printf("Student GPA: %.2f\n", st1.gpa);

    printf("Size of a student struct: %ld\n", sizeof(struct student));
    printf("Size of a student st1: %ld\n", sizeof(st1));

    printf("Size of a student ID: %ld\n", sizeof(st1.ID));
    printf("Size of a student name: %ld\n", sizeof(st1.name));
    printf("Size of a student last name: %ld\n", sizeof(st1.lastname));
    printf("Size of a student gpa: %ld\n", sizeof(st1.gpa));

    return 0;
}