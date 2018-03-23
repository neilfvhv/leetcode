class Solution {
public:
    int titleToNumber(string s) {
        int number = 0;
        for (int i = 0; i < s.size(); i++) {
            number = number * 26 + s[i] - 'A' + 1;
        }
        return number;
    }
};