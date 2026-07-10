#include<stdio.h>

#define STUDENTS 2
#define GRADES 3

float average(int studentGrades[], int grades);
int max(int studentGrades[], int grades);
int min(int studentGrades[], int grades);

int changeGrade(int gradebook[][GRADES], int studentID, int examID, int newGrade);

int printGradeBook(int gradebook[][GRADES], int students, int grades);