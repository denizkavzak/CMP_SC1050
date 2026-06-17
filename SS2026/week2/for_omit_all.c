#include<stdio.h>

/*
for(initialization ; condition ; update)
Missing initialization → nothing happens before the loop starts.
Missing condition → condition is always true.
Missing update → nothing happens automatically after each iteration.
All three may be omitted. Only the semicolons are required.
*/

int main(){

    // example 1
    for(;;) // infinite loop, same as while(1)
    {
        printf("Hello\n");
    }

    // example 2
    int i = 0;
    for(; i < 10 ;) // update is missing, init is missing but handled outside
    {
        printf("%d\n", i);
    }    

    // example 3
    int i = 0;
    for(;; i++) // condition omitted, always true
    {
        printf("%d\n", i);
    }    

    // example 4
    for(i = 0;; i++) // infinite loop
    {
        printf("%d\n", i);
    }

    // example 5
    int j; // undefined behavior
    for(; j < 10; j++) // no init
    {
        printf("%d\n", j);
    }

    // example 6
    for(i = 0; ;) // infinite loop
    {
        printf("%d\n", i);
        i++;
    }

    // example 7
    for(i = 0; i < 10; ) // update is handled in the loop
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}