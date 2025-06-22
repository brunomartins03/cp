class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us1(nums1.begin(), nums1.end()), us2(nums2.begin(), nums2.end());
        vector<vector<int>> ans (2);
        for (auto c: us1)
            if (us2.find(c) == us2.end())
                ans[0].push_back(c);
        for (auto c: us2)
            if (us1.find(c) == us1.end())
                ans[1].push_back(c);
        return ans;
    }
};  