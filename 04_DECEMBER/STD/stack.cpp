#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.pop();
  stack<int> s1;
  cout << s.top() << endl;
  s1.swap(s);
  cout << s1.top() << endl;
  cout << s.size() << endl;
  cout << s1.size() << endl;
}