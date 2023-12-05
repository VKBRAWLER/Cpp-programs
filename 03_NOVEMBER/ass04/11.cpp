// Do not use any class. Overload a simple sum function three times without any class.
#include<iostream>
using namespace std;
int sum (int a) {
  return a;
}
int sum (int a, int b) {
  return a+b;
}
int sum (int a, int b, int c) {
  return a+b+c;
}
int sum (int a, int b, int c, int d) {
  return a+b+c+d;
}
int main() {
cout << sum(1) << endl;
cout << sum(1,2) << endl;
cout << sum(1,2,3) << endl;
cout << sum(1,2,3,4) << endl;
}