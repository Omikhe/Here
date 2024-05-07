#include <iostream>
#include "Circle.h"

using namespace std;

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