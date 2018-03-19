class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int result = 0;
        vector<int> dict(20001, 0);
        for (int i = 0; i < nums.size(); i++) {
            ++dict[nums[i] + 10000];
        }
        bool flag = true;
        for (int i = 0; i < 20001;) {
            if (dict[i] > 0) {
                --dict[i];
                if (flag) {
                    result += i - 10000;
                    flag = false;
                } else {
                    flag = true;
                }
            } else {
                ++i;
            }
        }
        return result;
    }
};