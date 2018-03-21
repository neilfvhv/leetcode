class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        vector<int> s;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "C") {
                s.pop_back();
            } else if (ops[i] == "D") {
                s.push_back(2 * s.back());
            } else if (ops[i] == "+") {
                s.push_back(s.back() + s[s.size() - 2]);
            } else {
                s.push_back(atoi(ops[i].c_str()));
            }
        }
        for (int i = 0; i < s.size(); i++) {
            sum += s[i];
        }
        return sum;
    }
};