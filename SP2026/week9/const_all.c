#include <stdio.h>

int main(){

    int x = 5;
    int y = 10;

    int *ptr1 = &x; // no const

    // Read right to left:
    // const int *ptr → pointer to const int
    // int * const ptr → const pointer to int

    int * const ptr2 = &x;
    // pointer is const 
    // because the int * is not constant, I can change its value
    // I can change *ptr this corresponds to the value of x

    *ptr2 = 15;
    //ptr2 = &y; // cannot change  

    const int *ptr3 = &x; // more common
    int const *ptrc = &x; // identical
    // *ptr is const
    // ptr is not const
    // because the *ptr is constant, we cannot change the value

    //*ptr3 = 20;
    ptr3 = &y;

    const int * const ptr4 = &x; 
    int const * const ptr4c = &x; // identical
    // both ptr2 and the value its pointing are const 
    // we read it as a const pointer to a const int value

    //*ptr4 = 5;
    //ptr4 = &y;

    //*ptr = 7; // we can change *ptr, value of x
    //ptr = &y; // cannot change ptr, it is const

    //*ptr2 = 7; // cannot change *ptr, value of x
    //ptr2 = &y; // cannot change ptr, it is const

    return 0;

}