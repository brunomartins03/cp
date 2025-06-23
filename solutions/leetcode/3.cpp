class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> chars;
        int i = 0, j = 0, longest = 0;
        while (j < s.size()) {
            if (chars.find(s[j]) == chars.end()) {
                chars.insert(s[j++]);
                longest = max(longest, j - i);
            } else chars.erase(s[i++]);
        }
        return longest;
    }
};

