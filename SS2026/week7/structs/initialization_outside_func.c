#include <stdio.h>

struct Sensor
{
    int id;
    double reading;
    int *data;
};

struct Sensor sensor;  // Defined outside any function
/*
sensor.id       // 0
sensor.reading  // 0.0
sensor.data     // null pointer
*/

// it also applies to arrays
struct Sensor sensors[10];

int main(void)
{
    printf("%d\n", sensor.id);
    printf("%.1f\n", sensor.reading);
    printf("%p\n", (void *)sensor.data);

    return 0;
}