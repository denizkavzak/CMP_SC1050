#include <stdio.h>

struct Sensor
{
    int id;
    double reading;
    int *data;
};

void function(void)
{
    // reminder: static variable in a function is
    // initialized to 0 automatically
    static struct Sensor sensor;
}

int main(void)
{

    struct Sensor sensor;  // Defined inside a function
    // struct Sensor sensor = {0}; // initialize safely

    printf("%d\n", sensor.id); // undefined behavior

    return 0;
}