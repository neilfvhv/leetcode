/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root) {
            TreeNode* left = trimBST(root->left, L, R);
            TreeNode* right = trimBST(root->right, L, R);
            if (root->val <= R && root->val >= L) {
                root->left = left;
                root->right = right;
                return root;
            }
            // free memory in interview
            // delete root;
            return left ? left : right;
        }
        return root;
    }
};