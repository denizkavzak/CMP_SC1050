#include<stdio.h>
/*
This program is taking positive integers from the user 
until user enters -1, and finds the sum of them.
*/
int main(){

    int num = 0, sum = 0;

    // printf("Enter positive numbers (-1 to exit):\n");
    // scanf("%d",&num);

    while(num != -1){ 
        sum = sum + num;   
        printf("Enter positive numbers (-1 to exit):\n");
        scanf("%d",&num);

        // if(num != -1){
        //     break;
        // }
        

        // if(num != -1){
        //     sum = sum + num;
        // }  
    }

    printf("sum is: %d\n", sum);
    return 0;
}