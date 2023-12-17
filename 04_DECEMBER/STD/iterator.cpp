#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;
  v.emplace_back(4);
  v.emplace_back(3);
  v.emplace_back(2);
  v.push_back(1);
  v.emplace_back(0);
  // v.push_back(0);
  vector<int>::iterator it = v.begin();
  it++;
  cout << *it << endl;
  vector<pair<int, int>> vec;
  vector<int>::reverse_iterator it1 = v.rend();
  it1--;
  cout << *it1 << endl;
  vector<int>::reverse_iterator it2 = v.rbegin();
  // it2--;
  cout << *it2 << endl;
  cout << v[0] << v.at(3) << endl;
  cout << v.back() << endl;
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  v.erase(v.begin() + 1);
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  v.erase(v.begin() + 1, v.begin() + 2);
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  for (auto it3 = v.begin(); it3 != v.end(); it3++) {
    cout << *it3 << " ";
  }
  cout << endl;
  vector<int> v1(7, 100);
  v1.insert(v1.begin(), 150);
  v1.insert(v1.begin() + 1, 3, 50);
  for (auto i : v1) {
    cout << i << " ";
  }
  cout << endl;
  vector<int> v2(2, 200);
  v1.insert(v1.begin(), v2.begin(), v2.end());
  for (auto i : v1) {
    cout << i << " ";
  }
  cout << endl << v1.size() << endl;
  v1.pop_back();
  for (auto i : v1) {
    cout << i << " ";
  }
}