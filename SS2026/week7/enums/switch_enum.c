#include<stdio.h>

enum Status
{
    SUCCESS = 0,
    WARNING = 1,
    RETRY_NEEDED = 1,
    FAILURE = 2
};

int main(){

    enum Status status;

    switch (status)
    {
    case WARNING: // equivalent to case 1:
        printf("Warning\n");
        break;

    //case RETRY_NEEDED: // invalid because it is case 1: second time
    //    printf("Retry needed\n");
    //    break;

    /* can combine both under one case
    case WARNING:
        printf("Warning or retry needed\n");
        break;    
    */


    }
}