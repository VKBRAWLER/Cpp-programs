#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;
  v.emplace_back(2);
  v.push_back(1);
  vector<int>::iterator it;
  it = v.begin();
  it++;
  cout << *it << endl;
  vector<pair<int, int>> vec;
}