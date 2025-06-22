class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int target, counter = 0;
        unordered_map<int, int> freq;
        for (auto n:nums) freq[n]++;
        for (auto n : nums) {
            target = k - n;
            if (target == n) {
                if (freq[n] > 1) {
                    freq[n] -= 2;
                    counter++;
                }
            }
            else if (freq[n] > 0 && freq[target] > 0) {
                freq[n]--;
                freq[target]--;
                counter++;
            }
        }
        return counter;
    }
};