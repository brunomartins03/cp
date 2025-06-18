class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxval = -1;
        vector<bool> result;
        for (const auto& c : candies) maxval = max(maxval, c);
        for (int c : candies) result.push_back(c + extraCandies >= maxval);
        return result;
    }
};