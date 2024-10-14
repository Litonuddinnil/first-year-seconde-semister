#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string departmentName;
    int rollNumber;
    float marks;

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

public:
    // Member function to set student details
    void setDetails(string studentName, string studentClass, int rollNo, float studentMarks) {
        name = studentName;
        departmentName = studentClass;
        rollNumber = rollNo;
        marks = studentMarks;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << departmentName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    // Create a student object
    Student student1;

    // Set student details
    student1.setDetails("Liton Uddin", "CSE", 101, 85.5);

    // Display student details
    student1.displayDetails();

    return 0;
}
