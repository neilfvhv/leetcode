class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] <= 'Z') {
                ++count;
            }
        }
        return (count == 0) || (count == word.size()) || (count == 1 && word[0] <= 'Z'); 
    }
};