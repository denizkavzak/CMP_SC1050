#include<stdio.h>

//typedef struct student Student;

typedef struct student{
    int ID;
    char *name;
    char *lastname;
    float gpa;
}Student;

int main(){

    Student st1; // struct student variable

    st1.ID = 1;
    st1.name = "Deniz";
    st1.lastname = "Kavzak";
    st1.gpa = 3.5;

    Student st2 = {1, "Deniz", "Kavzak", 3.5};

    Student st3 = {1, "Deniz"};
    
    printf("Student ID: %d\n", st1.ID);
    printf("Student name: %s\n", st1.name);
    printf("Student last name: %s\n", st1.lastname);
    printf("Student GPA: %.2f\n\n", st1.gpa);

    printf("Student ID: %d\n", st2.ID);
    printf("Student name: %s\n", st2.name);
    printf("Student last name: %s\n", st2.lastname);
    printf("Student GPA: %.2f\n\n", st2.gpa);

    printf("Student ID: %d\n", st3.ID);
    printf("Student name: %s\n", st3.name);
    printf("Student last name: %s\n", st3.lastname);
    printf("Student GPA: %.2f\n\n", st3.gpa);

    return 0;
}