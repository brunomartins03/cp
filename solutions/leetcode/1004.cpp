class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxval = 0, i = 0, j, zeros = 0;
        for (j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) zeros++;
            while (zeros > k) {
                if (nums[i] == 0) zeros--;
                i++;
            }
            maxval = max(j - i + 1, maxval);
        }
        return maxval;
    }
};

