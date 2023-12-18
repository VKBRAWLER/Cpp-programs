#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(20);
  pq.push(40);
  pq.push(30);
  pq.push(50);
  pq.emplace(9);
  cout << pq.top() << endl;
  pq.pop();
  cout << pq.top() << endl;

  priority_queue<int, vector<int>, greater<int>> pq2;
  pq.emplace(10);
  pq.push(20);
  pq.push(230);
  pq.push(420);
  pq.push(5);
  pq.push(550);
  pq.push(60);
  cout << pq.top() << endl;
}