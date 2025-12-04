#include<stdio.h>

int main(){

    int employee_id;
    char name[30];
    char last_name[30];
    double salary;

    FILE *filePtr;

    if((filePtr = fopen("employees.txt","w+")) == NULL){
        printf("File could not be opened\n");
    } 
    else {
        fprintf(filePtr, "ID \t Name \t Last Name \t salary \n");
        printf("please enter employee id, name, last name and salary:\n");
        printf("Enter EOF to end input.\n");
        scanf("%d%s%s%lf",&employee_id,name,last_name,&salary);

        while(!feof(stdin)){
            printf("%d \t %s \t %s \t %lf \n", employee_id, name, last_name, salary);
            fprintf(filePtr, "%d \t %s \t %s \t %lf \n", employee_id, name, last_name, salary);
            //printf("%d \t %s \t %s \t %lf \n", employee_id, name, last_name, salary);
            printf("Enter more: \n");
            scanf("%d%s%s%lf",&employee_id,name,last_name,&salary);
            //fscanf(filePtr, "%d%s%s%lf", &student_id, name, last_name, &gpa);
        }
        fclose(filePtr);
    }

    printf("done\n");

    return 0;
}