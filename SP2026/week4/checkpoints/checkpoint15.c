#include<stdio.h>

int main(){

    int mult = 1;
    for(int counter = 1; counter != 3; mult*=counter, counter++){
        printf("%d ", counter);
        //counter++; 
        //mult*=counter;
    }
    printf("\nMultiplication: %d\n", mult);

    printf("\n");

    return 0;
}


