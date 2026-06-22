#include"grade.h"

float avg(int grade1, int grade2, int grade3){
    return (float)(grade1 + grade2 + grade3)/3;
}

char letterGrade(float grade){
    if(grade>=90){
        return 'A';
    } else if(grade>=80){
        return 'B';
    } else if(grade>=70){
        return 'C';
    }else{
        return 'F';
    }
}