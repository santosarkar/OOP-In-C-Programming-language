// Polymorphism allows a function to behave differently based on the object calling it



#include <iostream> // Including the input-output stream library
using namespace std; // Using the standard namespace

class Math {
public:
    // Function overloading
    int add(int a, int b) {
        return a + b; // Return the sum of two integers
    }

    double add(double a, double b) {
        return a + b; // Return the sum of two doubles
    }
};

int main() {
    Math math; // Creating an object of class Math
    cout << "Sum of 10 and 20: " << math.add(10, 20) << endl; // Call integer version of add
    cout << "Sum of 5.5 and 3.3: " << math.add(5.5, 3.3) << endl; // Call double version of add

    return 0; // Returning 0 to indicate successful execution
}
