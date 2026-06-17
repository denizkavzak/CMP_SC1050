#include<stdio.h>
/*
This program demonstrates how pre and post increment
and decrement work by printing variations.
*/
int main(){

    int num = 5;

    printf("Initial value: %d\n", num);

    printf("Pre-incremented value: %d\n", ++num);
    printf("After Pre-increment: %d\n", num);

    num = 5;

    printf("Post-incremented value: %d\n", num++);
    printf("After Post-increment: %d\n", num);

    num = 5;
    int sum = 0;
    sum += ++num;
    printf("Sum: %d\n",sum);

    num = 5;
    sum = 0;
    sum += num++;
    printf("Sum: %d\n",sum);

    int i = 0;
    while(i++ < 10){ // loop will be executed 1 more time compared to ++i
        printf("counter: %d ",i);
    }
    printf("\n");

    i = 0;
    while(++i < 10){
        printf("counter: %d ",i);
    }
    printf("\n");
    // num = num + 1;
    // num += 1;

    // num++; //post-increment
    // ++num; //pre-increment
    // num--; //post-decrement
    // --num; //pre-decrement



    return 0;
}