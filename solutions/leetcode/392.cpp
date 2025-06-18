class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0, ssize = s.size(), tsize = t.size();
        for (int i = 0; i < tsize && j < ssize; i++)
            if (s[j] == t[i]) j++;
        return j >= ssize;
    }
};