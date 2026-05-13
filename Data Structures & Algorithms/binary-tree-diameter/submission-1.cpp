/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left, right) + 1;
    }

    pair<int, int> dia(TreeNode* root){
        if(!root) return make_pair(0,0);
        pair<int, int> left = dia(root->left);
        pair<int, int> right = dia(root->right);
        int height = max(left.first, right.first) + 1;
        int dia = max(left.first + right.first, max(left.second, right.second));

        return make_pair(height, dia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return dia(root).second;
    }
};
