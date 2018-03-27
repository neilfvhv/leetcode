class Solution {
public:
    string reverseStr(string s, int k) {
        help(s, 0, s.size() - 1, k);
        return s;
    }
    
    void help(string& s, int l, int r, int k) {
        if (r - l + 1 <= k) {
            reverse(s, l, r);    
        } else {
            reverse(s, l, l + k - 1);
            if (r - l + 1 > 2 * k) {
                help(s, l + 2 * k, r, k);
            }
        }
    }
    
    void reverse(string& s, int l, int r) {
        for (int i = l; i <= (r + l) / 2; i++) {
            char temp = s[i];
            s[i] = s[r - i + l];
            s[r - i + l] = temp;
        }
    }
};