#include<stdio.h>

int main(){

    printf("Counter post incremented: \n");
    int sum = 0;
    for(int counter = 1; counter <= 10; counter++){
        printf("Counter: %d ", counter);
        sum += counter;
        printf("Sum: %d\n", sum);
    }

    printf("\n");

    printf("Counter pre incremented: \n");
    for(int counter = 1, sum = 0; counter <= 10; ++counter){
        printf("Counter: %d ", counter);
        sum += counter;
        printf("Sum: %d\n", sum);
    }

    printf("\n");

    printf("Sum calculated, then counter post incremented: \n");
    for(int counter = 1, sum = 0; counter <= 10; sum += counter, counter++){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("Final Sum: %d\n", sum);

    printf("\n");

    printf("Sum calculated, then counter pre incremented: \n");
    for(int counter = 1, sum = 0; counter <= 10; sum += counter, counter++){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("Final Sum: %d\n", sum);

    printf("\n");

    printf("Counter post incremented, then sum calculated: \n");
    for(int counter = 1, sum = 0; counter <= 10; counter++, sum += counter){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("Final Sum: %d\n", sum);

    printf("\n");

    printf("Counter pre incremented, then sum calculated: \n");
    for(int counter = 1, sum = 0; counter <= 10; ++counter, sum += counter){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("Final Sum: %d\n", sum);

    printf("\n");    

    printf("Counter pre incremented and sum calculated in a single expression: \n");
    for(int counter = 1, sum = 0; counter <= 10; sum += ++counter){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("Final Sum: %d\n", sum);

    printf("\n");    

    printf("Counter post incremented and sum calculated in a single expression: \n");
    for(int counter = 1, sum = 0; counter <= 10; sum += counter++){
        printf("Counter: %d, ", counter);
        printf("Sum: %d\n", sum);
    }
    printf("Final Sum: %d\n", sum);

    printf("\n");

    for(int counter = 1, sum = 0; counter <= 10; sum += counter++, printf("Sum: %d \n", sum)){
        printf("Counter: %d, ", counter);
        //printf("Sum: %d\n", sum);
    }


    return 0;
}