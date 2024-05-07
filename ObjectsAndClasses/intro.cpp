#include <iostream>

using namespace std;
class TV
{
public:
    int channel;
    int volumeLevel;
    bool on;
    TV()
    {
        channel = 1;     // default channel is 1
        volumeLevel = 1; // default volument is set to 1
        on = false;      // tv is set to off by default
    }

    void turnOn()
    {
        on = true;
    }

    void turnOff()
    {
        on = false;
    }

    void setChannel(int newChannel)
    {
        // check tv is on AND if the channel selected is not 0 and not greater than 120 (between 0 and 120)
        if (on && newChannel >= 1 && newChannel <= 120)
            channel = newChannel;
    }

    void setVolume(int newVolumeLevel)
    {
        if (on && newVolumeLevel >= 1 && newVolumeLevel <= 7)
            volumeLevel = newVolumeLevel;
    }

    void channelUp()
    {
        if (on && channel < 120)
            channel++;
    }

    void channelDown()
    {
        if (on && channel > 1)
            channel--;
    }

    void volumeUp()
    {
        if (on && volumeLevel < 7)
            volumeLevel++;
    }

    void volumeDown()
    {
        if (on && volumeLevel > 1)
            volumeLevel--;
    }
};
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
    TV tv1;
    tv1.turnOn();
    tv1.setChannel(20);
    tv1.setVolume(5);

    TV tv2;
    tv2.turnOn();
    tv2.setChannel(30);
    tv2.setVolume(7);

    cout << "tv1's channel is " << tv1.channel
         << " and volume level is " << tv1.volumeLevel << endl;

    cout << "tv2's channel is " << tv2.channel
         << " and volume level is " << tv2.volumeLevel << endl;

    // Circle seko(7.5);
    // Circle seko1(3.5);
    // Circle seko2(4.5);

    // cout << "The area of a circle of radius "
    //      << seko.radius << " is " << seko.getArea() << endl;

    // cout << "The area of a circle of radius "
    //      << seko1.radius << " is " << seko1.getArea() << endl;

    // cout << "The area of a circle of radius "
    //      << seko2.radius << " is " << seko2.getArea() << endl;

    // cout << endl;
    // cout << "seko2 radius modified! via seko2.radius = 100;" << endl;
    // cout << endl;

    // seko2.radius = 100;
    // cout << "The area of a circle of radius "
    //      << seko2.radius << " is " << seko2.getArea() << endl;

    return 0;
}