// WAP to show the use of returning objects. Use the student class from above as example. Create a function named copydetails() that will copy the rollnum, m1, m2 of one student to another. This function should take one object as parameter and should return an object. For eg. Obj1.copydetails(obj2) . This function should return an object which will contain sum of marks of obj1 and obj2. Finally assign that returning object details to obj2.
// Task:
// 1) create two objects.
// 2) assign values to obj1 and obj2.
// 3) Call copydetails using obj1 and pass obj2 as parameter.
// 4) Copydetails will add marks of obj1 and obj2 and return an object.
// 5) The values of returned object should be copied to obj2.
// 6) print new values of obj2.
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
    cout << "roll no. : " << rollno << "\nMarks 1: " << marks1 << "\nMarks 2: " << marks2 << endl;
  }
  student copydetails( student obj) {
    this->rollno = this->rollno + obj.rollno;
    this->marks1 = this->marks1 + obj.marks1;
    this->marks2 = this->marks2 + obj.marks2;
    
    // return obj;
  }

};
int main() {
  student Obj1, Obj2;
  Obj1.copydetails(Obj2);
  Obj1.get();
}