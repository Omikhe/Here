#include <iostream>
using namespace std;

class Base
{
public:
    int a;    // 4 bytes
    double b; // 8 bytes
};

class Derived : public Base
{
public:
    char c; // 1 byte
};

int main()
{
    cout << "Size of Base: " << sizeof(Base) << " bytes" << std::endl;       // Output: Size of Base: 16 bytes
    cout << "Size of Derived: " << sizeof(Derived) << " bytes" << std::endl; // Output: Size of Derived: 16 bytes (on most systems)
    return 0;
}