#include <stdio.h>

struct Rectangle
{
    double width;
    double height;
};

double calculateArea(struct Rectangle rectangle)
{
    rectangle.width = rectangle.height;
    return rectangle.width * rectangle.height;
}

void printRectangle(struct Rectangle rectangle)
{
    printf("%.1f x %.1f\n",
           rectangle.width, rectangle.height);
}

int main(void)
{
    struct Rectangle room = {12.5, 10.0};

    printRectangle(room);
    printf("Area: %.2f\n", calculateArea(room));

    return 0;
}