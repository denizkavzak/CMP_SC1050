#include<stdio.h>

typedef struct student Student;

struct student{
    int ID;
    char *name;
    char *lastname;
    float gpa;
};

void printStudent(Student st);

int main(){

    Student st1, st2, st3;
    Student student_array[] = {st1, st2, st3};

    st1.ID = 1;
    st1.name = "Deniz";
    st1.lastname = "Kavzak";
    st1.gpa = 3.5;

    printStudent(st1);
    printf("ID: %d and Name: %s", st1.ID, st1.name);

    st2.ID = 2;
    st2.name = "Ekincan";
    st2.lastname = "Ufuktepe";
    st2.gpa = 3.7;
    
    printStudent(st2);

    st3.ID = 3;
    st3.name = "Emma";
    st3.lastname = "Ufuktepe";
    st3.gpa = 3.0;

    printStudent(st3);

    return 0;
}

void printStudent(Student st)
{
    printf("Student ID: %d\n", st.ID);
    printf("Student name: %s\n", st.name);
    printf("Student last name: %s\n", st.lastname);
    printf("Student gpa: %.2f\n\n", st.gpa);
}
