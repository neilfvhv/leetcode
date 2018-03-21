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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* current;
            int size = q.size();
            double sum = 0;
            for (int i = 0; i < size; i++) {
                current = q.front();
                q.pop();
                sum += current->val;
                if (current->left) {
                    q.push(current->left);
                }
                if (current->right) {
                    q.push(current->right);
                }
            }
            result.push_back(sum / size);            
        }
        return result;
    }
};