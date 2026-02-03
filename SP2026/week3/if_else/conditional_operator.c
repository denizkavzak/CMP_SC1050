#include<stdio.h>

int main(){

    int grade = 80;

    if(grade>=60){
        printf( "Passed\n" );
    } else{
        printf( "Failed\n" );
    }

    // printf( " the usual printf syntax " , condition ? 
    // do this if condition is true : do this if the condition is false );
    printf("%s\n", grade >= 60 ? "Passed" : "Failed" );

    // condition ? do this if condition is true : do this if condition is false
    /* Print the result again using the conditional operator with no additional parameter in printf */
    grade >= 60 ? printf( "Passed\n" ) :  printf( "Failed\n" );

    // condition ? do this if condition is true : do this if condition is false
    /* Print the result again using the conditional operator with additional parameter in printf */
    grade >= 60 ? printf("Grade %d: %s\n", grade, "Passed") 
    : printf("Grade: %d: %s\n", grade, "Failed");

    return 0;
}