class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        bitset<200001> dict;
        int kind = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (!dict.test(candies[i] + 100000)) {
                ++kind;
                dict.set(candies[i] + 100000);
            }
        }
        return min(kind, (int) candies.size() / 2); 
    }
};