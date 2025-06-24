class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int i = 0, j = 0, size = nums.size();
        while (j < size) {
            if (seen.find(nums[j]) == seen.end()) {
                seen.insert(nums[j]);
                swap(nums[i++], nums[j]);
            }
            j++;
        }
        return i;
    }
};