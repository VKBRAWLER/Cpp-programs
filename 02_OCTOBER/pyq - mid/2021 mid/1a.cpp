// Create a dynamically allocated array of person objects vector help of pointers using different combinations of constructors. Once the program finishes, free up the memory used by the object.
#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    public:
        Student() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll: ";
            cin >> roll;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
        }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Create a dynamically allocated array of Student objects using pointers
    Student** students = new Student*[n];
    for (int i = 0; i < n; i++) {
        students[i] = new Student();
    }

    // Display the details of each student
    for (int i = 0; i < n; i++) {
        students[i]->display();
    }

    // Free up the memory used by the objects
    for (int i = 0; i < n; i++) {
        free(students[i]);
    }

    return 0;
}