class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = (int) letters.size() - 1;
        while (low <= high) {
            int mid = (high - low) / 2 + low;
            if (letters[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return letters[low % letters.size()];
    }
};