class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0, vsize = nums.size();
        while (i < vsize && j < vsize) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};