// Abstraction hides the implementation details and shows only the essential features of an object. This is typically achieved using abstract classes and interfaces (pure virtual functions).



#include <iostream> // Including the input-output stream library
using namespace std; // Using the standard namespace

class Shape { // Abstract base class
public:
    virtual double area() = 0; // Pure virtual function for area
    virtual double perimeter() = 0; // Pure virtual function for perimeter
};

class Rectangle : public Shape {
private:
    double length; // Length of the rectangle
    double width; // Width of the rectangle

public:
    Rectangle(double l, double w) : length(l), width(w) {} // Constructor to initialize length and width

    double area() override { // Override area function
        return length * width; // Return the area of the rectangle
    }

    double perimeter() override { // Override perimeter function
        return 2 * (length + width); // Return the perimeter of the rectangle
    }
};

class Circle : public Shape {
private:
    double radius; // Radius of the circle

public:
    Circle(double r) : radius(r) {} // Constructor to initialize radius

    double area() override { // Override area function
        return 3.14159 * radius * radius; // Return the area of the circle
    }

    double perimeter() override { // Override perimeter function
        return 2 * 3.14159 * radius; // Return the circumference of the circle
    }
};

int main() {
    Shape* shape1 = new Rectangle(10, 5); // Creating a Rectangle object using Shape pointer
    Shape* shape2 = new Circle(7); // Creating a Circle object using Shape pointer

    cout << "Rectangle Area: " << shape1->area() << endl; // Output area of the rectangle
    cout << "Rectangle Perimeter: " << shape1->perimeter() << endl; // Output perimeter of the rectangle

    cout << "Circle Area: " << shape2->area() << endl; // Output area of the circle
    cout << "Circle Perimeter: " << shape2->perimeter() << endl; // Output perimeter of the circle

    delete shape1; // Freeing the allocated memory
    delete shape2; // Freeing the allocated memory

    return 0; // Returning 0 to indicate successful execution
}
