#include <stdio.h>

struct Point
{
    int x;
    int y;
};

struct Point createPoint(int x, int y)
{
    struct Point result;

    result.x = x;
    result.y = y;

    return result;
}

struct Point movePoint(struct Point point, int dx, int dy)
{
    point.x += dx;
    point.y += dy;

    return point;
}

int main(void)
{
    struct Point location = createPoint(10, 20);

    location = movePoint(location, 3, -5);

    printf("Location: (%d, %d)\n",
           location.x, location.y);

    return 0;
}