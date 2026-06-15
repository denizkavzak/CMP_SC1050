#include<stdio.h>

int main(){

    int a = 5;
    float b = 10.5;

    printf("a+b = %f\n", a+b);

    int sum = 0;
    float average;
    int counter = 1;
    printf("sum: %d\n",sum);

    while(counter<=10){
        sum = sum + counter;
        counter = counter + 1;
    }
    average = (float)sum / 10;
    printf("Avg: %f\n",average);
    return 0;
}