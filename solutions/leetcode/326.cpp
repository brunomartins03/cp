class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) return false;
        return fabs((log(n)/log(3) - round(log(n)/log(3)))) < 1e-12;
    }
};

