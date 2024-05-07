#include "Circle.h"

// Construct a default circle object
Circle::Circle()
{
    radius = 1;
}

// Construct a default circle object
Circle::Circle(double newRadius)
{
    radius = newRadius;
}

// Return area of this circle
double Circle::getArea()
{
    return radius * radius * 3.14159;
}
