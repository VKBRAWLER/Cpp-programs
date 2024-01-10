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
      cout << max_height(root, -1);
      // cout << loc.size();
      for (auto i : loc) { cout << i << ' '; }
      return 0;
    }
  int max_height(TreeNode *node, int h) {
    int next_h = 0;
    if (node != NULL) {
      next_h++;
      int left = max_height(node->left, next_h);
      int right = max_height(node->right, next_h);
      next_h = (left > right)?(left):(right);
    }
    return h + next_h;
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