#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;
  v.emplace_back(2);
  v.push_back(1);
  for (int num : v) cout << num << " " << endl;
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(2, 3);
  for (auto num : vec) cout << num.first << " " << num.second<< " ";
  cout << endl;
  vector<int> v1(5);
  v1.push_back(1);
  v1.pop_back();
  for (int num : v1) cout << num << " ";
} 