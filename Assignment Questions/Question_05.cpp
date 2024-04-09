/*Define a class to represent a bank account. Include the following members:
Data members
1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account
Member functions
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Write a main program to test the program*/


#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(const string& name, long accNumber, const string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 123456789, "Savings", 1000.0);

    account.deposit(500.0);

    account.withdraw(200.0);

    account.display();

    return 0;
}

