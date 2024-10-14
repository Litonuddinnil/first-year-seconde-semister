#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set the values of name, age, and country
    void setName(string personName) {
        name = personName;
    }

    void setAge(int personAge) {
        age = personAge;
    }

    void setCountry(string personCountry) {
        country = personCountry;
    }

    // Function to get the values of name, age, and country
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }
};

int main() {
     
    Person person1;

    // Setting values  
    person1.setName("Liton Uddin");
    person1.setAge(22);
    person1.setCountry("Bangladesh");

    // Getting and displaying values  
    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Country: " << person1.getCountry() << endl;

    return 0;
}
