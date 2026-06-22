#include <stdio.h>

/*Declaration = prototype
Definition = full function
Implementation = actual logic*/

// Declaration
int add(int, int);

// main function
int main()
{
    int result = add(3, 4);
    printf("%d", result);
    return 0;
}

// Definition + Implementation
int add(int a, int b)
{
    return a + b;
}