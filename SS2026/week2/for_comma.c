#include<stdio.h>
/*
This program gives an example of comma
operator usage in for loop update
*/
int main(){

    printf("Example 1: \n");
    for (int i = 0,j = 0; i < 10; i++, j=i)
    {
        printf("i = %d, j = %d\n", i, j);
    }
    printf("\n");

    printf("Example 1 order change: \n");
    for (int i = 0,j = 0; i < 10; j=i, i++)
    {
        printf("i = %d, j = %d\n", i, j);
    }
    printf("\n");    

    printf("Example 2: \n");
    for(int i = 0, j = 10; i < j; i++, j--)
    {
        printf("%d %d\n", i, j);
    }    
    printf("\n");

    printf("Example 3 pre-increment: \n");
    for (int i = 0,j = 0; i < 10; j = ++i)
    {
        printf("i = %d, j = %d\n", i, j);
    }
    printf("\n");

    printf("Example 4 post-increment: \n");
    for (int i = 0,j = 0; i < 10; j = i++)
    {
        printf("i = %d, j = %d\n", i, j);
    }
    printf("\n");
    
    printf("Example 5: \n");
    for (int i = 0, sum = 0; i < 10; i++, sum+=i)
    {
        printf("i = %d, sum = %d\n", i, sum);
    }
    
    return 0;
}