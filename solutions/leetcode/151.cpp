class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        int i = len - 1, j = len - 1;
        string ans;
        while (i >= 0) {
            while(j >= 0 && s[j] != ' ') j--;
            if (i != j) {
                ans += s.substr(j + 1, i - j);
                while (j >= 0 && s[j] == ' ') j--;
                if (j >= 0) ans += " ";
                j++;
            }
            i = --j;
        }
        return ans;
    }
};