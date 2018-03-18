class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        int digit, number;
        for (int i = left; i <= right; i++) {
            number = i;
            while (number > 0) {
                digit = number % 10;
                if (digit == 0 || i % digit) {
                    break;
                }
                number /= 10;
            }
            if (number == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};