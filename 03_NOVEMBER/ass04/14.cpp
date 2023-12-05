// Create the student class. Create two constructors for this class. One with parameters and other without parameters. Create two objects using different constructors
#include<iostream>
using namespace std;
class student {
  int rollno, marks;
  public:
  student () {
    cout << "Obj created" << endl;
  }
  student (int a):
  rollno(a)
  {
    cout << "Obj created with roll no.: " << rollno << endl;
  }
};
int main() {
  student obj1, obj2(1);
}