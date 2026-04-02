#include "lab9.h"

int main(void)
{
    int water1[] = {250, 180, -20, 600, 210};
    int water2[] = {50, 75, 100};

    printf("Well-watered days: %d\n", countWellWatered(water1, 5));
    printf("Maximum water: %d\n", maxWater(water1, 5));
    printf("Average water: %.2f\n", averageWater(water1, 5));
    printf("Overwatered present: %d\n", hasOverwatered(water1, 5));
    printf("Arrays analyzed: %d\n", arraysAnalyzed());

    printf("\n");

    printf("Well-watered days: %d\n", countWellWatered(water2, 3));
    printf("Maximum water: %d\n", maxWater(water2, 3));
    printf("Average water: %.2f\n", averageWater(water2, 3));
    printf("Overwatered present: %d\n", hasOverwatered(water2, 3));
    printf("Above average: %d\n", countAboveAverageWater(water2, 3));
    printf("Arrays analyzed: %d\n", arraysAnalyzed());

    return 0;
}