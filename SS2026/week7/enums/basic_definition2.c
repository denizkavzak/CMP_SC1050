#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    enum TrafficLight light = GREEN;

    if (light == GREEN)
    {
        printf("You may proceed.\n");
    }

    printf("Numeric value: %d\n", light);

    return 0;
}