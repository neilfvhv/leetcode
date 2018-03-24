class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums[0], count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != major) {
                --count;
                if (count == 0) {
                    major = nums[i];
                    count = 1;
                }
            } else {
                ++count;
            }
        }
        return major;
    }
};