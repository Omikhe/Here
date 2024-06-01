#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
    // radius data field
    double radius;

    // constructor a default circle object
    Circle();

    // constructor
    Circle(double);

    // public member function to get the area of the circle
    double getArea();

}; // must place semicolon here

#endif