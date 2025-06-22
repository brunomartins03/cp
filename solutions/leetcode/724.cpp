class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0, left_sum = 0;
        for (const auto c : nums) total_sum += c;
        for (int i = 0; i < nums.size(); i++) {
            if (2 * left_sum + nums[i] == total_sum) return i;
            left_sum += nums[i];
        }
        return -1;
    }
};