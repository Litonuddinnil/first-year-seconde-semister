#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    //constructor
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }
    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }

    // Function to display the type of triangle
    void displayType() {
        if (isEquilateral()) {
            cout << "The triangle is equilateral." << endl;
        }
        else if (isIsosceles()) {
            cout << "The triangle is isosceles." << endl;
        }
        else if (isScalene()) {
            cout << "The triangle is scalene." << endl;
        }
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle t(s1, s2, s3);

    // Display the type of triangle
    t.displayType();

    return 0;
}
