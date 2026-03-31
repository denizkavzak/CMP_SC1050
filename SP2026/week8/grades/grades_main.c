#include"grades.h"

int main(){

    int gradebook[STUDENTS][GRADES];
    int grade;

    for (int i = 0; i < STUDENTS; i++)
    {
        //printf("Enter grades for the student number %d: \n", i);
        for (int j = 0; j < GRADES; j++)
        {
            printf("Enter grade %d for the student number %d: \n", j, i);
            scanf("%d", &grade);
            gradebook[i][j] = grade;
        }
    }
   
    printGradeBook(gradebook, STUDENTS, GRADES);

    printf("Average grade of student no 1 is: %f\n", average(gradebook[1], GRADES));
    printf("Max grade of student no 1 is: %d\n", max(gradebook[1], GRADES));
    printf("Min grade of student no 1 is: %d\n", min(gradebook[1], GRADES));

    changeGrade(gradebook, 1, 1, 100);
    printGradeBook(gradebook, STUDENTS, GRADES);

    return 0;
}