// https://leetcode.com/problems/number-of-1-bits
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bits = 0;
        while (n) {
            if (n & 1) {
                ++bits;
            }
            n >>= 1;
        }
        return bits;
    }
};