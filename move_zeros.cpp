class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (i > index) {
                    nums[index] = nums[i];
                    nums[i] = 0;
                }
                ++index;
            }
        }
    }
};