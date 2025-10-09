#include "header_file_example.h"

int main(){
    int n1, n2, n3;

    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("Entered numbers are: %d, %d, %d\n", n1, n2, n3);
    printf("Maximum of these numbers: %d\n", maximum(n1, n2, n3));
    printf("Minimum of these numbers: %d\n", minimum(n1, n2, n3));
    printf("Average of these numbers: %f\n", average(n1, n2, n3));

}