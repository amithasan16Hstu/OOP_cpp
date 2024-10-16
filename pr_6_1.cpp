#include <iostream>
#include <string>
using namespace std;
class BankAccount {
    string depositorName;
   string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(string name, string accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Function to display name and balance
    void displayInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a bank account object using the constructor
    BankAccount myAccount("John Doe", "1234567890", "Savings", 1000.0);

    // Display initial account information
   cout << "Initial Account Information:" << endl;
    myAccount.displayInfo();

    // Perform transactions
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display updated account information
    cout << "\nUpdated Account Information:" << endl;
    myAccount.displayInfo();

    return 0;
}
