#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  list <int> ls;
  ls.push_back(30);
  ls.push_front(20);
  ls.emplace_back(40);
  ls.emplace_front(10);
  for (auto i: ls) {
    cout << i << " ";
  }
}
// begin, end, rbegin, rend, clear, insert, size, swap