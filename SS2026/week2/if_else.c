#include<stdio.h>
/*
This program takes in 5 survey results
1,2 or 3, counts each.
*/
int main(){

    int response;
    int ones = 0, twos = 0, threes = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter response:\n");
        scanf("%d",&response);
        
        if(response == 1){
            ones++;
        }else if(response == 2){
            twos++;
        }else if(response == 3){
            threes++;
        }else{
            printf("you entered a wrong value, this value is skipped\n");
        }
    }
    
    printf("ones:%d, twos:%d, threes:%d\n",ones,twos,threes);

    return 0;
}