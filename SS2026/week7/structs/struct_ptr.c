#include<stdio.h>

typedef struct student{
    int id;
    char name[20];
    double gpa;
}Student;

int main(){

    Student student1 = {123, "Deniz Kavzak", 3.5};
    Student student2 = student1;
    //student2.id = student1.id;
    //strcpy(student2.name, student1.name);
    //student2.gpa = student1.gpa;

    Student *studentPtr = &student1;

    printf("ID:%d\n", studentPtr->id);
    printf("name:%s\n", studentPtr->name);
    printf("gpa:%f\n", studentPtr->gpa);

    printf("ID:%d\n", (*studentPtr).id);

    return 0;
}