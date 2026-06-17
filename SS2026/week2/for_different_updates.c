#include<stdio.h>

int main(){

    for (int i = 0; i < 50; i+=2)
    {
        printf("%d \n",i);
    }
    printf("\n");
    for (int i = 50; i > 0; i-=5)
    {
        printf("%d \n",i);
    }
    
    printf("\n");
    for (int i = 1; i < 25; i*=2)
    {
        printf("%d \n",i);
    }
    
    return 0;

}