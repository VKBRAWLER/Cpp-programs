#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void traverse(TreeNode *head) {
    if (head != NULL) {
        traverse(head->left);
        cout << head->val << ' ';
        traverse(head->right);
    }
    return;
}
class Solution {
public:
vector<int> loc;
    int amountOfTime(TreeNode* root, int start) {
      find_loc(root, &start);
      // cout << loc.size();
      for (auto i : loc) { cout << i << ' '; }
      return 0;
    }
    void find_loc(TreeNode* node, int *num) {
      if (node != NULL) {
        if (node->val == *num) { *num = 0; return;} 
        loc.push_back(0);
        find_loc(node->left, num);
        if (*num == 0) return;
        loc.pop_back();
        loc.push_back(1);
        find_loc(node->right, num);
        if (*num == 0) return;
        loc.pop_back();
      }
      return;
    }
};
int main() {
  Solution s;
  TreeNode* root = new TreeNode(1, 
    new TreeNode(5, nullptr, new TreeNode(4, new TreeNode(9), new TreeNode(2))), 
    new TreeNode(3, new TreeNode(10), new TreeNode(6))
    );
  int start = 1;
  cout << s.amountOfTime(root, start);
}