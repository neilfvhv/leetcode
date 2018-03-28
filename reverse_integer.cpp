class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x) {
            int temp = 10 * result + x % 10;
            if (temp / 10 != result) {
                return 0;
            }
            result = temp;
            x /= 10;
        }
        return result;
    }
};