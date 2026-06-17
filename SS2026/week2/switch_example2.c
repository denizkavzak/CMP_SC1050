#include<stdio.h>
/*
This program takes in 5 survey results
1,2 or 3, counts each.
*/
int main(){

    int response;
    int ones = 0, twos = 0, threes = 0;

    for (int i = 0; i < 5; )
    {
        printf("Enter response:\n");
        scanf("%d",&response);
        
        switch(response){
            case 1:
                ones++;
                printf("1 entered!\n");
                i++;
                break;
            default:
                printf("you entered a wrong value, this value is skipped\n");
                break;
            case 2:
                twos++;
                printf("2 entered!\n");
                i++;
                break;
            case 3:
                threes++;
                printf("3 entered!\n");
                i++;
                break;
        }
    }
    
    printf("ones:%d, twos:%d, threes:%d\n",ones,twos,threes);

    return 0;
}