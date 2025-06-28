class Solution {
public:
    int romanToInt(string s) {
        int total = 0, size = s.size();
        map<char, int> r = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < size - 1; i++)
            total = r[s[i]] < r[s[i + 1]] ? total - r[s[i]] : total + r[s[i]];
        return total + r[s[size - 1]];
    }
};

