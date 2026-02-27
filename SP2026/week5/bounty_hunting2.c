#include<stdio.h>

int main(){

    int counter = 0; // possible fix: counter = 1

    for(; counter != 25; counter+=3){ // possible fix: counter != 24; or counter < 25;
        if(counter % 4 == 0){
            continue; // possible fix: break
        }
        printf("%d ", counter);
    }

    printf("\nCounter after loop: %d\n", counter);

    return 0;
}

