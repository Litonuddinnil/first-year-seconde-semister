#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    bool isValidDate() {
        // Check year range
        if (year < 1 || year > 9999) return false;

        // Check month range
        if (month < 1 || month > 12) return false;

        // Check day range based on month
        if (day < 1 || day > daysInMonth(month, year)) return false;

        return true;
    } 
    int daysInMonth(int month, int year) {
        if (month == 2) { // February
            if (isLeapYear(year)) return 29;
            else return 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30; // April, June, September, November have 30 days
        }
        else {
            return 31; // Other months have 31 days
        }
    }

    // Function to check if a year is a leap year
    bool isLeapYear(int year) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return true;
        }
        return false;
    }

    // Display the date in DD/MM/YYYY format
    void displayDate() {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }
};

int main() {
    Date date;
 
    date.setDay(29);
    date.setMonth(2);
    date.setYear(2024);
 
    date.displayDate();
 
    if (date.isValidDate()) {
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is invalid." << endl;
    }

    return 0;
}
