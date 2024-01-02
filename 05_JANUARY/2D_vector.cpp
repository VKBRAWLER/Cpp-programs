#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>> arr;
    for (int i = 0; i < nums.size(); i++) {
      arr.push_back(vector<int>()); // Initialize arr with an empty vector
      for (int j = 0; j < arr.size(); j++) {
        for (int k = 0; k < arr[j].size(); k++) {
          if (nums[i] == arr[j][k]) break;
        }
        arr[j].emplace_back(nums[i]);
        break;
      }
    }
    return arr;
  }
};
int main() {
  vector<vector<int>> arr;
  int a = 0;
  // arr.push_back(vector<int>());
  vector<int> b= {3};
  arr.push_back({b[0]});
  // cout << arr[0].size();

  // for (int j = 0; j < 5; j++) {
  //   for (int k = 0; k < 5; k++) {
  //     // arr[j].emplace_back(a++);
  //   }
  // }

  for (int i = 0; i < arr.size(); i++) { for (int j = 0; j < arr[i].size(); j++) { cout << arr[i][j] << ' '; } cout << endl; }
  return 0;
  // Solution s;
  // vector<int> nums = {1,3,4,1,2,3,1};
  // vector<vector<int>> n = s.findMatrix(nums);
  // for (int i = 0; i < n.size(); i++) { for (int j = 0; j < n[i].size(); j++) { cout << n[i][j] << ' '; } cout << endl; }
  // vector<int> numns = {2,1,1}; cout << endl;
  // n = s.findMatrix(nums);
  // for (int i = 0; i < n.size(); i++) { for (int j = 0; j < n[i].size(); j++) { cout << n[i][j] << ' '; } cout << endl; }
}