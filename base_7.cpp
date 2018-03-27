class Solution {
public:
    string convertToBase7(int num) {
        string result = "";
        bool flag = false;
        if (num < 0) {
            num = -num;
            flag = true;
        } else if (num == 0) {
            return "0";
        }
        while (num) {
            result = to_string(num % 7) + result;
            num /= 7;
        }
        return flag ? "-" + result : result;
    }
};