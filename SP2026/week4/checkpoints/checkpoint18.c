#include<stdio.h>

int main(){

    int counter, number;
    int found = 0;

    printf("Enter a number in between 1 to 10: ");
    scanf("%d", &number);

    for(counter = 1; counter <= 10; counter++){
        if(counter == number){
            found = 1;
            break;
        }
        printf("%d ", counter);
    }

    if(found){
        printf("\nEntered number is found");
    }
    printf("\nCounter after loop: %d\n", counter);

    return 0;
}



