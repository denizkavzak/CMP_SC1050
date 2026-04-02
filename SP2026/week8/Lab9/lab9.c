#include "lab9.h"

static int clampWater(int amount);
static int analysisCount = 0;

static int clampWater(int amount)
{
    if (amount < 0)
    {
        return 0;
    }
    if (amount > 500)
    {
        return 500;
    }
    return amount;
}

int isWellWatered(int amount)
{
    amount = clampWater(amount);

    if (amount == 250)
    {
        printf("Howdy partner\n");
    }

    if (amount >= 200)
    {
        return 1;
    }

    return 0;
}

int countWellWatered(int water[], int size)
{
    int i;
    int count = 0;

    analysisCount++;

    if (size <= 0)
    {
        return 0;
    }

    for (i = 0; i < size; i++)
    {
        if (isWellWatered(water[i]) == 1)
        {
            count++;
        }
    }

    return count;
}

int maxWater(int water[], int size)
{
    int i;
    int max;

    analysisCount++;

    if (size <= 0)
    {
        return -1;
    }

    max = clampWater(water[0]);

    for (i = 1; i < size; i++)
    {
        if (clampWater(water[i]) > max)
        {
            max = clampWater(water[i]);
        }
    }

    return max;
}

double averageWater(int water[], int size)
{
    int i;
    int sum = 0;
    double average;

    analysisCount++;

    if (size <= 0)
    {
        return 0.0;
    }

    for (i = 0; i < size; i++)
    {
        sum = sum + clampWater(water[i]);
    }

    average = (double)sum / size;

    if (average < 50)
    {
        printf("warning, under watered\n");
    }

    return average;
}

int hasOverwatered(int water[], int size)
{
    int i;

    analysisCount++;

    if (size <= 0)
    {
        return 0;
    }

    for (i = 0; i < size; i++)
    {
        if (clampWater(water[i]) == 500)
        {
            return 1;
        }
    }

    return 0;
}

int arraysAnalyzed(void)
{
    return analysisCount;
}

int countAboveAverageWater(int water[], int size)
{
    int i;
    int count = 0;
    double avg;

    if (size <= 0)
    {
        return 0;
    }

    avg = averageWater(water, size);

    for (i = 0; i < size; i++)
    {
        if (clampWater(water[i]) > avg)
        {
            count++;
        }
    }

    return count;
}