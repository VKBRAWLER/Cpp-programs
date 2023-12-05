// WAP to create a class student. Create an array of objects dynamically using new operator. The number of objects in array should be input by user during runtime.
// During runtime , input the value 3 and call set , get, add fun for these 3 dynamic objects.
#include<iostream>
using namespace std;
class student {
  int rollno, marks;
  public:
  student () {
    cout << "End" << endl;
  }
};
int main() {
  int n;
  cout << "Enter the length of array: ";
  cin >> n;
  student** students = new student*[n];
    for (int i = 0; i < n; i++) {
        students[i] = new student();
    }
}