#include<stdio.h>

int main(){

    for(int counter = -25; counter <= 25; counter++){
        if(counter < 0 && counter % 4 == 0){
            printf("\nCounter %d is a Negative multiplier of 4\n", counter);
        }else if(counter >= 0 && counter % 4 == 0){
            printf("\nCounter %d is a Positive multiplier of 4\n", counter);
        }
        printf("%d ", counter);
    }

    return 0;
}

