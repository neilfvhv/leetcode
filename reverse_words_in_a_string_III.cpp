class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i + 1] == ' ' || i == s.size() - 1) {
                for (int j = left; j <= (i + left) / 2; j++) {
                    char temp = s[j];
                    s[j] = s[i + left - j];
                    s[i + left - j] = temp;
                }
                left = i + 2;
            }
        }
        return s;
    }
};