#include <iostream>
using namespace std;
class Car {
private:
    string company;    
    string model;     
    int year;          

public:
    void setCompany(string c) {
        company = c;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }
    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }
};

int main() {
  
    Car car1;
    // Set values  
    car1.setCompany("Toyota");
    car1.setModel("Corolla");
    car1.setYear(2020);

    //display values  
    cout << "Car Details:" << endl;
    cout << "Company: " << car1.getCompany() << endl;
    cout << "Model: " << car1.getModel() << endl;
    cout << "Year: " << car1.getYear() << endl;

    return 0;
}
