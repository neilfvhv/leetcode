class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        vector<int> dict(26, 0);
        for (int i = 0; i < s.size(); i++) {
            ++dict[s[i] - 'a'];    
        }
        for (int i = 0; i < t.size(); i++) {
            if (--dict[t[i] - 'a'] == -1) {
                return false;
            }
        }
        return true;
    }
};