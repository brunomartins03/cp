class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, longest = 0;
        for (int j = 0; j < nums.size(); j++) {
            while (nums[j] - nums[i] > 1) i++;
            if (nums[i] != nums[j]) longest = max(longest, j - i + 1);
        }
        return longest;
    }
};

