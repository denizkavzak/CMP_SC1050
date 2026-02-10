#include<stdio.h>

int main(){

    int counter = 1;

    for(; counter != 25; counter+=3){
        if(counter % 4 == 0){
            continue;
        }
        printf("%d ", counter);
    }

    printf("\nCounter after loop: %d\n", counter);

    return 0;
}

