// WAP to show the use of object passing. Use the student class from previous question. Create a function max that will take object as parameters. Task:
// 1) Create two objects.
// 2) Assign values.
// 3) Call a function to print the rollnum of student with more marks (sum of m1 and m2). This function should take only one object as parameter.  For eg: obj1.max(obj2)
// 4)This function should not return any object.
#include <iostream>
using namespace std;
class student {
  int rollno, marks1, marks2;
  public:
  student () {
    // 3
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
  void max(student s) {
    if (marks1 + marks2 > s.marks1 + s.marks2) {
      cout << "Roll no. of student with more marks: " << rollno << endl;
    } else {
      cout << "Roll no. of student with more marks: " << s.rollno << endl;
    }
  }
};
int main() {
  student s1, s2;
  s1.max(s2);
}