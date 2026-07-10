#include <stdio.h>

int main(){

    int x = 5;
    int y;

    int * const ptr = &x; // ptr is const

    // because the int * is non-constant, I can change its value
    // I can change *ptr this corresponds to the value of x

    const int * const ptr2 = &x; 
    // both ptr2 and the value its pointing are const 
    // we read it as a const pointer to a const int value

    //*ptr = 7; // we can change *ptr, value of x
    //ptr = &y; // cannot change ptr, it is const

    //*ptr2 = 7; // cannot change *ptr, value of x
    //ptr2 = &y; // cannot change ptr, it is const

    return 0;

}