class Solution {
public:
    string largestGoodInteger(string num) {
        int l = 0, r = 0, s = num.size(), max = -1;
        string ans = "";
        while (l < s && r < s) {
            while(num[r] == num[l] && r - l < 2) r++;
            if (num[l] == num[r] && r - l == 2 && (num[l] - '0') > max) {
                max = num[l] - '0';
                ans = num.substr(l, 3);
            }
            l = r;
        }
        return ans;
    }
};

