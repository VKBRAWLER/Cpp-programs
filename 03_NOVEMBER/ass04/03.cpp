// Create a class student. Write a program to overload + , = , pre-increment, post-increment operators for this class using member operator function.
// Inside main create three objects and do these operations.
#include<iostream>
using namespace std;
class student {
  int rn, m1,m2;
  public:
  student (int a = 0, int b = 0, int c = 0):
  rn(a), m1(b), m2(c)
  { }
  void set() {
    cout << "Enter roll no.: ";
    cin >>rn;
    cout << "Enter marks 1: ";
    cin >>m1;
    cout << "Enter marks 2: ";
    cin >>m2;
  }
  void get() {
    cout << "Roll no.: " << rn << " marks1: " << m1 << " marks 2: " << m2 << endl;
  }
  student operator+(student s) {
    return student( rn + s.rn, m1 + s.m1, m2 + s.m2);
  }
  student operator=(student s) {
    rn = s.rn;
    m1 = s.m1;
    m2 = s.m2;
  }
  student operator++() {
    m1++; m2++;
  }
  student operator++(int) {
    m1++; m2++;
  }
};
int main () {
  student obj1(1, 20, 30);
  student obj2(2, 5, 6);
  student obj3;
  obj3 = obj1+obj2;
  obj3.get();
  obj3 = obj2=obj1;
  obj3.get();
  obj3 = ++obj2;
  obj3.get();
  obj2.get();
  obj3 = obj2++;
  obj3.get();
  obj2.get();
}