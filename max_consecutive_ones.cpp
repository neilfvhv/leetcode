class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0, curLen = 0;
        bool flag = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                flag = true;
            } else {
                if (flag) {
                    maxLen = max(maxLen, curLen);
                    curLen = 0;
                    flag = false;
                }
                ++curLen;
            }
        }
        return max(maxLen, curLen);
    }
};