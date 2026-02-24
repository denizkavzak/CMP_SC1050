#include<stdio.h>

int main(){

    for(int counter = 0; counter <= 10; counter += 3){
        printf("%d ", counter);
    }
    printf("\n");

    for(int counter = 10; counter > 0; counter -= 4){
        printf("%d ", counter);
    }
    printf("\n");

    int x = 5;
    for(int counter = 1; counter < x*100; counter *= 10){
        printf("%d ", counter);
    }
    printf("\n");

    return 0;
}
    
