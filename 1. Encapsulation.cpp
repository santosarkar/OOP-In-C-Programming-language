// Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data within a single unit, such as a class. Access to the data is restricted by using access specifiers.


#include <iostream> // Including the input-output stream library
using namespace std; // Using the standard namespace

class Employee {
private: // Private members are hidden from outside access
    string name; // Employee's name
    int age; // Employee's age
    double salary; // Employee's salary

public: // Public members can be accessed outside the class
    // Constructor to initialize data members
    Employee(string n, int a, double s) : name(n), age(a), salary(s) {}

    // Getter for name
    string getName() {
        return name; // Return the name
    }

    // Getter for age
    int getAge() {
        return age; // Return the age
    }

    // Setter for name
    void setName(string n) {
        name = n; // Set the name
    }

    // Setter for age
    void setAge(int a) {
        if (a > 0) { // Ensure valid age
            age = a; // Set the age
        }
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl; // Output employee details
    }
};

int main() {
    Employee emp("John Doe", 30, 50000); // Creating an Employee object
    emp.display(); // Display employee information

    emp.setName("Jane Doe"); // Changing the name using setter
    emp.setAge(25); // Changing the age using setter
    emp.display(); // Display updated information

    return 0; // Returning 0 to indicate successful execution
}
