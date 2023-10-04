// An electricity board charges the following rates to domestic users to discourage  large consumption of energy. For the first 100 units: - 60 P per unit  For the next 200 units:- 80 P per unit Beyond 300 units: -90 P per unit All users are charged a minimum of Rs 50 if the total amount is more than Rs 300  then an additional surcharge of 15% is added. Implement a C++ program to read the names of users and number of units consumed  and display the charges with names
#include<iostream>
#include<string>
using namespace std;
class Energy {
    float Unit, Amount;
    string Name;
    public:
    Energy() {
        cout << "Enter User's Name: ";
        cin >> this->Name;
        cout << "Enter Unit: ";
        cin >> this->Unit;
    }
    void calculate() {
    if (this->Unit > 300) {
        this->Amount = ((this->Unit - 300)*90 + 100*80 + 100*60)*1.15;
    }
    else if (this->Unit > 100) {
        this->Amount = (this->Unit - 100)*80 + 100*60; 
    }
    else {
        this->Amount = this->Unit*60;
    }
    this->Amount = (this->Amount/100) + 50;
    }
    void output() {
        cout << this->Name << " is entitled to pay Rs. " << Amount << endl;
    }
};
int main() {
    Energy u1;
    u1.calculate();
    u1.output();
    return 0;
}
