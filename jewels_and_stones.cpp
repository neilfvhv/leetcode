class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        vector<int> dict(58, 0);
        for (int i = 0; i < J.size(); i++) {
            dict[J[i] - 'A'] = 1;
        }
        for (int i = 0; i < S.size(); i++) {
            result += dict[S[i] - 'A'];
        }
        return result;
    }
};