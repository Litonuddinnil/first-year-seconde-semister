#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }
 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
 
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    // Function to display account balance
    void displayBalance() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
 
    BankAccount myAccount(12345, 1000.00);

     
    myAccount.displayBalance();

    // Deposit 500 into the account
    myAccount.deposit(500);
    myAccount.displayBalance();

    // Withdraw 200 from the account
    myAccount.withdraw(200);
    myAccount.displayBalance();

    myAccount.withdraw(2000);   

    return 0;
}
