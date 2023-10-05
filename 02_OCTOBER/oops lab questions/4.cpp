// Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and Objects.
#include<iostream>
#include<string>
using namespace std;
class Bank {
    int Balance;
    long int AccountNumber;
    string Name;
    public:
    Bank () {
        cout << "Enter Bank Details" << endl << "Name: ";
        getline(cin, this->Name);
        cout << "Account Number: ";
        cin >> this->AccountNumber;
        this->Balance = 0;       
    }
    void Deposit(int Amount) {
        if (Amount > 0) {
            this->Balance += Amount;
            cout << "Rs. " << Amount << " was deposited in Account Number: "<< this->AccountNumber << endl;
        }
        else {
            cout << "Invalid Amount Entered" << endl;
        }
    }
    void Withdraw(int Amount) {
        if (this->Balance < Amount) {
            cout << "Not enough balance" << endl;
        }
        else if (Amount < 0) {
            cout << "Invalid Amount Entered" << endl;
        }
        else {
            this->Balance -= Amount;
            cout << "Rs. " << Amount << " was withdrawn from Account Number: "<< this->AccountNumber << endl;
        }
    }
    void Details() {
        cout << "Details:" << endl << "Name: " << this->Name << endl << "Account Number: " << this->AccountNumber << endl << "Bank Balance: " << this->Balance << endl;
    }
};
int main() {
    Bank U1;
    int i;
    char c;
    cout << "Enter the amount to deposit: " << endl;
    cin >> i;
    U1.Deposit(i);
    cout << "Enter the amount to withdraw: " << endl;
    cin >> i;
    U1.Withdraw(i);
    cout << "Would like to see the details? Y/N: " << endl;
    cin >> c;
    if (c == 'Y' || c == 'y') { U1.Details(); }
}