// WAP to show the use of Friend Function. Create three classes subject1, subject2 and total. 
// subject1 and subject2 will have three variables - int rollnum, int theory and int practical. 
// total will have three varialbes int rollnum, int theoryTotal, int practicalTotal. 
// Create these objects:
// s1 = (1,10,80) for the class subject1 , 
// s2 = (1,5,90) for the class subject2 
// t1 = (1,0,0) for the class total.
// Create a friend function "findsum" in each of these classes. 
// 1)Pass objects s1 and s2 to this friend function. 
// 2)Inside findsum function create a "temp" object of class total.
// 3)Add marks of s1 and s2 and store in this temp object. Put rollnum=1 in this temp object.
// 4)Friend function should return this temp object. 
// 5)assign this returned object to t1 in main function.
// function declaration :
// friend total findsum(subject1 po1, subject2 po2); 
// this function return total so total is written after friend
// function call should be:
// t1=findsum(s1,s2);
#include<iostream>
using namespace std;
class subject2;
class total;
class subject1 {
  int rollnum, theory, practical;
  friend total findsum(subject1, subject2);
  public:
  subject1 (int rollnum, int theory, int practical) {
    this->rollnum = rollnum;
    this->theory = theory;
    this->practical = practical;
  }
};
class subject2 {
  int rollnum, theory, practical;
  friend total findsum(subject1, subject2);
  public:
  subject2 (int rollnum, int theory, int practical) {
    this->rollnum = rollnum;
    this->theory = theory;
    this->practical = practical;
  }

};
class total {
  int rollnum, theoryTotal, practicalTotal;
  friend total findsum(subject1, subject2);
  public:
  total (int rollnum = 0, int theory = 0, int practical = 0) {
    this->rollnum = rollnum;
    this->theoryTotal = theoryTotal;
    this->practicalTotal = practicalTotal;
  }
};
total findsum (subject1 po1, subject2 po2) {
  total temp;
  temp.rollnum = 3;
  temp.theoryTotal = po1.theory + po2.theory;
  temp.practicalTotal = po1.practical + po2.practical;
  return temp;
}
int main() {
  subject1 s1(1,10,80);
  subject2 s2(1,5,90);
  total t1(1,0,0);
  t1 = findsum(s1, s2);
  
}