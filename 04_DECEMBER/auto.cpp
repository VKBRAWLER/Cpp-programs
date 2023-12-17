#include<iostream>
using namespace std;
#include <typeinfo>
int main() {
  auto a = "etbaet\nawrgWR";
  cout << typeid(a).name() << endl;
  cout << a << endl;
}