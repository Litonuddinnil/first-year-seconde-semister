#include <iostream>
#include <cmath> 

using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual functions to be overridden by derived classes
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.1416 * radius * radius;
    }

    double perimeter() override {
        return 2 * 3.1416 * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }

    double perimeter() override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double a, b, c;  // Sides of the triangle

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() override {
        return a + b + c;
    }
};

int main() {
    Shape* shape;

    // Circle with radius 5
    shape = new Circle(5);
    cout << "Circle Area: " << shape->area() << endl;
    cout << "Circle Perimeter: " << shape->perimeter() << endl;
    delete shape;

    // Rectangle with length 4 and width 6
    shape = new Rectangle(4, 6);
    cout << "Rectangle Area: " << shape->area() << endl;
    cout << "Rectangle Perimeter: " << shape->perimeter() << endl;
    delete shape;

    // Triangle with sides 3, 4, 5
    shape = new Triangle(3, 4, 5);
    cout << "Triangle Area: " << shape->area() << endl;
    cout << "Triangle Perimeter: " << shape->perimeter() << endl;
    delete shape;

    return 0;
}
