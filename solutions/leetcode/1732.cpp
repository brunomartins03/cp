class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int total = 0, highest = 0;
        for (auto g : gain) highest = max(highest, total += g);
        return highest;
    }
};