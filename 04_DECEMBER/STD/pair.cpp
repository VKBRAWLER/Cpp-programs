#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
  pair<int, int> p = {5,6};
  cout << p.first << p.second << endl;
  pair<int, pair<int, int>> c = {5,{6, 7}};
  cout << c.first << c.second.first << c.second.second << endl;

  pair<int, int> arr[] = { {2,4}, {2,4}, {2,4}, {2,4}, {2,4} };
  for(int i = 0; i < 5; i++) {
    cout << arr[i].first + arr[i].second << " ";
  }
}