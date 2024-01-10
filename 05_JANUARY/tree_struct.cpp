#include<iostream>
#include <stdlib.h>
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
int main() {
TreeNode* root = new TreeNode(1, 
    new TreeNode(5, nullptr, new TreeNode(4, new TreeNode(9), new TreeNode(2))), 
    new TreeNode(3, new TreeNode(10), new TreeNode(6))
);
root = new TreeNode(1);
traverse(root);
}