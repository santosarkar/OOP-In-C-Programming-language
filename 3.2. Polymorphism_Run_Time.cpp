// Polymorphism allows a function to behave differently based on the object calling it.


#include <iostream> // Including the input-output stream library
using namespace std; // Using the standard namespace

class Animal {
public:
    virtual void speak() { // Virtual function for run-time polymorphism
        cout << "Animal sound" << endl; // Output message
    }
};

class Dog : public Animal {
public:
    void speak() override { // Overriding the base class method
        cout << "Barking" << endl; // Output message
    }
};

class Cat : public Animal {
public:
    void speak() override { // Overriding the base class method
        cout << "Meowing" << endl; // Output message
    }
};

int main() {
    Animal* animal; // Base class pointer
    Dog dog; // Derived class Dog object
    Cat cat; // Derived class Cat object

    animal = &dog; // Pointing to Dog object
    animal->speak(); // Calls Dog's version of speak

    animal = &cat; // Pointing to Cat object
    animal->speak(); // Calls Cat's version of speak

    return 0; // Returning 0 to indicate successful execution
}
