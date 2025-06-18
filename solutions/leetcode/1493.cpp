class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> subarrays;
        int longest = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) longest++;
            else {
                subarrays.push_back(longest);
                longest = 0;
            }
        }
        subarrays.push_back(longest);
        longest = 0;
        if (subarrays.size() == 1) return max(0, subarrays[0] - 1);
        for (int i = 0; i < subarrays.size() - 1; i++)
            longest = max(longest, subarrays[i] + subarrays[i + 1]);
        return longest;
    }
};