#include<stdio.h>

int main(){
    
    // infinite loop
    for(int counter = 0; ; counter++)
        printf("counter: %d", counter);

    printf("\n");   
        
    // infinite loop
    for(;;) 
        printf("Empty for loop\n");
        
    // infinite loop for while
    while(1){
        printf("While loop with 1 \n");
    }

    // infinite loop for do while
    do{
        printf("Do While loop with 1 \n");
    }while(1);

    return 0;
}