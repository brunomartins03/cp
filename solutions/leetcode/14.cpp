class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];
        string base = strs[0];
        int k = 0;
        while (true) {
            for (int i = 1; i < strs.size(); i++)
                if (k >= base.size() || k >= strs[i].size() || strs[i][k] != base[k])
                    return base.substr(0, k);     
            k++;
        }
        return base.substr(0, k + 1);
    }
};

