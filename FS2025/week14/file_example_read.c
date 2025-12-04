#include<stdio.h>

int main(){

    int student_id;
    char name[30];
    char last_name[30];
    double gpa;

    FILE *filePtr;

    if((filePtr = fopen("students.txt","r")) == NULL){
        printf("File could not be opened\n");
    } 
    else {
        printf("ID \t Name \t Last Name \t gpa \n");
        
        while(!feof(filePtr)){
            fscanf(filePtr, "%d%s%s%lf", &student_id, name, last_name, &gpa);
            printf("%d \t %s \t %s \t %lf \n", student_id, name, last_name, gpa);
            //fscanf(filePtr, "%d%s%s%lf", &student_id, name, last_name, &gpa);
        }
        fclose(filePtr);
    }

    return 0;
}