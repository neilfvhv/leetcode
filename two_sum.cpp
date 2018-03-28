class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        for (int i = 0; i < nums.size(); i++) {
            auto got = dict.find(target - nums[i]);
            if (got == dict.end()) {
                dict.insert({nums[i], i});
            } else {
                return vector<int>{got->second, i};
            }
        }
    }
};