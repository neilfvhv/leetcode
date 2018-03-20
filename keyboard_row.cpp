class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        vector<unordered_set<char>> dict = {
            {'q', 'Q', 'w', 'W', 'e', 'E', 'r', 'R', 't', 'T', 'y', 'Y', 'u', 'U', 'i', 'I', 'o', 'O', 'p', 'P'},
            {'a', 'A', 's', 'S', 'd', 'D', 'f', 'F', 'g', 'G', 'h', 'H', 'j', 'J', 'k', 'K', 'l', 'L'},
            {'z', 'Z', 'x', 'X', 'c', 'C', 'v', 'V', 'b', 'B', 'n', 'N', 'm', 'M'}};
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < 3; j++) {
                if (dict[j].find(words[i][0]) != dict[j].end()) {
                    bool flag = true;
                    for (int k = 1; k < words[i].size(); k++) {
                        if (dict[j].find(words[i][k]) == dict[j].end()) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        result.push_back(words[i]);
                    }
                    break;
                } 
            }
        }
        return result;
    }
};