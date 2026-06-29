#include"static_func.h"

static void helper()
{
    printf("Helper only used inside file1.c\n");
}

void runProgram()
{
    helper();
}