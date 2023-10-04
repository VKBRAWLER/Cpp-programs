// An electricity board charges the following rates to domestic users to discourage  large consumption of energy. For the first 100 units: - 60 P per unit  For the next 200 units:- 80 P per unit Beyond 300 units: -90 P per unit All users are charged a minimum of Rs 50 if the total amount is more than Rs 300  then an additional surcharge of 15% is added. Implement a C++ program to read the names of users and number of units consumed  and display the charges with names.
#include<iostream>
#include<string>
using namespace std;
int main() {
    string User;
    float Amount, Unit;
    cout << "Enter User's Name: " << endl;
    getline(cin, User);
    cout << "Enter Unit: " << endl;
    cin >> Unit;
    if (Unit > 300) {
        Amount = ((Unit - 300)*90 + 100*80 + 100*60)*1.15;
    }
    else if (Unit > 100) {
        Amount = (Unit - 100)*80 + 100*60; 
    }
    else {
        Amount = Unit*60;
    }
    Amount = (Amount/100) + 50;
    cout << User << " is entitled to pay Rs. " << Amount << endl;
}