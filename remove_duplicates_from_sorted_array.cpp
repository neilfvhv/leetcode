class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int current = nums[0], index = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (current != nums[i]) {
                current = nums[i];
                nums[index++] = current;
            }
        }
        return index;
    }
};