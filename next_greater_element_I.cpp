class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int, int> dict;
        stack<int> s;
        for (int i = 0; i < nums.size(); i++) {
            while (!s.empty() && s.top() < nums[i]) {
                dict.insert({s.top(), nums[i]});
                s.pop();
            }
            s.push(nums[i]);
        }
        for (int i = 0; i < findNums.size(); i++) {
            auto got = dict.find(findNums[i]);
            if (got == dict.end()) {
                findNums[i] = -1;
            } else {
                findNums[i] = got->second;
            }
        }
        return findNums;
    }
};