// create a class student. Overload the default copy constructor for this class. 
// Create two objects obj1, obj2.
// Copy obj1 to obj2 like this -
// obj2=obj1; //overloaded copy const will be called.
#include <iostream>
using namespace std;

class Student {
    int id;
public:
    // Default constructor
    Student(int id = 0) : id(id) {}

    // Copy constructor
    Student(const Student &s) {
        cout << "Copy constructor called" << endl;
        id = s.id;
    }

    // Display function
    void display() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    // Create obj1
    Student obj1(1);
    obj1.display();

    // Create obj2 and copy obj1 to obj2
    // Student obj2;
    // Student obj2(obj1);
    Student obj2 = obj1;
    obj2.display();

    return 0;
}