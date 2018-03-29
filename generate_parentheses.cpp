class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtracking(result, "", n, 0);
        return result;
    }
    
    void backtracking(vector<string>& result, string prefix, int n, int left) {
        if (prefix.size() + 1 == 2 * n) {
            result.push_back(prefix + ")");
        } else {
            if (left == n) {
                result.push_back(prefix + string(2 * n - prefix.size(), ')'));
            } else if (2 * left == prefix.size()) {
                backtracking(result, prefix + '(', n, left + 1);
            } else {
                backtracking(result, prefix + '(', n, left + 1);
                backtracking(result, prefix + ')', n, left);
            }
        }
    }
};