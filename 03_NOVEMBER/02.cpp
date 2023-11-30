// In the above class add a Parameterized constructor and a destructor. Tasks :
//  1) create a local block in main. You can use this
// if(1)
// {
// 	//Inside a local block
// }
// 2) create three objects. One before the local block, second inside the local block and third outside the local block
// 3) Assign values using constructor. You can't use set() function.
// 4) print values of variables of each object

#include <iostream>
using namespace std;
class student {
  int rollno, marks1, marks2, marks3;
  public:
  student () {
    // 3
    cout << "Enter roll no.: ";
    cin >> rollno;
    cout << "Enter marks 1: ";
    cin >> marks1;
    cout << "Enter marks 2: ";
    cin >> marks2;
    cout << "Enter marks 3: ";
    cin >> marks3;
    get();
  }
  void get() {
    cout << "roll no. : " << rollno << "\nMarks 1: " << marks1 << "\nMarks 2" << marks2 << "\nMarks 3" << marks3 << endl;
  }
};

int main() {
  // 2
  student s1;
  // 1
  if (1) {
    student s2;
  }
  student s3;
  // 4
}
// 5) Add values  Output should be in following form:  
// constructor called
//  1
// 20
// 30     
// 50
// consturctor called
// 2
// 90
// 60
// 150
// destructor called
// constructor called
// 3
// 100
// 100
// 200
// destructor called
// destructor called