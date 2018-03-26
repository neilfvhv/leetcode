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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums, 0, (int) nums.size() - 1);
    }
    
    TreeNode* help(vector<int>& nums, int low, int high) {
        if (low <= high) {
            int mid = (high - low) / 2 + low;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = help(nums, low, mid - 1);
            root->right = help(nums, mid + 1, high);
            return root;
        }
        return nullptr;
    }
};