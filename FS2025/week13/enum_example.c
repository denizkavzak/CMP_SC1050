#include <stdio.h>
#include <stdlib.h>   // for rand, srand
#include <time.h>     // for time (seeding rand)

enum color{
    RED, GREEN, BLUE,
    COLOR_COUNT   // automatically equals number of members
};

typedef enum color Color;

// print n number of colors randomly selected
void print_random_colors(int number);
const char* colorToString(Color c);


int main(){
    
    // Seed the random number generator
    srand(time(NULL));

    print_random_colors(10);   // example: print 10 random colors

    return 0;

}

void print_random_colors(int number){

    for (int i = 0; i < number; i++)
    {
        // rand() % COLOR_COUNT gives 0, 1, or 2
        Color rand_color = (Color)(rand() % COLOR_COUNT); // type casting to Color

        printf("%d: Randomly selected color: %s\n", i + 1, colorToString(rand_color));
    }
}

const char* colorToString(Color c) {
    switch (c) {
        case RED:   return "RED";
        case GREEN: return "GREEN";
        case BLUE:  return "BLUE";
        default:    return "UNKNOWN";
    }
}