#include<iostream>
using namespace std;
int main() {
  int x = 10; // a variable
  int &y = x; // a reference to x
  cout << x << " " << y << endl; // output: 10 10
  x = 20; // change
  cout << x << " " << y << endl; // output: 20 20
  y = 10; // change
  cout << x << " " << y << endl; // output: 20 10
}