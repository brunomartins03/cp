class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0, size = nums.size();
        while (j < size) {
            if (nums[j] != val) swap(nums[i++], nums[j]);
            j++;
        }
        return i;
    }
};