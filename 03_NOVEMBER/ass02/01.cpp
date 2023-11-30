// Create a class student. It should have three variables rollnum, marks1, marks2. It should have three functions, set(), get() , add(). Tasks :  
// 1) create two objects.
// 2) Assign values to variables of these objects.  
// 3) Print values of these variables
// 4) Add marks of these two objects. Upload complete running code with function definitions.

#include <iostream>
using namespace std;
class student {
  int rollno, marks1, marks2;
  friend void add(student s1, student s2);
  public:
  void set() {
    cout << "Enter roll no.: ";
    cin >> rollno;
    cout << "Enter marks 1: ";
    cin >> marks1;
    cout << "Enter marks 2: ";
    cin >> marks2;
  }
  void get() {
    cout << "roll no. : " << rollno << "\nMarks 1: " << marks1 << "\nMarks 2" << marks2 << endl;
  }
};
void add(student s1, student s2) {
    cout << "Sum of Marks 1: " << s1.marks1 + s2.marks1 << "\nSum of Marks 2: " << s1.marks2 + s2.marks2 << endl;
  }
int main() {
  // 1
  student s1, s2;
  // 2
  s1.set();
  s2.set();
  // 3
  s1.get();
  s2.get();
  // 4
  add(s1,s2);
}