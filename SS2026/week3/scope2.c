#include<stdio.h>

int x = 100;

int main(){

    printf("%d\n",x);
    int x = 1;
    printf("%d\n",x);
    {
        int x = 5; 
        printf("%d\n",x);
        {
            int x = -1;
            printf("%d\n",x);
        }
        printf("%d\n",x);
    }
    printf("%d\n",x);

    int i = 100;
    printf("%d\n",i);
    for(int i = 10; i>0; i--){
        printf("%d\n",i);
    }
    printf("%d\n",i);
    
    return 0;
}