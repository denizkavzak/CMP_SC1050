#include<stdio.h>

#define STUDENTS 2 // row size
#define GRADES 3 // column size

float average(int studentGrades[], int grades);
int max(int studentGrades[], int grades);
int min(int studentGrades[], int grades);

int changeGrade(int gradebook[][GRADES], int studentID, int examID, int newGrade);

int printGradeBook(int gradebook[][GRADES], int students, int grades);

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

float average(int studentGrades[], int grades)
{
    float sum = 0;
    for (int i = 0; i < grades; i++)
    {
        sum += (float)studentGrades[i];
    }
    return sum/grades;
}

int max(int studentGrades[], int grades)
{
    int max = studentGrades[0];
    for (int i = 1; i < grades; i++)
    {
        if(studentGrades[i] > max){
            max = studentGrades[i];
        }
    }
    return max;
}

int min(int studentGrades[], int grades)
{
    int min = studentGrades[0];
    for (int i = 1; i < grades; i++)
    {
        if(studentGrades[i] < min){
            min = studentGrades[i];
        }
    }
    return min;
}

int changeGrade(int gradebook[][GRADES], int studentID, int examID, int newGrade)
{
    gradebook[studentID][examID] = newGrade;
    return 1;
}

int printGradeBook(int gradebook[][GRADES], int students, int grades)
{
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < grades; j++)
        {
            printf("%d ", gradebook[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
