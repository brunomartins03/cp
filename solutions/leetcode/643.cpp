class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0.0, dk = (double) k, maxavg = 0.0;
        int i, j = 0;
        for (i = 0; i < k; i++) avg += (double) nums[i];
        avg /= dk;
        maxavg = avg;
        while (i < nums.size()) {
            avg += ((double) nums[i++] - nums[j++])/dk;
            maxavg = max(maxavg, avg);
        }
        return maxavg;
    }
};