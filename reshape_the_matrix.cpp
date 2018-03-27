class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size(), col = nums[0].size();
        if (r * c != row * col) {
            return nums;
        }
        vector<vector<int>> result(r, vector<int>(c));
        for (int i = 0; i < r * c; i++) {
            result[i / c][i % c] = nums[i / col][i % col];
        }
        return result;
    }
};