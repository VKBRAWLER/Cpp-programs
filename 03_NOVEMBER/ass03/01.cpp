// WAP to show the use of object passing in function. Create a student class.
// 1)Create three objects: obj1(1,99,2), obj2(2,1,98), obj3(0,0,0);
// 2)Create a function addition. 
// 3)This function will add marks of obj1 and obj2 and store in obj3. Put rollnum=3 in obj3.
// 4)This function should not return any object. 
// 5)After calling the function print details of obj3 to check whether sum of marks of obj1 and obj2 are copied into obj3 or not.
#include<iostream>
using namespace std;
class student {
  int rollno, marks1, marks2;
  public:
  student (int a, int b, int c ) {
    this->rollno = a;
    this->marks1 = b;
    this->marks2 = c;
  }
  void get() {
    cout << "roll no. : " << rollno << "\nMarks 1: " << marks1 << "\nMarks 2: " << marks2 << endl;
  }
  void addition(student o1, student o2) {
    this->rollno = 3;
    this->marks1 = o1.marks1 + o2.marks1;
    this->marks2 = o1.marks2 + o2.marks2;
  }
};
int main() {
  student obj1(1,99,2), obj2(2,1,98), obj3(0,0,0);
  obj3.addition(obj1, obj2);
  obj3.get();
}