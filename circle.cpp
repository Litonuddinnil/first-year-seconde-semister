#include <iostream>
using namespace std;

class Circle {
 
    double radius;   

public:
    // Constructor to initialize the radius
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate the area of the circle
    double calculateArea() {
        return 3.1416 * radius * radius;  
    }

    // Member function to calculate the circumference of the circle
    double calculateCircumference() {
        return 2 * 3.1416 * radius;  
    }

    // Member function to display the radius, area, and circumference
    void displayCircleInfo() {
        // cout << fixed << setprecision(4); // Setting output precision to 4 decimal places
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() {
    double radius;

    // Ask the user for the radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create a Circle object with the user-specified radius
    Circle circle(radius);

    // Display the circle's information
    circle.displayCircleInfo();

    return 0;
}
