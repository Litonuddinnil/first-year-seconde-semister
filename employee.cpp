#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor  
    Employee(string empName, int empID, double baseSalary) {
        name = empName;
        employeeID = empID;
        salary = baseSalary;
    }

    void setSalaryBasedOnPerformance(char performanceGrade) {
        if (performanceGrade == 'A') {
            salary *= 1.20;  // 20% increase for A performance
        } else if (performanceGrade == 'B') {
            salary *= 1.10;  // 10% increase for B performance
        } else if (performanceGrade == 'C') {
            salary *= 1.05;  // 5% increase for C performance
        } else {
            cout << "No salary increase for performance grade lower than C." << endl;
        }
    }

    // Function to display employee details
    void displayEmployeeInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("John Doe", 101, 50000);
 
    cout << "Initial Employee Details:" << endl;
    emp.displayEmployeeInfo();
 
    char performanceGrade;
    cout << "\nEnter performance grade (A/B/C/D): ";
    cin >> performanceGrade;
    emp.setSalaryBasedOnPerformance(performanceGrade);

    // Display updated employee details
    cout << "\nUpdated Employee Details:" << endl;
    emp.displayEmployeeInfo();
    return 0;
}
