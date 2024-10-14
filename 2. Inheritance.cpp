// Inheritance allows a class to derive properties and methods from another class. This helps to create a hierarchical structure and reuse code.



#include <iostream> // Including the input-output stream library
using namespace std; // Using the standard namespace

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl; // Output message
    }
};

// Derived class
class Car : public Vehicle { // Car inherits from Vehicle
public:
    void drive() {
        cout << "Car is driving" << endl; // Output message
    }
};

int main() {
    Car myCar; // Creating an object of derived class Car
    myCar.start(); // Calling function from base class
    myCar.drive(); // Calling function from derived class

    return 0; // Returning 0 to indicate successful execution
}
