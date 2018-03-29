class Solution {
public:
    bool isValid(string s) {
        if (s.size() & 1) {
            return false;
        }
        stack<char> charStack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                charStack.push(')');
            } else if (s[i] == '[') {
                charStack.push(']');
            } else if (s[i] == '{') {
                charStack.push('}');
            } else if (charStack.empty() || charStack.top() != s[i]) {
                return false;
            } else {
                charStack.pop();
            }
        }
        return charStack.empty();
    }
};