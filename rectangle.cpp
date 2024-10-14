#include <iostream>
using namespace std;
 
class Rectangle {

        double length;
        double width;
    
    public:
        // Constructor to initialize length and width
        Rectangle(double l, double w) {
            length = l;
            width = w;
        }

        double calculateArea() {
            return length * width;
        }

        double calculatePerimeter() {
            return 2 * (length + width);
        }

        void displayDimensions() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.displayDimensions();
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    cout << "Perimeter of the rectangle: " << rect.calculatePerimeter() << endl;
    return 0;
}
