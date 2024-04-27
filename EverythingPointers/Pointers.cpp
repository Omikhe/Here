#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    // Define a pointer variable
    int *pNumber = nullptr;

    // Assign the address of a variable to a pointer
    pNumber = &number;

    // Access the value at the address available in the pointer variable
    // The asteriks * in this case is a dereference operator
    cout << "Your number is: " << *pNumber << endl;

    // Re-assigning using dereference
    *pNumber = 3;
    cout << "New value: " << number << endl;

    return 0;
}