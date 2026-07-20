#include<stdio.h>

enum Direction
{
    NORTH,
    EAST,
    SOUTH,
    WEST
};

void printDirection(enum Direction direction);


int main(){
    
    enum Direction direction = EAST;

    printDirection(direction);

    return 0;
}

void printDirection(enum Direction direction)
{
    switch (direction)
    {
        case NORTH:
            printf("North\n");
            break;

        case EAST:
            printf("East\n");
            break;

        case SOUTH:
            printf("South\n");
            break;

        case WEST:
            printf("West\n");
            break;
    }
}