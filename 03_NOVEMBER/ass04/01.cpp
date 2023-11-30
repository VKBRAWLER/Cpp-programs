// On Friend Function -
// Create  these three classes - student, lib, degree.
// variables:
// student will have these variables : rn, m1,m2
// lib will have these variables: numofbooks
// degree will have these variables: char award_degree;
// Functions:
// Create set fun in all these classes.
// Create a fun get in all these classes.
// objects:
// Create student_obj and assign value 1,45,60
// Create lib_obj and assign value 2
// Create degree_obj and do not assign any value.
// Friend function:
// create a friend fun "check". This friend fun will be called like this
// degree_obj = check(student_obj, lib_obj);
// degree_obj.get(); // this will print ‘y’ or ‘n’
// It will check if total marks > 50 in student_obj and numofbooks == 0 in lib_obj. If yes, then it will set award_degree =’y’ in degree_obj.
#include<iostream>
using namespace std;
class lib;
class degree;
class student {
  int rn, m1,m2;
  friend degree check (student s, lib l);
  public:
  student (int a, int b, int c) :
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
};
class lib {
  int numofbooks;
  friend degree check (student s, lib l);
  public:
  lib (int a) {
    numofbooks = a;
  }
  void set() {
    cout << "Enter number of books: ";
    cin >> numofbooks;
  }
  void get() {
    cout << "Number of books: " << numofbooks << endl;
  }
};
class degree {
  char award_degree;
  friend degree check (student s, lib l);
  public:
  void set() {
    cout << "Enter award degree: ";
    cin >> award_degree;
  }
  void get() {
    cout << award_degree << endl;
  }
};
degree check (student s, lib l) {
  degree temp;
  if (s.m1 + s.m2 > 50 && l.numofbooks == 0) {
    temp.award_degree = 'y';
  }
  else {
    temp.award_degree = 'n';
  }
  return temp;
}
int main() {
  student student_obj(1,45,60);
  lib lib_obj(2);
  degree degree_obj;
  degree_obj = check(student_obj, lib_obj);
  degree_obj.get();
}