class Solution {
public:
    int maxArea(vector<int>& height) {
        int vsize = height.size();
        int l = 0, r = vsize - 1, maxarea = 0;
        while (l < r) {
            maxarea = max(maxarea, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r]) l++;
            else r--;
        }
        return maxarea;
    }
};