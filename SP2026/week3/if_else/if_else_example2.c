#include<stdio.h>

int main(){

    int grade = 80;

    if(grade>=60){
        printf("Letter grade is D\n");
    }
    else if(grade>=70){
        printf("Letter grade is C\n");
    }
    else if(grade>=80){
        printf("Letter grade is B\n");
    }
    else if(grade>=90){
        printf("Letter grade is A\n");
    } 
    else {
        printf("Letter is F\n");
    }

    return 0;
}

