class Solution {
public:
    int findComplement(int num) {
        int mask = 0x7fffffff;
        while (mask & num) {
            mask <<= 1;
        }
        return mask ^ ~num;
    }
};