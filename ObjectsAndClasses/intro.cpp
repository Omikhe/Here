#include <iostream>

using namespace std;
class Circle
{
public:
    // radius data field
    double radius;

    // constructor
    Circle()
    {
        radius = 1;
    }

    // constructor
    Circle(double newRadius)
    {
        radius = newRadius;
    }

    // public member function to get the area of the circle
    double getArea()
    {
        return radius * radius * 3.14159;
    }
}; // must place semicolon here

int main()
{
    Circle seko(7.5);
    Circle seko1(3.5);
    Circle seko2(4.5);

    cout << "The area of a circle of radius "
         << seko.radius << " is " << seko.getArea() << endl;

    cout << "The area of a circle of radius "
         << seko1.radius << " is " << seko1.getArea() << endl;

    cout << "The area of a circle of radius "
         << seko2.radius << " is " << seko2.getArea() << endl;

    cout << endl;
    cout << "seko2 radius modified! via seko2.radius = 100;" << endl;
    cout << endl;

    seko2.radius = 100;
    cout << "The area of a circle of radius "
         << seko2.radius << " is " << seko2.getArea() << endl;

    return 0;
}