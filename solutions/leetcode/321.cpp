class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n < 1) ? false : (1 << 30) % n == 0;
    }
};

