#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(22);
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.pop();
  cout << q.front() << endl;
  cout << q.back() << endl;
  q.back() += 5;
  cout << q.back() << endl;
  
}